// The following ifdef block is the standard way of creating macros which make exporting 
// from a DLL simpler. All files within this DLL are compiled with the GUIBARIINTERFACER_EXPORTS
// symbol defined on the command line. This symbol should not be defined on any project
// that uses this DLL. This way any other project whose source files include this file see 
// GUIBARIINTERFACER_API functions as being imported from a DLL, whereas this DLL sees symbols
// defined with this macro as being exported.
#ifdef GUIBARIINTERFACER_EXPORTS
#define GUIBARIINTERFACER_API __declspec(dllexport)
#else
#define GUIBARIINTERFACER_API __declspec(dllimport)
#endif

// This class is exported from the Guibari.Interfacer.dll
class GUIBARIINTERFACER_API CGuibariInterfacer {
public:
	CGuibariInterfacer(void);
	// TODO: add your methods here.
};

extern GUIBARIINTERFACER_API int nGuibariInterfacer;

GUIBARIINTERFACER_API int fnGuibariInterfacer(void);
