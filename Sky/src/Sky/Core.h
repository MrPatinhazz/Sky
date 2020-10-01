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

#ifdef SKY_ENABLE_ASSERTS
	#define SKY_ASSERT(x, ...) { if(!(x)) { SKY_ERROR("Assertion Failed: {0}", __VA_ARGS__); __debugbreak(); } }
	#define SKY_CORE_ASSERT(x, ...) { if(!(x)) { SKY_CORE_ERROR("Assertion Failed: {0}", __VA_ARGS__); __debugbreak(); } }
#else
	#define SKY_ASSERT(x, ...)
	#define SKY_CORE_ASSERT(x, ...)
#endif

#define BIT(x) (1 << x) 