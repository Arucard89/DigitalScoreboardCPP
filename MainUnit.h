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
#include "PlayerUnit.h"
#include <MPlayer.hpp>
//---------------------------------------------------------------------------
struct SFightInfo
{
        AnsiString age;
        AnsiString belt;
        AnsiString weight;
};

struct SDispColorSetup //��������� ��� ����������� �������� ����� ������� �����(������������ ��� �������� �������)
{
        TColor cat;
        TColor catFont;
        TColor pl1;
        TColor pl1Font;
        TColor pl2;
        TColor pl2Font;
        TColor time;
        TColor timeFont;
};

//const int INTERVAL_FOR_TIMER = 10;

class TMainForm : public TForm
{
__published:	// IDE-managed Components
        TPageControl *PageControl1;
        TTabSheet *FightingControls;
        TTabSheet *FightSettings;
        TGroupBox *InformationGroupBox;
        TLabel *CurrentInfoSetupLabel;
        TBitBtn *AcceptInformationBtn;
        TGroupBox *FightTimeGroupBox;
        TLabel *CurrentTimeSetupLabel;
        TGroupBox *MinutesGroupBox;
        TCSpinEdit *MinutesSpinEdit;
        TGroupBox *SecondsGroupBox;
        TCSpinEdit *SecondsSpinEdit;
        TBitBtn *AcceptTimeBtn;
        TGroupBox *Player1GroupBox;
        TLabel *Player1NameLabel;
        TGroupBox *Player2GroupBox;
        TLabel *Player2NameLabel;
        TGroupBox *PlayersNamesGroupBox;
        TBitBtn *AcceptPlayersNamesBtn;
        TBitBtn *AcceptAllConfigurationBtn;
        TPanel *TimePanel;
        TPanel *CategoryPanel;
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
        TBitBtn *ResetBtn;
        TGroupBox *Player1NameGroupBox;
        TComboBox *Player1ComboBox;
        TGroupBox *Player2NameGroupBox;
        TComboBox *Player2ComboBox;
        TGroupBox *AgeGroupBox;
        TComboBox *AgeComboBox;
        TGroupBox *BeltGroupBox;
        TComboBox *BeltComboBox;
        TGroupBox *WeightGroupBox;
        TComboBox *WeightComboBox;
        TTimer *Timer1;
        TButton *OpenConfigurationButton;
        TBitBtn *ShowDisplayFormBtn;
        TTimer *Timer2;
        TCheckBox *GrapplingCheckBox;
        void __fastcall OpenConfigurationButtonClick(TObject *Sender);
        void __fastcall FormResize(TObject *Sender);
        void __fastcall Player1OneScorePanelResize(TObject *Sender);
        void __fastcall AcceptPlayersNamesBtnClick(TObject *Sender);
        void __fastcall Player1ComboBoxChange(TObject *Sender);
        void __fastcall AgeComboBoxChange(TObject *Sender);
        void __fastcall MinutesSpinEditChange(TObject *Sender);
        void __fastcall AcceptInformationBtnClick(TObject *Sender);
        void __fastcall AcceptTimeBtnClick(TObject *Sender);
        void __fastcall AcceptAllConfigurationBtnClick(TObject *Sender);
        void __fastcall Player1ThreeScorePlusBitBtnClick(TObject *Sender);
        void __fastcall Player2OneScorePlusBitBtnClick(TObject *Sender);
        void __fastcall Player1AdvantagePlusBitBtnClick(TObject *Sender);
        void __fastcall Player2AdvantagePlusBitBtnClick(TObject *Sender);
        void __fastcall Player1PenaltyMinusBitBtnClick(TObject *Sender);
        void __fastcall Player2PenaltyMinusBitBtnClick(TObject *Sender);
        void __fastcall Timer1Timer(TObject *Sender);
        void __fastcall StartFightBtnClick(TObject *Sender);
        void __fastcall PauseFightBtnClick(TObject *Sender);
        void __fastcall StopFightBtnClick(TObject *Sender);
        void __fastcall ResetBtnClick(TObject *Sender);
        void __fastcall FormCreate(TObject *Sender);
        void __fastcall ShowDisplayFormBtnClick(TObject *Sender);
        void __fastcall Timer2Timer(TObject *Sender);
        void __fastcall GrapplingCheckBoxClick(TObject *Sender);//����� ��������� ��� ������� �� ������� ������ ������ ��� ������� ������
private:	// User declarations

        TDisplayForm *DisplayForm;
        TConfigurationForm *ConfigurationForm;
        CTimeOfFight *TimeOfFight;
        CPlayer* Player1;
        CPlayer* Player2;
        SFightInfo FightInfo;
        int fightState; //��������� ������� 1 - ����, 0 - �����������(��������), 2 - �����
        int timerInterval; //������ ��� �������
        bool dots; //���������� ����� �� ������� ��� ���
        int defaultInterval; //�������� ��� ��������� �� ���������
        //AnsiString INI_FILE; // ���� � ����� �������������
        SDispColorSetup displayColorSetup; //��������� ����� ������(���� ��������� ��� ��������� ��� ����, ����� ������ ���� ��� ��������)
        bool grapplingMode; //���� ��������� ������ ����������(���� ���, �� ����� ��� ����������)

public:		// User declarations
        __fastcall TMainForm(TComponent* Owner);
        void __fastcall ConfigureScoresButtons ();
        void ConfigureFightButtons(); //��������� ������������ ������ �����/�����/����/�����
        void ResizeFightSettings(); //��������� �������� ��������� ������������� ��� ��������� �������
        void ResizePlayersNamesGroupBox();//��������� �������� ��������� ����
        void ResizeInformationGroupBox();//��������� �������� ��������� ����������
        void ResizeFightTimeGroupBox();//��������� �������� ��������� �������
        void PutButtonInCorner(TButton *btn, TControl *cont, int b);//�������� ������ � ����. � - ������ �� ���� ,TComponent *cont - ��������� � ������� ������
        void SetPlayersNames(); //���������� ���� � �����
        void InformationIsChanged(bool isChanged,TGroupBox* cont); //��������� ��������� � �������� ����������
        void FulfillFightInfo(); //��������� ��������� � �������
        void FulfillTime(); //��������� ����� �� ���������
        void ShowTime(bool doubleDot = true); //������� ����� �� ��������
        void UpdateScores(); //��������� ���������� �� ����� ������
        int minusInterval(); //������������ � �������� �������

        int getColorInfo(); //������ ���������� � ������ ������� � ���������(��� ���������� � ��������)
        int setColorInfo(AnsiString col = "", AnsiString fontCol = "");//������� �������� �������

        //�������� �������� ����������
        int LoadInterfaceParameters(AnsiString iniFile);
        int LoadCentralPanelsParameters(TIniFile* ini);
        int LoadPlayer1PanelsParameters(TIniFile* ini);
        int LoadPlayer2PanelsParameters(TIniFile* ini);
        int LoadPictures(TIniFile* ini);
        int LoadPlayer1LabelsParameters(TIniFile* ini);
        int LoadPlayer2LabelsParameters(TIniFile* ini);
        int LoadPlayerPanelsFontParameters(TIniFile* ini, TLabel* name, TPanel* score,
                TPanel* adv, TPanel* pen, TLabel* dispName, TPanel* dispScore,
                TPanel* dispAdv, TPanel* dispPen, AnsiString section);


        //�������� ���� �� ������� ������ ������: ����� ������, �����, ��� �������.
};
//---------------------------------------------------------------------------
extern PACKAGE TMainForm *MainForm;
//---------------------------------------------------------------------------
#endif
