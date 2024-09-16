/*** Autogenerated by WIDL 9.17 from include/tlogstg.idl - Do not edit ***/

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

#ifndef __tlogstg_h__
#define __tlogstg_h__

#ifndef __WIDL_INLINE
#if defined(__cplusplus) || defined(_MSC_VER)
#define __WIDL_INLINE inline
#elif defined(__GNUC__)
#define __WIDL_INLINE __inline__
#endif
#endif

/* Forward declarations */

#ifndef __ITravelLogEntry_FWD_DEFINED__
#define __ITravelLogEntry_FWD_DEFINED__
typedef interface ITravelLogEntry ITravelLogEntry;
#ifdef __cplusplus
interface ITravelLogEntry;
#endif /* __cplusplus */
#endif

#ifndef __ITravelLogClient_FWD_DEFINED__
#define __ITravelLogClient_FWD_DEFINED__
typedef interface ITravelLogClient ITravelLogClient;
#ifdef __cplusplus
interface ITravelLogClient;
#endif /* __cplusplus */
#endif

#ifndef __IEnumTravelLogEntry_FWD_DEFINED__
#define __IEnumTravelLogEntry_FWD_DEFINED__
typedef interface IEnumTravelLogEntry IEnumTravelLogEntry;
#ifdef __cplusplus
interface IEnumTravelLogEntry;
#endif /* __cplusplus */
#endif

#ifndef __ITravelLogStg_FWD_DEFINED__
#define __ITravelLogStg_FWD_DEFINED__
typedef interface ITravelLogStg ITravelLogStg;
#ifdef __cplusplus
interface ITravelLogStg;
#endif /* __cplusplus */
#endif

/* Headers for imported files */

#include <objidl.h>
#include <oleidl.h>
#include <shtypes.h>

#ifdef __cplusplus
extern "C" {
#endif

/**
 * This file is part of the mingw-w64 runtime package.
 * No warranty is given; refer to the file DISCLAIMER within this package.
 */

#include <winapifamily.h>

#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)

#define SID_STravelLogCursor IID_ITravelLogStg
enum tagTLENUMF {
    TLEF_RELATIVE_INCLUDE_CURRENT = 0x1,
    TLEF_RELATIVE_BACK = 0x10,
    TLEF_RELATIVE_FORE = 0x20,
    TLEF_INCLUDE_UNINVOKEABLE = 0x40,
    TLEF_ABSOLUTE = 0x31,
    TLEF_EXCLUDE_SUBFRAME_ENTRIES = 0x80
};
typedef struct _WINDOWDATA {
    DWORD dwWindowID;
    UINT uiCP;
    PIDLIST_ABSOLUTE pidl;
    LPWSTR lpszUrl;
    LPWSTR lpszUrlLocation;
    LPWSTR lpszTitle;
} WINDOWDATA;
typedef DWORD TLENUMF;
typedef WINDOWDATA *LPWINDOWDATA;
typedef const WINDOWDATA *LPCWINDOWDATA;
/*****************************************************************************
 * ITravelLogEntry interface
 */
#ifndef __ITravelLogEntry_INTERFACE_DEFINED__
#define __ITravelLogEntry_INTERFACE_DEFINED__

DEFINE_GUID(IID_ITravelLogEntry, 0x7ebfdd87, 0xad18, 0x11d3, 0xa4,0xc5, 0x00,0xc0,0x4f,0x72,0xd6,0xb8);
#if defined(__cplusplus) && !defined(CINTERFACE)
MIDL_INTERFACE("7ebfdd87-ad18-11d3-a4c5-00c04f72d6b8")
ITravelLogEntry : public IUnknown
{
    virtual HRESULT STDMETHODCALLTYPE GetTitle(
        LPWSTR *ppszTitle) = 0;

    virtual HRESULT STDMETHODCALLTYPE GetURL(
        LPWSTR *ppszURL) = 0;

};
#ifdef __CRT_UUID_DECL
__CRT_UUID_DECL(ITravelLogEntry, 0x7ebfdd87, 0xad18, 0x11d3, 0xa4,0xc5, 0x00,0xc0,0x4f,0x72,0xd6,0xb8)
#endif
#else
typedef struct ITravelLogEntryVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        ITravelLogEntry *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        ITravelLogEntry *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        ITravelLogEntry *This);

    /*** ITravelLogEntry methods ***/
    HRESULT (STDMETHODCALLTYPE *GetTitle)(
        ITravelLogEntry *This,
        LPWSTR *ppszTitle);

    HRESULT (STDMETHODCALLTYPE *GetURL)(
        ITravelLogEntry *This,
        LPWSTR *ppszURL);

    END_INTERFACE
} ITravelLogEntryVtbl;

interface ITravelLogEntry {
    CONST_VTBL ITravelLogEntryVtbl* lpVtbl;
};

#ifdef COBJMACROS
#ifndef WIDL_C_INLINE_WRAPPERS
/*** IUnknown methods ***/
#define ITravelLogEntry_QueryInterface(This,riid,ppvObject) (This)->lpVtbl->QueryInterface(This,riid,ppvObject)
#define ITravelLogEntry_AddRef(This) (This)->lpVtbl->AddRef(This)
#define ITravelLogEntry_Release(This) (This)->lpVtbl->Release(This)
/*** ITravelLogEntry methods ***/
#define ITravelLogEntry_GetTitle(This,ppszTitle) (This)->lpVtbl->GetTitle(This,ppszTitle)
#define ITravelLogEntry_GetURL(This,ppszURL) (This)->lpVtbl->GetURL(This,ppszURL)
#else
/*** IUnknown methods ***/
static __WIDL_INLINE HRESULT ITravelLogEntry_QueryInterface(ITravelLogEntry* This,REFIID riid,void **ppvObject) {
    return This->lpVtbl->QueryInterface(This,riid,ppvObject);
}
static __WIDL_INLINE ULONG ITravelLogEntry_AddRef(ITravelLogEntry* This) {
    return This->lpVtbl->AddRef(This);
}
static __WIDL_INLINE ULONG ITravelLogEntry_Release(ITravelLogEntry* This) {
    return This->lpVtbl->Release(This);
}
/*** ITravelLogEntry methods ***/
static __WIDL_INLINE HRESULT ITravelLogEntry_GetTitle(ITravelLogEntry* This,LPWSTR *ppszTitle) {
    return This->lpVtbl->GetTitle(This,ppszTitle);
}
static __WIDL_INLINE HRESULT ITravelLogEntry_GetURL(ITravelLogEntry* This,LPWSTR *ppszURL) {
    return This->lpVtbl->GetURL(This,ppszURL);
}
#endif
#endif

#endif


#endif  /* __ITravelLogEntry_INTERFACE_DEFINED__ */

/*****************************************************************************
 * ITravelLogClient interface
 */
#ifndef __ITravelLogClient_INTERFACE_DEFINED__
#define __ITravelLogClient_INTERFACE_DEFINED__

DEFINE_GUID(IID_ITravelLogClient, 0x241c033e, 0xe659, 0x43da, 0xaa,0x4d, 0x40,0x86,0xdb,0xc4,0x75,0x8d);
#if defined(__cplusplus) && !defined(CINTERFACE)
MIDL_INTERFACE("241c033e-e659-43da-aa4d-4086dbc4758d")
ITravelLogClient : public IUnknown
{
    virtual HRESULT STDMETHODCALLTYPE FindWindowByIndex(
        DWORD dwID,
        IUnknown **ppunk) = 0;

    virtual HRESULT STDMETHODCALLTYPE GetWindowData(
        IStream *pStream,
        LPWINDOWDATA pWinData) = 0;

    virtual HRESULT STDMETHODCALLTYPE LoadHistoryPosition(
        LPWSTR pszUrlLocation,
        DWORD dwPosition) = 0;

};
#ifdef __CRT_UUID_DECL
__CRT_UUID_DECL(ITravelLogClient, 0x241c033e, 0xe659, 0x43da, 0xaa,0x4d, 0x40,0x86,0xdb,0xc4,0x75,0x8d)
#endif
#else
typedef struct ITravelLogClientVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        ITravelLogClient *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        ITravelLogClient *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        ITravelLogClient *This);

    /*** ITravelLogClient methods ***/
    HRESULT (STDMETHODCALLTYPE *FindWindowByIndex)(
        ITravelLogClient *This,
        DWORD dwID,
        IUnknown **ppunk);

    HRESULT (STDMETHODCALLTYPE *GetWindowData)(
        ITravelLogClient *This,
        IStream *pStream,
        LPWINDOWDATA pWinData);

    HRESULT (STDMETHODCALLTYPE *LoadHistoryPosition)(
        ITravelLogClient *This,
        LPWSTR pszUrlLocation,
        DWORD dwPosition);

    END_INTERFACE
} ITravelLogClientVtbl;

interface ITravelLogClient {
    CONST_VTBL ITravelLogClientVtbl* lpVtbl;
};

#ifdef COBJMACROS
#ifndef WIDL_C_INLINE_WRAPPERS
/*** IUnknown methods ***/
#define ITravelLogClient_QueryInterface(This,riid,ppvObject) (This)->lpVtbl->QueryInterface(This,riid,ppvObject)
#define ITravelLogClient_AddRef(This) (This)->lpVtbl->AddRef(This)
#define ITravelLogClient_Release(This) (This)->lpVtbl->Release(This)
/*** ITravelLogClient methods ***/
#define ITravelLogClient_FindWindowByIndex(This,dwID,ppunk) (This)->lpVtbl->FindWindowByIndex(This,dwID,ppunk)
#define ITravelLogClient_GetWindowData(This,pStream,pWinData) (This)->lpVtbl->GetWindowData(This,pStream,pWinData)
#define ITravelLogClient_LoadHistoryPosition(This,pszUrlLocation,dwPosition) (This)->lpVtbl->LoadHistoryPosition(This,pszUrlLocation,dwPosition)
#else
/*** IUnknown methods ***/
static __WIDL_INLINE HRESULT ITravelLogClient_QueryInterface(ITravelLogClient* This,REFIID riid,void **ppvObject) {
    return This->lpVtbl->QueryInterface(This,riid,ppvObject);
}
static __WIDL_INLINE ULONG ITravelLogClient_AddRef(ITravelLogClient* This) {
    return This->lpVtbl->AddRef(This);
}
static __WIDL_INLINE ULONG ITravelLogClient_Release(ITravelLogClient* This) {
    return This->lpVtbl->Release(This);
}
/*** ITravelLogClient methods ***/
static __WIDL_INLINE HRESULT ITravelLogClient_FindWindowByIndex(ITravelLogClient* This,DWORD dwID,IUnknown **ppunk) {
    return This->lpVtbl->FindWindowByIndex(This,dwID,ppunk);
}
static __WIDL_INLINE HRESULT ITravelLogClient_GetWindowData(ITravelLogClient* This,IStream *pStream,LPWINDOWDATA pWinData) {
    return This->lpVtbl->GetWindowData(This,pStream,pWinData);
}
static __WIDL_INLINE HRESULT ITravelLogClient_LoadHistoryPosition(ITravelLogClient* This,LPWSTR pszUrlLocation,DWORD dwPosition) {
    return This->lpVtbl->LoadHistoryPosition(This,pszUrlLocation,dwPosition);
}
#endif
#endif

#endif


#endif  /* __ITravelLogClient_INTERFACE_DEFINED__ */

/*****************************************************************************
 * IEnumTravelLogEntry interface
 */
#ifndef __IEnumTravelLogEntry_INTERFACE_DEFINED__
#define __IEnumTravelLogEntry_INTERFACE_DEFINED__

DEFINE_GUID(IID_IEnumTravelLogEntry, 0x7ebfdd85, 0xad18, 0x11d3, 0xa4,0xc5, 0x00,0xc0,0x4f,0x72,0xd6,0xb8);
#if defined(__cplusplus) && !defined(CINTERFACE)
MIDL_INTERFACE("7ebfdd85-ad18-11d3-a4c5-00c04f72d6b8")
IEnumTravelLogEntry : public IUnknown
{
    virtual HRESULT STDMETHODCALLTYPE Next(
        ULONG cElt,
        ITravelLogEntry **rgElt,
        ULONG *pcEltFetched) = 0;

    virtual HRESULT STDMETHODCALLTYPE Skip(
        ULONG cElt) = 0;

    virtual HRESULT STDMETHODCALLTYPE Reset(
        ) = 0;

    virtual HRESULT STDMETHODCALLTYPE Clone(
        IEnumTravelLogEntry **ppEnum) = 0;

};
#ifdef __CRT_UUID_DECL
__CRT_UUID_DECL(IEnumTravelLogEntry, 0x7ebfdd85, 0xad18, 0x11d3, 0xa4,0xc5, 0x00,0xc0,0x4f,0x72,0xd6,0xb8)
#endif
#else
typedef struct IEnumTravelLogEntryVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IEnumTravelLogEntry *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IEnumTravelLogEntry *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IEnumTravelLogEntry *This);

    /*** IEnumTravelLogEntry methods ***/
    HRESULT (STDMETHODCALLTYPE *Next)(
        IEnumTravelLogEntry *This,
        ULONG cElt,
        ITravelLogEntry **rgElt,
        ULONG *pcEltFetched);

    HRESULT (STDMETHODCALLTYPE *Skip)(
        IEnumTravelLogEntry *This,
        ULONG cElt);

    HRESULT (STDMETHODCALLTYPE *Reset)(
        IEnumTravelLogEntry *This);

    HRESULT (STDMETHODCALLTYPE *Clone)(
        IEnumTravelLogEntry *This,
        IEnumTravelLogEntry **ppEnum);

    END_INTERFACE
} IEnumTravelLogEntryVtbl;

interface IEnumTravelLogEntry {
    CONST_VTBL IEnumTravelLogEntryVtbl* lpVtbl;
};

#ifdef COBJMACROS
#ifndef WIDL_C_INLINE_WRAPPERS
/*** IUnknown methods ***/
#define IEnumTravelLogEntry_QueryInterface(This,riid,ppvObject) (This)->lpVtbl->QueryInterface(This,riid,ppvObject)
#define IEnumTravelLogEntry_AddRef(This) (This)->lpVtbl->AddRef(This)
#define IEnumTravelLogEntry_Release(This) (This)->lpVtbl->Release(This)
/*** IEnumTravelLogEntry methods ***/
#define IEnumTravelLogEntry_Next(This,cElt,rgElt,pcEltFetched) (This)->lpVtbl->Next(This,cElt,rgElt,pcEltFetched)
#define IEnumTravelLogEntry_Skip(This,cElt) (This)->lpVtbl->Skip(This,cElt)
#define IEnumTravelLogEntry_Reset(This) (This)->lpVtbl->Reset(This)
#define IEnumTravelLogEntry_Clone(This,ppEnum) (This)->lpVtbl->Clone(This,ppEnum)
#else
/*** IUnknown methods ***/
static __WIDL_INLINE HRESULT IEnumTravelLogEntry_QueryInterface(IEnumTravelLogEntry* This,REFIID riid,void **ppvObject) {
    return This->lpVtbl->QueryInterface(This,riid,ppvObject);
}
static __WIDL_INLINE ULONG IEnumTravelLogEntry_AddRef(IEnumTravelLogEntry* This) {
    return This->lpVtbl->AddRef(This);
}
static __WIDL_INLINE ULONG IEnumTravelLogEntry_Release(IEnumTravelLogEntry* This) {
    return This->lpVtbl->Release(This);
}
/*** IEnumTravelLogEntry methods ***/
static __WIDL_INLINE HRESULT IEnumTravelLogEntry_Next(IEnumTravelLogEntry* This,ULONG cElt,ITravelLogEntry **rgElt,ULONG *pcEltFetched) {
    return This->lpVtbl->Next(This,cElt,rgElt,pcEltFetched);
}
static __WIDL_INLINE HRESULT IEnumTravelLogEntry_Skip(IEnumTravelLogEntry* This,ULONG cElt) {
    return This->lpVtbl->Skip(This,cElt);
}
static __WIDL_INLINE HRESULT IEnumTravelLogEntry_Reset(IEnumTravelLogEntry* This) {
    return This->lpVtbl->Reset(This);
}
static __WIDL_INLINE HRESULT IEnumTravelLogEntry_Clone(IEnumTravelLogEntry* This,IEnumTravelLogEntry **ppEnum) {
    return This->lpVtbl->Clone(This,ppEnum);
}
#endif
#endif

#endif


#endif  /* __IEnumTravelLogEntry_INTERFACE_DEFINED__ */

/*****************************************************************************
 * ITravelLogStg interface
 */
#ifndef __ITravelLogStg_INTERFACE_DEFINED__
#define __ITravelLogStg_INTERFACE_DEFINED__

DEFINE_GUID(IID_ITravelLogStg, 0x7ebfdd80, 0xad18, 0x11d3, 0xa4,0xc5, 0x00,0xc0,0x4f,0x72,0xd6,0xb8);
#if defined(__cplusplus) && !defined(CINTERFACE)
MIDL_INTERFACE("7ebfdd80-ad18-11d3-a4c5-00c04f72d6b8")
ITravelLogStg : public IUnknown
{
    virtual HRESULT STDMETHODCALLTYPE CreateEntry(
        LPCWSTR pszUrl,
        LPCWSTR pszTitle,
        ITravelLogEntry *ptleRelativeTo,
        WINBOOL fPrepend,
        ITravelLogEntry **pptle) = 0;

    virtual HRESULT STDMETHODCALLTYPE TravelTo(
        ITravelLogEntry *ptle) = 0;

    virtual HRESULT STDMETHODCALLTYPE EnumEntries(
        TLENUMF flags,
        IEnumTravelLogEntry **ppenum) = 0;

    virtual HRESULT STDMETHODCALLTYPE FindEntries(
        TLENUMF flags,
        LPCWSTR pszUrl,
        IEnumTravelLogEntry **ppenum) = 0;

    virtual HRESULT STDMETHODCALLTYPE GetCount(
        TLENUMF flags,
        DWORD *pcEntries) = 0;

    virtual HRESULT STDMETHODCALLTYPE RemoveEntry(
        ITravelLogEntry *ptle) = 0;

    virtual HRESULT STDMETHODCALLTYPE GetRelativeEntry(
        int iOffset,
        ITravelLogEntry **ptle) = 0;

};
#ifdef __CRT_UUID_DECL
__CRT_UUID_DECL(ITravelLogStg, 0x7ebfdd80, 0xad18, 0x11d3, 0xa4,0xc5, 0x00,0xc0,0x4f,0x72,0xd6,0xb8)
#endif
#else
typedef struct ITravelLogStgVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        ITravelLogStg *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        ITravelLogStg *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        ITravelLogStg *This);

    /*** ITravelLogStg methods ***/
    HRESULT (STDMETHODCALLTYPE *CreateEntry)(
        ITravelLogStg *This,
        LPCWSTR pszUrl,
        LPCWSTR pszTitle,
        ITravelLogEntry *ptleRelativeTo,
        WINBOOL fPrepend,
        ITravelLogEntry **pptle);

    HRESULT (STDMETHODCALLTYPE *TravelTo)(
        ITravelLogStg *This,
        ITravelLogEntry *ptle);

    HRESULT (STDMETHODCALLTYPE *EnumEntries)(
        ITravelLogStg *This,
        TLENUMF flags,
        IEnumTravelLogEntry **ppenum);

    HRESULT (STDMETHODCALLTYPE *FindEntries)(
        ITravelLogStg *This,
        TLENUMF flags,
        LPCWSTR pszUrl,
        IEnumTravelLogEntry **ppenum);

    HRESULT (STDMETHODCALLTYPE *GetCount)(
        ITravelLogStg *This,
        TLENUMF flags,
        DWORD *pcEntries);

    HRESULT (STDMETHODCALLTYPE *RemoveEntry)(
        ITravelLogStg *This,
        ITravelLogEntry *ptle);

    HRESULT (STDMETHODCALLTYPE *GetRelativeEntry)(
        ITravelLogStg *This,
        int iOffset,
        ITravelLogEntry **ptle);

    END_INTERFACE
} ITravelLogStgVtbl;

interface ITravelLogStg {
    CONST_VTBL ITravelLogStgVtbl* lpVtbl;
};

#ifdef COBJMACROS
#ifndef WIDL_C_INLINE_WRAPPERS
/*** IUnknown methods ***/
#define ITravelLogStg_QueryInterface(This,riid,ppvObject) (This)->lpVtbl->QueryInterface(This,riid,ppvObject)
#define ITravelLogStg_AddRef(This) (This)->lpVtbl->AddRef(This)
#define ITravelLogStg_Release(This) (This)->lpVtbl->Release(This)
/*** ITravelLogStg methods ***/
#define ITravelLogStg_CreateEntry(This,pszUrl,pszTitle,ptleRelativeTo,fPrepend,pptle) (This)->lpVtbl->CreateEntry(This,pszUrl,pszTitle,ptleRelativeTo,fPrepend,pptle)
#define ITravelLogStg_TravelTo(This,ptle) (This)->lpVtbl->TravelTo(This,ptle)
#define ITravelLogStg_EnumEntries(This,flags,ppenum) (This)->lpVtbl->EnumEntries(This,flags,ppenum)
#define ITravelLogStg_FindEntries(This,flags,pszUrl,ppenum) (This)->lpVtbl->FindEntries(This,flags,pszUrl,ppenum)
#define ITravelLogStg_GetCount(This,flags,pcEntries) (This)->lpVtbl->GetCount(This,flags,pcEntries)
#define ITravelLogStg_RemoveEntry(This,ptle) (This)->lpVtbl->RemoveEntry(This,ptle)
#define ITravelLogStg_GetRelativeEntry(This,iOffset,ptle) (This)->lpVtbl->GetRelativeEntry(This,iOffset,ptle)
#else
/*** IUnknown methods ***/
static __WIDL_INLINE HRESULT ITravelLogStg_QueryInterface(ITravelLogStg* This,REFIID riid,void **ppvObject) {
    return This->lpVtbl->QueryInterface(This,riid,ppvObject);
}
static __WIDL_INLINE ULONG ITravelLogStg_AddRef(ITravelLogStg* This) {
    return This->lpVtbl->AddRef(This);
}
static __WIDL_INLINE ULONG ITravelLogStg_Release(ITravelLogStg* This) {
    return This->lpVtbl->Release(This);
}
/*** ITravelLogStg methods ***/
static __WIDL_INLINE HRESULT ITravelLogStg_CreateEntry(ITravelLogStg* This,LPCWSTR pszUrl,LPCWSTR pszTitle,ITravelLogEntry *ptleRelativeTo,WINBOOL fPrepend,ITravelLogEntry **pptle) {
    return This->lpVtbl->CreateEntry(This,pszUrl,pszTitle,ptleRelativeTo,fPrepend,pptle);
}
static __WIDL_INLINE HRESULT ITravelLogStg_TravelTo(ITravelLogStg* This,ITravelLogEntry *ptle) {
    return This->lpVtbl->TravelTo(This,ptle);
}
static __WIDL_INLINE HRESULT ITravelLogStg_EnumEntries(ITravelLogStg* This,TLENUMF flags,IEnumTravelLogEntry **ppenum) {
    return This->lpVtbl->EnumEntries(This,flags,ppenum);
}
static __WIDL_INLINE HRESULT ITravelLogStg_FindEntries(ITravelLogStg* This,TLENUMF flags,LPCWSTR pszUrl,IEnumTravelLogEntry **ppenum) {
    return This->lpVtbl->FindEntries(This,flags,pszUrl,ppenum);
}
static __WIDL_INLINE HRESULT ITravelLogStg_GetCount(ITravelLogStg* This,TLENUMF flags,DWORD *pcEntries) {
    return This->lpVtbl->GetCount(This,flags,pcEntries);
}
static __WIDL_INLINE HRESULT ITravelLogStg_RemoveEntry(ITravelLogStg* This,ITravelLogEntry *ptle) {
    return This->lpVtbl->RemoveEntry(This,ptle);
}
static __WIDL_INLINE HRESULT ITravelLogStg_GetRelativeEntry(ITravelLogStg* This,int iOffset,ITravelLogEntry **ptle) {
    return This->lpVtbl->GetRelativeEntry(This,iOffset,ptle);
}
#endif
#endif

#endif


#endif  /* __ITravelLogStg_INTERFACE_DEFINED__ */

#endif
/* Begin additional prototypes for all interfaces */

ULONG           __RPC_USER PIDLIST_ABSOLUTE_UserSize     (ULONG *, ULONG, PIDLIST_ABSOLUTE *);
unsigned char * __RPC_USER PIDLIST_ABSOLUTE_UserMarshal  (ULONG *, unsigned char *, PIDLIST_ABSOLUTE *);
unsigned char * __RPC_USER PIDLIST_ABSOLUTE_UserUnmarshal(ULONG *, unsigned char *, PIDLIST_ABSOLUTE *);
void            __RPC_USER PIDLIST_ABSOLUTE_UserFree     (ULONG *, PIDLIST_ABSOLUTE *);

/* End additional prototypes */

#ifdef __cplusplus
}
#endif

#endif /* __tlogstg_h__ */
