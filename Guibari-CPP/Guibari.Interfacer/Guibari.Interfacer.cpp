// Guibari.Interfacer.cpp : Defines the exported functions for the DLL application.
//

#include "stdafx.h"
#include "Guibari.Interfacer.h"


// This is an example of an exported variable
GUIBARIINTERFACER_API int nGuibariInterfacer=0;

// This is an example of an exported function.
GUIBARIINTERFACER_API int fnGuibariInterfacer(void)
{
    return 42;
}

// This is the constructor of a class that has been exported.
// see Guibari.Interfacer.h for the class definition
CGuibariInterfacer::CGuibariInterfacer()
{
    return;
}
