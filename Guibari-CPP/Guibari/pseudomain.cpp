#pragma once
//This file will have EVERY piece of code that makes the guibari work in it before it is all split into seperate areas for optimization

/* Prechecks
Check for config file/ log folder
if both present skip over setup and start logging
if only config is present check for errors and create log folder then start logging
if config is not present but log folder is start logging and start setup
if neither are present create both, start logging and start setup
*/

/* First-run setup
Guide user through the config processes
Specify shibari folder
Basic guide to the gui
*/

/* Logging
Create a new file in the log folder with 
Shibari path and/or version
Guibari path and/or version
Shibari console output/log file
Date
Log/state checks and errors thrown
*/

/* Config
Stores setup vars and user prefrences
Stores the profiles created and the binds
Stores device ID, MAC, and user name for dongle and controller/generic inputs
Stores default values
*/

/* Main 
Shows output from Shibari
Can load/save profiles
Reconfigure config files
Create profiles
Shows connected devices, outputs, and how they are connected (USB/BT)
*/

int main() {
	

	return 0;
}