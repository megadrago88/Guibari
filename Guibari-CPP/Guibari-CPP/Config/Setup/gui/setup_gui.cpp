
#include "../../../imgui/Headers/imgui.h"
int testint = 0;
float testfloat = 0.f;
bool testbool = false;

void Render() {

	ImGui::Begin("testwindow1");
	ImGui::Checkbox("testbox1",&testbool);
	ImGui::End();
}