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
        //одновременно запускаем форму дисплея
        DisplayForm = new TDisplayForm(this);
        DisplayForm->Show();
        Timer1->Enabled = false; //таймер не нужен (при запуске программы он неактивен)
        Timer1->Interval = 100; //1000 = 1 сек. gполсекунды-период мигания точек времени(обязательно чтобы 1000 нацело делилась)
        defaultInterval = 1000 / Timer1->Interval; //вычисляем значение интервала
        fightState = 0; //схватка "остановлена"
        dots = false; // необходимо для первого срабатывания

        TimeOfFight = new CTimeOfFight();
        Player1 = new CPlayer();
        Player2 = new CPlayer();
        UpdateScores();
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
        Player1FourScorePanel->Width = Player1ScoresGroupBox->Width / 4;

        Player2OneScorePanel->Width = Player2ScoresGroupBox->Width / 4;
        Player2TwoScorePanel->Width = Player2ScoresGroupBox->Width / 4;
        Player2ThreeScorePanel->Width = Player2ScoresGroupBox->Width / 4;
        Player2FourScorePanel->Width = Player1ScoresGroupBox->Width / 4;

//меняем кнопки
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

       // Player1 = new CPlayer;
       // Player1 = new CPlayer;
}
//---------------------------------------------------------------------------

void __fastcall TMainForm::Player1OneScorePanelResize(TObject *Sender)
{
       // dynamic_cast<TPanel *>(Sender)->Width = Player1ScoresGroupBox->Width / 4;
}
//---------------------------------------------------------------------------
void __fastcall TMainForm::ConfigureScoresButtons ()
{
        const float bm = 2; //множитель для отступа
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
        Player1FourScorePlusBitBtn->Width = Player1FourScorePanel->Width - 2 * bm * b;        //Потому что последняя панель меньше
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
        int ws = ((FightControlsPanel->Width - 2 * b) - 4 * wb)/3 ;//ширина расстояния между кнопками
        //устанавливаем высоту кнопок
        StartFightBtn->Height = hb;
        PauseFightBtn->Height = hb;
        StopFightBtn->Height = hb;
        ResetBtn->Height = hb;
        //выставляем по высоте
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
        ResizeInformationGroupBox();
        ResizeFightTimeGroupBox();
        AcceptAllConfigurationBtn->Left = FightSettings->Width - AcceptAllConfigurationBtn->Width - 2*FightSettings->BorderWidth - 5; //множитель 2 нужен обязательно
        AcceptAllConfigurationBtn->Top = FightSettings->Height - AcceptAllConfigurationBtn->Height - 2*FightSettings->BorderWidth - 5;
}

void TMainForm::ResizePlayersNamesGroupBox()
{
        Player1ComboBox->Width = Player1NameGroupBox->Width - 2 * Player1ComboBox->Left; //делаем одинаковые отступы слева и справа
        Player2ComboBox->Width = Player2NameGroupBox->Width - 2 * Player2ComboBox->Left; //делаем одинаковые отступы слева и справа
        //привязываем кнопку к углу
        PutButtonInCorner(AcceptPlayersNamesBtn, PlayersNamesGroupBox, 5);
       // AcceptPlayersNamesBtn->Left = PlayersNamesGroupBox->Width - AcceptPlayersNamesBtn->Width - 5; //последняя цифра-отступ
       // AcceptPlayersNamesBtn->Top = PlayersNamesGroupBox->Height - AcceptPlayersNamesBtn->Height - 5; //последняя цифра-отступ
}

void TMainForm::PutButtonInCorner(TButton *btn, TControl *cont, int b)
{
        btn->Left = cont->Width - btn->Width - b;
        btn->Top = cont->Height - btn->Height - b;
}

void TMainForm::ResizeInformationGroupBox()
{
        int b = 5;//отступ
        int w  = (InformationGroupBox->Width - 2 * b - AcceptInformationBtn->Width)/3;
        //устанавливаем ширину ячеек
        AgeGroupBox->Width = w;
        BeltGroupBox->Width = w;
        WeightGroupBox->Width = w;
        //кстанавливаем ширину комбобоксов
        AgeComboBox->Width = AgeGroupBox->Width - 2 * AgeComboBox->Left;
        BeltComboBox->Width = BeltGroupBox->Width - 2 * BeltComboBox->Left;
        WeightComboBox->Width = WeightGroupBox->Width - 2 * WeightComboBox->Left;
        PutButtonInCorner(AcceptInformationBtn, InformationGroupBox, b);
}

void TMainForm::ResizeFightTimeGroupBox()
{
        int b = 5;//отступ
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
        InformationIsChanged(false, PlayersNamesGroupBox);  //сбрасываем флаг измененности инфы
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
        InformationIsChanged(false, FightTimeGroupBox);//сбрасываем флаг измененности информации
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
        AnsiString s = "Возраст: " + FightInfo.age + " Пояс: " + FightInfo.belt + " Вес: " + FightInfo.weight;
        CurrentInfoSetupLabel->Caption = s;
        InformationPanel->Caption = s;
        DisplayForm->CategoryPanel->Caption = s;
}

void TMainForm::FulfillTime()
{
        TimeOfFight->setMinutes(MinutesSpinEdit->Value);
        TimeOfFight->setSeconds(SecondsSpinEdit->Value);
        CurrentTimeSetupLabel->Caption = "Текущая установка времени: " + TimeOfFight->getTime(true);
        ShowTime();
       // TimeOfFight->

}

void __fastcall TMainForm::Player1ThreeScorePlusBitBtnClick(
      TObject *Sender)
{
        Player1->PlusScore(((TPanel *)Sender)->Tag);
        UpdateScores();
        //здесь добавить логирование
}

//---------------------------------------------------------------------------

void __fastcall TMainForm::Player2OneScorePlusBitBtnClick(TObject *Sender)
{
        Player2->PlusScore(((TPanel *)Sender)->Tag);
        UpdateScores();
        //здесь добавить логирование
}
//---------------------------------------------------------------------------

void TMainForm::UpdateScores()
{
        //ОБНОВЛЯЕМ ОЧКИ
        Player1ScoresPanel->Caption = IntToStr(Player1->GetScore());
        DisplayForm->Player1Scores->Caption = Player1ScoresPanel->Caption;
        Player2ScoresPanel->Caption = IntToStr(Player2->GetScore());
        DisplayForm->Player2Scores->Caption = Player2ScoresPanel->Caption;

       //преимущества
        Player1AdvantagePanel->Caption = IntToStr(Player1->GetAdvantage());
        DisplayForm->Player1Advantage->Caption = Player1AdvantagePanel->Caption;
        Player2AdvantagePanel->Caption = IntToStr(Player2->GetAdvantage());
        DisplayForm->Player2Advantage->Caption = Player2AdvantagePanel->Caption;

        //штрафы
        Player1PenaltyPanel->Caption = IntToStr(Player1->GetPenalty());
        DisplayForm->Player1Penalty->Caption = Player1PenaltyPanel->Caption;
        Player2PenaltyPanel->Caption = IntToStr(Player2->GetPenalty());
        DisplayForm->Player2Penalty->Caption = Player2PenaltyPanel->Caption;
}
void __fastcall TMainForm::Player1AdvantagePlusBitBtnClick(TObject *Sender)
{
        Player1->PlusAdvantage(((TPanel *)Sender)->Tag);
        UpdateScores();
        //добавить логирование изменения очков
}
//---------------------------------------------------------------------------

void __fastcall TMainForm::Player2AdvantagePlusBitBtnClick(TObject *Sender)
{
        Player2->PlusAdvantage(((TPanel *)Sender)->Tag);
        UpdateScores();
         //добавить логирование изменения очков
}
//---------------------------------------------------------------------------

void __fastcall TMainForm::Player1PenaltyMinusBitBtnClick(TObject *Sender)
{
        Player1->PlusPenalty(((TPanel *)Sender)->Tag);
        UpdateScores();
         //добавить логирование изменения очков
}
//---------------------------------------------------------------------------

void __fastcall TMainForm::Player2PenaltyMinusBitBtnClick(TObject *Sender)
{
        Player2->PlusPenalty(((TPanel *)Sender)->Tag);
        UpdateScores();
         //добавить логирование изменения очков
}
//---------------------------------------------------------------------------

void __fastcall TMainForm::Timer1Timer(TObject *Sender)
{
        if (fightState == 1) //если схватка идет
        {

                if (timerInterval == defaultInterval)         //от 10,9,8,7,6,5,4,3,2,1
                {
                        TimeOfFight->minusSecond();
                        if (TimeOfFight->getZero() == 1) //если закончилось время
                        {
                                fightState = 0;
                                Timer1->Enabled = false;
                        }
                }
                if ((timerInterval == (defaultInterval / 2))||(timerInterval == defaultInterval)) //гасим точки посреди секунды  и зажигаем вначале интервала
                {
                        dots = !dots;
                }
                ShowTime(dots);
                minusInterval(); //отнимаем один интервал отсчета
        }
        //если таймер закончился, то вывести окно установки результатов, но при этом дать возможность вернуться к результатам проведения поединка, чтобы изменить очки(если присудили баллы в последний момент)

}
//---------------------------------------------------------------------------


void __fastcall TMainForm::StartFightBtnClick(TObject *Sender)
{
        if (fightState == 0)
        {
                timerInterval = defaultInterval; //выставляем счетчик
        }
        StartFightBtn->Caption = "СТАРТ"; //кнопка возвращает свое название(если после паузы)
        fightState = 1; //ставим состояние схватки в положение "идет"
      //  StartFightBtn->Caption = 'ПРОДОЛЖИТЬ';
        PauseFightBtn->Enabled = true; //делаем возможным приостановку схватки на паузу
        StartFightBtn->Enabled = false;//внопку старт отключаем(чтобы не тыкали)
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
        fightState = 2; //ставим состояние схватки в положение "пауза"
        StartFightBtn->Caption = "ПРОДОЛЖИТЬ";//кнопка старт переименовывается в более правильное название(т.к. она будет продолжать схватку после паузы)
        StartFightBtn->Enabled = true;//включаем кнопку продолжения.
        PauseFightBtn->Enabled = false; //уже нажали, больше не надо
        Timer1->Enabled = false;
}
//---------------------------------------------------------------------------

void __fastcall TMainForm::StopFightBtnClick(TObject *Sender)
{
        fightState = 0;
        StartFightBtn->Enabled = true;//включаем кнопку
        PauseFightBtn->Enabled = false; //не надо, еще старт не нажат
        Timer1->Enabled = false;
        //тут вызываем модальную форму с причинами победы(подгрузка причин либо из БД, либо из ини файла)
        //с вожможностью отмены нажатия кнопки (для продолжения схватки или корректировки результатов)
}
//---------------------------------------------------------------------------

void __fastcall TMainForm::ResetBtnClick(TObject *Sender)
{
        fightState = 0;
        StartFightBtn->Caption = "СТАРТ";
        StartFightBtn->Enabled = true;//включаем кнопку .
        PauseFightBtn->Enabled = false; //еще старт не нажат
        Timer1->Enabled = false;

        //сбрасываем очки и время
        Player1->ResetScores();
        Player2->ResetScores();
        TimeOfFight->ResetTime();

        //отображаем информацию
        UpdateScores();
        ShowTime();

        //добавить лог о действии сброса
}
//---------------------------------------------------------------------------

int  TMainForm::minusInterval()
{
        ((timerInterval-1) < 1) ? timerInterval = defaultInterval : timerInterval--;
        return timerInterval;
}
