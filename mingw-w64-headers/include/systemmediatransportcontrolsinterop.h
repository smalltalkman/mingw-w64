/*** Autogenerated by WIDL 10.0-rc1 from include/systemmediatransportcontrolsinterop.idl - Do not edit ***/

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

#ifndef __systemmediatransportcontrolsinterop_h__
#define __systemmediatransportcontrolsinterop_h__

/* Forward declarations */

#ifndef __ISystemMediaTransportControlsInterop_FWD_DEFINED__
#define __ISystemMediaTransportControlsInterop_FWD_DEFINED__
typedef interface ISystemMediaTransportControlsInterop ISystemMediaTransportControlsInterop;
#ifdef __cplusplus
interface ISystemMediaTransportControlsInterop;
#endif /* __cplusplus */
#endif

/* Headers for imported files */

#include <inspectable.h>

#ifdef __cplusplus
extern "C" {
#endif

/*****************************************************************************
 * ISystemMediaTransportControlsInterop interface
 */
#ifndef __ISystemMediaTransportControlsInterop_INTERFACE_DEFINED__
#define __ISystemMediaTransportControlsInterop_INTERFACE_DEFINED__

DEFINE_GUID(IID_ISystemMediaTransportControlsInterop, 0xddb0472d, 0xc911, 0x4a1f, 0x86,0xd9, 0xdc,0x3d,0x71,0xa9,0x5f,0x5a);
#if defined(__cplusplus) && !defined(CINTERFACE)
MIDL_INTERFACE("ddb0472d-c911-4a1f-86d9-dc3d71a95f5a")
ISystemMediaTransportControlsInterop : public IInspectable
{
    virtual HRESULT STDMETHODCALLTYPE GetForWindow(
        HWND appWindow,
        REFIID riid,
        void **mediaTransportControl) = 0;

};
#ifdef __CRT_UUID_DECL
__CRT_UUID_DECL(ISystemMediaTransportControlsInterop, 0xddb0472d, 0xc911, 0x4a1f, 0x86,0xd9, 0xdc,0x3d,0x71,0xa9,0x5f,0x5a)
#endif
#else
typedef struct ISystemMediaTransportControlsInteropVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        ISystemMediaTransportControlsInterop *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        ISystemMediaTransportControlsInterop *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        ISystemMediaTransportControlsInterop *This);

    /*** IInspectable methods ***/
    HRESULT (STDMETHODCALLTYPE *GetIids)(
        ISystemMediaTransportControlsInterop *This,
        ULONG *iidCount,
        IID **iids);

    HRESULT (STDMETHODCALLTYPE *GetRuntimeClassName)(
        ISystemMediaTransportControlsInterop *This,
        HSTRING *className);

    HRESULT (STDMETHODCALLTYPE *GetTrustLevel)(
        ISystemMediaTransportControlsInterop *This,
        TrustLevel *trustLevel);

    /*** ISystemMediaTransportControlsInterop methods ***/
    HRESULT (STDMETHODCALLTYPE *GetForWindow)(
        ISystemMediaTransportControlsInterop *This,
        HWND appWindow,
        REFIID riid,
        void **mediaTransportControl);

    END_INTERFACE
} ISystemMediaTransportControlsInteropVtbl;

interface ISystemMediaTransportControlsInterop {
    CONST_VTBL ISystemMediaTransportControlsInteropVtbl* lpVtbl;
};

#ifdef COBJMACROS
#ifndef WIDL_C_INLINE_WRAPPERS
/*** IUnknown methods ***/
#define ISystemMediaTransportControlsInterop_QueryInterface(This,riid,ppvObject) (This)->lpVtbl->QueryInterface(This,riid,ppvObject)
#define ISystemMediaTransportControlsInterop_AddRef(This) (This)->lpVtbl->AddRef(This)
#define ISystemMediaTransportControlsInterop_Release(This) (This)->lpVtbl->Release(This)
/*** IInspectable methods ***/
#define ISystemMediaTransportControlsInterop_GetIids(This,iidCount,iids) (This)->lpVtbl->GetIids(This,iidCount,iids)
#define ISystemMediaTransportControlsInterop_GetRuntimeClassName(This,className) (This)->lpVtbl->GetRuntimeClassName(This,className)
#define ISystemMediaTransportControlsInterop_GetTrustLevel(This,trustLevel) (This)->lpVtbl->GetTrustLevel(This,trustLevel)
/*** ISystemMediaTransportControlsInterop methods ***/
#define ISystemMediaTransportControlsInterop_GetForWindow(This,appWindow,riid,mediaTransportControl) (This)->lpVtbl->GetForWindow(This,appWindow,riid,mediaTransportControl)
#else
/*** IUnknown methods ***/
static inline HRESULT ISystemMediaTransportControlsInterop_QueryInterface(ISystemMediaTransportControlsInterop* This,REFIID riid,void **ppvObject) {
    return This->lpVtbl->QueryInterface(This,riid,ppvObject);
}
static inline ULONG ISystemMediaTransportControlsInterop_AddRef(ISystemMediaTransportControlsInterop* This) {
    return This->lpVtbl->AddRef(This);
}
static inline ULONG ISystemMediaTransportControlsInterop_Release(ISystemMediaTransportControlsInterop* This) {
    return This->lpVtbl->Release(This);
}
/*** IInspectable methods ***/
static inline HRESULT ISystemMediaTransportControlsInterop_GetIids(ISystemMediaTransportControlsInterop* This,ULONG *iidCount,IID **iids) {
    return This->lpVtbl->GetIids(This,iidCount,iids);
}
static inline HRESULT ISystemMediaTransportControlsInterop_GetRuntimeClassName(ISystemMediaTransportControlsInterop* This,HSTRING *className) {
    return This->lpVtbl->GetRuntimeClassName(This,className);
}
static inline HRESULT ISystemMediaTransportControlsInterop_GetTrustLevel(ISystemMediaTransportControlsInterop* This,TrustLevel *trustLevel) {
    return This->lpVtbl->GetTrustLevel(This,trustLevel);
}
/*** ISystemMediaTransportControlsInterop methods ***/
static inline HRESULT ISystemMediaTransportControlsInterop_GetForWindow(ISystemMediaTransportControlsInterop* This,HWND appWindow,REFIID riid,void **mediaTransportControl) {
    return This->lpVtbl->GetForWindow(This,appWindow,riid,mediaTransportControl);
}
#endif
#endif

#endif


#endif  /* __ISystemMediaTransportControlsInterop_INTERFACE_DEFINED__ */

/* Begin additional prototypes for all interfaces */

ULONG           __RPC_USER HWND_UserSize     (ULONG *, ULONG, HWND *);
unsigned char * __RPC_USER HWND_UserMarshal  (ULONG *, unsigned char *, HWND *);
unsigned char * __RPC_USER HWND_UserUnmarshal(ULONG *, unsigned char *, HWND *);
void            __RPC_USER HWND_UserFree     (ULONG *, HWND *);

/* End additional prototypes */

#ifdef __cplusplus
}
#endif

#endif /* __systemmediatransportcontrolsinterop_h__ */
