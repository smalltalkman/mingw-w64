/*** Autogenerated by WIDL 10.3 from include/xaudio2fx.idl - Do not edit ***/

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

#ifndef __xaudio2fx_h__
#define __xaudio2fx_h__

/* Forward declarations */

/* Headers for imported files */

#include <unknwn.h>

#ifdef __cplusplus
extern "C" {
#endif

HRESULT __stdcall  CreateAudioReverb(IUnknown **out);

HRESULT __stdcall  CreateAudioVolumeMeter(IUnknown **out);

/* Begin additional prototypes for all interfaces */


/* End additional prototypes */

#ifdef __cplusplus
}
#endif

#endif /* __xaudio2fx_h__ */
