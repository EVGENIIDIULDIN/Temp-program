#include "MyForm.h"
#include "Form2.h"




using namespace System;
using namespace System::Windows::Forms;

[STAThread]
void main(array<String^>^ arg)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	EcologicalSWSU::MyForm form; //имя проекта
	Application::Run(%form);
}