//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "FightResultUnit.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
//TFightResultForm *FightResultForm;
//---------------------------------------------------------------------------
__fastcall TFightResultForm::TFightResultForm(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------
void TFightResultForm::LoadPlayerNames(AnsiString player1, AnsiString player2)
{
        WinnerBox->Clear();
        WinnerBox->Items->Add(player1);
        WinnerBox->Items->Add(player2);
        WinnerBox->ItemIndex = 0;
}
void TFightResultForm::LoadWinReasons(TStringList &winReasons)
{
        WinReasonBox->Clear();
        WinReasonBox->Items->Text = winReasons.Text;
}
void __fastcall TFightResultForm::OKBtnClick(TObject *Sender)
{
        if (Trim(WinReasonBox->Text) == "" || Trim(WinnerBox->Text) == "")
        {
                ShowMessage("Все поля должны быть заполнены");
                ModalResult = mrNone;
        };
}
//---------------------------------------------------------------------------

