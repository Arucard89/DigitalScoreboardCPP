//---------------------------------------------------------------------------

#ifndef PlayerUnitH
#define PlayerUnitH
#include <Classes.hpp>
//---------------------------------------------------------------------------
#endif
class CPlayer
{
private:
        AnsiString Name;
        int Score;
        int Advantage;
        int Penalty;
public:
        CPlayer();
        void SetName(AnsiString n);
        AnsiString GetName();

        void SetScore (int s);
        int GetScore();

        void SetAdvantage(int a);
        int GetAdvantage();

        void SetPenalty(int p);
        int GetPenalty();

        void PlusScore(int s);
        void PlusAdvantage(int a);
        void PlusPenalty(int p);

        //void MinusScore(int s);
        //void MinusAdvantage(int a);
        //void MinusPenalty(int p);

        void ResetScores();//сброс очков спортсмена

        AnsiString GetAllScores();  //возвращает очки в виде строки: "очки преимущества штрафы"
};
