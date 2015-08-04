//---------------------------------------------------------------------------

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
        InfoLabelsFlag = false;
}
//---------------------------------------------------------------------------
void __fastcall TConfigurationForm::Player1ScoresLabelTextChange(
      TObject *Sender)
{
        if (InfoLabelsFlag == false)
        {
                InfoLabelsSheet->Caption = InfoLabelsSheet->Caption + '*';
        }
        InfoLabelsFlag = true;
}
//---------------------------------------------------------------------------
int __fastcall TConfigurationForm::WriteInfoLabelsConfigToFile()   //записываем конфиг для лейблов
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
}
//---------------------------------------------------------------------------
void __fastcall TConfigurationForm::BitBtn1Click(TObject *Sender)
{
        if (InfoLabelsFlag == true)
        {
                WriteInfoLabelsConfigToFile();
        }
}
//---------------------------------------------------------------------------
void __fastcall TConfigurationForm::BitBtn3Click(TObject *Sender)
{
        FontDialog1->Execute();
        //FontDialog1->
}
//---------------------------------------------------------------------------
