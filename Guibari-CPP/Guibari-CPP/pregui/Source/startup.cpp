#include "../Headers/startup.h"
/*
Summery
Starts logger
Checks current Guibari dir for {Startup_settings.(?XML??TXT?)} file and/or log folder
if not present runs {Firsttime.cpp} and/or creates log folder
if present checks for errors (Change in dir, ver mismatch, etc.) and throws them
if there are no errors starts the gui
*/


startup::startup()
{
}


startup::~startup()
{
}
