/*** Autogenerated by WIDL 10.4 from include/bits1_5.idl - Do not edit ***/

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

#ifndef __bits1_5_h__
#define __bits1_5_h__

/* Forward declarations */

#ifndef __IBackgroundCopyJob2_FWD_DEFINED__
#define __IBackgroundCopyJob2_FWD_DEFINED__
typedef interface IBackgroundCopyJob2 IBackgroundCopyJob2;
#ifdef __cplusplus
interface IBackgroundCopyJob2;
#endif /* __cplusplus */
#endif

#ifndef __BackgroundCopyManager1_5_FWD_DEFINED__
#define __BackgroundCopyManager1_5_FWD_DEFINED__
#ifdef __cplusplus
typedef class BackgroundCopyManager1_5 BackgroundCopyManager1_5;
#else
typedef struct BackgroundCopyManager1_5 BackgroundCopyManager1_5;
#endif /* defined __cplusplus */
#endif /* defined __BackgroundCopyManager1_5_FWD_DEFINED__ */

/* Headers for imported files */

#include <bits.h>

#ifdef __cplusplus
extern "C" {
#endif

/*****************************************************************************
 * IBackgroundCopyJob2 interface
 */
#ifndef __IBackgroundCopyJob2_INTERFACE_DEFINED__
#define __IBackgroundCopyJob2_INTERFACE_DEFINED__

typedef struct _BG_JOB_REPLY_PROGRESS {
    UINT64 BytesTotal;
    UINT64 BytesTransferred;
} BG_JOB_REPLY_PROGRESS;
typedef enum __WIDL_bits1_5_generated_name_00000011 {
    BG_AUTH_TARGET_SERVER = 1,
    BG_AUTH_TARGET_PROXY = 2
} BG_AUTH_TARGET;
typedef enum __WIDL_bits1_5_generated_name_00000012 {
    BG_AUTH_SCHEME_BASIC = 1,
    BG_AUTH_SCHEME_DIGEST = 2,
    BG_AUTH_SCHEME_NTLM = 3,
    BG_AUTH_SCHEME_NEGOTIATE = 4,
    BG_AUTH_SCHEME_PASSPORT = 5
} BG_AUTH_SCHEME;
typedef struct __WIDL_bits1_5_generated_name_00000013 {
    LPWSTR UserName;
    LPWSTR Password;
} BG_BASIC_CREDENTIALS;
typedef BG_BASIC_CREDENTIALS *PBG_BASIC_CREDENTIALS;
typedef union __WIDL_bits1_5_generated_name_00000014 {
    BG_BASIC_CREDENTIALS Basic;
} BG_AUTH_CREDENTIALS_UNION;
typedef struct __WIDL_bits1_5_generated_name_00000015 {
    BG_AUTH_TARGET Target;
    BG_AUTH_SCHEME Scheme;
    BG_AUTH_CREDENTIALS_UNION Credentials;
} BG_AUTH_CREDENTIALS;
typedef BG_AUTH_CREDENTIALS *PBG_AUTH_CREDENTIALS;
DEFINE_GUID(IID_IBackgroundCopyJob2, 0x54b50739, 0x686f, 0x45eb, 0x9d,0xff, 0xd6,0xa9,0xa0,0xfa,0xa9,0xaf);
#if defined(__cplusplus) && !defined(CINTERFACE)
MIDL_INTERFACE("54b50739-686f-45eb-9dff-d6a9a0faa9af")
IBackgroundCopyJob2 : public IBackgroundCopyJob
{
    virtual HRESULT STDMETHODCALLTYPE SetNotifyCmdLine(
        LPCWSTR prog,
        LPCWSTR params) = 0;

    virtual HRESULT STDMETHODCALLTYPE GetNotifyCmdLine(
        LPWSTR *prog,
        LPWSTR *params) = 0;

    virtual HRESULT STDMETHODCALLTYPE GetReplyProgress(
        BG_JOB_REPLY_PROGRESS *progress) = 0;

    virtual HRESULT STDMETHODCALLTYPE GetReplyData(
        byte **pBuffer,
        UINT64 *pLength) = 0;

    virtual HRESULT STDMETHODCALLTYPE SetReplyFileName(
        LPCWSTR filename) = 0;

    virtual HRESULT STDMETHODCALLTYPE GetReplyFileName(
        LPWSTR *pFilename) = 0;

    virtual HRESULT STDMETHODCALLTYPE SetCredentials(
        BG_AUTH_CREDENTIALS *cred) = 0;

    virtual HRESULT STDMETHODCALLTYPE RemoveCredentials(
        BG_AUTH_TARGET target,
        BG_AUTH_SCHEME scheme) = 0;

};
#ifdef __CRT_UUID_DECL
__CRT_UUID_DECL(IBackgroundCopyJob2, 0x54b50739, 0x686f, 0x45eb, 0x9d,0xff, 0xd6,0xa9,0xa0,0xfa,0xa9,0xaf)
#endif
#else
typedef struct IBackgroundCopyJob2Vtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IBackgroundCopyJob2 *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IBackgroundCopyJob2 *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IBackgroundCopyJob2 *This);

    /*** IBackgroundCopyJob methods ***/
    HRESULT (STDMETHODCALLTYPE *AddFileSet)(
        IBackgroundCopyJob2 *This,
        ULONG cFileCount,
        BG_FILE_INFO *pFileSet);

    HRESULT (STDMETHODCALLTYPE *AddFile)(
        IBackgroundCopyJob2 *This,
        LPCWSTR RemoteUrl,
        LPCWSTR LocalName);

    HRESULT (STDMETHODCALLTYPE *EnumFiles)(
        IBackgroundCopyJob2 *This,
        IEnumBackgroundCopyFiles **pEnum);

    HRESULT (STDMETHODCALLTYPE *Suspend)(
        IBackgroundCopyJob2 *This);

    HRESULT (STDMETHODCALLTYPE *Resume)(
        IBackgroundCopyJob2 *This);

    HRESULT (STDMETHODCALLTYPE *Cancel)(
        IBackgroundCopyJob2 *This);

    HRESULT (STDMETHODCALLTYPE *Complete)(
        IBackgroundCopyJob2 *This);

    HRESULT (STDMETHODCALLTYPE *GetId)(
        IBackgroundCopyJob2 *This,
        GUID *pVal);

    HRESULT (STDMETHODCALLTYPE *GetType)(
        IBackgroundCopyJob2 *This,
        BG_JOB_TYPE *pVal);

    HRESULT (STDMETHODCALLTYPE *GetProgress)(
        IBackgroundCopyJob2 *This,
        BG_JOB_PROGRESS *pVal);

    HRESULT (STDMETHODCALLTYPE *GetTimes)(
        IBackgroundCopyJob2 *This,
        BG_JOB_TIMES *pVal);

    HRESULT (STDMETHODCALLTYPE *GetState)(
        IBackgroundCopyJob2 *This,
        BG_JOB_STATE *pVal);

    HRESULT (STDMETHODCALLTYPE *GetError)(
        IBackgroundCopyJob2 *This,
        IBackgroundCopyError **ppError);

    HRESULT (STDMETHODCALLTYPE *GetOwner)(
        IBackgroundCopyJob2 *This,
        LPWSTR *pVal);

    HRESULT (STDMETHODCALLTYPE *SetDisplayName)(
        IBackgroundCopyJob2 *This,
        LPCWSTR Val);

    HRESULT (STDMETHODCALLTYPE *GetDisplayName)(
        IBackgroundCopyJob2 *This,
        LPWSTR *pVal);

    HRESULT (STDMETHODCALLTYPE *SetDescription)(
        IBackgroundCopyJob2 *This,
        LPCWSTR Val);

    HRESULT (STDMETHODCALLTYPE *GetDescription)(
        IBackgroundCopyJob2 *This,
        LPWSTR *pVal);

    HRESULT (STDMETHODCALLTYPE *SetPriority)(
        IBackgroundCopyJob2 *This,
        BG_JOB_PRIORITY Val);

    HRESULT (STDMETHODCALLTYPE *GetPriority)(
        IBackgroundCopyJob2 *This,
        BG_JOB_PRIORITY *pVal);

    HRESULT (STDMETHODCALLTYPE *SetNotifyFlags)(
        IBackgroundCopyJob2 *This,
        ULONG Val);

    HRESULT (STDMETHODCALLTYPE *GetNotifyFlags)(
        IBackgroundCopyJob2 *This,
        ULONG *pVal);

    HRESULT (STDMETHODCALLTYPE *SetNotifyInterface)(
        IBackgroundCopyJob2 *This,
        IUnknown *Val);

    HRESULT (STDMETHODCALLTYPE *GetNotifyInterface)(
        IBackgroundCopyJob2 *This,
        IUnknown **pVal);

    HRESULT (STDMETHODCALLTYPE *SetMinimumRetryDelay)(
        IBackgroundCopyJob2 *This,
        ULONG Seconds);

    HRESULT (STDMETHODCALLTYPE *GetMinimumRetryDelay)(
        IBackgroundCopyJob2 *This,
        ULONG *Seconds);

    HRESULT (STDMETHODCALLTYPE *SetNoProgressTimeout)(
        IBackgroundCopyJob2 *This,
        ULONG Seconds);

    HRESULT (STDMETHODCALLTYPE *GetNoProgressTimeout)(
        IBackgroundCopyJob2 *This,
        ULONG *Seconds);

    HRESULT (STDMETHODCALLTYPE *GetErrorCount)(
        IBackgroundCopyJob2 *This,
        ULONG *Errors);

    HRESULT (STDMETHODCALLTYPE *SetProxySettings)(
        IBackgroundCopyJob2 *This,
        BG_JOB_PROXY_USAGE ProxyUsage,
        const WCHAR *ProxyList,
        const WCHAR *ProxyBypassList);

    HRESULT (STDMETHODCALLTYPE *GetProxySettings)(
        IBackgroundCopyJob2 *This,
        BG_JOB_PROXY_USAGE *pProxyUsage,
        LPWSTR *pProxyList,
        LPWSTR *pProxyBypassList);

    HRESULT (STDMETHODCALLTYPE *TakeOwnership)(
        IBackgroundCopyJob2 *This);

    /*** IBackgroundCopyJob2 methods ***/
    HRESULT (STDMETHODCALLTYPE *SetNotifyCmdLine)(
        IBackgroundCopyJob2 *This,
        LPCWSTR prog,
        LPCWSTR params);

    HRESULT (STDMETHODCALLTYPE *GetNotifyCmdLine)(
        IBackgroundCopyJob2 *This,
        LPWSTR *prog,
        LPWSTR *params);

    HRESULT (STDMETHODCALLTYPE *GetReplyProgress)(
        IBackgroundCopyJob2 *This,
        BG_JOB_REPLY_PROGRESS *progress);

    HRESULT (STDMETHODCALLTYPE *GetReplyData)(
        IBackgroundCopyJob2 *This,
        byte **pBuffer,
        UINT64 *pLength);

    HRESULT (STDMETHODCALLTYPE *SetReplyFileName)(
        IBackgroundCopyJob2 *This,
        LPCWSTR filename);

    HRESULT (STDMETHODCALLTYPE *GetReplyFileName)(
        IBackgroundCopyJob2 *This,
        LPWSTR *pFilename);

    HRESULT (STDMETHODCALLTYPE *SetCredentials)(
        IBackgroundCopyJob2 *This,
        BG_AUTH_CREDENTIALS *cred);

    HRESULT (STDMETHODCALLTYPE *RemoveCredentials)(
        IBackgroundCopyJob2 *This,
        BG_AUTH_TARGET target,
        BG_AUTH_SCHEME scheme);

    END_INTERFACE
} IBackgroundCopyJob2Vtbl;

interface IBackgroundCopyJob2 {
    CONST_VTBL IBackgroundCopyJob2Vtbl* lpVtbl;
};

#ifdef COBJMACROS
#ifndef WIDL_C_INLINE_WRAPPERS
/*** IUnknown methods ***/
#define IBackgroundCopyJob2_QueryInterface(This,riid,ppvObject) (This)->lpVtbl->QueryInterface(This,riid,ppvObject)
#define IBackgroundCopyJob2_AddRef(This) (This)->lpVtbl->AddRef(This)
#define IBackgroundCopyJob2_Release(This) (This)->lpVtbl->Release(This)
/*** IBackgroundCopyJob methods ***/
#define IBackgroundCopyJob2_AddFileSet(This,cFileCount,pFileSet) (This)->lpVtbl->AddFileSet(This,cFileCount,pFileSet)
#define IBackgroundCopyJob2_AddFile(This,RemoteUrl,LocalName) (This)->lpVtbl->AddFile(This,RemoteUrl,LocalName)
#define IBackgroundCopyJob2_EnumFiles(This,pEnum) (This)->lpVtbl->EnumFiles(This,pEnum)
#define IBackgroundCopyJob2_Suspend(This) (This)->lpVtbl->Suspend(This)
#define IBackgroundCopyJob2_Resume(This) (This)->lpVtbl->Resume(This)
#define IBackgroundCopyJob2_Cancel(This) (This)->lpVtbl->Cancel(This)
#define IBackgroundCopyJob2_Complete(This) (This)->lpVtbl->Complete(This)
#define IBackgroundCopyJob2_GetId(This,pVal) (This)->lpVtbl->GetId(This,pVal)
#define IBackgroundCopyJob2_GetType(This,pVal) (This)->lpVtbl->GetType(This,pVal)
#define IBackgroundCopyJob2_GetProgress(This,pVal) (This)->lpVtbl->GetProgress(This,pVal)
#define IBackgroundCopyJob2_GetTimes(This,pVal) (This)->lpVtbl->GetTimes(This,pVal)
#define IBackgroundCopyJob2_GetState(This,pVal) (This)->lpVtbl->GetState(This,pVal)
#define IBackgroundCopyJob2_GetError(This,ppError) (This)->lpVtbl->GetError(This,ppError)
#define IBackgroundCopyJob2_GetOwner(This,pVal) (This)->lpVtbl->GetOwner(This,pVal)
#define IBackgroundCopyJob2_SetDisplayName(This,Val) (This)->lpVtbl->SetDisplayName(This,Val)
#define IBackgroundCopyJob2_GetDisplayName(This,pVal) (This)->lpVtbl->GetDisplayName(This,pVal)
#define IBackgroundCopyJob2_SetDescription(This,Val) (This)->lpVtbl->SetDescription(This,Val)
#define IBackgroundCopyJob2_GetDescription(This,pVal) (This)->lpVtbl->GetDescription(This,pVal)
#define IBackgroundCopyJob2_SetPriority(This,Val) (This)->lpVtbl->SetPriority(This,Val)
#define IBackgroundCopyJob2_GetPriority(This,pVal) (This)->lpVtbl->GetPriority(This,pVal)
#define IBackgroundCopyJob2_SetNotifyFlags(This,Val) (This)->lpVtbl->SetNotifyFlags(This,Val)
#define IBackgroundCopyJob2_GetNotifyFlags(This,pVal) (This)->lpVtbl->GetNotifyFlags(This,pVal)
#define IBackgroundCopyJob2_SetNotifyInterface(This,Val) (This)->lpVtbl->SetNotifyInterface(This,Val)
#define IBackgroundCopyJob2_GetNotifyInterface(This,pVal) (This)->lpVtbl->GetNotifyInterface(This,pVal)
#define IBackgroundCopyJob2_SetMinimumRetryDelay(This,Seconds) (This)->lpVtbl->SetMinimumRetryDelay(This,Seconds)
#define IBackgroundCopyJob2_GetMinimumRetryDelay(This,Seconds) (This)->lpVtbl->GetMinimumRetryDelay(This,Seconds)
#define IBackgroundCopyJob2_SetNoProgressTimeout(This,Seconds) (This)->lpVtbl->SetNoProgressTimeout(This,Seconds)
#define IBackgroundCopyJob2_GetNoProgressTimeout(This,Seconds) (This)->lpVtbl->GetNoProgressTimeout(This,Seconds)
#define IBackgroundCopyJob2_GetErrorCount(This,Errors) (This)->lpVtbl->GetErrorCount(This,Errors)
#define IBackgroundCopyJob2_SetProxySettings(This,ProxyUsage,ProxyList,ProxyBypassList) (This)->lpVtbl->SetProxySettings(This,ProxyUsage,ProxyList,ProxyBypassList)
#define IBackgroundCopyJob2_GetProxySettings(This,pProxyUsage,pProxyList,pProxyBypassList) (This)->lpVtbl->GetProxySettings(This,pProxyUsage,pProxyList,pProxyBypassList)
#define IBackgroundCopyJob2_TakeOwnership(This) (This)->lpVtbl->TakeOwnership(This)
/*** IBackgroundCopyJob2 methods ***/
#define IBackgroundCopyJob2_SetNotifyCmdLine(This,prog,params) (This)->lpVtbl->SetNotifyCmdLine(This,prog,params)
#define IBackgroundCopyJob2_GetNotifyCmdLine(This,prog,params) (This)->lpVtbl->GetNotifyCmdLine(This,prog,params)
#define IBackgroundCopyJob2_GetReplyProgress(This,progress) (This)->lpVtbl->GetReplyProgress(This,progress)
#define IBackgroundCopyJob2_GetReplyData(This,pBuffer,pLength) (This)->lpVtbl->GetReplyData(This,pBuffer,pLength)
#define IBackgroundCopyJob2_SetReplyFileName(This,filename) (This)->lpVtbl->SetReplyFileName(This,filename)
#define IBackgroundCopyJob2_GetReplyFileName(This,pFilename) (This)->lpVtbl->GetReplyFileName(This,pFilename)
#define IBackgroundCopyJob2_SetCredentials(This,cred) (This)->lpVtbl->SetCredentials(This,cred)
#define IBackgroundCopyJob2_RemoveCredentials(This,target,scheme) (This)->lpVtbl->RemoveCredentials(This,target,scheme)
#else
/*** IUnknown methods ***/
static inline HRESULT IBackgroundCopyJob2_QueryInterface(IBackgroundCopyJob2* This,REFIID riid,void **ppvObject) {
    return This->lpVtbl->QueryInterface(This,riid,ppvObject);
}
static inline ULONG IBackgroundCopyJob2_AddRef(IBackgroundCopyJob2* This) {
    return This->lpVtbl->AddRef(This);
}
static inline ULONG IBackgroundCopyJob2_Release(IBackgroundCopyJob2* This) {
    return This->lpVtbl->Release(This);
}
/*** IBackgroundCopyJob methods ***/
static inline HRESULT IBackgroundCopyJob2_AddFileSet(IBackgroundCopyJob2* This,ULONG cFileCount,BG_FILE_INFO *pFileSet) {
    return This->lpVtbl->AddFileSet(This,cFileCount,pFileSet);
}
static inline HRESULT IBackgroundCopyJob2_AddFile(IBackgroundCopyJob2* This,LPCWSTR RemoteUrl,LPCWSTR LocalName) {
    return This->lpVtbl->AddFile(This,RemoteUrl,LocalName);
}
static inline HRESULT IBackgroundCopyJob2_EnumFiles(IBackgroundCopyJob2* This,IEnumBackgroundCopyFiles **pEnum) {
    return This->lpVtbl->EnumFiles(This,pEnum);
}
static inline HRESULT IBackgroundCopyJob2_Suspend(IBackgroundCopyJob2* This) {
    return This->lpVtbl->Suspend(This);
}
static inline HRESULT IBackgroundCopyJob2_Resume(IBackgroundCopyJob2* This) {
    return This->lpVtbl->Resume(This);
}
static inline HRESULT IBackgroundCopyJob2_Cancel(IBackgroundCopyJob2* This) {
    return This->lpVtbl->Cancel(This);
}
static inline HRESULT IBackgroundCopyJob2_Complete(IBackgroundCopyJob2* This) {
    return This->lpVtbl->Complete(This);
}
static inline HRESULT IBackgroundCopyJob2_GetId(IBackgroundCopyJob2* This,GUID *pVal) {
    return This->lpVtbl->GetId(This,pVal);
}
static inline HRESULT IBackgroundCopyJob2_GetType(IBackgroundCopyJob2* This,BG_JOB_TYPE *pVal) {
    return This->lpVtbl->GetType(This,pVal);
}
static inline HRESULT IBackgroundCopyJob2_GetProgress(IBackgroundCopyJob2* This,BG_JOB_PROGRESS *pVal) {
    return This->lpVtbl->GetProgress(This,pVal);
}
static inline HRESULT IBackgroundCopyJob2_GetTimes(IBackgroundCopyJob2* This,BG_JOB_TIMES *pVal) {
    return This->lpVtbl->GetTimes(This,pVal);
}
static inline HRESULT IBackgroundCopyJob2_GetState(IBackgroundCopyJob2* This,BG_JOB_STATE *pVal) {
    return This->lpVtbl->GetState(This,pVal);
}
static inline HRESULT IBackgroundCopyJob2_GetError(IBackgroundCopyJob2* This,IBackgroundCopyError **ppError) {
    return This->lpVtbl->GetError(This,ppError);
}
static inline HRESULT IBackgroundCopyJob2_GetOwner(IBackgroundCopyJob2* This,LPWSTR *pVal) {
    return This->lpVtbl->GetOwner(This,pVal);
}
static inline HRESULT IBackgroundCopyJob2_SetDisplayName(IBackgroundCopyJob2* This,LPCWSTR Val) {
    return This->lpVtbl->SetDisplayName(This,Val);
}
static inline HRESULT IBackgroundCopyJob2_GetDisplayName(IBackgroundCopyJob2* This,LPWSTR *pVal) {
    return This->lpVtbl->GetDisplayName(This,pVal);
}
static inline HRESULT IBackgroundCopyJob2_SetDescription(IBackgroundCopyJob2* This,LPCWSTR Val) {
    return This->lpVtbl->SetDescription(This,Val);
}
static inline HRESULT IBackgroundCopyJob2_GetDescription(IBackgroundCopyJob2* This,LPWSTR *pVal) {
    return This->lpVtbl->GetDescription(This,pVal);
}
static inline HRESULT IBackgroundCopyJob2_SetPriority(IBackgroundCopyJob2* This,BG_JOB_PRIORITY Val) {
    return This->lpVtbl->SetPriority(This,Val);
}
static inline HRESULT IBackgroundCopyJob2_GetPriority(IBackgroundCopyJob2* This,BG_JOB_PRIORITY *pVal) {
    return This->lpVtbl->GetPriority(This,pVal);
}
static inline HRESULT IBackgroundCopyJob2_SetNotifyFlags(IBackgroundCopyJob2* This,ULONG Val) {
    return This->lpVtbl->SetNotifyFlags(This,Val);
}
static inline HRESULT IBackgroundCopyJob2_GetNotifyFlags(IBackgroundCopyJob2* This,ULONG *pVal) {
    return This->lpVtbl->GetNotifyFlags(This,pVal);
}
static inline HRESULT IBackgroundCopyJob2_SetNotifyInterface(IBackgroundCopyJob2* This,IUnknown *Val) {
    return This->lpVtbl->SetNotifyInterface(This,Val);
}
static inline HRESULT IBackgroundCopyJob2_GetNotifyInterface(IBackgroundCopyJob2* This,IUnknown **pVal) {
    return This->lpVtbl->GetNotifyInterface(This,pVal);
}
static inline HRESULT IBackgroundCopyJob2_SetMinimumRetryDelay(IBackgroundCopyJob2* This,ULONG Seconds) {
    return This->lpVtbl->SetMinimumRetryDelay(This,Seconds);
}
static inline HRESULT IBackgroundCopyJob2_GetMinimumRetryDelay(IBackgroundCopyJob2* This,ULONG *Seconds) {
    return This->lpVtbl->GetMinimumRetryDelay(This,Seconds);
}
static inline HRESULT IBackgroundCopyJob2_SetNoProgressTimeout(IBackgroundCopyJob2* This,ULONG Seconds) {
    return This->lpVtbl->SetNoProgressTimeout(This,Seconds);
}
static inline HRESULT IBackgroundCopyJob2_GetNoProgressTimeout(IBackgroundCopyJob2* This,ULONG *Seconds) {
    return This->lpVtbl->GetNoProgressTimeout(This,Seconds);
}
static inline HRESULT IBackgroundCopyJob2_GetErrorCount(IBackgroundCopyJob2* This,ULONG *Errors) {
    return This->lpVtbl->GetErrorCount(This,Errors);
}
static inline HRESULT IBackgroundCopyJob2_SetProxySettings(IBackgroundCopyJob2* This,BG_JOB_PROXY_USAGE ProxyUsage,const WCHAR *ProxyList,const WCHAR *ProxyBypassList) {
    return This->lpVtbl->SetProxySettings(This,ProxyUsage,ProxyList,ProxyBypassList);
}
static inline HRESULT IBackgroundCopyJob2_GetProxySettings(IBackgroundCopyJob2* This,BG_JOB_PROXY_USAGE *pProxyUsage,LPWSTR *pProxyList,LPWSTR *pProxyBypassList) {
    return This->lpVtbl->GetProxySettings(This,pProxyUsage,pProxyList,pProxyBypassList);
}
static inline HRESULT IBackgroundCopyJob2_TakeOwnership(IBackgroundCopyJob2* This) {
    return This->lpVtbl->TakeOwnership(This);
}
/*** IBackgroundCopyJob2 methods ***/
static inline HRESULT IBackgroundCopyJob2_SetNotifyCmdLine(IBackgroundCopyJob2* This,LPCWSTR prog,LPCWSTR params) {
    return This->lpVtbl->SetNotifyCmdLine(This,prog,params);
}
static inline HRESULT IBackgroundCopyJob2_GetNotifyCmdLine(IBackgroundCopyJob2* This,LPWSTR *prog,LPWSTR *params) {
    return This->lpVtbl->GetNotifyCmdLine(This,prog,params);
}
static inline HRESULT IBackgroundCopyJob2_GetReplyProgress(IBackgroundCopyJob2* This,BG_JOB_REPLY_PROGRESS *progress) {
    return This->lpVtbl->GetReplyProgress(This,progress);
}
static inline HRESULT IBackgroundCopyJob2_GetReplyData(IBackgroundCopyJob2* This,byte **pBuffer,UINT64 *pLength) {
    return This->lpVtbl->GetReplyData(This,pBuffer,pLength);
}
static inline HRESULT IBackgroundCopyJob2_SetReplyFileName(IBackgroundCopyJob2* This,LPCWSTR filename) {
    return This->lpVtbl->SetReplyFileName(This,filename);
}
static inline HRESULT IBackgroundCopyJob2_GetReplyFileName(IBackgroundCopyJob2* This,LPWSTR *pFilename) {
    return This->lpVtbl->GetReplyFileName(This,pFilename);
}
static inline HRESULT IBackgroundCopyJob2_SetCredentials(IBackgroundCopyJob2* This,BG_AUTH_CREDENTIALS *cred) {
    return This->lpVtbl->SetCredentials(This,cred);
}
static inline HRESULT IBackgroundCopyJob2_RemoveCredentials(IBackgroundCopyJob2* This,BG_AUTH_TARGET target,BG_AUTH_SCHEME scheme) {
    return This->lpVtbl->RemoveCredentials(This,target,scheme);
}
#endif
#endif

#endif


#endif  /* __IBackgroundCopyJob2_INTERFACE_DEFINED__ */

#ifndef __BackgroundCopyManager1_5_LIBRARY_DEFINED__
#define __BackgroundCopyManager1_5_LIBRARY_DEFINED__

DEFINE_GUID(LIBID_BackgroundCopyManager1_5, 0xea9319ea, 0xc628, 0x480f, 0x83,0x31, 0x76,0x8f,0xac,0x39,0x7e,0x4e);

/*****************************************************************************
 * BackgroundCopyManager1_5 coclass
 */

DEFINE_GUID(CLSID_BackgroundCopyManager1_5, 0xf087771f, 0xd74f, 0x4c1a, 0xbb,0x8a, 0xe1,0x6a,0xca,0x91,0x24,0xea);

#ifdef __cplusplus
class DECLSPEC_UUID("f087771f-d74f-4c1a-bb8a-e16aca9124ea") BackgroundCopyManager1_5;
#ifdef __CRT_UUID_DECL
__CRT_UUID_DECL(BackgroundCopyManager1_5, 0xf087771f, 0xd74f, 0x4c1a, 0xbb,0x8a, 0xe1,0x6a,0xca,0x91,0x24,0xea)
#endif
#endif

#ifndef __IBackgroundCopyCallback_FWD_DEFINED__
#define __IBackgroundCopyCallback_FWD_DEFINED__
typedef interface IBackgroundCopyCallback IBackgroundCopyCallback;
#ifdef __cplusplus
interface IBackgroundCopyCallback;
#endif /* __cplusplus */
#endif

#ifndef __IBackgroundCopyJob2_FWD_DEFINED__
#define __IBackgroundCopyJob2_FWD_DEFINED__
typedef interface IBackgroundCopyJob2 IBackgroundCopyJob2;
#ifdef __cplusplus
interface IBackgroundCopyJob2;
#endif /* __cplusplus */
#endif

#endif /* __BackgroundCopyManager1_5_LIBRARY_DEFINED__ */
#include "bits2_0.h"
/* Begin additional prototypes for all interfaces */


/* End additional prototypes */

#ifdef __cplusplus
}
#endif

#endif /* __bits1_5_h__ */
