//---------------------------------------------------------------------------


#pragma hdrstop

#include "TimeUnit.h"

//---------------------------------------------------------------------------

#pragma package(smart_init)

CTimeOfFight::CTimeOfFight()
{
        minutes = 0;
        minutes_start = minutes;
        seconds = 0;
        seconds_start = seconds;
        zero = 1;
}

void CTimeOfFight::setMinutes(int m)
{
        minutes = m;
        minutes_start = minutes;
}

void CTimeOfFight::setSeconds(int s)
{
        seconds = s;
        seconds_start = seconds;
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
        minutes_start = minutes;
        seconds = s->ToIntDef(0);
        seconds_start = seconds;
        zero = (minutes == 0) && (seconds == 0);
        return zero;
}

int CTimeOfFight::minusSecond()
{
        zero = 0;
        seconds--;
        if ( seconds <= 0)
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
                s1 = "0" + s1;
        }
        AnsiString s2 = IntToStr(seconds);
        if (s2.Length()<2)
        {
                s2 = "0" + s2;
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

int CTimeOfFight::getZero()
{
        return zero;
}

void CTimeOfFight::ResetTime()
{
        minutes = minutes_start;
        seconds = seconds_start;
}







