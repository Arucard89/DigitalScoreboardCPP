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
        int GetWeights(TStringList *sl, AnsiString age); //�������� ������ ������� �� ���� (��� ������� � ���������)
        int GetAges(TStringList *sl); //�������� ������ ���������� �� ����
        int GetBelts(TStringList *sl); //�������� ������ ������ �� ����
        int GetInfoFromDB(TADOQuery *query, AnsiString fieldName ,TStringList *sl, AnsiString age = NULL);   // ����� ��������� ��������� ������ �� ��
        int GetNamesFromDB(TStringList *sl, AnsiString age, AnsiString belt, AnsiString weight); //��������� ������ ���� ������ �� ��
        int WriteResultsToDB(AnsiString pl1, AnsiString pl2, AnsiString winner,
                AnsiString winreason, AnsiString TimeToEnd,
                AnsiString age, AnsiString belt, AnsiString weight); //������ ����������� ������� � ��

};
//---------------------------------------------------------------------------
extern PACKAGE TDataModule1 *DataModule1;
//---------------------------------------------------------------------------
#endif
