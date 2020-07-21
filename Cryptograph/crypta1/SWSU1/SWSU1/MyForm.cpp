#include "MyForm.h"
#include "SWSU21.h"



using namespace System;
using namespace System::Windows::Forms;

[STAThread]
void main(array<String^>^ arg)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	SWSU1::MyForm form; //имя проекта
	Application::Run(%form);
}
