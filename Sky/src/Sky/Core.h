#pragma once

#ifdef SKY_PLATFORM_WINDOWS
	#ifdef SKY_BUILD_DLL
		#define SKY_API __declspec(dllexport)
	#else
		#define SKY_API __declspec(dllimport)
	#endif // SKY_BUILD_DLL
#else
    #error Sky only supports windows
#endif