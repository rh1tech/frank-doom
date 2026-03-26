#pragma once

// Simple compile-time logging control.
//
// Define FRANK_DOOM_QUIET=1 to compile out non-fatal log/warn prints.
// Keep I_Error()/panic() paths intact.

#include <stdio.h>

#if defined(FRANK_DOOM_QUIET) && (FRANK_DOOM_QUIET)
#define FRANK_DOOM_LOG(...) do { } while (0)
#define FRANK_DOOM_WARN(...) do { } while (0)
#else
#define FRANK_DOOM_LOG(...) do { printf(__VA_ARGS__); } while (0)
#define FRANK_DOOM_WARN(...) do { printf(__VA_ARGS__); } while (0)
#endif
