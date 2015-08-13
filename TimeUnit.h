//---------------------------------------------------------------------------

#ifndef TimeUnitH
#define TimeUnitH
#include <Classes.hpp>
//---------------------------------------------------------------------------

class CTimeOfFight: public TObject  //класс для управления временем схватки
{
private:
        int minutes; //текущее время
        int seconds; //текущее время
        int minutes_start;  // начальные установки времени
        int seconds_start;   //начальные установки времени
        int zero; //время истекло(0 - не истекло, остальное - истекло)
        //AnsiString timeSetup; //начальная установка времени

public:
        CTimeOfFight();
        int setTime(AnsiString* m, AnsiString* s); //установка врмени
        int minusSecond();//отнимаем секунду
        AnsiString getTime(bool showDoublePoint);
        int getMinutes();
        void setMinutes(int m);
        int getSeconds();
        void setSeconds(int s);
        int getZero();
        void ResetTime(); //сбрасываем настройки на начальные.
} ;

#endif

