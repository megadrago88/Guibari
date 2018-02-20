// The following ifdef block is the standard way of creating macros which make exporting 
// from a DLL simpler. All files within this DLL are compiled with the GUIBARICORE_EXPORTS
// symbol defined on the command line. This symbol should not be defined on any project
// that uses this DLL. This way any other project whose source files include this file see 
// GUIBARICORE_API functions as being imported from a DLL, whereas this DLL sees symbols
// defined with this macro as being exported.
#ifdef GUIBARICORE_EXPORTS
#define GUIBARICORE_API __declspec(dllexport)
#else
#define GUIBARICORE_API __declspec(dllimport)
#endif

// This class is exported from the Guibari.Core.dll
class GUIBARICORE_API CGuibariCore {
public:
	CGuibariCore(void);
	// TODO: add your methods here.
};

extern GUIBARICORE_API int nGuibariCore;

GUIBARICORE_API int fnGuibariCore(void);
