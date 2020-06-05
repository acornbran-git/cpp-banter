#ifndef COMMON_DLL_H
#define COMMON_DLL_H

#include <Common/EvolutionPlatformHelper.h>

#ifdef P3_OS_WIN
#ifdef COMMON_BUILD_DLL
#define COMMON_EXPORT __declspec(dllexport)
#else
#define COMMON_EXPORT __declspec(dllimport)
#endif
#else
#define COMMON_EXPORT
#endif


#endif
