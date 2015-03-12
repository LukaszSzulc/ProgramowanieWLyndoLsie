#include <Windows.h>
#include "Program.h"
#include "Application.h"
int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nCmdShow) {
	Application::hInstance = hInstance;
	Application::nCmdShow = nCmdShow;
	Program::Main();
	return 0;
}
void Program::Main() {
	Application::Run(new Form1());				//Form1 powinien dziedziczyæ po Form
}