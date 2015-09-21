//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop
//---------------------------------------------------------------------------
USEFORM("DisplayUnit.cpp", DisplayForm);
USEFORM("ConfigurationUnit.cpp", ConfigurationForm);
USEFORM("MainUnit.cpp", MainForm);
USEFORM("DataModuleUnit.cpp", DataModule1); /* TDataModule: File Type */
USEFORM("FightResultUnit.cpp", FightResultForm);
USEFORM("DBPathUnit.cpp", DBPathForm);
//---------------------------------------------------------------------------
WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int)
{
        try
        {
                 Application->Initialize();
                 Application->CreateForm(__classid(TMainForm), &MainForm);
                 Application->CreateForm(__classid(TDataModule1), &DataModule1);
                 Application->Run();
        }
        catch (Exception &exception)
        {
                 Application->ShowException(&exception);
        }
        catch (...)
        {
                 try
                 {
                         throw Exception("");
                 }
                 catch (Exception &exception)
                 {
                         Application->ShowException(&exception);
                 }
        }
        return 0;
}
//---------------------------------------------------------------------------
