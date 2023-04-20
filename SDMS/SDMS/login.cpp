#include "login.h"
#include "Main.h"

using namespace System;
using namespace System::Windows::Forms;

[STAThread]
int main()
{
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);

    // Create and run Login form
    SDMS::login form;

    
    
    Application::Run(% form);

    return 0;
}