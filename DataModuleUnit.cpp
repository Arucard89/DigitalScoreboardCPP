//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "DataModuleUnit.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TDataModule1 *DataModule1;
//---------------------------------------------------------------------------
__fastcall TDataModule1::TDataModule1(TComponent* Owner)
        : TDataModule(Owner)
{
}
//---------------------------------------------------------------------------
int TDataModule1::GetInfoFromDB(TADOQuery *query, AnsiString fieldName ,TStringList *sl, AnsiString age)
{
try
{
        ADOConnection->Open();
        if (age != NULL)
        {
                query->SQL->Text = "SELECT t_weights.weight FROM (t_ages INNER JOIN t_weights ON t_ages.id = t_weights.age) WHERE t_ages.age = " + QuotedStr(age);
        }
        query->Open();
        if (query->IsEmpty() != true)
        {
                query->First();
                while (!query->Eof)
                {
                        sl->Add(query->FieldByName(fieldName)->AsString);
                        query->Next();
                }
                ADOConnection->Close();
                query->Close();
                return 0;
        }
        else
        {
                ADOConnection->Close();
                query->Close();
                return 1;
        }
}
catch(...)
{
        ADOConnection->Close();
        query->Close();
        return 2;
}
}

int TDataModule1::GetAges(TStringList *sl)
{
        return GetInfoFromDB(AgeADOQuery, "age", sl);
};

int TDataModule1::GetWeights(TStringList *sl, AnsiString age)
{
        return GetInfoFromDB(WeightADOQuery, "Weight", sl, age);
};

int TDataModule1::GetBelts(TStringList *sl)
{
        return GetInfoFromDB(BeltADOQuery, "Belt", sl);
};






