#ifndef FORM_H
#define FORM_H
#include <windows.h>
#include "Control.h"

namespace WinToolkit {
	namespace Forms {
		class Form : public Control {
			public:
				HWND hWnd;
				Form();
				~Form();
		};
	}
}

#endif