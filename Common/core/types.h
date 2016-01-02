//=============================================================================
//
// Adventure Game Studio (AGS)
//
// Copyright (C) 1999-2011 Chris Jones and 2011-20xx others
// The full list of copyright holders can be found in the Copyright.txt
// file, which is part of this source code distribution.
//
// The AGS source code is provided under the Artistic License 2.0.
// A copy of this license can be found in the file License.txt and at
// http://www.opensource.org/licenses/artistic-license-2.0.php
//
//=============================================================================
//
// Basic types definition
//
//=============================================================================
#ifndef __AGS_CN_CORE__TYPES_H
#define __AGS_CN_CORE__TYPES_H

#include "endianness.h"

#if defined (_WINDOWS) && !defined (WINDOWS_VERSION)
#define WINDOWS_VERSION
#endif

#ifndef NULL
#define NULL 0
#endif

#include <stddef.h>
#include <stdint.h>
#include <cstdlib> // for size_t
#include <limits.h> // for _WORDSIZE

// Detect 64 bit environment
#if defined (_WIN64) || (__WORDSIZE == 64)
#define AGS_64BIT
#endif

#define fixed_t int32_t // fixed point type
#define color_t int32_t

#endif // __AGS_CN_CORE__TYPES_H
