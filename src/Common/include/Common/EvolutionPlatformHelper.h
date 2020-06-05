#ifndef COMMON_EVOLUTION_PLATFORM_HELPER_H_
#define COMMON_EVOLUTION_PLATFORM_HELPER_H_

#include <limits>

/*
	P3_OS_WIN		win32 or win64
	P3_OS_WIN32		32 bit Windows
	P3_OS_WIN64		64 bit Windows
*/

#if !defined(SAG_COM) && (defined(WIN64) || defined(_WIN64) || defined(__WIN64__))
#define P3_OS_WIN 1
#define P3_OS_WIN64 1
#define P3_OS_64 1
#elif !defined(SAG_COM) && (defined(WIN32) || defined(_WIN32) || defined(__WIN32__) || defined(__NT__))
#define P3_OS_WIN 1
#define P3_OS_WIN32 1
#define P3_OS_32 1
#endif // WIN64


#endif // COMMON_EVOLUTION_PLATFORM_HELPER_H_
