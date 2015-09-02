﻿#include <algorithm>
#include <map>
#include <vector>
#include <memory>
#include <functional>
#include <fstream>
#include <cstdint>

#include <d3d11.h>
#include <directXMath.h>
#include <GFSDK_HairWorks.h>

using namespace DirectX;


#define hwCLinkage extern "C"
#define hwExport __declspec(dllexport)
#define hwThreadLocal __declspec(thread)

#ifdef hwDebug
    void hwDebugLogImpl(const char* fmt, ...);
    #define hwDebugLog(...) hwDebugLogImpl(__VA_ARGS__)
    #ifdef hwVerboseDebug
        #define hwDebugLogVerbose(...) hwDebugLogImpl(__VA_ARGS__)
    #else
        #define hwDebugLogVerbose(...)
    #endif
#else
    #define hwDebugLog(...)
    #define hwDebugLogVerbose(...)
#endif
