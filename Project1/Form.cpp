#include "Form.h"
#include "Application.h"
Form::Form() {
	InitializeComponent();
}

Form::~Form() {

}
LRESULT CALLBACK WndProc(HWND hWnd, UINT Msg, WPARAM wParam, LPARAM lParam) {
	return DefWindowProc(hWnd, Msg, wParam, lParam);
}
void Form::InitializeComponent() {
	this->Name = "Window";
	this->Text = "Title";
	WNDCLASSEX wce;
	wce.cbSize = sizeof(WNDCLASSEX);
	wce.style = 0;
	wce.lpfnWndProc = WndProc;
	wce.cbClsExtra = 0;
	wce.cbWndExtra = 0;
	wce.hInstance = Application::hInstance;
	wce.hIcon = LoadIcon(NULL, IDI_APPLICATION);
	wce.hIconSm = LoadIcon(NULL, IDI_APPLICATION);
	wce.hCursor = LoadCursor(NULL, IDC_ARROW);
	wce.hbrBackground = (HBRUSH)COLOR_WINDOW;
	wce.lpszClassName = "Window";
	wce.lpszMenuName = NULL;
	if (!RegisterClassEx(&wce)) {
		
		return;
	}
	hWnd = CreateWindowEx(WS_EX_CLIENTEDGE, this->Name, this->Text, WS_OVERLAPPEDWINDOW, CW_USEDEFAULT, CW_USEDEFAULT, 320, 240, NULL, NULL, Application::hInstance, NULL);
	if (hWnd == NULL) {
		return;
	}
	ShowWindow(hWnd, Application::nCmdShow);
	UpdateWindow(hWnd);
}


