#include "MyForm.h"  // Include your custom form header file
#include <Windows.h>    // Standard Windows header

using namespace GUIPRACTICE;  // Use your project's namespace

int WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int)
{
    Application::EnableVisualStyles();  // Enable Windows visual styles
    Application::SetCompatibleTextRenderingDefault(false);  // Use default text rendering

    Application::Run(gcnew MyForm());  // Run your main form (MyForm)
    return 0;
}
  