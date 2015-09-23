//---------------------------------------------------------------------------

#ifndef DataModuleUnitH
#define DataModuleUnitH
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <ADODB.hpp>
#include <DB.hpp>
//---------------------------------------------------------------------------
class TDataModule1 : public TDataModule
{
__published:	// IDE-managed Components
        TADOConnection *ADOConnection;
        TADOQuery *WeightADOQuery;
        TADOQuery *AgeADOQuery;
        TADOQuery *BeltADOQuery;
        TADOQuery *PlayersADOQuery;
        TADOQuery *ResultsADOQuery;
        void __fastcall DataModuleCreate(TObject *Sender);
private:	// User declarations
public:		// User declarations
        __fastcall TDataModule1(TComponent* Owner);
        int GetWeights(TStringList *sl, AnsiString age); //получаем список весовых из базы (они связаны с возрастом)
        int GetAges(TStringList *sl); //получаем список возрастных из базы
        int GetBelts(TStringList *sl); //получаем список поясов из базы
        int GetInfoFromDB(TADOQuery *query, AnsiString fieldName ,TStringList *sl, AnsiString age = NULL);   // общая процедура получения данных из БД
        int GetNamesFromDB(TStringList *sl, AnsiString age, AnsiString belt, AnsiString weight); //получение списка имен борцов из БД
        int WriteResultsToDB(AnsiString pl1, AnsiString pl2, AnsiString winner,
                AnsiString winreason, AnsiString TimeToEnd,
                AnsiString age, AnsiString belt, AnsiString weight); //запись результатов схватки в БД

};
//---------------------------------------------------------------------------
extern PACKAGE TDataModule1 *DataModule1;
//---------------------------------------------------------------------------
#endif
