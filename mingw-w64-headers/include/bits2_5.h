/*** Autogenerated by WIDL 9.18 from include/bits2_5.idl - Do not edit ***/

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

#ifndef __bits2_5_h__
#define __bits2_5_h__

#ifndef __WIDL_INLINE
#if defined(__cplusplus) || defined(_MSC_VER)
#define __WIDL_INLINE inline
#elif defined(__GNUC__)
#define __WIDL_INLINE __inline__
#endif
#endif

/* Forward declarations */

#ifndef __IBackgroundCopyJobHttpOptions_FWD_DEFINED__
#define __IBackgroundCopyJobHttpOptions_FWD_DEFINED__
typedef interface IBackgroundCopyJobHttpOptions IBackgroundCopyJobHttpOptions;
#ifdef __cplusplus
interface IBackgroundCopyJobHttpOptions;
#endif /* __cplusplus */
#endif

#ifndef __BackgroundCopyManager2_5_FWD_DEFINED__
#define __BackgroundCopyManager2_5_FWD_DEFINED__
#ifdef __cplusplus
typedef class BackgroundCopyManager2_5 BackgroundCopyManager2_5;
#else
typedef struct BackgroundCopyManager2_5 BackgroundCopyManager2_5;
#endif /* defined __cplusplus */
#endif /* defined __BackgroundCopyManager2_5_FWD_DEFINED__ */

/* Headers for imported files */

#include <bits.h>
#include <bits1_5.h>
#include <bits2_0.h>

#ifdef __cplusplus
extern "C" {
#endif

/*****************************************************************************
 * IBackgroundCopyJobHttpOptions interface
 */
#ifndef __IBackgroundCopyJobHttpOptions_INTERFACE_DEFINED__
#define __IBackgroundCopyJobHttpOptions_INTERFACE_DEFINED__

typedef enum __WIDL_bits2_5_generated_name_00000016 {
    BG_CERT_STORE_LOCATION_CURRENT_USER = 0,
    BG_CERT_STORE_LOCATION_LOCAL_MACHINE = 1,
    BG_CERT_STORE_LOCATION_CURRENT_SERVICE = 2,
    BG_CERT_STORE_LOCATION_SERVICES = 3,
    BG_CERT_STORE_LOCATION_USERS = 4,
    BG_CERT_STORE_LOCATION_CURRENT_USER_GROUP_POLICY = 5,
    BG_CERT_STORE_LOCATION_LOCAL_MACHINE_GROUP_POLICY = 6,
    BG_CERT_STORE_LOCATION_LOCAL_MACHINE_ENTERPRISE = 7
} BG_CERT_STORE_LOCATION;
DEFINE_GUID(IID_IBackgroundCopyJobHttpOptions, 0xf1bd1079, 0x9f01, 0x4bdc, 0x80,0x36, 0xf0,0x9b,0x70,0x09,0x50,0x66);
#if defined(__cplusplus) && !defined(CINTERFACE)
MIDL_INTERFACE("f1bd1079-9f01-4bdc-8036-f09b70095066")
IBackgroundCopyJobHttpOptions : public IUnknown
{
    virtual HRESULT STDMETHODCALLTYPE SetClientCertificateByID(
        BG_CERT_STORE_LOCATION StoreLocation,
        LPCWSTR StoreName,
        BYTE *pCertHashBlob) = 0;

    virtual HRESULT STDMETHODCALLTYPE SetClientCertificateByName(
        BG_CERT_STORE_LOCATION StoreLocation,
        LPCWSTR StoreName,
        LPCWSTR SubjectName) = 0;

    virtual HRESULT STDMETHODCALLTYPE RemoveClientCertificate(
        ) = 0;

    virtual HRESULT STDMETHODCALLTYPE GetClientCertificate(
        BG_CERT_STORE_LOCATION *pStoreLocation,
        LPWSTR *pStoreName,
        BYTE **ppCertHashBlob,
        LPWSTR *pSubjectName) = 0;

    virtual HRESULT STDMETHODCALLTYPE SetCustomHeaders(
        LPCWSTR RequestHeaders) = 0;

    virtual HRESULT STDMETHODCALLTYPE GetCustomHeaders(
        LPWSTR *pRequestHeaders) = 0;

    virtual HRESULT STDMETHODCALLTYPE SetSecurityFlags(
        ULONG Flags) = 0;

    virtual HRESULT STDMETHODCALLTYPE GetSecurityFlags(
        ULONG *pFlags) = 0;

};
#ifdef __CRT_UUID_DECL
__CRT_UUID_DECL(IBackgroundCopyJobHttpOptions, 0xf1bd1079, 0x9f01, 0x4bdc, 0x80,0x36, 0xf0,0x9b,0x70,0x09,0x50,0x66)
#endif
#else
typedef struct IBackgroundCopyJobHttpOptionsVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IBackgroundCopyJobHttpOptions *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IBackgroundCopyJobHttpOptions *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IBackgroundCopyJobHttpOptions *This);

    /*** IBackgroundCopyJobHttpOptions methods ***/
    HRESULT (STDMETHODCALLTYPE *SetClientCertificateByID)(
        IBackgroundCopyJobHttpOptions *This,
        BG_CERT_STORE_LOCATION StoreLocation,
        LPCWSTR StoreName,
        BYTE *pCertHashBlob);

    HRESULT (STDMETHODCALLTYPE *SetClientCertificateByName)(
        IBackgroundCopyJobHttpOptions *This,
        BG_CERT_STORE_LOCATION StoreLocation,
        LPCWSTR StoreName,
        LPCWSTR SubjectName);

    HRESULT (STDMETHODCALLTYPE *RemoveClientCertificate)(
        IBackgroundCopyJobHttpOptions *This);

    HRESULT (STDMETHODCALLTYPE *GetClientCertificate)(
        IBackgroundCopyJobHttpOptions *This,
        BG_CERT_STORE_LOCATION *pStoreLocation,
        LPWSTR *pStoreName,
        BYTE **ppCertHashBlob,
        LPWSTR *pSubjectName);

    HRESULT (STDMETHODCALLTYPE *SetCustomHeaders)(
        IBackgroundCopyJobHttpOptions *This,
        LPCWSTR RequestHeaders);

    HRESULT (STDMETHODCALLTYPE *GetCustomHeaders)(
        IBackgroundCopyJobHttpOptions *This,
        LPWSTR *pRequestHeaders);

    HRESULT (STDMETHODCALLTYPE *SetSecurityFlags)(
        IBackgroundCopyJobHttpOptions *This,
        ULONG Flags);

    HRESULT (STDMETHODCALLTYPE *GetSecurityFlags)(
        IBackgroundCopyJobHttpOptions *This,
        ULONG *pFlags);

    END_INTERFACE
} IBackgroundCopyJobHttpOptionsVtbl;

interface IBackgroundCopyJobHttpOptions {
    CONST_VTBL IBackgroundCopyJobHttpOptionsVtbl* lpVtbl;
};

#ifdef COBJMACROS
#ifndef WIDL_C_INLINE_WRAPPERS
/*** IUnknown methods ***/
#define IBackgroundCopyJobHttpOptions_QueryInterface(This,riid,ppvObject) (This)->lpVtbl->QueryInterface(This,riid,ppvObject)
#define IBackgroundCopyJobHttpOptions_AddRef(This) (This)->lpVtbl->AddRef(This)
#define IBackgroundCopyJobHttpOptions_Release(This) (This)->lpVtbl->Release(This)
/*** IBackgroundCopyJobHttpOptions methods ***/
#define IBackgroundCopyJobHttpOptions_SetClientCertificateByID(This,StoreLocation,StoreName,pCertHashBlob) (This)->lpVtbl->SetClientCertificateByID(This,StoreLocation,StoreName,pCertHashBlob)
#define IBackgroundCopyJobHttpOptions_SetClientCertificateByName(This,StoreLocation,StoreName,SubjectName) (This)->lpVtbl->SetClientCertificateByName(This,StoreLocation,StoreName,SubjectName)
#define IBackgroundCopyJobHttpOptions_RemoveClientCertificate(This) (This)->lpVtbl->RemoveClientCertificate(This)
#define IBackgroundCopyJobHttpOptions_GetClientCertificate(This,pStoreLocation,pStoreName,ppCertHashBlob,pSubjectName) (This)->lpVtbl->GetClientCertificate(This,pStoreLocation,pStoreName,ppCertHashBlob,pSubjectName)
#define IBackgroundCopyJobHttpOptions_SetCustomHeaders(This,RequestHeaders) (This)->lpVtbl->SetCustomHeaders(This,RequestHeaders)
#define IBackgroundCopyJobHttpOptions_GetCustomHeaders(This,pRequestHeaders) (This)->lpVtbl->GetCustomHeaders(This,pRequestHeaders)
#define IBackgroundCopyJobHttpOptions_SetSecurityFlags(This,Flags) (This)->lpVtbl->SetSecurityFlags(This,Flags)
#define IBackgroundCopyJobHttpOptions_GetSecurityFlags(This,pFlags) (This)->lpVtbl->GetSecurityFlags(This,pFlags)
#else
/*** IUnknown methods ***/
static __WIDL_INLINE HRESULT IBackgroundCopyJobHttpOptions_QueryInterface(IBackgroundCopyJobHttpOptions* This,REFIID riid,void **ppvObject) {
    return This->lpVtbl->QueryInterface(This,riid,ppvObject);
}
static __WIDL_INLINE ULONG IBackgroundCopyJobHttpOptions_AddRef(IBackgroundCopyJobHttpOptions* This) {
    return This->lpVtbl->AddRef(This);
}
static __WIDL_INLINE ULONG IBackgroundCopyJobHttpOptions_Release(IBackgroundCopyJobHttpOptions* This) {
    return This->lpVtbl->Release(This);
}
/*** IBackgroundCopyJobHttpOptions methods ***/
static __WIDL_INLINE HRESULT IBackgroundCopyJobHttpOptions_SetClientCertificateByID(IBackgroundCopyJobHttpOptions* This,BG_CERT_STORE_LOCATION StoreLocation,LPCWSTR StoreName,BYTE *pCertHashBlob) {
    return This->lpVtbl->SetClientCertificateByID(This,StoreLocation,StoreName,pCertHashBlob);
}
static __WIDL_INLINE HRESULT IBackgroundCopyJobHttpOptions_SetClientCertificateByName(IBackgroundCopyJobHttpOptions* This,BG_CERT_STORE_LOCATION StoreLocation,LPCWSTR StoreName,LPCWSTR SubjectName) {
    return This->lpVtbl->SetClientCertificateByName(This,StoreLocation,StoreName,SubjectName);
}
static __WIDL_INLINE HRESULT IBackgroundCopyJobHttpOptions_RemoveClientCertificate(IBackgroundCopyJobHttpOptions* This) {
    return This->lpVtbl->RemoveClientCertificate(This);
}
static __WIDL_INLINE HRESULT IBackgroundCopyJobHttpOptions_GetClientCertificate(IBackgroundCopyJobHttpOptions* This,BG_CERT_STORE_LOCATION *pStoreLocation,LPWSTR *pStoreName,BYTE **ppCertHashBlob,LPWSTR *pSubjectName) {
    return This->lpVtbl->GetClientCertificate(This,pStoreLocation,pStoreName,ppCertHashBlob,pSubjectName);
}
static __WIDL_INLINE HRESULT IBackgroundCopyJobHttpOptions_SetCustomHeaders(IBackgroundCopyJobHttpOptions* This,LPCWSTR RequestHeaders) {
    return This->lpVtbl->SetCustomHeaders(This,RequestHeaders);
}
static __WIDL_INLINE HRESULT IBackgroundCopyJobHttpOptions_GetCustomHeaders(IBackgroundCopyJobHttpOptions* This,LPWSTR *pRequestHeaders) {
    return This->lpVtbl->GetCustomHeaders(This,pRequestHeaders);
}
static __WIDL_INLINE HRESULT IBackgroundCopyJobHttpOptions_SetSecurityFlags(IBackgroundCopyJobHttpOptions* This,ULONG Flags) {
    return This->lpVtbl->SetSecurityFlags(This,Flags);
}
static __WIDL_INLINE HRESULT IBackgroundCopyJobHttpOptions_GetSecurityFlags(IBackgroundCopyJobHttpOptions* This,ULONG *pFlags) {
    return This->lpVtbl->GetSecurityFlags(This,pFlags);
}
#endif
#endif

#endif


#endif  /* __IBackgroundCopyJobHttpOptions_INTERFACE_DEFINED__ */

#ifndef __BackgroundCopyManager2_5_LIBRARY_DEFINED__
#define __BackgroundCopyManager2_5_LIBRARY_DEFINED__

DEFINE_GUID(LIBID_BackgroundCopyManager2_5, 0x4974177c, 0x3bb6, 0x4c37, 0x9f,0xf0, 0x6b,0x74,0x26,0xf0,0xab,0xa9);

/*****************************************************************************
 * BackgroundCopyManager2_5 coclass
 */

DEFINE_GUID(CLSID_BackgroundCopyManager2_5, 0x03ca98d6, 0xff5d, 0x49b8, 0xab,0xc6, 0x03,0xdd,0x84,0x12,0x70,0x20);

#ifdef __cplusplus
class DECLSPEC_UUID("03ca98d6-ff5d-49b8-abc6-03dd84127020") BackgroundCopyManager2_5;
#ifdef __CRT_UUID_DECL
__CRT_UUID_DECL(BackgroundCopyManager2_5, 0x03ca98d6, 0xff5d, 0x49b8, 0xab,0xc6, 0x03,0xdd,0x84,0x12,0x70,0x20)
#endif
#endif

#ifndef __IBackgroundCopyCallback_FWD_DEFINED__
#define __IBackgroundCopyCallback_FWD_DEFINED__
typedef interface IBackgroundCopyCallback IBackgroundCopyCallback;
#ifdef __cplusplus
interface IBackgroundCopyCallback;
#endif /* __cplusplus */
#endif

#ifndef __IBackgroundCopyJobHttpOptions_FWD_DEFINED__
#define __IBackgroundCopyJobHttpOptions_FWD_DEFINED__
typedef interface IBackgroundCopyJobHttpOptions IBackgroundCopyJobHttpOptions;
#ifdef __cplusplus
interface IBackgroundCopyJobHttpOptions;
#endif /* __cplusplus */
#endif

#endif /* __BackgroundCopyManager2_5_LIBRARY_DEFINED__ */
#include "bits3_0.h"
/* Begin additional prototypes for all interfaces */


/* End additional prototypes */

#ifdef __cplusplus
}
#endif

#endif /* __bits2_5_h__ */
