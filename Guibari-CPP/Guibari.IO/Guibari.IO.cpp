// Guibari.IO.cpp : Defines the exported functions for the DLL application.
//

#include "stdafx.h"
#include "Guibari.IO.h"


// This is an example of an exported variable
GUIBARIIO_API int nGuibariIO=0;

// This is an example of an exported function that returns the meaning of life.
GUIBARIIO_API int fnGuibariIO(void)
{
    return 42;
}

// This is the constructor of a class that has been exported.
// see Guibari.IO.h for the class definition
CGuibariIO::CGuibariIO()
{
    return;
}
