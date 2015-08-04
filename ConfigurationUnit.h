//---------------------------------------------------------------------------

#ifndef ConfigurationUnitH
#define ConfigurationUnitH
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <ExtCtrls.hpp>
#include <ComCtrls.hpp>
#include <Buttons.hpp>
#include <Dialogs.hpp>
#include <IniFiles.hpp>
//---------------------------------------------------------------------------
class TConfigurationForm : public TForm
{
__published:	// IDE-managed Components
        TPageControl *PageControl1;
        TTabSheet *InfoLabelsSheet;
        TTabSheet *TabSheet2;
        TTabSheet *TabSheet3;
        TLabeledEdit *Player2AdvantageLabelText;
        TLabeledEdit *Player1ScoresLabelText;
        TLabeledEdit *Player1AdvantageLabelText;
        TLabeledEdit *Player1PenaltyLabelText;
        TLabeledEdit *Player2PenaltyLabelText;
        TLabeledEdit *Player2ScoresLabelText;
        TBitBtn *BitBtn1;
        TBitBtn *BitBtn2;
        TFontDialog *FontDialog1;
        TBitBtn *BitBtn3;
        void __fastcall Player1ScoresLabelTextChange(TObject *Sender);
        int __fastcall WriteInfoLabelsConfigToFile();
        void __fastcall BitBtn1Click(TObject *Sender);
        void __fastcall BitBtn3Click(TObject *Sender);
private:	// User declarations
public:		// User declarations
        __fastcall TConfigurationForm(TComponent* Owner);

        bool InfoLabelsFlag; //флаг изменения информации на вкладке изменения информационных лейблов
};
//---------------------------------------------------------------------------
extern PACKAGE TConfigurationForm *ConfigurationForm;
//---------------------------------------------------------------------------
#endif
