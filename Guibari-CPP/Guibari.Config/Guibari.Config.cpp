// Guibari.Config.cpp : Defines the exported functions for the DLL application.
//

#include "stdafx.h"
#include "Guibari.Config.h"


// This is an example of an exported variable
GUIBARICONFIG_API int nGuibariConfig=0;

// This is an example of an exported function that returns the meaning of life.
GUIBARICONFIG_API int fnGuibariConfig(void)
{
    return 42;
}

// This is the constructor of a class that has been exported.
// see Guibari.Config.h for the class definition
CGuibariConfig::CGuibariConfig()
{
    return;
}
