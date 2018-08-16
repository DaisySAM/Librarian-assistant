#include "Library.h"
using namespace System;
using namespace System::Windows::Forms;

void main(){
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Kursovaya::Library form;
	Application::Run(%form);
}
