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
        int zero; //����� �������(0 - �� �������, ��������� - �������)

public:
        TTimeOfFight();
        int setTime(AnsiString* m, AnsiString* s); //��������� ������
        int minusSecond();//�������� �������
        AnsiString getTime(bool showDoublePoint);
        int getMinutes();
        void setMinutes(int m);
        int getSeconds();
        void setSeconds(int s);

} ;

#endif

