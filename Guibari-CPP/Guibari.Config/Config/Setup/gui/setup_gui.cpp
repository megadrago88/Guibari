
#include "../../../imgui/Headers/imgui.h"
int testint = 0;
float testfloat = 0.f;
bool testbool = false;

void Rendertest() {
	using namespace ImGui;

	SetCurrentContext();
	NewFrame();
	Render();
	Begin("testwindow1");
	Checkbox("testbox1",&testbool);
	End();
	DestroyContext();
}