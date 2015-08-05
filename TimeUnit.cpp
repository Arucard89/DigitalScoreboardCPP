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

int CTimeOfFight::setTime(AnsiString* m, AnsiString* s) //���� ��������� �� ������, �� ������������ 0
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
        if (showDoublePoint == true)
        {
                return IntToStr(minutes) + ':' + IntToStr(seconds);
        }
        else
        {
                return IntToStr(minutes) + ' ' + IntToStr(seconds);
        }
}







