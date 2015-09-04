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
#include <ExtDlgs.hpp>
#include <JPEG.hpp>
//---------------------------------------------------------------------------


class TConfigurationForm : public TForm
{
__published:	// IDE-managed Components
        TPageControl *PageControl1;
        TTabSheet *InfoLabelsSheet;
        TTabSheet *PanelsColorTabSheet;
        TTabSheet *PanelsFontTabSheet;
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
        TFontDialog *Player1AdvantageLabelTextFontDialog;
        TFontDialog *Player1PenaltyLabelTextFontDialog;
        TFontDialog *Player2ScoresLabelTextFontDialog;
        TFontDialog *Player2AdvantageLabelTextFontDialog;
        TBitBtn *Player2ScoresLabelsBtn;
        TBitBtn *Player1ScoresLabelsBtn;
        TGroupBox *GroupBox3;
        TBitBtn *Player2ScoresLabelTextFontBitBtn;
        TBitBtn *Player2AdvantageLabelTextFontBitBtn;
        TBitBtn *Player2PenaltyLabelTextFontBitBtn;
        TGroupBox *GroupBox4;
        TBitBtn *Player1ScoresLabelTextFontBitBtn;
        TBitBtn *Player1AdvantageLabelTextFontBitBtn;
        TBitBtn *Player1PenaltyLabelTextFontBitBtn;
        TGroupBox *GroupBox7;
        TBitBtn *SetPlayer2PanelColorBitBtn;
        TGroupBox *GroupBox9;
        TColorBox *CategoryPanelColorBox;
        TLabel *Label1;
        TLabel *Label2;
        TColorBox *TimePanelColorBox;
        TGroupBox *GroupBox5;
        TBitBtn *SetPlayer1PanelColorBitBtn;
        TFontDialog *Player2PenaltyLabelTextFontDialog;
        TColorBox *Player1ScoresPanelColorBox;
        TColorBox *Player1PenaltyPanelColorBox;
        TColorBox *Player1AdvantagePanelColorBox;
        TColorBox *Player1NamePanelColorBox;
        TColorBox *Player2NamePanelColorBox;
        TColorBox *Player2ScoresPanelColorBox;
        TColorBox *Player2AdvantagePanelColorBox;
        TColorBox *Player2PenaltyPanelColorBox;
        TBitBtn *SetCentralPanelColorBitBtn;
        TLabel *Label11;
        TMemo *ChangeLogMemo;
        TBitBtn *ResetToDefaultBitBtn;
        TLabel *Label4;
        TLabel *Label3;
        TLabel *Label5;
        TLabel *Label6;
        TLabel *Label7;
        TLabel *Label8;
        TLabel *Label9;
        TLabel *Label10;
        TGroupBox *GroupBox6;
        TBitBtn *SetCentralPanelFontBitBtn;
        TGroupBox *GroupBox8;
        TBitBtn *SetPlayer2PanelFontBitBtn;
        TGroupBox *GroupBox10;
        TBitBtn *SetPlayer1PanelFontBitBtn;
        TButton *CategoryPanelFontBtn;
        TButton *TimePanelFontBtn;
        TButton *Player2NamePanelFontBtn;
        TButton *Player2ScoresPanelFontBtn;
        TButton *Player2AdvantagePanelFontBtn;
        TButton *Player2PenaltyPanelFontBtn;
        TButton *Player1NamePanelFontBtn;
        TButton *Player1ScoresPanelFontBtn;
        TButton *Player1AdvantagePanelFontBtn;
        TButton *Player1PenaltyPanelFontBtn;
        TFontDialog *Player2NamePanelFontDialog;
        TFontDialog *Player1NamePanelFontDialog;
        TFontDialog *CategoryPanelFontDialog;
        TFontDialog *Player2ScoresPanelFontDialog;
        TFontDialog *Player1AdvantagePanelFontDialog;
        TFontDialog *Player2AdvantagePanelFontDialog;
        TFontDialog *TimePanelFontDialog;
        TFontDialog *Player2PenaltyPanelFontDialog;
        TFontDialog *Player1PenaltyPanelFontDialog;
        TFontDialog *Player1ScoresPanelFontDialog;
        TTabSheet *PictureSelectTab;
        TLabeledEdit *Picture1Edit;
        TLabeledEdit *Picture2Edit;
        TBitBtn *Picture1BitBtn;
        TBitBtn *Picture2BitBtn;
        TImage *Image1;
        TImage *Image2;
        TBitBtn *SetPicture1BitBtn;
        TBitBtn *SetPicture2BitBtn;
        TOpenPictureDialog *OpenPictureDialog;
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
        void __fastcall Player1ScoresLabelTextFontBitBtnClick(
          TObject *Sender);
        void __fastcall Player1AdvantageLabelTextFontBitBtnClick(
          TObject *Sender);
        void __fastcall Player1PenaltyLabelTextFontBitBtnClick(
          TObject *Sender);
        void __fastcall Player2ScoresLabelsBtnClick(TObject *Sender);
        void __fastcall Player1ScoresLabelsBtnClick(TObject *Sender);
        void __fastcall BitBtn2Click(TObject *Sender);
        void __fastcall SetPlayer2PanelColorBitBtnClick(TObject *Sender);
        void __fastcall CategoryPanelColorBoxChange(TObject *Sender);
        void __fastcall SetPlayer1PanelColorBitBtnClick(TObject *Sender);
        void __fastcall SetCentralPanelColorBitBtnClick(TObject *Sender);
        void __fastcall Player1NamePanelColorBoxChange(TObject *Sender);
        void __fastcall Player2NamePanelColorBoxChange(TObject *Sender);
        void __fastcall ResetToDefaultBitBtnClick(TObject *Sender);
        void __fastcall FormCreate(TObject *Sender);
        void __fastcall CategoryPanelFontBtnClick(TObject *Sender);
        void __fastcall SetCentralPanelFontBitBtnClick(TObject *Sender);
        void __fastcall SetPlayer2PanelFontBitBtnClick(TObject *Sender);
        void __fastcall SetPlayer1PanelFontBitBtnClick(TObject *Sender);
        void __fastcall Player2NamePanelFontBtnClick(TObject *Sender);
        void __fastcall TimePanelFontBtnClick(TObject *Sender);
        void __fastcall Player2ScoresPanelFontBtnClick(TObject *Sender);
        void __fastcall Player2AdvantagePanelFontBtnClick(TObject *Sender);
        void __fastcall Player2PenaltyPanelFontBtnClick(TObject *Sender);
        void __fastcall Player1NamePanelFontBtnClick(TObject *Sender);
        void __fastcall Player1ScoresPanelFontBtnClick(TObject *Sender);
        void __fastcall Player1AdvantagePanelFontBtnClick(TObject *Sender);
        void __fastcall Player1PenaltyPanelFontBtnClick(TObject *Sender);
        void __fastcall Picture1BitBtnClick(TObject *Sender);
        void __fastcall Picture1EditChange(TObject *Sender);
        void __fastcall Picture2EditChange(TObject *Sender);
        void __fastcall Picture2BitBtnClick(TObject *Sender);
        void __fastcall SetPicture1BitBtnClick(TObject *Sender);
        void __fastcall SetPicture2BitBtnClick(TObject *Sender);
private:	// User declarations
        AnsiString INI_FILE; // путь к файлу инициализации
        AnsiString DEF_INI_FILE; // путь к файлу настрое по-умолчанию

        bool Player1PointsLabelsChanged; //изменены подписи лейблов правого
        bool Player2PointsLabelsChanged; //изменены подписи лейблов левого

        bool Player1PanelColorChanged; //флаги изменения цвета панелей
        bool Player2PanelColorChanged;  //

        bool CentralPanelsColorChanged; //флаг изменения подложек центральных панелей

        bool Player1PanelFontChanged; //флаги изменения шрифтов панелей
        bool Player2PanelFontChanged;  //

        bool CentralPanelsFontChanged; //флаг шрифтов центральных панелей

        bool Picture1Changed; // Флаги изменения картинок
        bool Picture2Changed; //

public:		// User declarations

        __fastcall TConfigurationForm(TComponent* Owner);

        bool InfoLabelsFlag; //флаг изменения информации на вкладке изменения информационных лейблов
        void AddAsteriskToTabName(bool needAsterisk,TTabSheet* tab, bool alreadyHaveAsterisk); //добасляем к имени вкладки звездочку, если были изменения

        int ElementWasChanged(TTabSheet* tab, TButton* btn, bool & flag );// действия при изменении элементов интерфейса
        int SetButtonPressed(TTabSheet* tab, TButton* btn, bool & flag, AnsiString mes); // установка информации при нажатии на кнопку "Принять"

        //функции записи в ини файл***********************************************************
        int WriteFontParameters(TIniFile* ini, TFont* f, AnsiString section, AnsiString ident);  //запись информации о шрифтах
        int WritePlayer1ScoresLabelsConfigToFile(); //записываем в файл информацию о шрифтах лейблов подписей панелей
        int WritePlayer2ScoresLabelsConfigToFile();
        int WritePlayer1PanelColorToFile(); //записываем в файл информацию о цветах панелей спорстменов
        int WritePlayer2PanelColorToFile();
        int WriteCentralPanelColorToFile();//записываем в файл информацию о цвете центральных панелей
        int WriteCentralPanelFontToFile();//аписываем в файл информациб о шрифтах центральной панели
        int WritePlayer1PanelFontToFile(); //записываем в файл информацию о шрифтах панелей спорстменов
        int WritePlayer2PanelFontToFile();
        int WritePicturesPathToFile(); //запись путей к картинкам логотипов
        //************************************************************************************

        //функции загрузки из ini файла*******************************************************
        int LoadConfigFromFile(AnsiString iniPath); //загрузка данных в форму из ini файла

        int LoadFontParameters(TIniFile* ini, TFont* f, AnsiString section, AnsiString ident);
        int LoadPlayer1ScoresLabelsConfigFromFile(TIniFile* ini); //считываем из файл информацию о шрифтах лейблов подписей панелей
        int LoadPlayer2ScoresLabelsConfigFromFile(TIniFile* ini);
        int LoadPlayer1PanelColorFromFile(TIniFile* ini); //считываем из файл файл информацию о цветах панелей спорстменов
        int LoadPlayer2PanelColorFromFile(TIniFile* ini);
        int LoadCentralPanelColorFromFile(TIniFile* ini);//считываем из файл файл информацию о цвете центральных панелей
        int LoadCentralPanelFontFromFile(TIniFile* ini);//считываем из файл файл информациб о шрифтах центральной панели
        int LoadPlayer1PanelFontFromFile(TIniFile* ini); //считываем из файл файл информацию о шрифтах панелей спорстменов
        int LoadPlayer2PanelFontFromFile(TIniFile* ini);
        int LoadPicturesPathFromFile(TIniFile* ini); //считываем из файл путей к картинкам логотипов

};
//---------------------------------------------------------------------------
extern PACKAGE TConfigurationForm *ConfigurationForm;
//---------------------------------------------------------------------------
#endif
