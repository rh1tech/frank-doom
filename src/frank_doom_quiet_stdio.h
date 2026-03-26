#pragma once

#include <stdio.h>

// When FRANK_DOOM_QUIET is enabled, suppress noisy stdio output from
// upstream DoomGeneric sources (and any of our code that uses printf-style
// debugging). This keeps USB CDC stdio available but prevents console spam.
//
// Intentionally do NOT override vprintf/vfprintf so fatal paths that use
// vprintf (eg. I_Error) can still emit messages.

#if defined(FRANK_DOOM_QUIET) && (FRANK_DOOM_QUIET)

// Return 0 to satisfy int-returning stdio APIs.
#ifndef printf
#define printf(...) (0)
#endif

#ifndef fprintf
#define fprintf(...) (0)
#endif

#ifndef puts
#define puts(...) (0)
#endif

#ifndef putchar
#define putchar(...) (0)
#endif

#endif
