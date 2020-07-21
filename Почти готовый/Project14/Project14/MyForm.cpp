#include "MyForm.h"
#include "Uzg.h"

using namespace System;
using namespace System::Windows::Forms;

[STAThread]
void main(array<String^>^ arg)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Project14::MyForm form; //имя проекта
	Application::Run(%form);
}
