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
        ElementWasChanged(InfoLabelsSheet, Player1ScoresLabelsBtn, Player1PointsLabelsChanged);
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
void TConfigurationForm::AddAsteriskToTabName(bool needAsterisk, TTabSheet* tab, bool alreadyHaveAsterisk)
{
        if (needAsterisk == true)
        {
                if (alreadyHaveAsterisk == false)//(tab->Caption.Pos("*") == 0)//если флаг изменений уже установлен, значит, звезда уже есть и новую не добавляем.
                {
                        tab->Caption = tab->Caption + "*";
                };
        }
        else
        {
                tab->Caption = StringReplace(tab->Caption, "*", "", TReplaceFlags() << rfIgnoreCase);
        }
}

//---------------------------------------------------------------------------

void __fastcall TConfigurationForm::Player2ScoresLabelTextChange(
      TObject *Sender)
{
        ElementWasChanged(InfoLabelsSheet, Player2ScoresLabelsBtn, Player2PointsLabelsChanged);
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
void __fastcall TConfigurationForm::AcceptAllBitBtnClick(TObject *Sender)
{
// добавить логирование ошибок при выполнении операций записи в файл!!
        //пишем информацию об информационных лейблах очков
        for (int i = 0; i < PageControl1->PageCount; i++)
        {
                if (PageControl1->Pages[i]->Caption.Pos("*")!=0)
                {
                        if (MessageDlg("Есть непринятые изменения, которые не будут применены.\r\nПродолжить?", mtWarning, mbOKCancel, 0) == mrCancel)
                        {
                                return;
                        }
                }
        }

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
        //пишем информацию о картинке
        if (Picture1Changed || Picture2Changed)
        {
                WritePicturesPathToFile();
        }

        ModalResult = mrOk;
        //добавить выключение флагов при изменении элементов(чтобы не записывать ложную информацию)

}
//---------------------------------------------------------------------------

void __fastcall TConfigurationForm::Player2ScoresLabelTextFontBitBtnClick(
      TObject *Sender)
{
        if (Player2ScoresLabelTextFontDialog->Execute())
        {
                ElementWasChanged(InfoLabelsSheet, Player2ScoresLabelsBtn, Player2PointsLabelsChanged);
        };
}
//---------------------------------------------------------------------------

void __fastcall TConfigurationForm::Player2AdvantageLabelTextFontBitBtnClick(
      TObject *Sender)
{
        if (Player2AdvantageLabelTextFontDialog->Execute())
        {
                ElementWasChanged(InfoLabelsSheet, Player2ScoresLabelsBtn, Player2PointsLabelsChanged);
        };
}
//---------------------------------------------------------------------------


void __fastcall TConfigurationForm::Player2PenaltyLabelTextFontBitBtnClick(
      TObject *Sender)
{
        if (Player2PenaltyLabelTextFontDialog->Execute())
        {
                ElementWasChanged(InfoLabelsSheet, Player2ScoresLabelsBtn, Player2PointsLabelsChanged);
        };
}
//---------------------------------------------------------------------------
//доделать выгрузку ини для второго игрока!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!

void __fastcall TConfigurationForm::Player1ScoresLabelTextFontBitBtnClick(
      TObject *Sender)
{
        if (Player1ScoresLabelTextFontDialog->Execute())
        {
                ElementWasChanged(InfoLabelsSheet, Player1ScoresLabelsBtn, Player1PointsLabelsChanged);
        };
}
//---------------------------------------------------------------------------

void __fastcall TConfigurationForm::Player1AdvantageLabelTextFontBitBtnClick(
      TObject *Sender)
{
        if (Player1AdvantageLabelTextFontDialog->Execute())
        {
                ElementWasChanged(InfoLabelsSheet, Player1ScoresLabelsBtn, Player1PointsLabelsChanged);
        };
}
//---------------------------------------------------------------------------

void __fastcall TConfigurationForm::Player1PenaltyLabelTextFontBitBtnClick(
      TObject *Sender)
{
         if (Player1PenaltyLabelTextFontDialog->Execute())
        {
                ElementWasChanged(InfoLabelsSheet, Player1ScoresLabelsBtn, Player1PointsLabelsChanged);
        };
}
//---------------------------------------------------------------------------


void __fastcall TConfigurationForm::Player2ScoresLabelsBtnClick(
      TObject *Sender)
{
        SetButtonPressed(InfoLabelsSheet, ((TButton*) Sender), Player2PointsLabelsChanged, "Внесены изменения для подписей окон очков слева");
}
//---------------------------------------------------------------------------

void __fastcall TConfigurationForm::Player1ScoresLabelsBtnClick(
      TObject *Sender)
{
        SetButtonPressed(InfoLabelsSheet, ((TButton*) Sender), Player1PointsLabelsChanged, "Внесены изменения для подписей окон очков справа");
}
//---------------------------------------------------------------------------

void __fastcall TConfigurationForm::CancelAllBitBtnClick(TObject *Sender)
{
        bool f = Player1PointsLabelsChanged || Player2PointsLabelsChanged || Player1PanelColorChanged ||
                Player2PanelColorChanged || CentralPanelsColorChanged || Player1PanelFontChanged ||
                Player2PanelFontChanged || CentralPanelsFontChanged || Picture1Changed || Picture2Changed;
        if (f == true)
        {
                AnsiString mes = "Есть несохраненные изменения интерфейса:\r\n" + ChangeLogMemo->Text +
                        "\r\n" + "В случае продолжения они не будут применены. Продолжить?";
                if (MessageDlg(mes, mtWarning, mbOKCancel, 0) != mrOk )
                {
                        return;
                }
        }
        ModalResult = mrCancel;
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
        SetButtonPressed(PanelsColorTabSheet, ((TButton*) Sender), Player2PanelColorChanged, "Внесены изменения цвета панелей слева");
}
//---------------------------------------------------------------------------


void __fastcall TConfigurationForm::CategoryPanelColorBoxChange(
      TObject *Sender)
{
        ElementWasChanged(PanelsColorTabSheet, SetCentralPanelColorBitBtn, CentralPanelsColorChanged);
}
//---------------------------------------------------------------------------

void __fastcall TConfigurationForm::SetPlayer1PanelColorBitBtnClick(
      TObject *Sender)
{
        SetButtonPressed(PanelsColorTabSheet, ((TButton*) Sender), Player1PanelColorChanged, "Внесены изменения цвета панелей справа");
}
//---------------------------------------------------------------------------

void __fastcall TConfigurationForm::SetCentralPanelColorBitBtnClick(
      TObject *Sender)
{
        SetButtonPressed(PanelsColorTabSheet, ((TButton*) Sender), CentralPanelsColorChanged, "Внесены изменения цвета центральных панелей");
}
//---------------------------------------------------------------------------

void __fastcall TConfigurationForm::Player1NamePanelColorBoxChange(
      TObject *Sender)
{
        ElementWasChanged(PanelsColorTabSheet, SetPlayer1PanelColorBitBtn, Player1PanelColorChanged);
}
//---------------------------------------------------------------------------

void __fastcall TConfigurationForm::Player2NamePanelColorBoxChange(
      TObject *Sender)
{
        ElementWasChanged(PanelsColorTabSheet, SetPlayer2PanelColorBitBtn, Player2PanelColorChanged);
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
        LoadConfigFromFileWithChange(DEF_INI_FILE);
        /*//здесь будет загрузка параметров по умолчанию из файла Default.ini
        LoadConfigFromFile
        //имитиируем нажатия кнопок, чтобы воспользоваться стандартным вариантом сохранения(как будто мы не гружили, а вручную выбрали все и пронажимали кнопки)
        SetButtonPressed(PanelsFontTabSheet, SetCentralPanelFontBitBtn, CentralPanelsFontChanged, "Внесены изенения в шрифты центральных панелей");
        SetButtonPressed(PanelsFontTabSheet, SetPlayer2PanelFontBitBtn, Player2PanelFontChanged, "Внесены изменения в шрифты панелей слева");
        SetButtonPressed(PanelsFontTabSheet, SetPlayer1PanelFontBitBtn, Player1PanelFontChanged, "Внесены изменения в шрифты панелей справа");

        SetButtonPressed(PanelsColorTabSheet, SetCentralPanelColorBitBtn, CentralPanelsColorChanged, "Внесены изенения цвета центральных панелей");
        SetButtonPressed(PanelsColorTabSheet, SetPlayer2PanelColorBitBtn, Player2PointsLabelsChanged, "Внесены изенения цвета панелей слева");
        SetButtonPressed(PanelsColorTabSheet, SetPlayer1PanelColorBitBtn, Player2PointsLabelsChanged, "Внесены изенения цвета панелей справа");

        SetButtonPressed(InfoLabelsSheet, Player2ScoresLabelsBtn, Player2PointsLabelsChanged, "Внесены изенения для подписей окон очков слева");
        SetButtonPressed(InfoLabelsSheet, Player1ScoresLabelsBtn, Player1PointsLabelsChanged, "Внесены изенения для подписей окон очков справа");

        SetPicture1BitBtnClick(SetPicture1BitBtn);
        SetPicture2BitBtnClick(SetPicture2BitBtn)*/
}
//---------------------------------------------------------------------------

void __fastcall TConfigurationForm::FormCreate(TObject *Sender)
{
        //выставляем положение окна по центру
        if (Screen->MonitorCount > 1)
        {
                this->Left = (Screen->Monitors[0]->Width - this->Width) / 2;
                this->Top = (Screen->Monitors[0]->Height - this->Height) / 2;
        };
      //  INI_FILE = ExtractFileDir(Application->ExeName) + "\\Config\\DesignConfig.ini";
        DEF_INI_FILE = ExtractFileDir(Application->ExeName) + "\\Config\\Default.ini";
        LoadConfigFromFile(INI_FILE);
        //при изменении текста в эдитах возникает событие изменения(в других элементах нет такого). поэтому имитируем нажатие кнопок там, где есть этдиты
        SetButtonPressed(InfoLabelsSheet, Player2ScoresLabelsBtn, Player2PointsLabelsChanged, "Внесены изенения для подписей окон очков слева");
        SetButtonPressed(InfoLabelsSheet, Player1ScoresLabelsBtn, Player1PointsLabelsChanged, "Внесены изенения для подписей окон очков справа");

        SetPicture1BitBtnClick(SetPicture1BitBtn);
        SetPicture2BitBtnClick(SetPicture2BitBtn);
        //*************************************************************************************************************************************************

        ChangeLogMemo->Text = "";

        //устанавливаем флаги
        CentralPanelsFontChanged = false;
        Player2PanelFontChanged = false;
        Player1PanelFontChanged = false;

        Player1PanelColorChanged = false;
        Player2PanelColorChanged = false;
        CentralPanelsColorChanged = false;

        Player1PointsLabelsChanged = false;
        Player2PointsLabelsChanged =false;

        Picture1Changed = false;
        Picture2Changed = false;
        //
        PageControl1->ActivePage = PanelsFontTabSheet;
}
//---------------------------------------------------------------------------




void __fastcall TConfigurationForm::CategoryPanelFontBtnClick(
      TObject *Sender)
{
        if (CategoryPanelFontDialog->Execute())
        {
                ElementWasChanged(PanelsFontTabSheet, SetCentralPanelFontBitBtn, CentralPanelsFontChanged);
        };
}
//---------------------------------------------------------------------------

void __fastcall TConfigurationForm::SetCentralPanelFontBitBtnClick(
      TObject *Sender)
{
        SetButtonPressed(PanelsFontTabSheet, ((TButton*) Sender), CentralPanelsFontChanged, "Внесены изенения в шрифты центральных панелей");
}
//---------------------------------------------------------------------------

void __fastcall TConfigurationForm::SetPlayer2PanelFontBitBtnClick(
      TObject *Sender)
{
        SetButtonPressed(PanelsFontTabSheet, ((TButton*) Sender), Player2PanelFontChanged, "Внесены изменения в шрифты панелей слева");
}
//---------------------------------------------------------------------------

void __fastcall TConfigurationForm::SetPlayer1PanelFontBitBtnClick(
      TObject *Sender)
{
        SetButtonPressed(PanelsFontTabSheet, ((TButton*) Sender), Player1PanelFontChanged, "Внесены изменения в шрифты панелей справа");
}
//---------------------------------------------------------------------------

void __fastcall TConfigurationForm::Player2NamePanelFontBtnClick(
      TObject *Sender)
{
        if (Player2NamePanelFontDialog->Execute())
        {
                ElementWasChanged(PanelsFontTabSheet, SetPlayer2PanelFontBitBtn, Player2PanelFontChanged);
        };
}
//---------------------------------------------------------------------------

void __fastcall TConfigurationForm::TimePanelFontBtnClick(TObject *Sender)
{
        if (TimePanelFontDialog->Execute())
        {
                ElementWasChanged(PanelsFontTabSheet, SetCentralPanelFontBitBtn, CentralPanelsFontChanged);
        };
}
//---------------------------------------------------------------------------

void __fastcall TConfigurationForm::Player2ScoresPanelFontBtnClick(
      TObject *Sender)
{
        if (Player2ScoresPanelFontDialog->Execute())
        {
                ElementWasChanged(PanelsFontTabSheet, SetPlayer2PanelFontBitBtn, Player2PanelFontChanged);
        };
}
//---------------------------------------------------------------------------

void __fastcall TConfigurationForm::Player2AdvantagePanelFontBtnClick(
      TObject *Sender)
{
        if (Player2AdvantagePanelFontDialog->Execute())
        {
                ElementWasChanged(PanelsFontTabSheet, SetPlayer2PanelFontBitBtn, Player2PanelFontChanged);
        };
}
//---------------------------------------------------------------------------

void __fastcall TConfigurationForm::Player2PenaltyPanelFontBtnClick(
      TObject *Sender)
{
        if (Player2PenaltyPanelFontDialog->Execute())
        {
                ElementWasChanged(PanelsFontTabSheet, SetPlayer2PanelFontBitBtn, Player2PanelFontChanged);
        };
}
//---------------------------------------------------------------------------

void __fastcall TConfigurationForm::Player1NamePanelFontBtnClick(
      TObject *Sender)
{
        if (Player1NamePanelFontDialog->Execute())
        {
                ElementWasChanged(PanelsFontTabSheet, SetPlayer1PanelFontBitBtn, Player1PanelFontChanged);
        };
}
//---------------------------------------------------------------------------

void __fastcall TConfigurationForm::Player1ScoresPanelFontBtnClick(
      TObject *Sender)
{
        if (Player1ScoresPanelFontDialog->Execute())
        {
                ElementWasChanged(PanelsFontTabSheet, SetPlayer1PanelFontBitBtn, Player1PanelFontChanged);
        };
}
//---------------------------------------------------------------------------

void __fastcall TConfigurationForm::Player1AdvantagePanelFontBtnClick(
      TObject *Sender)
{
        if (Player1AdvantagePanelFontDialog->Execute())
        {
                ElementWasChanged(PanelsFontTabSheet, SetPlayer1PanelFontBitBtn, Player1PanelFontChanged);
        };
}
//---------------------------------------------------------------------------

void __fastcall TConfigurationForm::Player1PenaltyPanelFontBtnClick(
      TObject *Sender)
{
        if (Player1PenaltyPanelFontDialog->Execute())
        {
                ElementWasChanged(PanelsFontTabSheet, SetPlayer1PanelFontBitBtn, Player1PanelFontChanged);
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

void __fastcall TConfigurationForm::Picture1BiBtnClick(TObject *Sender)
{
        if (OpenPictureDialog->Execute())
        {
                Picture1Edit->Text = OpenPictureDialog->FileName;
        }
}
//---------------------------------------------------------------------------

void __fastcall TConfigurationForm::Picture1EditChange(TObject *Sender)
{
        if (Picture1Edit->Text != "")
        {
                ElementWasChanged(PictureSelectTab, SetPicture1BitBtn, Picture1Changed);
        }
}
//---------------------------------------------------------------------------

void __fastcall TConfigurationForm::Picture2EditChange(TObject *Sender)
{
        if (Picture2Edit->Text != "")
        {
                ElementWasChanged(PictureSelectTab, SetPicture2BitBtn, Picture2Changed);
        }
}
//---------------------------------------------------------------------------

void __fastcall TConfigurationForm::Picture2BitBtnClick(TObject *Sender)
{
        if (OpenPictureDialog->Execute())
        {
                Picture2Edit->Text = OpenPictureDialog->FileName;
        }
}
//---------------------------------------------------------------------------

void __fastcall TConfigurationForm::SetPicture1BitBtnClick(TObject *Sender)
{
        if (FileExists(Picture1Edit->Text) == false)
        {
                ShowMessage("Файла картинки 1 по выбранному пути не существует");
        }
        else
        {
                try
                {
                        Image1->Picture->LoadFromFile(Picture1Edit->Text);
                        SetButtonPressed(PictureSelectTab, ((TButton*) Sender), Picture1Changed, "Изменена картинка № 1");
                }
                catch (...)
                {
                        ShowMessage("Возникла ошибка при загрузке файла изображения");
                        Picture1Changed = false;
                }
        };
        ((TButton*) Sender)->Enabled = false;
}
//---------------------------------------------------------------------------

void __fastcall TConfigurationForm::SetPicture2BitBtnClick(TObject *Sender)
{
        if (FileExists(Picture2Edit->Text) == false)
        {
                ShowMessage("Файла картинки 2 по выбранному пути не существует");
        }
        else
        {
                try
                {
                        Image2->Picture->LoadFromFile(Picture2Edit->Text);
                        SetButtonPressed(PictureSelectTab, ((TButton*) Sender), Picture2Changed, "Изменена картинка № 2");
                }
                catch (...)
                {
                        ShowMessage("Возникла ошибка при загрузке файла изображения");
                        Picture2Changed = false;
                }
        };
        ((TButton*) Sender)->Enabled = false;
}
//---------------------------------------------------------------------------

int TConfigurationForm::WritePicturesPathToFile()
{
        AnsiString section = "PicturesPath";
        TIniFile* ini;
        ini = NULL;
        try
        {
                ini = new TIniFile(INI_FILE);


                if (Picture1Changed == true)
                {
                        ini->WriteString(section,"Picture1",Picture1Edit->Text);
                };

                if (Picture2Changed == true)
                {
                        ini->WriteString(section,"Picture2",Picture2Edit->Text);
                };

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

int TConfigurationForm::ElementWasChanged(TTabSheet* tab, TButton* btn, bool & flag )
{
        AddAsteriskToTabName(true, tab,  btn->Enabled); //добавляем звездочку в название закладки
        btn->Enabled = true; //разблокируем главную кнопку
        flag = false; //ставим флаг принятия изменений 0, поскольку информация для приема уже изменена, но не подтверждена
        return 0;
}

int TConfigurationForm::SetButtonPressed(TTabSheet* tab, TButton* btn, bool & flag, AnsiString mes)
{
        btn->Enabled = false;   //выключаем кнопку
        AddAsteriskToTabName(false, tab, false); //убираем звездочку из вкладки
        flag = true; //флаг изменения ставим да
        ChangeLogMemo->Lines->Add(mes); //добавляем сообщение в информационное окно
        return 0;
}

int TConfigurationForm::LoadConfigFromFile(AnsiString iniPath)
{
        //после загрузки значений сделать все кнопки недоступными, сбросить флаги и убрать звезды
        //проверяем
        if (FileExists(iniPath) == false)
        {
                ShowMessage("Файл настроек не найден");
                return 1;
        }
        TIniFile* ini;
        ini = NULL;
        try
        {
                ini = new TIniFile(iniPath);
                LoadPlayer1ScoresLabelsConfigFromFile(ini);
                LoadPlayer2ScoresLabelsConfigFromFile(ini);
                LoadPlayer1PanelColorFromFile(ini);
                LoadPlayer2PanelColorFromFile(ini);
                LoadCentralPanelColorFromFile(ini);
                LoadCentralPanelFontFromFile(ini);
                LoadPlayer1PanelFontFromFile(ini);
                LoadPlayer2PanelFontFromFile(ini);
                LoadPicturesPathFromFile(ini);
        }
        catch (...)
        {
                if (ini != NULL)
                {
                        delete ini;
                }
                return 2;
        }

        delete ini;
        return 0;



}

int TConfigurationForm::LoadFontParameters(TIniFile* ini, TFont* f, AnsiString section, AnsiString ident)
{

        f->Style = f->Style.Clear();

        f->Name = ini->ReadString(section, ident + "_name","Arial");
        f->Color = StringToColor(ini->ReadString(section, ident + "_color","clBlack"));
        f->Size = ini->ReadInteger(section, ident + "_size",20);

        if (ini->ReadBool(section, ident + "_Bold", false))
        {
                f->Style = f->Style << fsBold;
        };
        if (ini->ReadBool(section, ident + "_Italic", false))
        {
                f->Style = f->Style << fsItalic;
        };
        if (ini->ReadBool(section, ident + "_Underline", false))
        {
                f->Style = f->Style << fsUnderline;
        };
        if (ini->ReadBool(section, ident + "_StrikeOut", false))
        {
                f->Style = f->Style << fsStrikeOut;
        };

        return 0;
}

int TConfigurationForm::LoadPlayer1ScoresLabelsConfigFromFile(TIniFile* ini)
{
        AnsiString section = "Player1PointsLabelsConfig";
        //записываем текст
        Player1ScoresLabelText->Text = ini->ReadString(section, "Player1ScoresText", "Очки");
        Player1AdvantageLabelText->Text = ini->ReadString(section, "Player1AdvantageText", "Преимущества");
        Player1PenaltyLabelText->Text = ini->ReadString(section, "Player1PenaltyText", "Штрафы");

        //записываем параметры шрифтов
        //очки
        LoadFontParameters( ini,Player1ScoresLabelTextFontDialog->Font, section, "Player1ScoresFont" );
        //преимущества
        LoadFontParameters( ini,Player1AdvantageLabelTextFontDialog->Font, section, "Player1AdvantageFont" );
        //пенальти
        LoadFontParameters( ini,Player1PenaltyLabelTextFontDialog->Font, section, "Player1PenaltyFont" );

        return 0;
}

int TConfigurationForm::LoadPlayer2ScoresLabelsConfigFromFile(TIniFile* ini)
{
        AnsiString section = "Player2PointsLabelsConfig";
        //записываем текст
        Player2ScoresLabelText->Text = ini->ReadString(section, "Player2ScoresText", "Очки");
        Player2AdvantageLabelText->Text = ini->ReadString(section, "Player2AdvantageText", "Преимущества");
        Player2PenaltyLabelText->Text = ini->ReadString(section, "Player2PenaltyText", "Штрафы");

        //записываем параметры шрифтов
        //очки
        LoadFontParameters( ini,Player2ScoresLabelTextFontDialog->Font, section, "Player2ScoresFont" );
        //преимущества
        LoadFontParameters( ini,Player2AdvantageLabelTextFontDialog->Font, section, "Player2AdvantageFont" );
        //пенальти
        LoadFontParameters( ini,Player2PenaltyLabelTextFontDialog->Font, section, "Player2PenaltyFont" );

        return 0;
}

int TConfigurationForm::LoadPlayer1PanelColorFromFile(TIniFile* ini)
{
        AnsiString section = "Player1PanelsColorConfig";
        //считываем параметры цвета панелей
        Player1NamePanelColorBox->Selected = StringToColor(ini->ReadString(section,"Player1NamePanelColor", clWhite));
        Player1ScoresPanelColorBox->Selected = StringToColor(ini->ReadString(section,"Player1ScoresPanelColor", clWhite));
        Player1AdvantagePanelColorBox->Selected = StringToColor(ini->ReadString(section,"Player1AdvantagePanelColor", clWhite));
        Player1PenaltyPanelColorBox->Selected = StringToColor(ini->ReadString(section,"Player1PenaltyPanelColor", clWhite));
        return 0;
}

int TConfigurationForm::LoadPlayer2PanelColorFromFile(TIniFile* ini)
{
        AnsiString section = "Player2PanelsColorConfig";
        //считываем параметры цвета панелей
        Player2NamePanelColorBox->Selected = StringToColor(ini->ReadString(section,"Player2NamePanelColor", clWhite));
        Player2ScoresPanelColorBox->Selected = StringToColor(ini->ReadString(section,"Player2ScoresPanelColor", clWhite));
        Player2AdvantagePanelColorBox->Selected = StringToColor(ini->ReadString(section,"Player2AdvantagePanelColor", clWhite));
        Player2PenaltyPanelColorBox->Selected = StringToColor(ini->ReadString(section,"Player2PenaltyPanelColor", clWhite));
        return 0;
}

int TConfigurationForm::LoadCentralPanelColorFromFile(TIniFile* ini)
{
        AnsiString section = "CentralPanelColorConfig";
        //считываем параметры цвета панелей
        CategoryPanelColorBox->Selected = StringToColor(ini->ReadString(section,"CategoryPanelColor", clWhite));
        TimePanelColorBox->Selected = StringToColor(ini->ReadString(section,"TimePanelColor", clWhite));
        return 0;
}

int TConfigurationForm::LoadCentralPanelFontFromFile(TIniFile* ini)
{
        AnsiString section = "CentralPanelFontConfig";
        //считываем параметры шрифтов
        //категории
        LoadFontParameters( ini,CategoryPanelFontDialog->Font, section, "CategoryPanelFont" );
        //время
        LoadFontParameters( ini,TimePanelFontDialog->Font, section, "TimePanelFont" );
        return 0;
}

int TConfigurationForm::LoadPlayer1PanelFontFromFile(TIniFile* ini)
{
        AnsiString section = "Player1PanelFontConfig";
        //считываем параметры шрифтов
        //имя
        LoadFontParameters( ini,Player1NamePanelFontDialog->Font, section, "NamePanelFont" );
        //очки
        LoadFontParameters( ini,Player1ScoresPanelFontDialog->Font, section, "ScoresPanelFont" );
        //преимущества
        LoadFontParameters( ini,Player1AdvantagePanelFontDialog->Font, section, "AdvantagePanelFont" );
        //штрафы
        LoadFontParameters( ini,Player1PenaltyPanelFontDialog->Font, section, "PenaltyPanelFont" );
        return 0;
}

int TConfigurationForm::LoadPlayer2PanelFontFromFile(TIniFile* ini)
{
        AnsiString section = "Player2PanelFontConfig";
        //считываем параметры шрифтов
        //имя
        LoadFontParameters( ini,Player2NamePanelFontDialog->Font, section, "NamePanelFont" );
        //очки
        LoadFontParameters( ini,Player2ScoresPanelFontDialog->Font, section, "ScoresPanelFont" );
        //преимущества
        LoadFontParameters( ini,Player2AdvantagePanelFontDialog->Font, section, "AdvantagePanelFont" );
        //штрафы
        LoadFontParameters( ini,Player2PenaltyPanelFontDialog->Font, section, "PenaltyPanelFont" );
        return 0;
}

int TConfigurationForm::LoadPicturesPathFromFile(TIniFile* ini)
{
        AnsiString section = "PicturesPath";
        Picture1Edit->Text = ini->ReadString(section,"Picture1","");
        try
        {
                Image1->Picture->LoadFromFile(Picture1Edit->Text);
        }
        catch (...)
        {
                ShowMessage("Ошибка загрузки картинки № 1");
                Picture1Edit->Text = "";
        }
        Picture2Edit->Text = ini->ReadString(section,"Picture2","");
        try
        {
                Image2->Picture->LoadFromFile(Picture2Edit->Text);
        }
        catch (...)
        {
                ShowMessage("Ошибка загрузки картинки № 2");
                Picture2Edit->Text = "";
        }
        return 0;
}

void __fastcall TConfigurationForm::OpenCustomConfigPathBitBtnClick(
      TObject *Sender)
{
        OpenCustomConfigPathDialog->InitialDir = ExtractFileDir(Application->ExeName) + "\\Config";
        if (OpenCustomConfigPathDialog->Execute())
        {
                CustomConfigPathEdit->Text = OpenCustomConfigPathDialog->FileName;
        }
}
//---------------------------------------------------------------------------

void __fastcall TConfigurationForm::CustomConfigPathEditChange(
      TObject *Sender)
{
        if (CustomConfigPathEdit->Text != "")
        {
                bool f;
                ElementWasChanged(LoadCustomConfigTab, AcceptCustomConfigBitBtn, f);
        }
}
//---------------------------------------------------------------------------

int TConfigurationForm::LoadConfigFromFileWithChange(AnsiString iniFile)
{
        //здесь будет загрузка параметров по умолчанию из файла Default.ini
        LoadConfigFromFile(iniFile);
        //имитиируем нажатия кнопок, чтобы воспользоваться стандартным вариантом сохранения(как будто мы не гружили, а вручную выбрали все и пронажимали кнопки)
        SetButtonPressed(PanelsFontTabSheet, SetCentralPanelFontBitBtn, CentralPanelsFontChanged, "Внесены изенения в шрифты центральных панелей");
        SetButtonPressed(PanelsFontTabSheet, SetPlayer2PanelFontBitBtn, Player2PanelFontChanged, "Внесены изменения в шрифты панелей слева");
        SetButtonPressed(PanelsFontTabSheet, SetPlayer1PanelFontBitBtn, Player1PanelFontChanged, "Внесены изменения в шрифты панелей справа");

        SetButtonPressed(PanelsColorTabSheet, SetCentralPanelColorBitBtn, CentralPanelsColorChanged, "Внесены изенения цвета центральных панелей");
        SetButtonPressed(PanelsColorTabSheet, SetPlayer2PanelColorBitBtn, Player2PointsLabelsChanged, "Внесены изенения цвета панелей слева");
        SetButtonPressed(PanelsColorTabSheet, SetPlayer1PanelColorBitBtn, Player2PointsLabelsChanged, "Внесены изенения цвета панелей справа");

        SetButtonPressed(InfoLabelsSheet, Player2ScoresLabelsBtn, Player2PointsLabelsChanged, "Внесены изенения для подписей окон очков слева");
        SetButtonPressed(InfoLabelsSheet, Player1ScoresLabelsBtn, Player1PointsLabelsChanged, "Внесены изенения для подписей окон очков справа");

        SetPicture1BitBtnClick(SetPicture1BitBtn);
        SetPicture2BitBtnClick(SetPicture2BitBtn);

        return 0;
}
void __fastcall TConfigurationForm::AcceptCustomConfigBitBtnClick(
      TObject *Sender)
{
        if (CustomConfigPathEdit->Text != "")
        {
                if (LoadConfigFromFileWithChange(CustomConfigPathEdit->Text) != 0)
                {
                        ShowMessage("Не удалось загрузить конфигурацию из выбранного файла.");
                };
                bool f;
                SetButtonPressed(LoadCustomConfigTab, ((TButton*) Sender), f, "Загружена конфигурация");
        }
}
//---------------------------------------------------------------------------

