// The following ifdef block is the standard way of creating macros which make exporting 
// from a DLL simpler. All files within this DLL are compiled with the GUIBARIIO_EXPORTS
// symbol defined on the command line. This symbol should not be defined on any project
// that uses this DLL. This way any other project whose source files include this file see 
// GUIBARIIO_API functions as being imported from a DLL, whereas this DLL sees symbols
// defined with this macro as being exported.
#ifdef GUIBARIIO_EXPORTS
#define GUIBARIIO_API __declspec(dllexport)
#else
#define GUIBARIIO_API __declspec(dllimport)
#endif

// This class is exported from the Guibari.IO.dll
class GUIBARIIO_API CGuibariIO {
public:
	CGuibariIO(void);
	// TODO: add your methods here.
};

extern GUIBARIIO_API int nGuibariIO;

GUIBARIIO_API int fnGuibariIO(void);
