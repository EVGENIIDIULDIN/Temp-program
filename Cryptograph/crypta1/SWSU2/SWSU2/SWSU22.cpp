#include "SWSU22.h"
#include "MyForm1.h"
#include "MyForm.h"




using namespace System;
using namespace System::Windows::Forms;

[STAThread]
void main(array<String^>^ arg)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	SWSU2::SWSU22 form; //имя проекта
	Application::Run(%form);
}
