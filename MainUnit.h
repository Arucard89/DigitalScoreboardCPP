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
        TPageControl *PageControl1;
        TTabSheet *FightingControls;
        TTabSheet *FightSettings;
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
        TPanel *Player1ScoresPanel;
        TPanel *Player1AdvantagePanel;
        TPanel *Player1PenaltyPanel;
        TPanel *Player1ScoresButtonsPanel;
        TGroupBox *Player1ScoresGroupBox;
        TPanel *Player1OneScorePanel;
        TBitBtn *Player1OneScorePlusBitBtn;
        TBitBtn *Player1OneScoreMinusBitBtn;
        TPanel *Player1FourScorePanel;
        TBitBtn *Player1FourScorePlusBitBtn;
        TBitBtn *Player1FourScoreMinusBitBtn;
        TPanel *Player1TwoScorePanel;
        TBitBtn *Player1TwoScorePlusBitBtn;
        TBitBtn *Player1TwoScoreMinusBitBtn;
        TPanel *Player1ThreeScorePanel;
        TBitBtn *Player1ThreeScorePlusBitBtn;
        TBitBtn *Player1ThreeScoreMinusBitBtn;
        TGroupBox *Player1AdvantageGroupBox;
        TPanel *Player1ChangeAdvantagePanel;
        TBitBtn *Player1AdvantagePlusBitBtn;
        TBitBtn *Player1AdvantageMinusBitBtn;
        TGroupBox *Player1PenaltyGroupBox;
        TPanel *Player1ChangePenaltyPanel;
        TBitBtn *Player1PenaltyPlusBitBtn;
        TBitBtn *Player1PenaltyMinusBitBtn;
        TPanel *Player2ScoresPanel;
        TPanel *Player2AdvantagePanel;
        TPanel *Player2PenaltyPanel;
        TPanel *Player2ScoresButtonsPanel;
        TGroupBox *Player2ScoresGroupBox;
        TPanel *Player2OneScorePanel;
        TBitBtn *Player2OneScorePlusBitBtn;
        TBitBtn *Player2OneScoreMinusBitBtn;
        TPanel *Player2TwoScorePanel;
        TBitBtn *Player2TwoScorePlusBitBtn;
        TBitBtn *Player2TwoScoreMinusBitBtn;
        TPanel *Player2FourScorePanel;
        TBitBtn *Player2FourScorePlusBitBtn;
        TBitBtn *Player2FourScoreMinusBitBtn;
        TPanel *Player2ThreeScorePanel;
        TBitBtn *Player2ThreeScorePlusBitBtn;
        TBitBtn *Player2ThreeScoreMinusBitBtn;
        TGroupBox *Player2AdvantageGroupBox;
        TPanel *Player2ChangeAdvantagePanel;
        TBitBtn *Player2AdvantagePlusBitBtn;
        TBitBtn *Player2AdvantageMinusBitBtn;
        TGroupBox *Player2PenaltyGroupBox;
        TPanel *Player2ChangePenaltyPanel;
        TBitBtn *Player2PenaltyPlusBitBtn;
        TBitBtn *Player2PenaltyMinusBitBtn;
        TPanel *FightControlsPanel;
        TBitBtn *StartFightBtn;
        TBitBtn *PauseFightBtn;
        TBitBtn *StopFightBtn;
        TSpeedButton *ResetBtn;
        void __fastcall OpenConfigurationButtonClick(TObject *Sender);
        void __fastcall FormResize(TObject *Sender);
        void __fastcall FormCreate(TObject *Sender);
        void __fastcall Player1OneScorePanelResize(TObject *Sender);
private:	// User declarations
        void __fastcall ConfigureScoresButtons ();
        void ConfigureFightButtons(); //настройка расположения кнопок старт/пауза/стоп/сброс
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
