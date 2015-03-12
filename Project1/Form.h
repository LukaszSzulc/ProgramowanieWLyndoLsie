#ifndef FORM_H
#define FORM_H
#include <windows.h>

class Form
{
private:
	void InitializeComponent();
public:
	HWND hWnd;
		Form();
		~Form();

};
#endif