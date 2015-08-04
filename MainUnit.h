//---------------------------------------------------------------------------

#ifndef MainUnitH
#define MainUnitH
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include "ConfigurationUnit.h"
#include "DisplayUnit.h"
#include "CSPIN.h"
#include <Buttons.hpp>
#include <ComCtrls.hpp>
#include <ExtCtrls.hpp>
#include "TimeUnit.h"
//---------------------------------------------------------------------------
class TMainForm : public TForm
{
__published:	// IDE-managed Components
        TTimer *Timer1;
        TPageControl *PageControl1;
        TTabSheet *TabSheet1;
        TTabSheet *TabSheet2;
        TGroupBox *InformationGroupBox;
        TLabel *Label1;
        TLabel *Label2;
        TLabel *Label3;
        TLabel *CurrentInfoSetupLabel;
        TComboBox *ComboBox1;
        TComboBox *ComboBox2;
        TComboBox *ComboBox3;
        TBitBtn *BitBtn2;
        TGroupBox *FightTimeGroupBox;
        TLabel *CurrentTimeSetupLabel;
        TGroupBox *MinutesGroupBox;
        TCSpinEdit *CSpinEdit1;
        TGroupBox *SecondsGroupBox;
        TCSpinEdit *CSpinEdit2;
        TBitBtn *BitBtn1;
        TGroupBox *Player1GroupBox;
        TLabel *Player1NameLabel;
        TGroupBox *Player2GroupBox;
        TLabel *Player2NameLabel;
        TGroupBox *Player1ScoresGroupBox;
        TGroupBox *Player1AdvantageGroupBox;
        TGroupBox *Player1PenaltyGroupBox;
        TGroupBox *Player2ScoresGroupBox;
        TGroupBox *Player2AdvantageGroupBox;
        TGroupBox *Player2PenaltyGroupBox;
        TPanel *Player1ScoresPanel;
        TPanel *Player1AdvantagePanel;
        TPanel *Player1PenaltyPanel;
        TPanel *Player2ScoresPanel;
        TPanel *Player2AdvantagePanel;
        TPanel *Player2PenaltyPanel;
        TPanel *Player2OneScorePanel;
        TPanel *Player2TwoScorePanel;
        TPanel *Player2FourScorePanel;
        TPanel *Player2ThreeScorePanel;
        TPanel *Player2ChangeAdvantagePanel;
        TPanel *Player2ChangePenaltyPanel;
        TBitBtn *Player2OneScorePlusBitBtn;
        TBitBtn *Player2OneScoreMinusBitBtn;
        TBitBtn *Player2TwoScorePlusBitBtn;
        TBitBtn *Player2TwoScoreMinusBitBtn;
        TBitBtn *Player2ThreeScorePlusBitBtn;
        TBitBtn *Player2ThreeScoreMinusBitBtn;
        TBitBtn *Player2FourScorePlusBitBtn;
        TBitBtn *Player2FourScoreMinusBitBtn;
        TBitBtn *Player2AdvantagePlusBitBtn;
        TBitBtn *Player2AdvantageMinusBitBtn;
        TBitBtn *Player2PenaltyPlusBitBtn;
        TBitBtn *Player2PenaltyMinusBitBtn;
        TPanel *Player1OneScorePanel;
        TPanel *Player1FourScorePanel;
        TPanel *Player1TwoScorePanel;
        TPanel *Player1ThreeScorePanel;
        TPanel *Player1ChangeAdvantagePanel;
        TPanel *Player1ChangePenaltyPanel;
        TBitBtn *Player1OneScorePlusBitBtn;
        TBitBtn *Player1OneScoreMinusBitBtn;
        TBitBtn *Player1TwoScorePlusBitBtn;
        TBitBtn *Player1TwoScoreMinusBitBtn;
        TBitBtn *Player1ThreeScorePlusBitBtn;
        TBitBtn *Player1ThreeScoreMinusBitBtn;
        TBitBtn *Player1FourScorePlusBitBtn;
        TBitBtn *Player1FourScoreMinusBitBtn;
        TBitBtn *Player1AdvantagePlusBitBtn;
        TBitBtn *Player1AdvantageMinusBitBtn;
        TBitBtn *Player1PenaltyPlusBitBtn;
        TBitBtn *Player1PenaltyMinusBitBtn;
        TGroupBox *PlayersNamesGroupBox;
        TComboBox *ComboBox5;
        TLabel *Label4;
        TLabel *Label5;
        TComboBox *ComboBox4;
        TBitBtn *BitBtn27;
        TBitBtn *BitBtn28;
        TButton *OpenConfigurationButton;
        TPanel *TimePanel;
        TPanel *InformationPanel;
        void __fastcall OpenConfigurationButtonClick(TObject *Sender);
        void __fastcall FormResize(TObject *Sender);
        void __fastcall FormCreate(TObject *Sender);
        void __fastcall Player1OneScorePanelResize(TObject *Sender);
private:	// User declarations
        void __fastcall ConfigureScoresButtons ();
        TDisplayForm *DisplayForm;
        TConfigurationForm *ConfigurationForm;
        TTimeOfFight *TimeOfFight;
public:		// User declarations
        __fastcall TMainForm(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TMainForm *MainForm;
//---------------------------------------------------------------------------
#endif
