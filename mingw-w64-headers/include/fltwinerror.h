/**
 * This file is part of the mingw-w64 runtime package.
 * No warranty is given; refer to the file DISCLAIMER within this package.
 */

#ifndef _FLT_WINERROR_
#define _FLT_WINERROR_

#if NTDDI_VERSION < NTDDI_VISTA || defined (__IN__WINERROR_)

#define FILTER_HRESULT_FROM_FLT_NTSTATUS(x) (NT_ASSERT((x & 0xfff0000) == 0x001c0000),(HRESULT) (((x) & 0x8000ffff) | (FACILITY_USERMODE_FILTER_MANAGER << 16)))
#ifndef FACILITY_USERMODE_FILTER_MANAGER
#define FACILITY_USERMODE_FILTER_MANAGER 0x1f
#endif

#define ERROR_FLT_IO_COMPLETE			((HRESULT)0x001f0001)
#define ERROR_FLT_NO_HANDLER_DEFINED		((HRESULT)0x801f0001)
#define ERROR_FLT_CONTEXT_ALREADY_DEFINED	((HRESULT)0x801f0002)
#define ERROR_FLT_INVALID_ASYNCHRONOUS_REQUEST	((HRESULT)0x801f0003)
#define ERROR_FLT_DISALLOW_FAST_IO		((HRESULT)0x801f0004)
#define ERROR_FLT_INVALID_NAME_REQUEST		((HRESULT)0x801f0005)
#define ERROR_FLT_NOT_SAFE_TO_POST_OPERATION	((HRESULT)0x801f0006)
#define ERROR_FLT_NOT_INITIALIZED		((HRESULT)0x801f0007)
#define ERROR_FLT_FILTER_NOT_READY		((HRESULT)0x801f0008)
#define ERROR_FLT_POST_OPERATION_CLEANUP	((HRESULT)0x801f0009)
#define ERROR_FLT_INTERNAL_ERROR		((HRESULT)0x801f000a)
#define ERROR_FLT_DELETING_OBJECT		((HRESULT)0x801f000b)
#define ERROR_FLT_MUST_BE_NONPAGED_POOL		((HRESULT)0x801f000c)
#define ERROR_FLT_DUPLICATE_ENTRY		((HRESULT)0x801f000d)
#define ERROR_FLT_CBDQ_DISABLED			((HRESULT)0x801f000e)
#define ERROR_FLT_DO_NOT_ATTACH			((HRESULT)0x801f000f)
#define ERROR_FLT_DO_NOT_DETACH			((HRESULT)0x801f0010)
#define ERROR_FLT_INSTANCE_ALTITUDE_COLLISION	((HRESULT)0x801f0011)
#define ERROR_FLT_INSTANCE_NAME_COLLISION	((HRESULT)0x801f0012)
#define ERROR_FLT_FILTER_NOT_FOUND		((HRESULT)0x801f0013)
#define ERROR_FLT_VOLUME_NOT_FOUND		((HRESULT)0x801f0014)
#define ERROR_FLT_INSTANCE_NOT_FOUND		((HRESULT)0x801f0015)
#define ERROR_FLT_CONTEXT_ALLOCATION_NOT_FOUND	((HRESULT)0x801f0016)
#define ERROR_FLT_INVALID_CONTEXT_REGISTRATION	((HRESULT)0x801f0017)
#define ERROR_FLT_NAME_CACHE_MISS		((HRESULT)0x801f0018)
#define ERROR_FLT_NO_DEVICE_OBJECT		((HRESULT)0x801f0019)
#define ERROR_FLT_VOLUME_ALREADY_MOUNTED	((HRESULT)0x801f001a)
#define ERROR_FLT_ALREADY_ENLISTED		((HRESULT)0x801f001b)
#define ERROR_FLT_CONTEXT_ALREADY_LINKED	((HRESULT)0x801F001c)
#define ERROR_FLT_NO_WAITER_FOR_REPLY		((HRESULT)0x801f0020)
#define ERROR_FLT_REGISTRATION_BUSY		((HRESULT)0x801F0023)

#endif
#endif
