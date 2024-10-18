/*** Autogenerated by WIDL 9.20 from include/uiviewsettingsinterop.idl - Do not edit ***/

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

#ifndef __uiviewsettingsinterop_h__
#define __uiviewsettingsinterop_h__

/* Forward declarations */

#ifndef __IUIViewSettingsInterop_FWD_DEFINED__
#define __IUIViewSettingsInterop_FWD_DEFINED__
typedef interface IUIViewSettingsInterop IUIViewSettingsInterop;
#ifdef __cplusplus
interface IUIViewSettingsInterop;
#endif /* __cplusplus */
#endif

/* Headers for imported files */

#include <inspectable.h>

#ifdef __cplusplus
extern "C" {
#endif

/*****************************************************************************
 * IUIViewSettingsInterop interface
 */
#ifndef __IUIViewSettingsInterop_INTERFACE_DEFINED__
#define __IUIViewSettingsInterop_INTERFACE_DEFINED__

DEFINE_GUID(IID_IUIViewSettingsInterop, 0x3694dbf9, 0x8f68, 0x44be, 0x8f,0xf5, 0x19,0x5c,0x98,0xed,0xe8,0xa6);
#if defined(__cplusplus) && !defined(CINTERFACE)
MIDL_INTERFACE("3694dbf9-8f68-44be-8ff5-195c98ede8a6")
IUIViewSettingsInterop : public IInspectable
{
    virtual HRESULT STDMETHODCALLTYPE GetForWindow(
        HWND hwnd,
        REFIID riid,
        void **ppv) = 0;

};
#ifdef __CRT_UUID_DECL
__CRT_UUID_DECL(IUIViewSettingsInterop, 0x3694dbf9, 0x8f68, 0x44be, 0x8f,0xf5, 0x19,0x5c,0x98,0xed,0xe8,0xa6)
#endif
#else
typedef struct IUIViewSettingsInteropVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IUIViewSettingsInterop *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IUIViewSettingsInterop *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IUIViewSettingsInterop *This);

    /*** IInspectable methods ***/
    HRESULT (STDMETHODCALLTYPE *GetIids)(
        IUIViewSettingsInterop *This,
        ULONG *iidCount,
        IID **iids);

    HRESULT (STDMETHODCALLTYPE *GetRuntimeClassName)(
        IUIViewSettingsInterop *This,
        HSTRING *className);

    HRESULT (STDMETHODCALLTYPE *GetTrustLevel)(
        IUIViewSettingsInterop *This,
        TrustLevel *trustLevel);

    /*** IUIViewSettingsInterop methods ***/
    HRESULT (STDMETHODCALLTYPE *GetForWindow)(
        IUIViewSettingsInterop *This,
        HWND hwnd,
        REFIID riid,
        void **ppv);

    END_INTERFACE
} IUIViewSettingsInteropVtbl;

interface IUIViewSettingsInterop {
    CONST_VTBL IUIViewSettingsInteropVtbl* lpVtbl;
};

#ifdef COBJMACROS
#ifndef WIDL_C_INLINE_WRAPPERS
/*** IUnknown methods ***/
#define IUIViewSettingsInterop_QueryInterface(This,riid,ppvObject) (This)->lpVtbl->QueryInterface(This,riid,ppvObject)
#define IUIViewSettingsInterop_AddRef(This) (This)->lpVtbl->AddRef(This)
#define IUIViewSettingsInterop_Release(This) (This)->lpVtbl->Release(This)
/*** IInspectable methods ***/
#define IUIViewSettingsInterop_GetIids(This,iidCount,iids) (This)->lpVtbl->GetIids(This,iidCount,iids)
#define IUIViewSettingsInterop_GetRuntimeClassName(This,className) (This)->lpVtbl->GetRuntimeClassName(This,className)
#define IUIViewSettingsInterop_GetTrustLevel(This,trustLevel) (This)->lpVtbl->GetTrustLevel(This,trustLevel)
/*** IUIViewSettingsInterop methods ***/
#define IUIViewSettingsInterop_GetForWindow(This,hwnd,riid,ppv) (This)->lpVtbl->GetForWindow(This,hwnd,riid,ppv)
#else
/*** IUnknown methods ***/
static inline HRESULT IUIViewSettingsInterop_QueryInterface(IUIViewSettingsInterop* This,REFIID riid,void **ppvObject) {
    return This->lpVtbl->QueryInterface(This,riid,ppvObject);
}
static inline ULONG IUIViewSettingsInterop_AddRef(IUIViewSettingsInterop* This) {
    return This->lpVtbl->AddRef(This);
}
static inline ULONG IUIViewSettingsInterop_Release(IUIViewSettingsInterop* This) {
    return This->lpVtbl->Release(This);
}
/*** IInspectable methods ***/
static inline HRESULT IUIViewSettingsInterop_GetIids(IUIViewSettingsInterop* This,ULONG *iidCount,IID **iids) {
    return This->lpVtbl->GetIids(This,iidCount,iids);
}
static inline HRESULT IUIViewSettingsInterop_GetRuntimeClassName(IUIViewSettingsInterop* This,HSTRING *className) {
    return This->lpVtbl->GetRuntimeClassName(This,className);
}
static inline HRESULT IUIViewSettingsInterop_GetTrustLevel(IUIViewSettingsInterop* This,TrustLevel *trustLevel) {
    return This->lpVtbl->GetTrustLevel(This,trustLevel);
}
/*** IUIViewSettingsInterop methods ***/
static inline HRESULT IUIViewSettingsInterop_GetForWindow(IUIViewSettingsInterop* This,HWND hwnd,REFIID riid,void **ppv) {
    return This->lpVtbl->GetForWindow(This,hwnd,riid,ppv);
}
#endif
#endif

#endif


#endif  /* __IUIViewSettingsInterop_INTERFACE_DEFINED__ */

/* Begin additional prototypes for all interfaces */

ULONG           __RPC_USER HWND_UserSize     (ULONG *, ULONG, HWND *);
unsigned char * __RPC_USER HWND_UserMarshal  (ULONG *, unsigned char *, HWND *);
unsigned char * __RPC_USER HWND_UserUnmarshal(ULONG *, unsigned char *, HWND *);
void            __RPC_USER HWND_UserFree     (ULONG *, HWND *);

/* End additional prototypes */

#ifdef __cplusplus
}
#endif

#endif /* __uiviewsettingsinterop_h__ */
