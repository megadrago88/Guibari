// Guibari.Logger.cpp : Defines the exported functions for the DLL application.
//

#include "stdafx.h"
#include "Guibari.Logger.h"


// This is an example of an exported variable
GUIBARILOGGER_API int nGuibariLogger=0;

// This is an example of an exported function.
GUIBARILOGGER_API int fnGuibariLogger(void)
{
    return 42;
}

// This is the constructor of a class that has been exported.
// see Guibari.Logger.h for the class definition
CGuibariLogger::CGuibariLogger()
{
    return;
}
