#include "MyForm.h"
#include<Windows.h>
#include <string>

using namespace System;
using namespace System::Windows::Forms;
[STAThreadAttribute]

int main(cli::array<String^>^ args)
{
	Application::SetCompatibleTextRenderingDefault(false);
	Application::EnableVisualStyles();
	Laba2::MyForm form;
	Application::Run(% form);
}
