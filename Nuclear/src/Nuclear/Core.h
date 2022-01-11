#pragma once

#ifdef NC_PLATFORM_WINDOWS
#ifdef NC_BUILD_DLL
#define NUCLEAR_API __declspec(dllexport)
#else
#define NUCLEAR_API __declspec(dllimport)
#endif
#else
#error Nuclear only supports Windows!
#endif
