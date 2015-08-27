//---------------------------------------------------------------------------
//при загрузке окна получаем данные из ини файла.
//Для каждой группы параметров свой флаг применения изменений
//при подтверждении параметров флаг меняется на тру
//после закрытия окна(по кнопке применить изменения), изменения записываются в ини файл и в родительском окне применяются настройки из ини файла
#include <vcl.h>
//#include <string.h>
#include <fstream.h>

#pragma hdrstop

#include "ConfigurationUnit.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
//TConfigurationForm *ConfigurationForm;
//---------------------------------------------------------------------------
__fastcall TConfigurationForm::TConfigurationForm(TComponent* Owner)
        : TForm(Owner)
{
       // InfoLabelsFlag = false;
}
//---------------------------------------------------------------------------
void __fastcall TConfigurationForm::Player1ScoresLabelTextChange(
      TObject *Sender)
{
        Player1ScoresLabelsBtn->Enabled = true;
        AddAsteriskToTabName(true, InfoLabelsSheet);
}
//---------------------------------------------------------------------------
/*int __fastcall TConfigurationForm::WriteInfoLabelsConfigToFile()   //записываем конфиг для лейблов
{

        TIniFile *ini = new TIniFile(".\\Config\\DesignConfig.ini");

        ini->WriteString("InfoLabelsConfig","Player1Scores",Player1ScoresLabelText->Text);
        ini->WriteString("InfoLabelsConfig","Player2Scores",Player2ScoresLabelText->Text);

        ini->WriteString("InfoLabelsConfig","Player1Advantage",Player1AdvantageLabelText->Text);
        ini->WriteString("InfoLabelsConfig","Player2Advantage",Player2AdvantageLabelText->Text);

        ini->WriteString("InfoLabelsConfig","Player1Penalty",Player1PenaltyLabelText->Text);
        ini->WriteString("InfoLabelsConfig","Player2Penalty",Player2PenaltyLabelText->Text);

        ini->WriteString("InfoLabelsConfig","Player1Scores",Player1ScoresLabelText->Text);
        ini->WriteString("InfoLabelsConfig","Player2Scores",Player2ScoresLabelText->Text);

        ini->Free();

        return 0;
} */
//---------------------------------------------------------------------------
void __fastcall TConfigurationForm::BitBtn3Click(TObject *Sender)
{
      //  FontDialog1->Execute();
        //FontDialog1->
}
//---------------------------------------------------------------------------
void TConfigurationForm::AddAsteriskToTabName(bool needAsterisk,TTabSheet* tab)
{
        if (needAsterisk == true)
        {
                if (tab->Caption.Pos("*") == 0)
                {
                        tab->Caption = tab->Caption + "*";
                };
        }
        else
        {
                tab->Caption = StringReplace(tab->Caption, "*", "", TReplaceFlags() << rfReplaceAll << rfIgnoreCase);
        }
}

//---------------------------------------------------------------------------

void __fastcall TConfigurationForm::Player2ScoresLabelTextChange(
      TObject *Sender)
{
        Player2ScoresLabelsBtn->Enabled = true;
        AddAsteriskToTabName(true, InfoLabelsSheet);
}
//---------------------------------------------------------------------------

int TConfigurationForm::WritePlayer1ScoresLabelsConfigToFile()
{
        AnsiString section = "Player1PointsLabelsConfig";
        TIniFile* ini;
        ini = NULL;
        try
        {
                ini = new TIniFile(INI_FILE);

                //записываем текст
                ini->WriteString(section,"Player1ScoresText",Player1ScoresLabelText->Text);
                ini->WriteString(section,"Player1AdvantageText",Player1AdvantageLabelText->Text);
                ini->WriteString(section,"Player1PenaltyText",Player1PenaltyLabelText->Text);

                //записываем параметры шрифтов
                //очки
                WriteFontParameters( ini,Player1ScoresLabelTextFontDialog->Font, section, "Player1ScoresFont" );
                //преимущества
                WriteFontParameters( ini,Player1AdvantageLabelTextFontDialog->Font, section, "Player1AdvantageFont" );
                //пенальти
                WriteFontParameters( ini,Player1PenaltyLabelTextFontDialog->Font, section, "Player1PenaltyFont" );

                delete ini;
                return 0;
         }
         catch (...)
         {
                if (ini != NULL)
                {
                        delete ini;
                }
                return 1;
         }


}

int TConfigurationForm::WritePlayer2ScoresLabelsConfigToFile()
{
        AnsiString section = "Player2PointsLabelsConfig";
        TIniFile* ini;
        ini = NULL;
        try
        {
                ini = new TIniFile(INI_FILE);

                //записываем текст
                ini->WriteString(section,"Player2ScoresText",Player2ScoresLabelText->Text);
                ini->WriteString(section,"Player2AdvantageText",Player2AdvantageLabelText->Text);
                ini->WriteString(section,"Player2PenaltyText",Player2PenaltyLabelText->Text);

                //записываем параметры шрифтов
                //очки
                WriteFontParameters( ini,Player2ScoresLabelTextFontDialog->Font, section, "Player2ScoresFont" );
                //преимущества
                WriteFontParameters( ini,Player2AdvantageLabelTextFontDialog->Font, section, "Player2AdvantageFont" );
                //пенальти
                WriteFontParameters( ini,Player2PenaltyLabelTextFontDialog->Font, section, "Player2PenaltyFont" );

                delete ini;
                return 0;
         }
         catch (...)
         {
                if (ini != NULL)
                {
                        delete ini;
                }
                return 1;
         }

}

int TConfigurationForm::WriteFontParameters(TIniFile* ini, TFont* f, AnsiString section, AnsiString ident)
{
        ini->WriteString(section, ident + "_name",f->Name);
        ini->WriteString(section, ident + "_color",ColorToString(f->Color));
        ini->WriteInteger(section, ident + "_size",f->Size);

        ini->WriteBool(section, ident + "_Bold", f->Style.Contains(fsBold));
        ini->WriteBool(section, ident + "_Italic", f->Style.Contains(fsItalic));
        ini->WriteBool(section, ident + "_Underline", f->Style.Contains(fsUnderline));
        ini->WriteBool(section, ident + "_StrikeOut", f->Style.Contains(fsStrikeOut));
        return 0;
}
void __fastcall TConfigurationForm::BitBtn1Click(TObject *Sender)
{
// добавить логирование ошибок при выполнении операций записи в файл!!
        //пишем информацию об информационных лейблах очков

        if (Player1PointsLabelsChanged == true)
        {
                WritePlayer1ScoresLabelsConfigToFile();
        };

        if (Player2PointsLabelsChanged == true)
        {
                WritePlayer2ScoresLabelsConfigToFile();
        };

        //пишем информацию о цвете панелей

        if (CentralPanelsColorChanged == true)
        {
                WriteCentralPanelColorToFile();
        };
        if (Player1PanelColorChanged == true)
        {
                WritePlayer1PanelColorToFile();
        };
        if (Player2PanelColorChanged == true)
        {
                WritePlayer2PanelColorToFile();
        };

        //пишем информацию о шрифтах панелей

        if (CentralPanelsFontChanged == true)
        {
                WriteCentralPanelFontToFile();
        };
        if (Player1PanelFontChanged == true)
        {
                WritePlayer1PanelFontToFile();
        };
        if (Player2PanelFontChanged == true)
        {
                WritePlayer2PanelFontToFile();
        };

}
//---------------------------------------------------------------------------

void __fastcall TConfigurationForm::Player2ScoresLabelTextFontBitBtnClick(
      TObject *Sender)
{

        if (Player2ScoresLabelTextFontDialog->Execute())
        {
                AddAsteriskToTabName(true, InfoLabelsSheet);
                Player2ScoresLabelsBtn->Enabled = true;
        };
}
//---------------------------------------------------------------------------

void __fastcall TConfigurationForm::Player2AdvantageLabelTextFontBitBtnClick(
      TObject *Sender)
{
        if (Player2AdvantageLabelTextFontDialog->Execute())
        {
                AddAsteriskToTabName(true, InfoLabelsSheet);
                Player2ScoresLabelsBtn->Enabled = true;
        };
}
//---------------------------------------------------------------------------


void __fastcall TConfigurationForm::Player2PenaltyLabelTextFontBitBtnClick(
      TObject *Sender)
{
        if (Player2PenaltyLabelTextFontDialog->Execute())
        {
                Player2ScoresLabelsBtn->Enabled = true;
                AddAsteriskToTabName(true, InfoLabelsSheet);
        };
}
//---------------------------------------------------------------------------
//доделать выгрузку ини для второго игрока!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!

void __fastcall TConfigurationForm::Player1ScoresLabelTextFontBitBtnClick(
      TObject *Sender)
{
        if (Player2ScoresLabelTextFontDialog->Execute())
        {
                Player1ScoresLabelsBtn->Enabled = true;
                AddAsteriskToTabName(true, InfoLabelsSheet);
        };
}
//---------------------------------------------------------------------------

void __fastcall TConfigurationForm::Player1AdvantageLabelTextFontBitBtnClick(
      TObject *Sender)
{
        if (Player1AdvantageLabelTextFontDialog->Execute())
        {
                Player1ScoresLabelsBtn->Enabled = true;
                AddAsteriskToTabName(true, InfoLabelsSheet);
        };
}
//---------------------------------------------------------------------------

void __fastcall TConfigurationForm::Player1PenaltyLabelTextFontBitBtnClick(
      TObject *Sender)
{
         if (Player1PenaltyLabelTextFontDialog->Execute())
        {
                Player1ScoresLabelsBtn->Enabled = true;
                AddAsteriskToTabName(true, InfoLabelsSheet);
        };
}
//---------------------------------------------------------------------------


void __fastcall TConfigurationForm::Player2ScoresLabelsBtnClick(
      TObject *Sender)
{
        ((TButton*) Sender)->Enabled = false;
        AddAsteriskToTabName(false, InfoLabelsSheet);
        Player2PointsLabelsChanged = true;
        ChangeLogMemo->Lines->Add("Внесены изенения для подписей окон очков слева");
}
//---------------------------------------------------------------------------

void __fastcall TConfigurationForm::Player1ScoresLabelsBtnClick(
      TObject *Sender)
{
        ((TButton*) Sender)->Enabled = false;
        AddAsteriskToTabName(false, InfoLabelsSheet);
        Player1PointsLabelsChanged = true;
        ChangeLogMemo->Lines->Add("Внесены изенения для подписей окон очков справа");
}
//---------------------------------------------------------------------------

void __fastcall TConfigurationForm::BitBtn2Click(TObject *Sender)
{
        Player1PointsLabelsChanged = false;
        Player2PointsLabelsChanged = false;
        //записать сюда обнуление всех флагов. и в конструктор тоже
}
//---------------------------------------------------------------------------

int TConfigurationForm::WritePlayer1PanelColorToFile()
{
        AnsiString section = "Player1PanelsColorConfig";
        TIniFile* ini;
        ini = NULL;
        try
        {
                ini = new TIniFile(INI_FILE);

                //записываем параметры цвета панелей
                ini->WriteString(section,"Player1NamePanelColor", ColorToString(Player1NamePanelColorBox->Selected));
                ini->WriteString(section,"Player1ScoresPanelColor", ColorToString(Player1ScoresPanelColorBox->Selected));
                ini->WriteString(section,"Player1AdvantagePanelColor", ColorToString(Player1AdvantagePanelColorBox->Selected));
                ini->WriteString(section,"Player1PenaltyPanelColor", ColorToString(Player1PenaltyPanelColorBox->Selected));

                delete ini;
                return 0;
         }
         catch (...)
         {
                if (ini != NULL)
                {
                        delete ini;
                }
                return 1;
         }
}

int TConfigurationForm::WritePlayer2PanelColorToFile()
{
        AnsiString section = "Player2PanelsColorConfig";
        TIniFile* ini;
        ini = NULL;
        try
        {
                ini = new TIniFile(INI_FILE);

                //записываем параметры цвета панелей
                ini->WriteString(section,"Player2NamePanelColor", ColorToString(Player2NamePanelColorBox->Selected));
                ini->WriteString(section,"Player2ScoresPanelColor", ColorToString(Player2ScoresPanelColorBox->Selected));
                ini->WriteString(section,"Player2AdvantagePanelColor", ColorToString(Player2AdvantagePanelColorBox->Selected));
                ini->WriteString(section,"Player2PenaltyPanelColor", ColorToString(Player2PenaltyPanelColorBox->Selected));

                delete ini;
                return 0;
         }
         catch (...)
         {
                if (ini != NULL)
                {
                        delete ini;
                }
                return 1;
         }
}

void __fastcall TConfigurationForm::SetPlayer2PanelColorBitBtnClick(
      TObject *Sender)
{

        ((TButton*) Sender)->Enabled = false;
        Player2PanelColorChanged = true;
        AddAsteriskToTabName(false, PanelsColorTabSheet);
        ChangeLogMemo->Lines->Add("Внесены изенения цвета панелей слева");
}
//---------------------------------------------------------------------------


void __fastcall TConfigurationForm::CategoryPanelColorBoxChange(
      TObject *Sender)
{
        SetCentralPanelColorBitBtn->Enabled = true;
        AddAsteriskToTabName(true, PanelsColorTabSheet);
}
//---------------------------------------------------------------------------

void __fastcall TConfigurationForm::SetPlayer1PanelColorBitBtnClick(
      TObject *Sender)
{
        ((TButton*) Sender)->Enabled = false;
        Player1PanelColorChanged = true;
        AddAsteriskToTabName(false, PanelsColorTabSheet);
        ChangeLogMemo->Lines->Add("Внесены изенения цвета панелей справа");
}
//---------------------------------------------------------------------------

void __fastcall TConfigurationForm::SetCentralPanelColorBitBtnClick(
      TObject *Sender)
{
        ((TButton*) Sender)->Enabled = false;
        CentralPanelsColorChanged = true;
        AddAsteriskToTabName(false, PanelsColorTabSheet);
        ChangeLogMemo->Lines->Add("Внесены изенения цвета центральных панелей");
}
//---------------------------------------------------------------------------

void __fastcall TConfigurationForm::Player1NamePanelColorBoxChange(
      TObject *Sender)
{
        SetPlayer1PanelColorBitBtn->Enabled = true;
        AddAsteriskToTabName(true, PanelsColorTabSheet);
}
//---------------------------------------------------------------------------

void __fastcall TConfigurationForm::Player2NamePanelColorBoxChange(
      TObject *Sender)
{
        SetPlayer2PanelColorBitBtn->Enabled = true;
        AddAsteriskToTabName(true, PanelsColorTabSheet);
}
//---------------------------------------------------------------------------

int TConfigurationForm::WriteCentralPanelColorToFile()
{
        AnsiString section = "CentralPanelColorConfig";
        TIniFile* ini;
        ini = NULL;
        try
        {
                TIniFile* ini;
                ini = NULL;
                ini = new TIniFile(INI_FILE);
                
                //записываем параметры цвета панелей
                ini->WriteString(section,"CategoryPanelColor", ColorToString(CategoryPanelColorBox->Selected));
                ini->WriteString(section,"TimePanelColor", ColorToString(TimePanelColorBox->Selected));

                delete ini;
                return 0;
         }
         catch (...)
         {
                if (ini != NULL)
                {
                        delete ini;
                }
                return 1;
         }
}


void __fastcall TConfigurationForm::ResetToDefaultBitBtnClick(
      TObject *Sender)
{
        //здесь будет загрузка параметров по умолчанию из файла Default.ini        
}
//---------------------------------------------------------------------------

void __fastcall TConfigurationForm::FormCreate(TObject *Sender)
{
        ChangeLogMemo->Text = "";
        //устанавливаем флаги
        Player1PointsLabelsChanged = false;
        Player2PointsLabelsChanged =false;
        Player1PanelColorChanged = false;
        Player2PanelColorChanged = false;
        CentralPanelsColorChanged = false;
}
//---------------------------------------------------------------------------




void __fastcall TConfigurationForm::CategoryPanelFontBtnClick(
      TObject *Sender)
{
        if (CategoryPanelFontDialog->Execute())
        {
                AddAsteriskToTabName(true, PanelsFontTabSheet);
                SetCentralPanelFontBitBtn->Enabled = true;
        };
}
//---------------------------------------------------------------------------

void __fastcall TConfigurationForm::SetCentralPanelFontBitBtnClick(
      TObject *Sender)
{
        ((TButton*) Sender)->Enabled = false;
        CentralPanelsFontChanged = true;
        AddAsteriskToTabName(false, PanelsFontTabSheet);
        ChangeLogMemo->Lines->Add("Внесены изенения в шрифты центральных панелей");
}
//---------------------------------------------------------------------------

void __fastcall TConfigurationForm::SetPlayer2PanelFontBitBtnClick(
      TObject *Sender)
{
        ((TButton*) Sender)->Enabled = false;
        CentralPanelsFontChanged = true;
        AddAsteriskToTabName(false, PanelsFontTabSheet);
        ChangeLogMemo->Lines->Add("Внесены изенения в шрифты панелей слева");
}
//---------------------------------------------------------------------------

void __fastcall TConfigurationForm::SetPlayer1PanelFontBitBtnClick(
      TObject *Sender)
{
        ((TButton*) Sender)->Enabled = false;
        CentralPanelsFontChanged = true;
        AddAsteriskToTabName(false, PanelsFontTabSheet);
        ChangeLogMemo->Lines->Add("Внесены изенения в шрифты панелей справа");        
}
//---------------------------------------------------------------------------

void __fastcall TConfigurationForm::Player2NamePanelFontBtnClick(
      TObject *Sender)
{
        if (CategoryPanelFontDialog->Execute())
        {
                AddAsteriskToTabName(true, PanelsFontTabSheet);
                SetPlayer2PanelFontBitBtn->Enabled = true;
        };
}
//---------------------------------------------------------------------------

void __fastcall TConfigurationForm::TimePanelFontBtnClick(TObject *Sender)
{
        if (Player2NamePanelFontDialog->Execute())
        {
                AddAsteriskToTabName(true, PanelsFontTabSheet);
                SetCentralPanelFontBitBtn->Enabled = true;
        };
}
//---------------------------------------------------------------------------

void __fastcall TConfigurationForm::Player2ScoresPanelFontBtnClick(
      TObject *Sender)
{
        if (Player2ScoresPanelFontDialog->Execute())
        {
                AddAsteriskToTabName(true, PanelsFontTabSheet);
                SetPlayer2PanelFontBitBtn->Enabled = true;
        };
}
//---------------------------------------------------------------------------

void __fastcall TConfigurationForm::Player2AdvantagePanelFontBtnClick(
      TObject *Sender)
{
        if (Player2AdvantagePanelFontDialog->Execute())
        {
                AddAsteriskToTabName(true, PanelsFontTabSheet);
                SetPlayer2PanelFontBitBtn->Enabled = true;
        };
}
//---------------------------------------------------------------------------

void __fastcall TConfigurationForm::Player2PenaltyPanelFontBtnClick(
      TObject *Sender)
{
        if (Player2PenaltyPanelFontDialog->Execute())
        {
                AddAsteriskToTabName(true, PanelsFontTabSheet);
                SetPlayer2PanelFontBitBtn->Enabled = true;
        };
}
//---------------------------------------------------------------------------

void __fastcall TConfigurationForm::Player1NamePanelFontBtnClick(
      TObject *Sender)
{
        if (Player1NamePanelFontDialog->Execute())
        {
                AddAsteriskToTabName(true, PanelsFontTabSheet);
                SetPlayer1PanelFontBitBtn->Enabled = true;
        };
}
//---------------------------------------------------------------------------

void __fastcall TConfigurationForm::Player1ScoresPanelFontBtnClick(
      TObject *Sender)
{
        if (Player1ScoresPanelFontDialog->Execute())
        {
                AddAsteriskToTabName(true, PanelsFontTabSheet);
                SetPlayer1PanelFontBitBtn->Enabled = true;
        };
}
//---------------------------------------------------------------------------

void __fastcall TConfigurationForm::Player1AdvantagePanelFontBtnClick(
      TObject *Sender)
{
        if (Player1AdvantagePanelFontDialog->Execute())
        {
                AddAsteriskToTabName(true, PanelsFontTabSheet);
                SetPlayer1PanelFontBitBtn->Enabled = true;
        };
}
//---------------------------------------------------------------------------

void __fastcall TConfigurationForm::Player1PenaltyPanelFontBtnClick(
      TObject *Sender)
{
        if (Player1PenaltyPanelFontDialog->Execute())
        {
                AddAsteriskToTabName(true, PanelsFontTabSheet);
                SetPlayer1PanelFontBitBtn->Enabled = true;
        };
}
//---------------------------------------------------------------------------

int TConfigurationForm::WriteCentralPanelFontToFile()
{
        AnsiString section = "CentralPanelFontConfig";
        TIniFile* ini;
        ini = NULL;
        try
        {
                ini = new TIniFile(INI_FILE);

                //записываем параметры шрифтов
                //категории
                WriteFontParameters( ini,CategoryPanelFontDialog->Font, section, "CategoryPanelFont" );
                //время
                WriteFontParameters( ini,TimePanelFontDialog->Font, section, "TimePanelFont" );

                delete ini;
                return 0;
         }
         catch (...)
         {
                if (ini != NULL)
                {
                        delete ini;
                }
                return 1;
         }
}

int TConfigurationForm::WritePlayer2PanelFontToFile()
{
        AnsiString section = "Player2PanelFontConfig";
        TIniFile* ini;
        ini = NULL;
        try
        {
                ini = new TIniFile(INI_FILE);

                //записываем параметры шрифтов
                //имя
                WriteFontParameters( ini,Player2NamePanelFontDialog->Font, section, "NamePanelFont" );
                //очки
                WriteFontParameters( ini,Player2ScoresPanelFontDialog->Font, section, "ScoresPanelFont" );
                //преимущества
                WriteFontParameters( ini,Player2AdvantagePanelFontDialog->Font, section, "AdvantagePanelFont" );
                //штрафы
                WriteFontParameters( ini,Player2PenaltyPanelFontDialog->Font, section, "PenaltyPanelFont" );

                delete ini;
                return 0;
         }
         catch (...)
         {
                if (ini != NULL)
                {
                        delete ini;
                }
                return 1;
         }
}

int TConfigurationForm::WritePlayer1PanelFontToFile()
{
        AnsiString section = "Player1PanelFontConfig";
        TIniFile* ini;
        ini = NULL;
        try
        {
                ini = new TIniFile(INI_FILE);

                //записываем параметры шрифтов
                //имя
                WriteFontParameters( ini,Player1NamePanelFontDialog->Font, section, "NamePanelFont" );
                //очки
                WriteFontParameters( ini,Player1ScoresPanelFontDialog->Font, section, "ScoresPanelFont" );
                //преимущества
                WriteFontParameters( ini,Player1AdvantagePanelFontDialog->Font, section, "AdvantagePanelFont" );
                //штрафы
                WriteFontParameters( ini,Player1PenaltyPanelFontDialog->Font, section, "PenaltyPanelFont" );

                delete ini;
                return 0;
         }
         catch (...)
         {
                if (ini != NULL)
                {
                        delete ini;
                }
                return 1;
         }
}

