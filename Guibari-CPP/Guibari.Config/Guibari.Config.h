// The following ifdef block is the standard way of creating macros which make exporting 
// from a DLL simpler. All files within this DLL are compiled with the GUIBARICONFIG_EXPORTS
// symbol defined on the command line. This symbol should not be defined on any project
// that uses this DLL. This way any other project whose source files include this file see 
// GUIBARICONFIG_API functions as being imported from a DLL, whereas this DLL sees symbols
// defined with this macro as being exported.
#ifdef GUIBARICONFIG_EXPORTS
#define GUIBARICONFIG_API __declspec(dllexport)
#else
#define GUIBARICONFIG_API __declspec(dllimport)
#endif

// This class is exported from the Guibari.Config.dll
class GUIBARICONFIG_API CGuibariConfig {
public:
	CGuibariConfig(void);
	// TODO: add your methods here.
};

extern GUIBARICONFIG_API int nGuibariConfig;

GUIBARICONFIG_API int fnGuibariConfig(void);
