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
private:	// User declarations
public:		// User declarations
        __fastcall TDataModule1(TComponent* Owner);
        int GetWeights(TStringList *sl, AnsiString age); //�������� ������ ������� �� ���� (��� ������� � ���������)
        int GetAges(TStringList *sl); //�������� ������ ���������� �� ����
        int GetBelts(TStringList *sl); //�������� ������ ������ �� ����
        int GetInfoFromDB(TADOQuery *query, AnsiString fieldName ,TStringList *sl, AnsiString age = NULL);

        
};
//---------------------------------------------------------------------------
extern PACKAGE TDataModule1 *DataModule1;
//---------------------------------------------------------------------------
#endif
