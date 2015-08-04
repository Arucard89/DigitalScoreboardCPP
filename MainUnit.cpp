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
        DisplayForm = new TDisplayForm(this);
        TimeOfFight = new TTimeOfFight();
}
//---------------------------------------------------------------------------
void __fastcall TMainForm::OpenConfigurationButtonClick(TObject *Sender)
{
        int res;
        ConfigurationForm = new TConfigurationForm(this);
        res = ConfigurationForm->ShowModal();


}
//---------------------------------------------------------------------------

void __fastcall TMainForm::FormResize(TObject *Sender)
{
        PageControl1->Height = MainForm->Height - 100;  //100 пикселей под кнопочки
      //  Player1GroupBox->Height = (TabSheet1->Height - TabSheet1->BorderWidth * 2) * 0.75; //учитываем рамку
        InformationPanel->Height = (FightingControls->Height - FightingControls->BorderWidth * 2) *0.05;
        TimePanel->Height = (FightingControls->Height - FightingControls->BorderWidth * 2) *0.1;
        FightControlsPanel->Height = (FightingControls->Height - FightingControls->BorderWidth * 2) *0.15;
        Player1GroupBox->Width = (FightingControls->Width - FightingControls->BorderWidth * 2) / 2;

        //панель имен
        Player1NameLabel->Height = Player1GroupBox->Height * 0.05;
        Player2NameLabel->Height = Player2GroupBox->Height * 0.05;

        //панель очков
        Player1ScoresPanel->Height = Player1GroupBox->Height * 0.15;
        Player2ScoresPanel->Height = Player2GroupBox->Height * 0.15;
        //панель преимуществ
        Player1AdvantagePanel->Width = Player1GroupBox->Width / 2;
        Player2AdvantagePanel->Width = Player2GroupBox->Width / 2;

        //панель кнопок
        Player1ScoresButtonsPanel->Height = Player1GroupBox->Height - (Player1NameLabel->Height + Player1ScoresPanel->Height * 2);
        Player2ScoresButtonsPanel->Height = Player2GroupBox->Height - (Player2NameLabel->Height + Player2ScoresPanel->Height * 2);
        //Player2ScoresButtonsPanel->Height = Player2GroupBox->Height * 0.65;
        //кнопки очков
        Player1ScoresGroupBox->Height = Player1ScoresButtonsPanel->Height / 2;
        Player2ScoresGroupBox->Height = Player2ScoresButtonsPanel->Height / 2;
        //ширина панели кнопок преимуществ
        Player1AdvantageGroupBox->Width = Player1ScoresButtonsPanel->Width / 2;
        Player2AdvantageGroupBox->Width = Player2ScoresButtonsPanel->Width / 2;

      /*  Player1AdvantageGroupBox->Height = Player1ScoresGroupBox->Height;
        Player1AdvantageGroupBox->Width = Player1GroupBox->Width / 2;

        Player2ScoresGroupBox->Height = Player2GroupBox->Height * 0.15;
        Player2AdvantageGroupBox->Height = Player2ScoresGroupBox->Height;
        Player2AdvantageGroupBox->Width = Player2GroupBox->Width / 2;  */

//панели очков
        Player1ScoresPanel->Height = Player1ScoresGroupBox->Height / 3;
        Player1AdvantagePanel->Height = Player1ScoresGroupBox->Height / 3;
        Player1PenaltyPanel->Height = Player1ScoresGroupBox->Height / 3;

        Player2ScoresPanel->Height = Player1ScoresGroupBox->Height / 3;
        Player2AdvantagePanel->Height = Player1ScoresGroupBox->Height / 3;
        Player2PenaltyPanel->Height = Player1ScoresGroupBox->Height / 3;

//панели кнопок
        Player1OneScorePanel->Width = Player1ScoresGroupBox->Width / 4;
        Player1TwoScorePanel->Width = Player1ScoresGroupBox->Width / 4;
        Player1ThreeScorePanel->Width = Player1ScoresGroupBox->Width / 4;
        //Player1FourScorePanel->Width = Player1ScoresGroupBox->Width / 4;

        Player2OneScorePanel->Width = Player2ScoresGroupBox->Width / 4;
        Player2TwoScorePanel->Width = Player2ScoresGroupBox->Width / 4;
        Player2ThreeScorePanel->Width = Player2ScoresGroupBox->Width / 4;
        //Player2FourScorePanel->Width = Player1ScoresGroupBox->Width / 4;

//мен€ем кнопки
        ConfigureScoresButtons();
//главные кнопки
        ConfigureFightButtons();
//вкладка настроек схватки
        ResizeFightSettings();

//

}
//---------------------------------------------------------------------------

void __fastcall TMainForm::FormCreate(TObject *Sender)
{
    //    this->DoubleBuffered = true;
}
//---------------------------------------------------------------------------

void __fastcall TMainForm::Player1OneScorePanelResize(TObject *Sender)
{
       // dynamic_cast<TPanel *>(Sender)->Width = Player1ScoresGroupBox->Width / 4;
}
//---------------------------------------------------------------------------
void __fastcall TMainForm::ConfigureScoresButtons ()
{
        const float bm = 2; //множитель дл€ отступа
        const int b = 15; //отступ от краев
        int ph = Player1OneScorePanel->Height;
        int h = (ph - 2 * b)/2.2;
        int w = (Player1OneScorePanel->Width - 2 * bm *  b);
        int w1 = (Player1ChangeAdvantagePanel->Width - 2 * bm * b);
 //высота и ширина кнопок
        Player1OneScorePlusBitBtn->Height = h;
        Player1TwoScorePlusBitBtn->Height = h;
        Player1ThreeScorePlusBitBtn->Height = h;
        Player1FourScorePlusBitBtn->Height = h;
        Player1AdvantagePlusBitBtn->Height = h;
        Player1PenaltyPlusBitBtn->Height = h;

        Player1OneScorePlusBitBtn->Width = w;
        Player1TwoScorePlusBitBtn->Width = w;
        Player1ThreeScorePlusBitBtn->Width = w;
        Player1FourScorePlusBitBtn->Width = Player1FourScorePanel->Width - 2 * bm * b;        //ѕотому что последн€€ панель меньше
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

// расположение кнопок
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
        int b = 10; //отступ от границы панели
        int hb = FightControlsPanel->Height - 2 * b; // высота кнопки
        int wb = (FightControlsPanel->Width - 2 * b) * 0.2; // рассчитываем ширину кнопки
        int ws = ((FightControlsPanel->Width - 2 * b) - 4 * wb)/3 ;//ширина рассто€ни€ между кнопками
        //устанавливаем высоту кнопок
        StartFightBtn->Height = hb;
        PauseFightBtn->Height = hb;
        StopFightBtn->Height = hb;
        ResetBtn->Height = hb;
        //выставл€ем по высоте
        StartFightBtn->Top = b;
        PauseFightBtn->Top = b;
        StopFightBtn->Top = b;
        ResetBtn->Top = b;
        //по ширине
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

}

void TMainForm::ResizePlayersNamesGroupBox()
{
        Player1ComboBox->Width = Player1NameGroupBox->Width - 2 * Player1ComboBox->Left; //делаем одинаковые отступы слева и справа
        Player2ComboBox->Width = Player2NameGroupBox->Width - 2 * Player2ComboBox->Left; //делаем одинаковые отступы слева и справа
        //прив€зываем кнопку к углу
        PutButtonInCorner(AcceptPlayersNamesBtn, PlayersNamesGroupBox, 5);
       // AcceptPlayersNamesBtn->Left = PlayersNamesGroupBox->Width - AcceptPlayersNamesBtn->Width - 5; //последн€€ цифра-отступ
       // AcceptPlayersNamesBtn->Top = PlayersNamesGroupBox->Height - AcceptPlayersNamesBtn->Height - 5; //последн€€ цифра-отступ
}

void TMainForm::PutButtonInCorner(TButton *btn, TControl *cont, int b)
{
        btn->Left = cont->Width - btn->Width - b;
        btn->Top = cont->Height - btn->Height - b;
}


