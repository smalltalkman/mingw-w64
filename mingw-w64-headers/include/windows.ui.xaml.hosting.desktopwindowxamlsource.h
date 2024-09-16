/*** Autogenerated by WIDL 9.17 from include/windows.ui.xaml.hosting.desktopwindowxamlsource.idl - Do not edit ***/

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

#ifndef __windows_ui_xaml_hosting_desktopwindowxamlsource_h__
#define __windows_ui_xaml_hosting_desktopwindowxamlsource_h__

#ifndef __WIDL_INLINE
#if defined(__cplusplus) || defined(_MSC_VER)
#define __WIDL_INLINE inline
#elif defined(__GNUC__)
#define __WIDL_INLINE __inline__
#endif
#endif

/* Forward declarations */

#ifndef __IDesktopWindowXamlSourceNative_FWD_DEFINED__
#define __IDesktopWindowXamlSourceNative_FWD_DEFINED__
typedef interface IDesktopWindowXamlSourceNative IDesktopWindowXamlSourceNative;
#ifdef __cplusplus
interface IDesktopWindowXamlSourceNative;
#endif /* __cplusplus */
#endif

#ifndef __IDesktopWindowXamlSourceNative2_FWD_DEFINED__
#define __IDesktopWindowXamlSourceNative2_FWD_DEFINED__
typedef interface IDesktopWindowXamlSourceNative2 IDesktopWindowXamlSourceNative2;
#ifdef __cplusplus
interface IDesktopWindowXamlSourceNative2;
#endif /* __cplusplus */
#endif

/* Headers for imported files */

#include <oaidl.h>

#ifdef __cplusplus
extern "C" {
#endif

/*****************************************************************************
 * IDesktopWindowXamlSourceNative interface
 */
#ifndef __IDesktopWindowXamlSourceNative_INTERFACE_DEFINED__
#define __IDesktopWindowXamlSourceNative_INTERFACE_DEFINED__

DEFINE_GUID(IID_IDesktopWindowXamlSourceNative, 0x3cbcf1bf, 0x2f76, 0x4e9c, 0x96,0xab, 0xe8,0x4b,0x37,0x97,0x25,0x54);
#if defined(__cplusplus) && !defined(CINTERFACE)
MIDL_INTERFACE("3cbcf1bf-2f76-4e9c-96ab-e84b37972554")
IDesktopWindowXamlSourceNative : public IUnknown
{
    virtual HRESULT STDMETHODCALLTYPE AttachToWindow(
        HWND parent_wnd) = 0;

    virtual HRESULT STDMETHODCALLTYPE get_WindowHandle(
        HWND *wnd) = 0;

};
#ifdef __CRT_UUID_DECL
__CRT_UUID_DECL(IDesktopWindowXamlSourceNative, 0x3cbcf1bf, 0x2f76, 0x4e9c, 0x96,0xab, 0xe8,0x4b,0x37,0x97,0x25,0x54)
#endif
#else
typedef struct IDesktopWindowXamlSourceNativeVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IDesktopWindowXamlSourceNative *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IDesktopWindowXamlSourceNative *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IDesktopWindowXamlSourceNative *This);

    /*** IDesktopWindowXamlSourceNative methods ***/
    HRESULT (STDMETHODCALLTYPE *AttachToWindow)(
        IDesktopWindowXamlSourceNative *This,
        HWND parent_wnd);

    HRESULT (STDMETHODCALLTYPE *get_WindowHandle)(
        IDesktopWindowXamlSourceNative *This,
        HWND *wnd);

    END_INTERFACE
} IDesktopWindowXamlSourceNativeVtbl;

interface IDesktopWindowXamlSourceNative {
    CONST_VTBL IDesktopWindowXamlSourceNativeVtbl* lpVtbl;
};

#ifdef COBJMACROS
#ifndef WIDL_C_INLINE_WRAPPERS
/*** IUnknown methods ***/
#define IDesktopWindowXamlSourceNative_QueryInterface(This,riid,ppvObject) (This)->lpVtbl->QueryInterface(This,riid,ppvObject)
#define IDesktopWindowXamlSourceNative_AddRef(This) (This)->lpVtbl->AddRef(This)
#define IDesktopWindowXamlSourceNative_Release(This) (This)->lpVtbl->Release(This)
/*** IDesktopWindowXamlSourceNative methods ***/
#define IDesktopWindowXamlSourceNative_AttachToWindow(This,parent_wnd) (This)->lpVtbl->AttachToWindow(This,parent_wnd)
#define IDesktopWindowXamlSourceNative_get_WindowHandle(This,wnd) (This)->lpVtbl->get_WindowHandle(This,wnd)
#else
/*** IUnknown methods ***/
static __WIDL_INLINE HRESULT IDesktopWindowXamlSourceNative_QueryInterface(IDesktopWindowXamlSourceNative* This,REFIID riid,void **ppvObject) {
    return This->lpVtbl->QueryInterface(This,riid,ppvObject);
}
static __WIDL_INLINE ULONG IDesktopWindowXamlSourceNative_AddRef(IDesktopWindowXamlSourceNative* This) {
    return This->lpVtbl->AddRef(This);
}
static __WIDL_INLINE ULONG IDesktopWindowXamlSourceNative_Release(IDesktopWindowXamlSourceNative* This) {
    return This->lpVtbl->Release(This);
}
/*** IDesktopWindowXamlSourceNative methods ***/
static __WIDL_INLINE HRESULT IDesktopWindowXamlSourceNative_AttachToWindow(IDesktopWindowXamlSourceNative* This,HWND parent_wnd) {
    return This->lpVtbl->AttachToWindow(This,parent_wnd);
}
static __WIDL_INLINE HRESULT IDesktopWindowXamlSourceNative_get_WindowHandle(IDesktopWindowXamlSourceNative* This,HWND *wnd) {
    return This->lpVtbl->get_WindowHandle(This,wnd);
}
#endif
#endif

#endif


#endif  /* __IDesktopWindowXamlSourceNative_INTERFACE_DEFINED__ */

/*****************************************************************************
 * IDesktopWindowXamlSourceNative2 interface
 */
#ifndef __IDesktopWindowXamlSourceNative2_INTERFACE_DEFINED__
#define __IDesktopWindowXamlSourceNative2_INTERFACE_DEFINED__

DEFINE_GUID(IID_IDesktopWindowXamlSourceNative2, 0xe3dcd8c7, 0x3057, 0x4692, 0x99,0xc3, 0x7b,0x77,0x20,0xaf,0xda,0x31);
#if defined(__cplusplus) && !defined(CINTERFACE)
MIDL_INTERFACE("e3dcd8c7-3057-4692-99c3-7b7720afda31")
IDesktopWindowXamlSourceNative2 : public IDesktopWindowXamlSourceNative
{
    virtual HRESULT STDMETHODCALLTYPE PreTranslateMessage(
        const MSG *message,
        WINBOOL *result) = 0;

};
#ifdef __CRT_UUID_DECL
__CRT_UUID_DECL(IDesktopWindowXamlSourceNative2, 0xe3dcd8c7, 0x3057, 0x4692, 0x99,0xc3, 0x7b,0x77,0x20,0xaf,0xda,0x31)
#endif
#else
typedef struct IDesktopWindowXamlSourceNative2Vtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IDesktopWindowXamlSourceNative2 *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IDesktopWindowXamlSourceNative2 *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IDesktopWindowXamlSourceNative2 *This);

    /*** IDesktopWindowXamlSourceNative methods ***/
    HRESULT (STDMETHODCALLTYPE *AttachToWindow)(
        IDesktopWindowXamlSourceNative2 *This,
        HWND parent_wnd);

    HRESULT (STDMETHODCALLTYPE *get_WindowHandle)(
        IDesktopWindowXamlSourceNative2 *This,
        HWND *wnd);

    /*** IDesktopWindowXamlSourceNative2 methods ***/
    HRESULT (STDMETHODCALLTYPE *PreTranslateMessage)(
        IDesktopWindowXamlSourceNative2 *This,
        const MSG *message,
        WINBOOL *result);

    END_INTERFACE
} IDesktopWindowXamlSourceNative2Vtbl;

interface IDesktopWindowXamlSourceNative2 {
    CONST_VTBL IDesktopWindowXamlSourceNative2Vtbl* lpVtbl;
};

#ifdef COBJMACROS
#ifndef WIDL_C_INLINE_WRAPPERS
/*** IUnknown methods ***/
#define IDesktopWindowXamlSourceNative2_QueryInterface(This,riid,ppvObject) (This)->lpVtbl->QueryInterface(This,riid,ppvObject)
#define IDesktopWindowXamlSourceNative2_AddRef(This) (This)->lpVtbl->AddRef(This)
#define IDesktopWindowXamlSourceNative2_Release(This) (This)->lpVtbl->Release(This)
/*** IDesktopWindowXamlSourceNative methods ***/
#define IDesktopWindowXamlSourceNative2_AttachToWindow(This,parent_wnd) (This)->lpVtbl->AttachToWindow(This,parent_wnd)
#define IDesktopWindowXamlSourceNative2_get_WindowHandle(This,wnd) (This)->lpVtbl->get_WindowHandle(This,wnd)
/*** IDesktopWindowXamlSourceNative2 methods ***/
#define IDesktopWindowXamlSourceNative2_PreTranslateMessage(This,message,result) (This)->lpVtbl->PreTranslateMessage(This,message,result)
#else
/*** IUnknown methods ***/
static __WIDL_INLINE HRESULT IDesktopWindowXamlSourceNative2_QueryInterface(IDesktopWindowXamlSourceNative2* This,REFIID riid,void **ppvObject) {
    return This->lpVtbl->QueryInterface(This,riid,ppvObject);
}
static __WIDL_INLINE ULONG IDesktopWindowXamlSourceNative2_AddRef(IDesktopWindowXamlSourceNative2* This) {
    return This->lpVtbl->AddRef(This);
}
static __WIDL_INLINE ULONG IDesktopWindowXamlSourceNative2_Release(IDesktopWindowXamlSourceNative2* This) {
    return This->lpVtbl->Release(This);
}
/*** IDesktopWindowXamlSourceNative methods ***/
static __WIDL_INLINE HRESULT IDesktopWindowXamlSourceNative2_AttachToWindow(IDesktopWindowXamlSourceNative2* This,HWND parent_wnd) {
    return This->lpVtbl->AttachToWindow(This,parent_wnd);
}
static __WIDL_INLINE HRESULT IDesktopWindowXamlSourceNative2_get_WindowHandle(IDesktopWindowXamlSourceNative2* This,HWND *wnd) {
    return This->lpVtbl->get_WindowHandle(This,wnd);
}
/*** IDesktopWindowXamlSourceNative2 methods ***/
static __WIDL_INLINE HRESULT IDesktopWindowXamlSourceNative2_PreTranslateMessage(IDesktopWindowXamlSourceNative2* This,const MSG *message,WINBOOL *result) {
    return This->lpVtbl->PreTranslateMessage(This,message,result);
}
#endif
#endif

#endif


#endif  /* __IDesktopWindowXamlSourceNative2_INTERFACE_DEFINED__ */

/* Begin additional prototypes for all interfaces */


/* End additional prototypes */

#ifdef __cplusplus
}
#endif

#endif /* __windows_ui_xaml_hosting_desktopwindowxamlsource_h__ */
