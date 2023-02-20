#pragma once

#ifdef AU_PLATFORM_WINDOWS
	#ifdef AU_BULD_DLL
		#define AULIS_API __declspec(dllexport)
	#else
		#define AULIS_API __declspec(dllimport)
	#endif
#else 
	#error Aulis only support Windows!

#endif 
