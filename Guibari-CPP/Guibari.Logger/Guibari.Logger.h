// The following ifdef block is the standard way of creating macros which make exporting 
// from a DLL simpler. All files within this DLL are compiled with the GUIBARILOGGER_EXPORTS
// symbol defined on the command line. This symbol should not be defined on any project
// that uses this DLL. This way any other project whose source files include this file see 
// GUIBARILOGGER_API functions as being imported from a DLL, whereas this DLL sees symbols
// defined with this macro as being exported.
#ifdef GUIBARILOGGER_EXPORTS
#define GUIBARILOGGER_API __declspec(dllexport)
#else
#define GUIBARILOGGER_API __declspec(dllimport)
#endif

// This class is exported from the Guibari.Logger.dll
class GUIBARILOGGER_API CGuibariLogger {
public:
	CGuibariLogger(void);
	// TODO: add your methods here.
};

extern GUIBARILOGGER_API int nGuibariLogger;

GUIBARILOGGER_API int fnGuibariLogger(void);
