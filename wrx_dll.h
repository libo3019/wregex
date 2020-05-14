#pragma once


#ifdef _WIN32
#define WRX_DLL_EXPORT _declspec(dllexport)
#define WRX_DLL_IMPORT _declspec(dllimport)

#ifdef WRX_IMPORT_DLL
#define WRX_DLL_EXPORT_IMPORT WRX_DLL_IMPORT
#else
#define WRX_DLL_EXPORT_IMPORT WRX_DLL_EXPORT
#endif	

#else //linux
#define WRX_DLL_EXPORT
#define WRX_DLL_IMPORT

#ifdef WRX_IMPORT_DLL
#define WRX_DLL_EXPORT_IMPORT WRX_DLL_IMPORT
#else
#define WRX_DLL_EXPORT_IMPORT WRX_DLL_EXPORT
#endif	

#endif
