// The following ifdef block is the standard way of creating macros which make exporting
// from a DLL simpler. All files within this DLL are compiled with the ADVANCEDMATHUTILS_EXPORTS
// symbol defined on the command line. This symbol should not be defined on any project
// that uses this DLL. This way any other project whose source files include this file see
// ADVANCEDMATHUTILS_API functions as being imported from a DLL, whereas this DLL sees symbols
// defined with this macro as being exported.
#ifdef ADVANCEDMATHUTILS_EXPORTS
#define ADVANCEDMATHUTILS_API __declspec(dllexport)
#else
#define ADVANCEDMATHUTILS_API __declspec(dllimport)
#endif

int** init_canvas(int width, int height);

#ifdef __cplusplus
extern "C" {
#endif
    ADVANCEDMATHUTILS_API void map_circle(int radius, bool* out_arr);
#ifdef __cplusplus
}
#endif
