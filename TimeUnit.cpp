//---------------------------------------------------------------------------


#pragma hdrstop

#include "TimeUnit.h"

//---------------------------------------------------------------------------

#pragma package(smart_init)

TTimeOfFight::TTimeOfFight()
{
        minutes = 0;
        seconds = 0;
        zero = 1;
}

void TTimeOfFight::setMinutes(int m)
{
        minutes = m;
}

void TTimeOfFight::setSeconds(int s)
{
        seconds = s;
}

int TTimeOfFight::getMinutes()
{
        return minutes;
}

int TTimeOfFight::getSeconds()
{
        return seconds;
}

int TTimeOfFight::setTime(AnsiString* m, AnsiString* s) //если подсунули не строку, то выставляются 0
{
        minutes = m->ToIntDef(0);
        seconds = s->ToIntDef(0);
        zero = (minutes == 0) && (seconds == 0);
        return zero;
}

int TTimeOfFight::minusSecond()
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

AnsiString TTimeOfFight::getTime(bool showDoublePoint)
{
        if (f == true)
        {
                return IntToStr(minutes) + ':' + IntToStr(seconds);
        }
        else
        {
                return IntToStr(minutes) + ' ' + IntToStr(seconds);
        }
}






