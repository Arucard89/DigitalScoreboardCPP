//---------------------------------------------------------------------------

#ifndef TimeUnitH
#define TimeUnitH
#include <Classes.hpp>
//---------------------------------------------------------------------------

class TTimeOfFight: public TObject
{
private:
        int minutes;
        int seconds;
        int zero; //время истекло(0 - не истекло, остальное - истекло)

public:
        TTimeOfFight();
        int setTime(AnsiString* m, AnsiString* s); //установка врмени
        int minusSecond();//отнимаем секунду
        AnsiString getTime(bool showDoublePoint);
        int getMinutes();
        void setMinutes(int m);
        int getSeconds();
        void setSeconds(int s);

} ;

#endif

