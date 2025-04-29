#include "MainForm.h"

using namespace System;
using namespace System::Windows::Forms;

// Entry point for Windows Forms application
int main(array<String^>^ args)
{
    // Enable visual styles
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);
    
    // Create the main form and run the application
    SbotCProject::MainForm^ form = gcnew SbotCProject::MainForm();
    Application::Run(form);
    
    return 0;
} 