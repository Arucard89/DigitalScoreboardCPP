//---------------------------------------------------------------------------

#ifndef DisplayUnitH
#define DisplayUnitH
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <ExtCtrls.hpp>
//---------------------------------------------------------------------------
class TDisplayForm : public TForm
{
__published:	// IDE-managed Components
        TPanel *TopPanel;
        TPanel *LeftPanel;
        TPanel *RightPanel;
        TPanel *CentralPanel;
        TPanel *CentralTopPanel;
        TPanel *CentralBottomPanel;
        TPanel *TimePanel;
        TPanel *CategoryPanel;
        TLabel *Player1Label;
        TLabel *Player2Label;
        TPanel *Player1Scores;
        TPanel *Player2Scores;
        TPanel *Player1Advantage;
        TPanel *Player1Penalty;
        TPanel *Player2Advantage;
        TPanel *Player2Penalty;
        TLabel *Player1ScoresLabel;
        TLabel *Player1AdvantageLabel;
        TLabel *Player1PenaltyLabel;
        TLabel *Player2ScoresLabel;
        TLabel *Player2AdvantageLabel;
        TLabel *Player2PenaltyLabel;
        TImage *Image1;
        TImage *Image2;
        void __fastcall FormResize(TObject *Sender);
private:	// User declarations
public:		// User declarations
        __fastcall TDisplayForm(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TDisplayForm *DisplayForm;
//---------------------------------------------------------------------------
#endif
