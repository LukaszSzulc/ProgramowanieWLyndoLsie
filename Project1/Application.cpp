#include "Application.h"
#include "Form.h"

using namespace WinToolkit;
using namespace Forms;

MSG Application::msg;
HINSTANCE Application::hInstance = NULL;
int Application::nCmdShow = 0;
void Application::Run(Form *form) {
	while (GetMessage(&msg,NULL,0,0)) {
		TranslateMessage(&msg);
		DispatchMessage(&msg);
	}
}
int Application::GetExitCode() {
	return msg.wParam;
}