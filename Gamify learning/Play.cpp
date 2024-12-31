#include "Play.h"
#include "MyMenu.h"
using namespace System;
using namespace System::Windows::Forms;
using namespace GameofCards;

[STAThread]
int  Main(array<System::String^>^ args)
{
    // Enable visual styles for the application 
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);
    GameofCards::MyMenu form;
    Application::Run(% form);
    return 0;
}
