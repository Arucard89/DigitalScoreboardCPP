//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "MainUnit.h"


//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma link "CSPIN"
#pragma resource "*.dfm"
TMainForm *MainForm;

//---------------------------------------------------------------------------
__fastcall TMainForm::TMainForm(TComponent* Owner)
        : TForm(Owner)
{


}
//---------------------------------------------------------------------------
void __fastcall TMainForm::OpenConfigurationButtonClick(TObject *Sender)
{
        int res;
        ConfigurationForm = new TConfigurationForm(this);
        res = ConfigurationForm->ShowModal();
        if (res == mrOk)
        {
                LoadInterfaceParameters(TConfigurationForm::INI_FILE);
        }
}
//---------------------------------------------------------------------------

void __fastcall TMainForm::FormResize(TObject *Sender)
{
        PageControl1->Height = MainForm->Height - 100;  //100 �������� ��� ��������
      //  Player1GroupBox->Height = (TabSheet1->Height - TabSheet1->BorderWidth * 2) * 0.75; //��������� �����
        CategoryPanel->Height = (FightingControls->Height - FightingControls->BorderWidth * 2) *0.08;
        TimePanel->Height = (FightingControls->Height - FightingControls->BorderWidth * 2) *0.1;
        FightControlsPanel->Height = (FightingControls->Height - FightingControls->BorderWidth * 2) *0.12;
        Player1GroupBox->Width = (FightingControls->Width - FightingControls->BorderWidth * 2) / 2;

        //������ ����
        Player1NameLabel->Height = Player1GroupBox->Height * 0.05;
        Player2NameLabel->Height = Player2GroupBox->Height * 0.05;

        //������ �����
        Player1ScoresPanel->Height = Player1GroupBox->Height * 0.15;
        Player2ScoresPanel->Height = Player2GroupBox->Height * 0.15;
        //������ �����������
        Player1AdvantagePanel->Width = Player1GroupBox->Width / 2;
        Player2AdvantagePanel->Width = Player2GroupBox->Width / 2;

        //������ ������
        Player1ScoresButtonsPanel->Height = Player1GroupBox->Height - (Player1NameLabel->Height + Player1ScoresPanel->Height * 2);
        Player2ScoresButtonsPanel->Height = Player2GroupBox->Height - (Player2NameLabel->Height + Player2ScoresPanel->Height * 2);
        //Player2ScoresButtonsPanel->Height = Player2GroupBox->Height * 0.65;
        //������ �����
        Player1ScoresGroupBox->Height = Player1ScoresButtonsPanel->Height / 2;
        Player2ScoresGroupBox->Height = Player2ScoresButtonsPanel->Height / 2;
        //������ ������ ������ �����������
        Player1AdvantageGroupBox->Width = Player1ScoresButtonsPanel->Width / 2;
        Player2AdvantageGroupBox->Width = Player2ScoresButtonsPanel->Width / 2;

//������ �����
        Player1ScoresPanel->Height = Player1ScoresGroupBox->Height / 3;
        Player1AdvantagePanel->Height = Player1ScoresGroupBox->Height / 3;
        Player1PenaltyPanel->Height = Player1ScoresGroupBox->Height / 3;

        Player2ScoresPanel->Height = Player1ScoresGroupBox->Height / 3;
        Player2AdvantagePanel->Height = Player1ScoresGroupBox->Height / 3;
        Player2PenaltyPanel->Height = Player1ScoresGroupBox->Height / 3;

//������ ������
        Player1OneScorePanel->Width = Player1ScoresGroupBox->Width / 4;
        Player1TwoScorePanel->Width = Player1ScoresGroupBox->Width / 4;
        Player1ThreeScorePanel->Width = Player1ScoresGroupBox->Width / 4;
        Player1FourScorePanel->Width = Player1ScoresGroupBox->Width / 4;

        Player2OneScorePanel->Width = Player2ScoresGroupBox->Width / 4;
        Player2TwoScorePanel->Width = Player2ScoresGroupBox->Width / 4;
        Player2ThreeScorePanel->Width = Player2ScoresGroupBox->Width / 4;
        Player2FourScorePanel->Width = Player1ScoresGroupBox->Width / 4;

//������ ������
        ConfigureScoresButtons();
//������� ������
        ConfigureFightButtons();
//������� �������� �������
        ResizeFightSettings();

//������ ��������� ������

//

}
//---------------------------------------------------------------------------


//---------------------------------------------------------------------------

void __fastcall TMainForm::Player1OneScorePanelResize(TObject *Sender)
{
       // dynamic_cast<TPanel *>(Sender)->Width = Player1ScoresGroupBox->Width / 4;
}
//---------------------------------------------------------------------------
void __fastcall TMainForm::ConfigureScoresButtons ()
{
        const float bm = 2; //��������� ��� �������
        const int b = 15; //������ �� �����
        int ph = Player1OneScorePanel->Height;
        int h = (ph - 2 * b)/2.2;
        int w = (Player1OneScorePanel->Width - 2 * bm *  b);
        int w1 = (Player1ChangeAdvantagePanel->Width - 2 * bm * b);
 //������ � ������ ������
        Player1OneScorePlusBitBtn->Height = h;
        Player1TwoScorePlusBitBtn->Height = h;
        Player1ThreeScorePlusBitBtn->Height = h;
        Player1FourScorePlusBitBtn->Height = h;
        Player1AdvantagePlusBitBtn->Height = h;
        Player1PenaltyPlusBitBtn->Height = h;

        Player1OneScorePlusBitBtn->Width = w;
        Player1TwoScorePlusBitBtn->Width = w;
        Player1ThreeScorePlusBitBtn->Width = w;
        Player1FourScorePlusBitBtn->Width = Player1FourScorePanel->Width - 2 * bm * b;        //������ ��� ��������� ������ ������
        Player1AdvantagePlusBitBtn->Width = w1;
        Player1PenaltyPlusBitBtn->Width = Player1ChangePenaltyPanel->Width - 2 * bm * b;


        Player1OneScoreMinusBitBtn->Height = h;
        Player1TwoScoreMinusBitBtn->Height = h;
        Player1ThreeScoreMinusBitBtn->Height = h;
        Player1FourScoreMinusBitBtn->Height = h;
        Player1AdvantageMinusBitBtn->Height = h;
        Player1PenaltyMinusBitBtn->Height = h;

        Player1OneScoreMinusBitBtn->Width = w;
        Player1TwoScoreMinusBitBtn->Width = w;
        Player1ThreeScoreMinusBitBtn->Width = w;
        Player1FourScoreMinusBitBtn->Width = Player1FourScorePanel->Width - 2 * bm * b;
        Player1AdvantageMinusBitBtn->Width = w1;
        Player1PenaltyMinusBitBtn->Width = Player1ChangePenaltyPanel->Width - 2 * bm * b;


        Player2OneScorePlusBitBtn->Height = h;
        Player2TwoScorePlusBitBtn->Height = h;
        Player2ThreeScorePlusBitBtn->Height = h;
        Player2FourScorePlusBitBtn->Height = h;
        Player2AdvantagePlusBitBtn->Height = h;
        Player2PenaltyPlusBitBtn->Height = h;

        Player2OneScorePlusBitBtn->Width = w;
        Player2TwoScorePlusBitBtn->Width = w;
        Player2ThreeScorePlusBitBtn->Width = w;
        Player2FourScorePlusBitBtn->Width = Player2FourScorePanel->Width - 2 * bm * b;
        Player2AdvantagePlusBitBtn->Width = w1;
        Player2PenaltyPlusBitBtn->Width = Player1ChangePenaltyPanel->Width - 2 * bm * b;


        Player2OneScoreMinusBitBtn->Height = h;
        Player2TwoScoreMinusBitBtn->Height = h;
        Player2ThreeScoreMinusBitBtn->Height = h;
        Player2FourScoreMinusBitBtn->Height = h;
        Player2AdvantageMinusBitBtn->Height = h;
        Player2PenaltyMinusBitBtn->Height = h;

        Player2OneScoreMinusBitBtn->Width = w;
        Player2TwoScoreMinusBitBtn->Width = w;
        Player2ThreeScoreMinusBitBtn->Width = w;
        Player2FourScoreMinusBitBtn->Width = Player2FourScorePanel->Width - 2 * bm * b;
        Player2AdvantageMinusBitBtn->Width = w1;
        Player2PenaltyMinusBitBtn->Width = Player1ChangePenaltyPanel->Width - 2 * bm * b;

// ������������ ������
        int top1 = b;
        int top2 = ph - b - h;
        int left1 = b * bm;
        //int left2 = b * bm / 2;
        Player1OneScorePlusBitBtn->Top = top1;
        Player1TwoScorePlusBitBtn->Top = top1;
        Player1ThreeScorePlusBitBtn->Top = top1;
        Player1FourScorePlusBitBtn->Top = top1;
        Player1AdvantagePlusBitBtn->Top = top1;
        Player1PenaltyPlusBitBtn->Top = top1;

        Player1OneScorePlusBitBtn->Left = left1;
        Player1TwoScorePlusBitBtn->Left = left1;
        Player1ThreeScorePlusBitBtn->Left = left1;
        Player1FourScorePlusBitBtn->Left = left1;
        Player1AdvantagePlusBitBtn->Left = left1;
        Player1PenaltyPlusBitBtn->Left = left1;


        Player1OneScoreMinusBitBtn->Top = top2;
        Player1TwoScoreMinusBitBtn->Top = top2;
        Player1ThreeScoreMinusBitBtn->Top = top2;
        Player1FourScoreMinusBitBtn->Top = top2;
        Player1AdvantageMinusBitBtn->Top = top2;
        Player1PenaltyMinusBitBtn->Top = top2;

        Player1OneScoreMinusBitBtn->Left = left1;
        Player1TwoScoreMinusBitBtn->Left = left1;
        Player1ThreeScoreMinusBitBtn->Left = left1;
        Player1FourScoreMinusBitBtn->Left = left1;
        Player1AdvantageMinusBitBtn->Left = left1;
        Player1PenaltyMinusBitBtn->Left = left1;


        Player2OneScorePlusBitBtn->Top = top1;
        Player2TwoScorePlusBitBtn->Top = top1;
        Player2ThreeScorePlusBitBtn->Top = top1;
        Player2FourScorePlusBitBtn->Top = top1;
        Player2AdvantagePlusBitBtn->Top = top1;
        Player2PenaltyPlusBitBtn->Top = top1;

        Player2OneScorePlusBitBtn->Left = left1;
        Player2TwoScorePlusBitBtn->Left = left1;
        Player2ThreeScorePlusBitBtn->Left = left1;
        Player2FourScorePlusBitBtn->Left = left1;
        Player2AdvantagePlusBitBtn->Left = left1;
        Player2PenaltyPlusBitBtn->Left = left1;


        Player2OneScoreMinusBitBtn->Top = top2;
        Player2TwoScoreMinusBitBtn->Top = top2;
        Player2ThreeScoreMinusBitBtn->Top = top2;
        Player2FourScoreMinusBitBtn->Top = top2;
        Player2AdvantageMinusBitBtn->Top = top2;
        Player2PenaltyMinusBitBtn->Top = top2;

        Player2OneScoreMinusBitBtn->Left = left1;
        Player2TwoScoreMinusBitBtn->Left = left1;
        Player2ThreeScoreMinusBitBtn->Left = left1;
        Player2FourScoreMinusBitBtn->Left = left1;
        Player2AdvantageMinusBitBtn->Left = left1;
        Player2PenaltyMinusBitBtn->Left = left1;

}

void TMainForm::ConfigureFightButtons()
{
        int b = 10; //������ �� ������� ������
        int hb = FightControlsPanel->Height - 2 * b; // ������ ������
        int wb = (FightControlsPanel->Width - 2 * b) * 0.2; // ������������ ������ ������
        int ws = ((FightControlsPanel->Width - 2 * b) - 4 * wb)/3 ;//������ ���������� ����� ��������
        //������������� ������ ������
        StartFightBtn->Height = hb;
        PauseFightBtn->Height = hb;
        StopFightBtn->Height = hb;
        ResetBtn->Height = hb;
        //���������� �� ������
        StartFightBtn->Top = b;
        PauseFightBtn->Top = b;
        StopFightBtn->Top = b;
        ResetBtn->Top = b;
        //�� ������
        StartFightBtn->Left = b;
        StartFightBtn->Width = wb;
        PauseFightBtn->Left = StartFightBtn->Left + wb + ws;
        PauseFightBtn->Width = wb;
        StopFightBtn->Left = PauseFightBtn->Left + wb + ws;
        StopFightBtn->Width = wb;
        ResetBtn->Left = StopFightBtn->Left + wb + ws;
        ResetBtn->Width = wb;
}

void TMainForm::ResizeFightSettings()
{
        ResizePlayersNamesGroupBox();
        ResizeInformationGroupBox();
        ResizeFightTimeGroupBox();
        AcceptAllConfigurationBtn->Left = FightSettings->Width - AcceptAllConfigurationBtn->Width - 2*FightSettings->BorderWidth - 5; //��������� 2 ����� �����������
        AcceptAllConfigurationBtn->Top = FightSettings->Height - AcceptAllConfigurationBtn->Height - 2*FightSettings->BorderWidth - 5;
}

void TMainForm::ResizePlayersNamesGroupBox()
{
        Player1ComboBox->Width = Player1NameGroupBox->Width - 2 * Player1ComboBox->Left; //������ ���������� ������� ����� � ������
        Player2ComboBox->Width = Player2NameGroupBox->Width - 2 * Player2ComboBox->Left; //������ ���������� ������� ����� � ������
        //����������� ������ � ����
        PutButtonInCorner(AcceptPlayersNamesBtn, PlayersNamesGroupBox, 5);
       // AcceptPlayersNamesBtn->Left = PlayersNamesGroupBox->Width - AcceptPlayersNamesBtn->Width - 5; //��������� �����-������
       // AcceptPlayersNamesBtn->Top = PlayersNamesGroupBox->Height - AcceptPlayersNamesBtn->Height - 5; //��������� �����-������
}

void TMainForm::PutButtonInCorner(TButton *btn, TControl *cont, int b)
{
        btn->Left = cont->Width - btn->Width - b;
        btn->Top = cont->Height - btn->Height - b;
}

void TMainForm::ResizeInformationGroupBox()
{
        int b = 5;//������
        int w  = (InformationGroupBox->Width - 2 * b - AcceptInformationBtn->Width)/3;
        //������������� ������ �����
        AgeGroupBox->Width = w;
        BeltGroupBox->Width = w;
        WeightGroupBox->Width = w;
        //������������� ������ �����������
        AgeComboBox->Width = AgeGroupBox->Width - 2 * AgeComboBox->Left;
        BeltComboBox->Width = BeltGroupBox->Width - 2 * BeltComboBox->Left;
        WeightComboBox->Width = WeightGroupBox->Width - 2 * WeightComboBox->Left;
        PutButtonInCorner(AcceptInformationBtn, InformationGroupBox, b);
}

void TMainForm::ResizeFightTimeGroupBox()
{
        int b = 5;//������
        int w  = (FightTimeGroupBox->Width - 2 * b - AcceptTimeBtn->Width) / 2;
        MinutesGroupBox->Width = w;
        SecondsGroupBox->Width = w;
        MinutesSpinEdit->Width = MinutesGroupBox->Width - 2 * MinutesSpinEdit->Left;
        SecondsSpinEdit->Width = SecondsGroupBox->Width - 2 * SecondsSpinEdit->Left;
        PutButtonInCorner(AcceptTimeBtn, FightTimeGroupBox, b);
}

void __fastcall TMainForm::AcceptPlayersNamesBtnClick(TObject *Sender)
{
        Player1->SetName(Player1ComboBox->Text);
        Player2->SetName(Player2ComboBox->Text);
        SetPlayersNames();
        InformationIsChanged(false, PlayersNamesGroupBox);  //���������� ���� ������������ ����
}
//---------------------------------------------------------------------------
void TMainForm::SetPlayersNames()
{
        Player1NameLabel->Caption = Player1->GetName();
        DisplayForm->Player1Label->Caption = Player1->GetName();

        Player2NameLabel->Caption = Player2->GetName();
        DisplayForm->Player2Label->Caption = Player2->GetName();
}

void TMainForm::InformationIsChanged(bool isChanged,TGroupBox* cont)
{
        if (isChanged == true)
        {
                if (cont->Caption.Pos("*") == 0)
                {
                        cont->Caption = cont->Caption + "*";
                };
        }
        else
        {
                cont->Caption = StringReplace(cont->Caption, "*", "", TReplaceFlags() << rfReplaceAll << rfIgnoreCase);
        }
}

void __fastcall TMainForm::Player1ComboBoxChange(TObject *Sender)
{
        InformationIsChanged(true, PlayersNamesGroupBox);
}
//---------------------------------------------------------------------------

void __fastcall TMainForm::AgeComboBoxChange(TObject *Sender)
{
        InformationIsChanged(true, InformationGroupBox);
}
//---------------------------------------------------------------------------

void __fastcall TMainForm::MinutesSpinEditChange(TObject *Sender)
{
        InformationIsChanged(true, FightTimeGroupBox);
}
//---------------------------------------------------------------------------

void __fastcall TMainForm::AcceptInformationBtnClick(TObject *Sender)
{
        FulfillFightInfo();
        InformationIsChanged(false, InformationGroupBox);
}
//---------------------------------------------------------------------------

void __fastcall TMainForm::AcceptTimeBtnClick(TObject *Sender)
{
        FulfillTime();
        InformationIsChanged(false, FightTimeGroupBox);//���������� ���� ������������ ����������
}
//---------------------------------------------------------------------------

void __fastcall TMainForm::AcceptAllConfigurationBtnClick(TObject *Sender)
{
        AcceptPlayersNamesBtnClick(0);
        AcceptInformationBtnClick(0);
        AcceptTimeBtnClick(0);

}
//---------------------------------------------------------------------------

void TMainForm::FulfillFightInfo()
{
        FightInfo.age = AgeComboBox->Text;
        FightInfo.belt = BeltComboBox->Text;
        FightInfo.weight = WeightComboBox->Text;

        AnsiString s = "�������: " + FightInfo.age;
        //���� ���������, �� ���� �� �����
        if (grapplingMode == false)
        {
                s += " ����: " + FightInfo.belt;
        }
        s += " ���: " + FightInfo.weight;

        CurrentInfoSetupLabel->Caption = s;
        CategoryPanel->Caption = s;
        DisplayForm->CategoryPanel->Caption = s;
}

void TMainForm::FulfillTime()
{
        TimeOfFight->setMinutes(MinutesSpinEdit->Value);
        TimeOfFight->setSeconds(SecondsSpinEdit->Value);
        CurrentTimeSetupLabel->Caption = "������� ��������� �������: " + TimeOfFight->getTime(true);
        ShowTime();
       // TimeOfFight->

}

void __fastcall TMainForm::Player1ThreeScorePlusBitBtnClick(
      TObject *Sender)
{
        Player1->PlusScore(((TPanel *)Sender)->Tag);
        UpdateScores();
        //����� �������� �����������
}

//---------------------------------------------------------------------------

void __fastcall TMainForm::Player2OneScorePlusBitBtnClick(TObject *Sender)
{
        Player2->PlusScore(((TPanel *)Sender)->Tag);
        UpdateScores();
        //����� �������� �����������
}
//---------------------------------------------------------------------------

void TMainForm::UpdateScores()
{
        //��������� ����
        Player1ScoresPanel->Caption = IntToStr(Player1->GetScore());
        DisplayForm->Player1Scores->Caption = Player1ScoresPanel->Caption;
        Player2ScoresPanel->Caption = IntToStr(Player2->GetScore());
        DisplayForm->Player2Scores->Caption = Player2ScoresPanel->Caption;

       //������������
        Player1AdvantagePanel->Caption = IntToStr(Player1->GetAdvantage());
        DisplayForm->Player1Advantage->Caption = Player1AdvantagePanel->Caption;
        Player2AdvantagePanel->Caption = IntToStr(Player2->GetAdvantage());
        DisplayForm->Player2Advantage->Caption = Player2AdvantagePanel->Caption;

        //������
        Player1PenaltyPanel->Caption = IntToStr(Player1->GetPenalty());
        DisplayForm->Player1Penalty->Caption = Player1PenaltyPanel->Caption;
        Player2PenaltyPanel->Caption = IntToStr(Player2->GetPenalty());
        DisplayForm->Player2Penalty->Caption = Player2PenaltyPanel->Caption;
}
void __fastcall TMainForm::Player1AdvantagePlusBitBtnClick(TObject *Sender)
{
        Player1->PlusAdvantage(((TPanel *)Sender)->Tag);
        UpdateScores();
        //�������� ����������� ��������� �����
}
//---------------------------------------------------------------------------

void __fastcall TMainForm::Player2AdvantagePlusBitBtnClick(TObject *Sender)
{
        Player2->PlusAdvantage(((TPanel *)Sender)->Tag);
        UpdateScores();
         //�������� ����������� ��������� �����
}
//---------------------------------------------------------------------------

void __fastcall TMainForm::Player1PenaltyMinusBitBtnClick(TObject *Sender)
{
        Player1->PlusPenalty(((TPanel *)Sender)->Tag);
        UpdateScores();
         //�������� ����������� ��������� �����
}
//---------------------------------------------------------------------------

void __fastcall TMainForm::Player2PenaltyMinusBitBtnClick(TObject *Sender)
{
        Player2->PlusPenalty(((TPanel *)Sender)->Tag);
        UpdateScores();
         //�������� ����������� ��������� �����
}
//---------------------------------------------------------------------------

void __fastcall TMainForm::Timer1Timer(TObject *Sender)
{
        if (fightState == 1) //���� ������� ����
        {
                if (timerInterval == defaultInterval)         
                {
                        TimeOfFight->minusSecond();
                        if (TimeOfFight->getZero() == 1) //���� ����������� �����
                        {
                                fightState = 0;
                                Timer1->Enabled = false;
                                //��������� ������ ������ � ��������
                                Timer2->Enabled = false;
                                setColorInfo();
                        }
                }
                if ((timerInterval == (defaultInterval / 2))||(timerInterval == defaultInterval)) //����� ����� ������� �������  � �������� ������� ���������
                {
                        dots = !dots;
                }
                ShowTime(dots);  //������� ����������� �� �������
                minusInterval(); //�������� ���� �������� �������
                //���� �������� 10 ������ � ������
                if ((TimeOfFight->getMinutes() == 0) && (TimeOfFight->getSeconds() <= 10))
                {
                        Timer2->Enabled = true;
                }
        }
        //���� ������ ����������, �� ������� ���� ��������� �����������, �� ��� ���� ���� ����������� ��������� � ����������� ���������� ��������, ����� �������� ����(���� ��������� ����� � ��������� ������)

}
//---------------------------------------------------------------------------


void __fastcall TMainForm::StartFightBtnClick(TObject *Sender)
{
        if (fightState == 0)
        {
                timerInterval = defaultInterval; //���������� �������
        }
        StartFightBtn->Caption = "�����"; //������ ���������� ���� ��������(���� ����� �����)
        fightState = 1; //������ ��������� ������� � ��������� "����"
      //  StartFightBtn->Caption = '����������';
        PauseFightBtn->Enabled = true; //������ ��������� ������������ ������� �� �����
        StartFightBtn->Enabled = false;//������ ����� ���������(����� �� ������)
        Timer1->Enabled = true;
}
//---------------------------------------------------------------------------

void TMainForm::ShowTime(bool doubleDot)
{
        TimePanel->Caption = TimeOfFight->getTime(doubleDot);
        DisplayForm->TimePanel->Caption = TimePanel->Caption;
}
void __fastcall TMainForm::PauseFightBtnClick(TObject *Sender)
{
        fightState = 2; //������ ��������� ������� � ��������� "�����"
        StartFightBtn->Caption = "����������";//������ ����� ����������������� � ����� ���������� ��������(�.�. ��� ����� ���������� ������� ����� �����)
        StartFightBtn->Enabled = true;//�������� ������ �����������.
        PauseFightBtn->Enabled = false; //��� ������, ������ �� ����
        Timer1->Enabled = false;
}
//---------------------------------------------------------------------------

void __fastcall TMainForm::StopFightBtnClick(TObject *Sender)
{
        fightState = 0;
        StartFightBtn->Enabled = true;//�������� ������
        PauseFightBtn->Enabled = false; //�� ����, ��� ����� �� �����
        Timer1->Enabled = false;
        //��� �������� ��������� ����� � ��������� ������(��������� ������ ���� �� ��, ���� �� ��� �����)
        //� ������������ ������ ������� ������ (��� ����������� ������� ��� ������������� �����������)
}
//---------------------------------------------------------------------------

void __fastcall TMainForm::ResetBtnClick(TObject *Sender)
{
        fightState = 0;
        StartFightBtn->Caption = "�����";
        StartFightBtn->Enabled = true;//�������� ������ .
        PauseFightBtn->Enabled = false; //��� ����� �� �����
        Timer1->Enabled = false;

        //���������� ���� � �����
        Player1->ResetScores();
        Player2->ResetScores();
        TimeOfFight->ResetTime();

        //���������� ����������
        UpdateScores();
        ShowTime();

        //�������� ��� � �������� ������
}
//---------------------------------------------------------------------------

int  TMainForm::minusInterval()
{
        ((timerInterval-1) < 1) ? timerInterval = defaultInterval : timerInterval--;
        return timerInterval;
}

int  TMainForm::LoadInterfaceParameters(AnsiString iniFile)
{
        if (FileExists(iniFile) == false)
        {
                ShowMessage("���� �������� �� ������");
                return 1;
        }
        TIniFile* ini;
        ini = NULL;

                try
        {
                ini = new TIniFile(TConfigurationForm::INI_FILE);
                LoadCentralPanelsParameters(ini);
                LoadPlayer1PanelsParameters(ini);
                LoadPlayer2PanelsParameters(ini);
                LoadPictures(ini);
                LoadPlayer1LabelsParameters(ini);
                LoadPlayer2LabelsParameters(ini);
                getColorInfo();
        }
        catch (...)
        {
                if (ini != NULL)
                {
                        delete ini;
                }
                getColorInfo();
                return 1;
        }
        delete ini;
        return 0;

}

int  TMainForm::LoadCentralPanelsParameters(TIniFile* ini)
{
        AnsiString section = "CentralPanelColorConfig";
        //���������� ��������� ����� �������
        DisplayForm->CategoryPanel->Color = StringToColor(ini->ReadString(section,"CategoryPanelColor", clWhite));
        CategoryPanel->Color = DisplayForm->CategoryPanel->Color;

        DisplayForm->TimePanel->Color = StringToColor(ini->ReadString(section,"TimePanelColor", clWhite));
        TimePanel->Color = DisplayForm->TimePanel->Color;

        //������ ������
        section = "CentralPanelFontConfig";
        //����
        TConfigurationForm::LoadFontParameters(ini, DisplayForm->CategoryPanel->Font, section, "CategoryPanelFont");
        CategoryPanel->Font = DisplayForm->CategoryPanel->Font;
        CategoryPanel->Font->Size = 12;

        //�����
        TConfigurationForm::LoadFontParameters( ini, DisplayForm->TimePanel->Font, section, "TimePanelFont" );
        TimePanel->Font = DisplayForm->TimePanel->Font;
        TimePanel->Font->Size = 36;

        return 0;
}

int  TMainForm::LoadPlayer1PanelsParameters(TIniFile* ini)
{
        AnsiString section = "Player1PanelsColorConfig";
        //��������� ��������� ����� ������� ���� ������� �����
        DisplayForm->Player1Label->Color = StringToColor(ini->ReadString(section,"Player1NamePanelColor", clWhite));
        Player1NameLabel->Color = DisplayForm->Player1Label->Color;

        //��������� ��������� ����� ������� ����� ������� �����
        DisplayForm->Player1Scores->Color = StringToColor(ini->ReadString(section,"Player1ScoresPanelColor", clWhite));
        Player1ScoresPanel->Color = DisplayForm->Player1Scores->Color;

        //��������� ��������� ����� ������� ����������� ������� �����
        DisplayForm->Player1Advantage->Color = StringToColor(ini->ReadString(section,"Player1AdvantagePanelColor", clWhite));
        Player1AdvantagePanel->Color  = DisplayForm->Player1Advantage->Color;

        //��������� ��������� ����� ������� ����������� ������� �����
        DisplayForm->Player1Penalty->Color = StringToColor(ini->ReadString(section,"Player1PenaltyPanelColor", clWhite));
        Player1PenaltyPanel->Color = DisplayForm->Player1Penalty->Color;

        //��������� ������
        LoadPlayerPanelsFontParameters(ini, Player1NameLabel, Player1ScoresPanel, Player1AdvantagePanel, Player1PenaltyPanel,
                DisplayForm->Player1Label, DisplayForm->Player1Scores, DisplayForm->Player1Advantage,
                DisplayForm->Player1Penalty, "Player1PanelFontConfig");

        return 0;
}

int  TMainForm::LoadPlayer2PanelsParameters(TIniFile* ini)
{
        AnsiString section = "Player2PanelsColorConfig";

        //��������� ��������� ����� ������� ���� ������� �����
        DisplayForm->Player2Label->Color = StringToColor(ini->ReadString(section,"Player2NamePanelColor", clWhite));
        Player2NameLabel->Color = DisplayForm->Player2Label->Color;

        //��������� ��������� ����� ������� ����� ������� �����
        DisplayForm->Player2Scores->Color = StringToColor(ini->ReadString(section,"Player2ScoresPanelColor", clWhite));
        Player2ScoresPanel->Color = DisplayForm->Player2Scores->Color;

        //��������� ��������� ����� ������� ����������� ������� �����
        DisplayForm->Player2Advantage->Color = StringToColor(ini->ReadString(section,"Player2AdvantagePanelColor", clWhite));
        Player2AdvantagePanel->Color  = DisplayForm->Player2Advantage->Color;

        //��������� ��������� ����� ������� ����������� ������� �����
        DisplayForm->Player2Penalty->Color = StringToColor(ini->ReadString(section,"Player2PenaltyPanelColor", clWhite));
        Player2PenaltyPanel->Color = DisplayForm->Player2Penalty->Color;

        //��������� ������
        LoadPlayerPanelsFontParameters(ini, Player2NameLabel, Player2ScoresPanel, Player2AdvantagePanel, Player2PenaltyPanel,
                DisplayForm->Player2Label, DisplayForm->Player2Scores, DisplayForm->Player2Advantage,
                DisplayForm->Player2Penalty, "Player2PanelFontConfig");

        return 0;

}

int TMainForm::LoadPictures(TIniFile* ini)
{
                AnsiString section = "PicturesPath";
        try
        {
                DisplayForm->Image1->Picture->LoadFromFile(ini->ReadString(section,"Picture1",""));
        }
        catch (...)
        {
                ShowMessage("������ �������� �������� � 1");
        }
        try
        {
                DisplayForm->Image2->Picture->LoadFromFile(ini->ReadString(section,"Picture2",""));
        }
        catch (...)
        {
                ShowMessage("������ �������� �������� � 2");
        }
        return 0;

}

void __fastcall TMainForm::FormCreate(TObject *Sender)
{
 //������������ ��������� ����� �������
        DisplayForm = new TDisplayForm(this);
        DisplayForm->Show();
        Timer1->Enabled = false; //������ �� ����� (��� ������� ��������� �� ���������)
        Timer1->Interval = 500; //1000 = 1 ���. ����������-������ ������� ����� �������(����������� ����� 1000 ������ ��������)
        defaultInterval = 1000 / Timer1->Interval; //��������� �������� ���������
        fightState = 0; //������� "�����������"
        dots = false; // ���������� ��� ������� ������������

        TConfigurationForm::INI_FILE = ExtractFileDir(Application->ExeName) + "\\Config\\DesignConfig.ini"; // ���� � ����� �������������

        TimeOfFight = new CTimeOfFight();
        Player1 = new CPlayer();
        Player2 = new CPlayer();
        UpdateScores();

        //��������� ���������
        LoadInterfaceParameters(TConfigurationForm::INI_FILE);
        //���� ���������� ������ � 0, �.�. �� ��������� ��� ���
        GrapplingCheckBoxClick(NULL);
}
//---------------------------------------------------------------------------

int TMainForm::LoadPlayer1LabelsParameters(TIniFile* ini)
{
        AnsiString section = "Player1PointsLabelsConfig";
        //���������� �����
        DisplayForm->Player1ScoresLabel->Caption = ini->ReadString(section, "Player1ScoresText", "����");
        Player1ScoresGroupBox->Caption = DisplayForm->Player1ScoresLabel->Caption;
        DisplayForm->Player1AdvantageLabel->Caption = ini->ReadString(section, "Player1AdvantageText", "������������");
        Player1AdvantageGroupBox->Caption = DisplayForm->Player1AdvantageLabel->Caption;
        DisplayForm->Player1PenaltyLabel->Caption = ini->ReadString(section, "Player1PenaltyText", "������");
        Player1PenaltyGroupBox->Caption = DisplayForm->Player1PenaltyLabel->Caption;
        //���������� ��������� �������
        //����
        TConfigurationForm::LoadFontParameters( ini, DisplayForm->Player1ScoresLabel->Font, section, "Player1ScoresFont");

        //������������
        TConfigurationForm::LoadFontParameters( ini,DisplayForm->Player1AdvantageLabel->Font, section, "Player1AdvantageFont" );
        //��������
        TConfigurationForm::LoadFontParameters( ini,DisplayForm->Player1PenaltyLabel->Font, section, "Player1PenaltyFont" );

        return 0;
}

int TMainForm::LoadPlayer2LabelsParameters(TIniFile* ini)
{
        AnsiString section = "Player2PointsLabelsConfig";
        //���������� �����
        DisplayForm->Player2ScoresLabel->Caption = ini->ReadString(section, "Player2ScoresText", "����");
        Player2ScoresGroupBox->Caption = DisplayForm->Player2ScoresLabel->Caption;
        DisplayForm->Player2AdvantageLabel->Caption = ini->ReadString(section, "Player2AdvantageText", "������������");
        Player2AdvantageGroupBox->Caption = DisplayForm->Player2AdvantageLabel->Caption;
        DisplayForm->Player2PenaltyLabel->Caption = ini->ReadString(section, "Player2PenaltyText", "������");
        Player2PenaltyGroupBox->Caption = DisplayForm->Player2PenaltyLabel->Caption;
        //���������� ��������� �������
        //����
        TConfigurationForm::LoadFontParameters( ini, DisplayForm->Player2ScoresLabel->Font, section, "Player2ScoresFont");

        //������������
        TConfigurationForm::LoadFontParameters( ini,DisplayForm->Player2AdvantageLabel->Font, section, "Player2AdvantageFont" );
        //��������
        TConfigurationForm::LoadFontParameters( ini,DisplayForm->Player2PenaltyLabel->Font, section, "Player2PenaltyFont" );

        return 0;
}

int TMainForm::LoadPlayerPanelsFontParameters(TIniFile* ini, TLabel* name, TPanel* score,
                TPanel* adv, TPanel* pen, TLabel* dispName, TPanel* dispScore,
                TPanel* dispAdv, TPanel* dispPen, AnsiString section)
{
        //���
        TConfigurationForm::LoadFontParameters(ini, dispName->Font, section, "NamePanelFont");
        name->Font = dispName->Font;
        name->Font->Size = 14;

        //����
        TConfigurationForm::LoadFontParameters( ini, dispScore->Font, section, "ScoresPanelFont" );
        score->Font = dispScore->Font;
        score->Font->Size = 22;

        //������������
        TConfigurationForm::LoadFontParameters( ini, dispAdv->Font, section, "AdvantagePanelFont" );
        adv->Font = dispAdv->Font;
        adv->Font->Size = 22;

        //������
        TConfigurationForm::LoadFontParameters( ini, dispPen->Font, section, "PenaltyPanelFont" );
        pen->Font = dispPen->Font;
        pen->Font->Size = 22;
}

void __fastcall TMainForm::ShowDisplayFormBtnClick(TObject *Sender)
{
        DisplayForm->Show();
}
//---------------------------------------------------------------------------

void __fastcall TMainForm::Timer2Timer(TObject *Sender)
{
        if (fightState == 1)
        {
        //�������
                if (DisplayForm->TimePanel->Color == displayColorSetup.time) //���� ���� = ��������������, �� ������ �� ���������
                {
                        setColorInfo("clRed", "clWhite");

                }
                else
                {
                        setColorInfo();
                }
        }
        else
        {
        //���� ������� �� ����, �� ��������� ������ Timer2  (�������������)
                Timer2->Enabled = false;
                setColorInfo();
        }
}
//---------------------------------------------------------------------------

int TMainForm::getColorInfo()
{
        displayColorSetup.cat = DisplayForm->CategoryPanel->Color;
        displayColorSetup.catFont = DisplayForm->CategoryPanel->Font->Color;
        displayColorSetup.time = DisplayForm->TimePanel->Color;
        displayColorSetup.timeFont = DisplayForm->TimePanel->Font->Color;
        displayColorSetup.pl1 = DisplayForm->Player1Label->Color;
        displayColorSetup.pl1Font = DisplayForm->Player1Label->Font->Color;
        displayColorSetup.pl2 = DisplayForm->TimePanel->Color;
        displayColorSetup.pl2Font = DisplayForm->TimePanel->Font->Color;
        return 0;
}

int TMainForm::setColorInfo(AnsiString col, AnsiString fontCol)
{
        //���� ���� ��������, �� ������������� ���. ���� ���, �� ����� �� ���������
        if ((col != "")&&(fontCol != ""))
        {
                TColor c = StringToColor(col);
                TColor fc = StringToColor(fontCol);
                DisplayForm->CategoryPanel->Color = c;
                CategoryPanel->Color = DisplayForm->CategoryPanel->Color;
                DisplayForm->CategoryPanel->Font->Color = fc;
                CategoryPanel->Font->Color = DisplayForm->CategoryPanel->Font->Color;
                DisplayForm->TimePanel->Color = c;
                TimePanel->Color = DisplayForm->TimePanel->Color;
                DisplayForm->TimePanel->Font->Color = fc;
                TimePanel->Font->Color = DisplayForm->TimePanel->Font->Color;
                DisplayForm->Player1Label->Color = c;
                DisplayForm->Player1Label->Font->Color = fc;
                DisplayForm->Player2Label->Color = c;
                DisplayForm->Player2Label->Font->Color = fc;
                DisplayForm->TimePanel->Color = c;
                DisplayForm->TimePanel->Font->Color = fc;
                return 0;
        }

        DisplayForm->CategoryPanel->Color = displayColorSetup.cat;
        CategoryPanel->Color = DisplayForm->CategoryPanel->Color;
        DisplayForm->CategoryPanel->Font->Color = displayColorSetup.catFont;
        CategoryPanel->Font->Color = DisplayForm->CategoryPanel->Font->Color;
        DisplayForm->TimePanel->Color = displayColorSetup.time;
        TimePanel->Color = DisplayForm->TimePanel->Color;
        DisplayForm->TimePanel->Font->Color = displayColorSetup.timeFont;
        TimePanel->Font->Color = DisplayForm->TimePanel->Font->Color;
        DisplayForm->Player1Label->Color = displayColorSetup.pl1;
        DisplayForm->Player1Label->Font->Color = displayColorSetup.pl1Font;
        DisplayForm->Player2Label->Color = displayColorSetup.pl2;
        DisplayForm->Player2Label->Font->Color = displayColorSetup.pl2Font;
        DisplayForm->TimePanel->Color = displayColorSetup.pl2;
        DisplayForm->TimePanel->Font->Color = displayColorSetup.pl2Font;
        return 0;

}
void __fastcall TMainForm::GrapplingCheckBoxClick(TObject *Sender)
{
        grapplingMode = GrapplingCheckBox->Checked;
       //��������� ������
        Player1AdvantageGroupBox->Visible = !grapplingMode;
        Player2AdvantageGroupBox->Visible = !grapplingMode;

        //������ ����������� �� �����
        DisplayForm->Player1Advantage->Visible = !grapplingMode;
        DisplayForm->Player2Advantage->Visible = !grapplingMode;

        //������ ��������� ������ ����������� � ������ ����������
        Player1AdvantagePanel->Visible = !grapplingMode;
        Player2AdvantagePanel->Visible = !grapplingMode;

        //�������������� ����
        MainForm->FormResize(NULL);
        DisplayForm->FormResize(NULL);
}
//---------------------------------------------------------------------------

