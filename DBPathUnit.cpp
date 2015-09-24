//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "DBPathUnit.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
//TDBPathForm *DBPathForm;
//---------------------------------------------------------------------------
__fastcall TDBPathForm::TDBPathForm(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TDBPathForm::BrowseBtnClick(TObject *Sender)
{
        if (OpenDialog1->Execute())
        {
                DBPathEdit->Text = OpenDialog1->FileName;
        }
}
//---------------------------------------------------------------------------
void __fastcall TDBPathForm::OkBtnClick(TObject *Sender)
{
        if (FileExists(DBPathEdit->Text) == true)
        {
                ModalResult = mrOk;
        }
        else
        {
                ShowMessage("Файл по выбранному пути не существует");
        }
}
//---------------------------------------------------------------------------

