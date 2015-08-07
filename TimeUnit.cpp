//---------------------------------------------------------------------------


#pragma hdrstop

#include "TimeUnit.h"

//---------------------------------------------------------------------------

#pragma package(smart_init)

CTimeOfFight::CTimeOfFight()
{
        minutes = 0;
        seconds = 0;
        zero = 1;
        timeSetup = getTime(true);
}

void CTimeOfFight::setMinutes(int m)
{
        minutes = m;
}

void CTimeOfFight::setSeconds(int s)
{
        seconds = s;
}

int CTimeOfFight::getMinutes()
{
        return minutes;
}

int CTimeOfFight::getSeconds()
{
        return seconds;
}

int CTimeOfFight::setTime(AnsiString* m, AnsiString* s) //если подсунули не строку, то выставляются 0
{
        minutes = m->ToIntDef(0);
        seconds = s->ToIntDef(0);
        zero = (minutes == 0) && (seconds == 0);
        return zero;
}

int CTimeOfFight::minusSecond()
{
        seconds--;
        if ( seconds < 0)
        {
                minutes--;
                if ( minutes < 0 )
                {
                        minutes = 0;
                        seconds = 0;
                        zero = 1;
                }
                else
                {
                        seconds = 59;
                }
        }
        return zero;


}

AnsiString CTimeOfFight::getTime(bool showDoublePoint)
{
        AnsiString s1 = IntToStr(minutes);
        if (s1.Length()<2)
        {
                s1 = '0' + s1;
        }
        int s2 = IntToStr(seconds);
        if (s2.Length()<2)
        {
                s2 = '0' + s2;
        }
        if (showDoublePoint == true)
        {
                return s1 + ':' + s2;
        }
        else
        {
                return s1 + ' ' + s2;
        }
}
void CTimeOfFight::setTimeSetup(Ansistring* str)
{
        
}






