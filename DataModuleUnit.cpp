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

int TDataModule1::GetNamesFromDB(TStringList *sl, AnsiString age, AnsiString belt, AnsiString weight)
{
try
{
        ADOConnection->Open();
        //устанавливаем параметры и запускаем запрос
        PlayersADOQuery->Parameters->ParamValues["age"] = age;
        PlayersADOQuery->Parameters->ParamValues["belt"] = belt;
        PlayersADOQuery->Parameters->ParamValues["weight"] = weight;
        PlayersADOQuery->Open();
        if (PlayersADOQuery->IsEmpty() != true)
        {
                PlayersADOQuery->First();
                while (!PlayersADOQuery->Eof)
                {
                        sl->Add(PlayersADOQuery->FieldByName("FIO")->AsString);
                        PlayersADOQuery->Next();
                }
                ADOConnection->Close();
                PlayersADOQuery->Close();
                return 0;
        }
        else
        {
                ADOConnection->Close();
                PlayersADOQuery->Close();
                return 1;
        }
}
catch(...)
{
        ADOConnection->Close();
        PlayersADOQuery->Close();
        return 2;
}
}

int TDataModule1::WriteResultsToDB(AnsiString pl1, AnsiString scores1, AnsiString pl2, AnsiString scores2, AnsiString winner,
                AnsiString winreason, AnsiString TimeToEnd,
                AnsiString age, AnsiString belt, AnsiString weight)
{
try
{
        ADOConnection->Open();
        //устанавливаем параметры и запускаем запрос
        ResultsADOQuery->Parameters->ParamValues["pl1"] = pl1;
        ResultsADOQuery->Parameters->ParamValues["scores1"] = scores1;
        ResultsADOQuery->Parameters->ParamValues["pl2"] = pl2;
        ResultsADOQuery->Parameters->ParamValues["scores2"] = scores2;
        ResultsADOQuery->Parameters->ParamValues["winner"] = winner;
        ResultsADOQuery->Parameters->ParamValues["winreason"] = winreason;
        ResultsADOQuery->Parameters->ParamValues["TimeToEnd"] = TimeToEnd;
        ResultsADOQuery->Parameters->ParamValues["age"] = age;
        ResultsADOQuery->Parameters->ParamValues["belt"] = belt;
        ResultsADOQuery->Parameters->ParamValues["weight"] = weight;
        ResultsADOQuery->Parameters->ParamValues["time"] = Now();
        ResultsADOQuery->ExecSQL();
        return 0;
}
catch(...)
{
        ADOConnection->Close();
        return 1;
}
}

void __fastcall TDataModule1::DataModuleCreate(TObject *Sender)
{
        ADOConnection->Close();        
}
//---------------------------------------------------------------------------

int TDataModule1::TestDBConnection()
{
try
{
        ADOConnection->Open();
        //устанавливаем параметры и запускаем запрос
        TestADOQuery->Open();
        ADOConnection->Close();
        TestADOQuery->Close();
        return 0;
}
catch(...)
{
        ADOConnection->Close();
        TestADOQuery->Close();
        return 1;
}
}
