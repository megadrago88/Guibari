// Guibari.Gui.cpp : Defines the exported functions for the DLL application.
//

#include "stdafx.h"
#include "Guibari.Gui.h"


// This is an example of an exported variable
GUIBARIGUI_API int nGuibariGui=0;

// This is an example of an exported function that returns the meaning of life.
GUIBARIGUI_API int fnGuibariGui(void)
{
    return 42;
}

// This is the constructor of a class that has been exported.
// see Guibari.Gui.h for the class definition
CGuibariGui::CGuibariGui()
{
    return;
}
