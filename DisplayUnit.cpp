//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "DisplayUnit.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
//TDisplayForm *DisplayForm;
//---------------------------------------------------------------------------
__fastcall TDisplayForm::TDisplayForm(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TDisplayForm::FormResize(TObject *Sender)    //������������ ��� ������ ��� ������� ������ ����
{
        //main panels
        int w;
        w = this->Width * 0.40 - this->BorderWidth; //��������� ������ ������� ������� (�������� ������)0
        LeftPanel->Width = w;
        RightPanel->Width = w;
        TopPanel->Height = this->Height*0.35 - this->BorderWidth*2; //��������� ����� ����� � ������
        if ((CentralTopPanel->Width *2) < (CentralPanel->Height * 0.99))     //�������, ����� �������� �� ������������
        {
                CentralTopPanel->Height = CentralTopPanel->Width;      //������ ����������� �������� ���������
                CentralBottomPanel->Height = CentralBottomPanel->Width;
        }
        else
        {
                int h;
                h = CentralPanel->Height * 0.495;
                CentralTopPanel->Height = h;
                CentralBottomPanel->Height = h;
        };
        //top panel
        CategoryPanel->Height = TopPanel->Height*0.2;
        w = CategoryPanel->Width * 0.33;
        Player1Label->Width = w;
        Player2Label->Width = w;
        //player scores panels
        Player1Scores->Height = LeftPanel->Height * 0.6;
        Player1Advantage->Width = LeftPanel->Width * 0.5;
        Player2Scores->Height = RightPanel->Height * 0.6;
        Player2Advantage->Width = RightPanel->Width * 0.5;
}
//---------------------------------------------------------------------------

