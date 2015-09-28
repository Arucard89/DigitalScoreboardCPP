//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "InfoUnit.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
//TInfoForm *InfoForm;
//---------------------------------------------------------------------------
__fastcall TInfoForm::TInfoForm(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TInfoForm::FormCreate(TObject *Sender)
{
        AnsiString s = ExtractFileDir(Application->ExeName) + "\\images\\all_emblems.jpg";
        if (FileExists(s))
        {
                Image1->Picture->LoadFromFile(s);
        }
        else
        {
                Image1->Height = 0;
        }
}
//---------------------------------------------------------------------------
