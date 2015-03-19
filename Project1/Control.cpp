#include "Control.h"

namespace WinToolkit {
	namespace Forms {
		Control::Control(Control *control) {
			this->parent = control;
		}
		Control::~Control() {
			delete this->parent;
		}
	}
}