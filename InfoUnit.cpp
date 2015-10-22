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
        //выставляем положение окна по центру
        if (Screen->MonitorCount > 1)
        {
                this->Left = (Screen->Monitors[0]->Width - this->Width) / 2;
                this->Top = (Screen->Monitors[0]->Height - this->Height) / 2;
        }
        else
        {
                this->Left = (Screen->Width - this->Width) / 2;
                this->Top = (Screen->Height - this->Height) / 2;
        }

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
