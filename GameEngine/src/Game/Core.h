#pragma once

#ifdef GR_PLATFORM_WINDOWS
  #ifdef GR_BUILD_DLL 
    #define GAMR_API __declspec(dllexport)
  #else
#define GAMR_API __declspec(dllimport)
  #endif
#else
 #error GamR only supports windows
#endif
