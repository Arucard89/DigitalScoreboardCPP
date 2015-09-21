//---------------------------------------------------------------------------

#ifndef FightResultUnitH
#define FightResultUnitH
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <Buttons.hpp>
//---------------------------------------------------------------------------
class TFightResultForm : public TForm
{
__published:	// IDE-managed Components
        TComboBox *WinnerBox;
        TLabel *Label1;
        TLabel *Label2;
        TComboBox *WinReasonBox;
        TBitBtn *OKBtn;
        TBitBtn *CancelBtn;
private:	// User declarations
public:		// User declarations
        __fastcall TFightResultForm(TComponent* Owner);
        void LoadPlayerNames(AnsiString player1, AnsiString player2);
        void LoadWinReasons(TStringList &winReasons);
};
//---------------------------------------------------------------------------
extern PACKAGE TFightResultForm *FightResultForm;
//---------------------------------------------------------------------------
#endif
