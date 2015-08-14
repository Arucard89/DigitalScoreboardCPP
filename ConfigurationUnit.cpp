//---------------------------------------------------------------------------
//при загрузке окна получаем данные из ини файла.
//ƒл€ каждой группы параметров свой флаг применени€ изменений
//при подтверждении параметров флаг мен€етс€ на тру
//после закрыти€ окна(по кнопке применить изменени€), изменени€ записываютс€ в ини файл и в родительском окне примен€ютс€ настройки из ини файла
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
/*int __fastcall TConfigurationForm::WriteInfoLabelsConfigToFile()   //записываем конфиг дл€ лейблов
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
        try
        {
                TIniFile *ini = new TIniFile(INI_FILE);
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

               /* ini->WriteString("Player1PointsLabelsConfig","Player1ScoresFont_name",Player1ScoresLabelTextFontDialog->Font->Name);
                ini->WriteString("Player1PointsLabelsConfig","Player1ScoresFont_color",ColorToString(Player1ScoresLabelTextFontDialog->Font->Color));
                ini->WriteInteger("Player1PointsLabelsConfig","Player1ScoresFont_size",Player1ScoresLabelTextFontDialog->Font->Size);

                ini->WriteBool("Player1PointsLabelsConfig", "Player1ScoresFont_Bold", Player1ScoresLabelTextFontDialog->Font->Style.Contains(fsBold));
                ini->WriteBool("Player1PointsLabelsConfig", "Player1ScoresFont_Italic", Player1ScoresLabelTextFontDialog->Font->Style.Contains(fsItalic));
                ini->WriteBool("Player1PointsLabelsConfig", "Player1ScoresFont_Underline", Player1ScoresLabelTextFontDialog->Font->Style.Contains(fsUnderline));
                ini->WriteBool("Player1PointsLabelsConfig", "Player1ScoresFont_StrikeOut", Player1ScoresLabelTextFontDialog->Font->Style.Contains(fsStrikeOut));
                 */
                 return 0;
         }
         catch (...)
         {
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
        WritePlayer1ScoresLabelsConfigToFile();
}
//---------------------------------------------------------------------------

void __fastcall TConfigurationForm::Player2ScoresLabelTextFontBitBtnClick(
      TObject *Sender)
{
        Player2ScoresLabelTextFontDialog->Execute();
}
//---------------------------------------------------------------------------

void __fastcall TConfigurationForm::Player2AdvantageLabelTextFontBitBtnClick(
      TObject *Sender)
{
        Player2AdvantageLabelTextFontDialog->Execute();
}
//---------------------------------------------------------------------------


void __fastcall TConfigurationForm::Player2PenaltyLabelTextFontBitBtnClick(
      TObject *Sender)
{
        Player2PenaltyLabelTextFontDialog->Execute();
}
//---------------------------------------------------------------------------
//доделать выгрузку ини дл€ второго игрока!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
