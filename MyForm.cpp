//dio koji pokreće aplikaciju i inicijalizira glavni prozor 

#include "MyForm.h"

using namespace System;

using namespace System::Windows::Forms;

[STAThread]

void main(array<String^>^ args)

{

    Application::EnableVisualStyles();

    Application::SetCompatibleTextRenderingDefault(false);

    ImageViewer::MyForm form;

    Application::Run(% form);

}
