/**
 * This file has no copyright assigned and is placed in the Public Domain.
 * This file is part of the mingw-w64 runtime package.
 * No warranty is given; refer to the file DISCLAIMER.PD within this package.
 */

#undef __MSVCRT_VERSION__
#define _UCRT
#define _scprintf real__scprintf
#include <stdio.h>
#include <stdarg.h>
#undef _scprintf

int __cdecl _scprintf(const char * __restrict__ _Format, ...)
{
  int ret;
  va_list _ArgList;
  va_start(_ArgList, _Format);
  ret = __stdio_common_vsprintf(_CRT_INTERNAL_PRINTF_STANDARD_SNPRINTF_BEHAVIOR, NULL, 0, _Format, NULL, _ArgList);
  va_end(_ArgList);
  return ret;
}
int __cdecl (*__MINGW_IMP_SYMBOL(_scprintf))(const char *__restrict__, ...) = _scprintf;
