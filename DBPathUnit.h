//---------------------------------------------------------------------------

#ifndef DBPathUnitH
#define DBPathUnitH
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <Buttons.hpp>
#include <ExtCtrls.hpp>
#include <Dialogs.hpp>
//---------------------------------------------------------------------------
class TDBPathForm : public TForm
{
__published:	// IDE-managed Components
        TLabeledEdit *DBPathEdit;
        TBitBtn *BrowseBtn;
        TBitBtn *OkBtn;
        TBitBtn *CancelBtn;
        TOpenDialog *OpenDialog1;
        void __fastcall BrowseBtnClick(TObject *Sender);
        void __fastcall OkBtnClick(TObject *Sender);
private:	// User declarations
public:		// User declarations
        __fastcall TDBPathForm(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TDBPathForm *DBPathForm;
//---------------------------------------------------------------------------
#endif
