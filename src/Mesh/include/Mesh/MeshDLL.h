#ifndef MESH_DLL_H
#define MESH_DLL_H

#include <Common/EvolutionPlatformHelper.h>

#ifdef P3_OS_WIN
#ifdef MESH_BUILD_DLL
#define MESH_EXPORT __declspec(dllexport)
#else
#define MESH_EXPORT __declspec(dllimport)
#endif
#else
#define MESH_EXPORT
#endif


#endif
