//---------------------------------------------------------------------------

#ifndef TimeUnitH
#define TimeUnitH
#include <Classes.hpp>
//---------------------------------------------------------------------------

class CTimeOfFight: public TObject  //����� ��� ���������� �������� �������
{
private:
        int minutes;
        int seconds;
        int zero; //����� �������(0 - �� �������, ��������� - �������)

public:
        CTimeOfFight();
        int setTime(AnsiString* m, AnsiString* s); //��������� ������
        int minusSecond();//�������� �������
        AnsiString getTime(bool showDoublePoint);
        int getMinutes();
        void setMinutes(int m);
        int getSeconds();
        void setSeconds(int s);


} ;

#endif

