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
const AnsiString INI_FILE = ".\\Config\\DesignConfig.ini";

class TConfigurationForm : public TForm
{
__published:	// IDE-managed Components
        TPageControl *PageControl1;
        TTabSheet *InfoLabelsSheet;
        TTabSheet *TabSheet2;
        TTabSheet *TabSheet3;
        TBitBtn *BitBtn1;
        TBitBtn *BitBtn2;
        TGroupBox *GroupBox1;
        TFontDialog *Player1ScoresLabelTextFontDialog;
        TLabeledEdit *Player1ScoresLabelText;
        TLabeledEdit *Player1AdvantageLabelText;
        TLabeledEdit *Player1PenaltyLabelText;
        TGroupBox *GroupBox2;
        TLabeledEdit *Player2PenaltyLabelText;
        TLabeledEdit *Player2AdvantageLabelText;
        TLabeledEdit *Player2ScoresLabelText;
        TBitBtn *Player1ScoresLabelTextFontBitBtn;
        TBitBtn *Player1AdvantageLabelTextFontBitBtn;
        TBitBtn *Player1PenaltyLabelTextFontBitBtn;
        TBitBtn *Player2ScoresLabelTextFontBitBtn;
        TBitBtn *Player2AdvantageLabelTextFontBitBtn;
        TBitBtn *Player2PenaltyLabelTextFontBitBtn;
        TFontDialog *Player1AdvantageLabelTextFontDialog;
        TFontDialog *Player1PenaltyLabelTextFontDialog;
        TFontDialog *Player2ScoresLabelTextFontDialog;
        TFontDialog *Player2AdvantageLabelTextFontDialog;
        TFontDialog *Player2PenaltyLabelTextFontDialog;
        TBitBtn *Player2ScoresLabelsBtn;
        TBitBtn *Player1ScoresLabelsBtn;
        void __fastcall Player1ScoresLabelTextChange(TObject *Sender);
        void __fastcall BitBtn3Click(TObject *Sender);
        //void __fastcall Player1PenaltyLabelTextChange(TObject *Sender);
        void __fastcall Player2ScoresLabelTextChange(TObject *Sender);
        void __fastcall BitBtn1Click(TObject *Sender);
        void __fastcall Player2ScoresLabelTextFontBitBtnClick(
          TObject *Sender);
        void __fastcall Player2AdvantageLabelTextFontBitBtnClick(
          TObject *Sender);
        void __fastcall Player2PenaltyLabelTextFontBitBtnClick(
          TObject *Sender);
private:	// User declarations
public:		// User declarations
        bool Player1PointsLabelsCanged;
        bool Player2PointsLabelsCanged;
        __fastcall TConfigurationForm(TComponent* Owner);

        bool InfoLabelsFlag; //флаг изменения информации на вкладке изменения информационных лейблов
        void AddAsteriskToTabName(bool needAsterisk,TTabSheet* tab); //добасляем к имени вкладки звездочку, если были изменения
        //int __fastcall WriteInfoLabelsConfigToFile();
        int WriteFontParameters(TIniFile* ini, TFont* f, AnsiString section, AnsiString ident);
        int WritePlayer1ScoresLabelsConfigToFile();
        int WritePlayer2ScoresLabelsConfigToFile();

};
//---------------------------------------------------------------------------
extern PACKAGE TConfigurationForm *ConfigurationForm;
//---------------------------------------------------------------------------
#endif
