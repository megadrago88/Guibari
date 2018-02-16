#include "../Headers/startup.h"
#include "../../../Config/Setup/gui/setup_gui.h"
/*
Summery
Starts logger
Checks current Guibari dir for {Startup_settings.(?XML??TXT?)} file and/or log folder
if not present runs {Firsttime.cpp} and/or creates log folder
if present checks for errors (Change in dir, version mismatch, etc.) and throws them
if there are no errors starts the gui
*/


startup::startup()
{
}


startup::~startup()
{
}

int main(){
	
	//start logger

	//check dir
	
	//checks for errors

	//if all good start gui
	Rendertest();

	//else returns the error and stops

	return 0;
}