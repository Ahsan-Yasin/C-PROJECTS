#include "MyForm.h" 
#include "MyMenu.h"
using namespace System; 
using namespace System::Windows::Forms;
using namespace CheeseBurgerAndNumCat;

[STAThread]
int  Main(array<System::String^>^ args)
{
    // Enable visual styles for the application
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false); 

    // Run the form
    //CheeseBurgerAndNumCat::MyForm form;
   // Application::Run(% form);  
    CheeseBurgerAndNumCat::MyMenu form; 
    Application::Run(% form); 
    return 0; 
}
