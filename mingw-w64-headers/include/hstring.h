/*** Autogenerated by WIDL 10.3 from include/hstring.idl - Do not edit ***/

#ifdef _WIN32
#ifndef __REQUIRED_RPCNDR_H_VERSION__
#define __REQUIRED_RPCNDR_H_VERSION__ 475
#endif
#include <rpc.h>
#include <rpcndr.h>
#endif

#ifndef COM_NO_WINDOWS_H
#include <windows.h>
#include <ole2.h>
#endif

#ifndef __hstring_h__
#define __hstring_h__

/* Forward declarations */

/* Headers for imported files */

#include <wtypes.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct HSTRING__ {
    int unused;
} HSTRING__;
typedef HSTRING__ *HSTRING;

  typedef struct HSTRING_HEADER {
    __C89_NAMELESS union {
      PVOID Reserved1;
#ifdef _WIN64
      char Reserved2[24];
#else
      char Reserved2[20];
#endif
    } Reserved;
  } HSTRING_HEADER;

DECLARE_HANDLE(HSTRING_BUFFER);
/* Begin additional prototypes for all interfaces */


/* End additional prototypes */

#ifdef __cplusplus
}
#endif

#endif /* __hstring_h__ */
