#ifndef APPLICATION_H
#define APPLICATION_H
#include <windows.h>
#include "Form.h"
class Application {
	private:
		static MSG msg;
	public:
		static HINSTANCE hInstance;
		static int nCmdShow;
		static void Run(WinToolkit::Forms::Form *form);
		static int GetExitCode();
};
#endif