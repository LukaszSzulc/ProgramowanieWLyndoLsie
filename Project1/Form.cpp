#include "Form.h"
#include "Application.h"
WinToolkit::Forms::Form::Form() {
};

WinToolkit::Forms::Form::~Form() {

};

LRESULT CALLBACK WndProc(HWND hWnd, UINT Msg, WPARAM wParam, LPARAM lParam) {
	return DefWindowProc(hWnd, Msg, wParam, lParam);
};