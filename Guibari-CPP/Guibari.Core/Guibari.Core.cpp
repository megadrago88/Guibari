// Guibari.Core.cpp : Defines the exported functions for the DLL application.
//

#include "stdafx.h"
#include "Guibari.Core.h"


// This is an example of an exported variable
GUIBARICORE_API int nGuibariCore=0;

// This is an example of an exported function.
GUIBARICORE_API int fnGuibariCore(void)
{
    return 42;
}

// This is the constructor of a class that has been exported.
// see Guibari.Core.h for the class definition
CGuibariCore::CGuibariCore()
{
    return;
}
