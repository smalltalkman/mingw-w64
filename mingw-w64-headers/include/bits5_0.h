/*** Autogenerated by WIDL 9.18 from include/bits5_0.idl - Do not edit ***/

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

#ifndef __bits5_0_h__
#define __bits5_0_h__

#ifndef __WIDL_INLINE
#if defined(__cplusplus) || defined(_MSC_VER)
#define __WIDL_INLINE inline
#elif defined(__GNUC__)
#define __WIDL_INLINE __inline__
#endif
#endif

/* Forward declarations */

#ifndef __IBackgroundCopyJob5_FWD_DEFINED__
#define __IBackgroundCopyJob5_FWD_DEFINED__
typedef interface IBackgroundCopyJob5 IBackgroundCopyJob5;
#ifdef __cplusplus
interface IBackgroundCopyJob5;
#endif /* __cplusplus */
#endif

/* Headers for imported files */

#include <bits.h>
#include <bits1_5.h>
#include <bits2_0.h>
#include <bits2_5.h>
#include <bits3_0.h>

#ifdef __cplusplus
extern "C" {
#endif

#define BITS_COST_STATE_TRANSFER_ALWAYS 0x800000ff
/*****************************************************************************
 * IBackgroundCopyJob5 interface
 */
#ifndef __IBackgroundCopyJob5_INTERFACE_DEFINED__
#define __IBackgroundCopyJob5_INTERFACE_DEFINED__

typedef enum __WIDL_bits5_0_generated_name_00000017 {
    BITS_JOB_PROPERTY_ID_COST_FLAGS = 1,
    BITS_JOB_PROPERTY_NOTIFICATION_CLSID = 2,
    BITS_JOB_PROPERTY_DYNAMIC_CONTENT = 3,
    BITS_JOB_PROPERTY_HIGH_PERFORMANCE = 4,
    BITS_JOB_PROPERTY_MAX_DOWNLOAD_SIZE = 5,
    BITS_JOB_PROPERTY_USE_STORED_CREDENTIALS = 7,
    BITS_JOB_PROPERTY_MINIMUM_NOTIFICATION_INTERVAL_MS = 9,
    BITS_JOB_PROPERTY_ON_DEMAND_MODE = 10
} BITS_JOB_PROPERTY_ID;
typedef union _BITS_JOB_PROPERTY_VALUE {
    DWORD Dword;
    GUID ClsID;
    WINBOOL Enable;
    UINT64 Uint64;
    BG_AUTH_TARGET Target;
} BITS_JOB_PROPERTY_VALUE;
DEFINE_GUID(IID_IBackgroundCopyJob5, 0xe847030c, 0xbbba, 0x4657, 0xaf,0x6d, 0x48,0x4a,0xa4,0x2b,0xf1,0xfe);
#if defined(__cplusplus) && !defined(CINTERFACE)
MIDL_INTERFACE("e847030c-bbba-4657-af6d-484aa42bf1fe")
IBackgroundCopyJob5 : public IBackgroundCopyJob4
{
    virtual HRESULT STDMETHODCALLTYPE SetProperty(
        BITS_JOB_PROPERTY_ID id,
        BITS_JOB_PROPERTY_VALUE value) = 0;

    virtual HRESULT STDMETHODCALLTYPE GetProperty(
        BITS_JOB_PROPERTY_ID id,
        BITS_JOB_PROPERTY_VALUE *value) = 0;

};
#ifdef __CRT_UUID_DECL
__CRT_UUID_DECL(IBackgroundCopyJob5, 0xe847030c, 0xbbba, 0x4657, 0xaf,0x6d, 0x48,0x4a,0xa4,0x2b,0xf1,0xfe)
#endif
#else
typedef struct IBackgroundCopyJob5Vtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IBackgroundCopyJob5 *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IBackgroundCopyJob5 *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IBackgroundCopyJob5 *This);

    /*** IBackgroundCopyJob methods ***/
    HRESULT (STDMETHODCALLTYPE *AddFileSet)(
        IBackgroundCopyJob5 *This,
        ULONG cFileCount,
        BG_FILE_INFO *pFileSet);

    HRESULT (STDMETHODCALLTYPE *AddFile)(
        IBackgroundCopyJob5 *This,
        LPCWSTR RemoteUrl,
        LPCWSTR LocalName);

    HRESULT (STDMETHODCALLTYPE *EnumFiles)(
        IBackgroundCopyJob5 *This,
        IEnumBackgroundCopyFiles **pEnum);

    HRESULT (STDMETHODCALLTYPE *Suspend)(
        IBackgroundCopyJob5 *This);

    HRESULT (STDMETHODCALLTYPE *Resume)(
        IBackgroundCopyJob5 *This);

    HRESULT (STDMETHODCALLTYPE *Cancel)(
        IBackgroundCopyJob5 *This);

    HRESULT (STDMETHODCALLTYPE *Complete)(
        IBackgroundCopyJob5 *This);

    HRESULT (STDMETHODCALLTYPE *GetId)(
        IBackgroundCopyJob5 *This,
        GUID *pVal);

    HRESULT (STDMETHODCALLTYPE *GetType)(
        IBackgroundCopyJob5 *This,
        BG_JOB_TYPE *pVal);

    HRESULT (STDMETHODCALLTYPE *GetProgress)(
        IBackgroundCopyJob5 *This,
        BG_JOB_PROGRESS *pVal);

    HRESULT (STDMETHODCALLTYPE *GetTimes)(
        IBackgroundCopyJob5 *This,
        BG_JOB_TIMES *pVal);

    HRESULT (STDMETHODCALLTYPE *GetState)(
        IBackgroundCopyJob5 *This,
        BG_JOB_STATE *pVal);

    HRESULT (STDMETHODCALLTYPE *GetError)(
        IBackgroundCopyJob5 *This,
        IBackgroundCopyError **ppError);

    HRESULT (STDMETHODCALLTYPE *GetOwner)(
        IBackgroundCopyJob5 *This,
        LPWSTR *pVal);

    HRESULT (STDMETHODCALLTYPE *SetDisplayName)(
        IBackgroundCopyJob5 *This,
        LPCWSTR Val);

    HRESULT (STDMETHODCALLTYPE *GetDisplayName)(
        IBackgroundCopyJob5 *This,
        LPWSTR *pVal);

    HRESULT (STDMETHODCALLTYPE *SetDescription)(
        IBackgroundCopyJob5 *This,
        LPCWSTR Val);

    HRESULT (STDMETHODCALLTYPE *GetDescription)(
        IBackgroundCopyJob5 *This,
        LPWSTR *pVal);

    HRESULT (STDMETHODCALLTYPE *SetPriority)(
        IBackgroundCopyJob5 *This,
        BG_JOB_PRIORITY Val);

    HRESULT (STDMETHODCALLTYPE *GetPriority)(
        IBackgroundCopyJob5 *This,
        BG_JOB_PRIORITY *pVal);

    HRESULT (STDMETHODCALLTYPE *SetNotifyFlags)(
        IBackgroundCopyJob5 *This,
        ULONG Val);

    HRESULT (STDMETHODCALLTYPE *GetNotifyFlags)(
        IBackgroundCopyJob5 *This,
        ULONG *pVal);

    HRESULT (STDMETHODCALLTYPE *SetNotifyInterface)(
        IBackgroundCopyJob5 *This,
        IUnknown *Val);

    HRESULT (STDMETHODCALLTYPE *GetNotifyInterface)(
        IBackgroundCopyJob5 *This,
        IUnknown **pVal);

    HRESULT (STDMETHODCALLTYPE *SetMinimumRetryDelay)(
        IBackgroundCopyJob5 *This,
        ULONG Seconds);

    HRESULT (STDMETHODCALLTYPE *GetMinimumRetryDelay)(
        IBackgroundCopyJob5 *This,
        ULONG *Seconds);

    HRESULT (STDMETHODCALLTYPE *SetNoProgressTimeout)(
        IBackgroundCopyJob5 *This,
        ULONG Seconds);

    HRESULT (STDMETHODCALLTYPE *GetNoProgressTimeout)(
        IBackgroundCopyJob5 *This,
        ULONG *Seconds);

    HRESULT (STDMETHODCALLTYPE *GetErrorCount)(
        IBackgroundCopyJob5 *This,
        ULONG *Errors);

    HRESULT (STDMETHODCALLTYPE *SetProxySettings)(
        IBackgroundCopyJob5 *This,
        BG_JOB_PROXY_USAGE ProxyUsage,
        const WCHAR *ProxyList,
        const WCHAR *ProxyBypassList);

    HRESULT (STDMETHODCALLTYPE *GetProxySettings)(
        IBackgroundCopyJob5 *This,
        BG_JOB_PROXY_USAGE *pProxyUsage,
        LPWSTR *pProxyList,
        LPWSTR *pProxyBypassList);

    HRESULT (STDMETHODCALLTYPE *TakeOwnership)(
        IBackgroundCopyJob5 *This);

    /*** IBackgroundCopyJob2 methods ***/
    HRESULT (STDMETHODCALLTYPE *SetNotifyCmdLine)(
        IBackgroundCopyJob5 *This,
        LPCWSTR prog,
        LPCWSTR params);

    HRESULT (STDMETHODCALLTYPE *GetNotifyCmdLine)(
        IBackgroundCopyJob5 *This,
        LPWSTR *prog,
        LPWSTR *params);

    HRESULT (STDMETHODCALLTYPE *GetReplyProgress)(
        IBackgroundCopyJob5 *This,
        BG_JOB_REPLY_PROGRESS *progress);

    HRESULT (STDMETHODCALLTYPE *GetReplyData)(
        IBackgroundCopyJob5 *This,
        byte **pBuffer,
        UINT64 *pLength);

    HRESULT (STDMETHODCALLTYPE *SetReplyFileName)(
        IBackgroundCopyJob5 *This,
        LPCWSTR filename);

    HRESULT (STDMETHODCALLTYPE *GetReplyFileName)(
        IBackgroundCopyJob5 *This,
        LPWSTR *pFilename);

    HRESULT (STDMETHODCALLTYPE *SetCredentials)(
        IBackgroundCopyJob5 *This,
        BG_AUTH_CREDENTIALS *cred);

    HRESULT (STDMETHODCALLTYPE *RemoveCredentials)(
        IBackgroundCopyJob5 *This,
        BG_AUTH_TARGET target,
        BG_AUTH_SCHEME scheme);

    /*** IBackgroundCopyJob3 methods ***/
    HRESULT (STDMETHODCALLTYPE *ReplaceRemotePrefix)(
        IBackgroundCopyJob5 *This,
        LPCWSTR OldPrefix,
        LPCWSTR NewPrefix);

    HRESULT (STDMETHODCALLTYPE *AddFileWithRanges)(
        IBackgroundCopyJob5 *This,
        LPCWSTR RemoteUrl,
        LPCWSTR LocalName,
        DWORD RangeCount,
        BG_FILE_RANGE Ranges[]);

    HRESULT (STDMETHODCALLTYPE *SetFileACLFlags)(
        IBackgroundCopyJob5 *This,
        DWORD Flags);

    HRESULT (STDMETHODCALLTYPE *GetFileACLFlags)(
        IBackgroundCopyJob5 *This,
        DWORD *Flags);

    /*** IBackgroundCopyJob4 methods ***/
    HRESULT (STDMETHODCALLTYPE *SetPeerCachingFlags)(
        IBackgroundCopyJob5 *This,
        DWORD flags);

    HRESULT (STDMETHODCALLTYPE *GetPeerCachingFlags)(
        IBackgroundCopyJob5 *This,
        DWORD *flags);

    HRESULT (STDMETHODCALLTYPE *GetOwnerIntegrityLevel)(
        IBackgroundCopyJob5 *This,
        ULONG *level);

    HRESULT (STDMETHODCALLTYPE *GetOwnerElevationState)(
        IBackgroundCopyJob5 *This,
        WINBOOL *elevated);

    HRESULT (STDMETHODCALLTYPE *SetMaximumDownloadTime)(
        IBackgroundCopyJob5 *This,
        ULONG timeout);

    HRESULT (STDMETHODCALLTYPE *GetMaximumDownloadTime)(
        IBackgroundCopyJob5 *This,
        ULONG *timeout);

    /*** IBackgroundCopyJob5 methods ***/
    HRESULT (STDMETHODCALLTYPE *SetProperty)(
        IBackgroundCopyJob5 *This,
        BITS_JOB_PROPERTY_ID id,
        BITS_JOB_PROPERTY_VALUE value);

    HRESULT (STDMETHODCALLTYPE *GetProperty)(
        IBackgroundCopyJob5 *This,
        BITS_JOB_PROPERTY_ID id,
        BITS_JOB_PROPERTY_VALUE *value);

    END_INTERFACE
} IBackgroundCopyJob5Vtbl;

interface IBackgroundCopyJob5 {
    CONST_VTBL IBackgroundCopyJob5Vtbl* lpVtbl;
};

#ifdef COBJMACROS
#ifndef WIDL_C_INLINE_WRAPPERS
/*** IUnknown methods ***/
#define IBackgroundCopyJob5_QueryInterface(This,riid,ppvObject) (This)->lpVtbl->QueryInterface(This,riid,ppvObject)
#define IBackgroundCopyJob5_AddRef(This) (This)->lpVtbl->AddRef(This)
#define IBackgroundCopyJob5_Release(This) (This)->lpVtbl->Release(This)
/*** IBackgroundCopyJob methods ***/
#define IBackgroundCopyJob5_AddFileSet(This,cFileCount,pFileSet) (This)->lpVtbl->AddFileSet(This,cFileCount,pFileSet)
#define IBackgroundCopyJob5_AddFile(This,RemoteUrl,LocalName) (This)->lpVtbl->AddFile(This,RemoteUrl,LocalName)
#define IBackgroundCopyJob5_EnumFiles(This,pEnum) (This)->lpVtbl->EnumFiles(This,pEnum)
#define IBackgroundCopyJob5_Suspend(This) (This)->lpVtbl->Suspend(This)
#define IBackgroundCopyJob5_Resume(This) (This)->lpVtbl->Resume(This)
#define IBackgroundCopyJob5_Cancel(This) (This)->lpVtbl->Cancel(This)
#define IBackgroundCopyJob5_Complete(This) (This)->lpVtbl->Complete(This)
#define IBackgroundCopyJob5_GetId(This,pVal) (This)->lpVtbl->GetId(This,pVal)
#define IBackgroundCopyJob5_GetType(This,pVal) (This)->lpVtbl->GetType(This,pVal)
#define IBackgroundCopyJob5_GetProgress(This,pVal) (This)->lpVtbl->GetProgress(This,pVal)
#define IBackgroundCopyJob5_GetTimes(This,pVal) (This)->lpVtbl->GetTimes(This,pVal)
#define IBackgroundCopyJob5_GetState(This,pVal) (This)->lpVtbl->GetState(This,pVal)
#define IBackgroundCopyJob5_GetError(This,ppError) (This)->lpVtbl->GetError(This,ppError)
#define IBackgroundCopyJob5_GetOwner(This,pVal) (This)->lpVtbl->GetOwner(This,pVal)
#define IBackgroundCopyJob5_SetDisplayName(This,Val) (This)->lpVtbl->SetDisplayName(This,Val)
#define IBackgroundCopyJob5_GetDisplayName(This,pVal) (This)->lpVtbl->GetDisplayName(This,pVal)
#define IBackgroundCopyJob5_SetDescription(This,Val) (This)->lpVtbl->SetDescription(This,Val)
#define IBackgroundCopyJob5_GetDescription(This,pVal) (This)->lpVtbl->GetDescription(This,pVal)
#define IBackgroundCopyJob5_SetPriority(This,Val) (This)->lpVtbl->SetPriority(This,Val)
#define IBackgroundCopyJob5_GetPriority(This,pVal) (This)->lpVtbl->GetPriority(This,pVal)
#define IBackgroundCopyJob5_SetNotifyFlags(This,Val) (This)->lpVtbl->SetNotifyFlags(This,Val)
#define IBackgroundCopyJob5_GetNotifyFlags(This,pVal) (This)->lpVtbl->GetNotifyFlags(This,pVal)
#define IBackgroundCopyJob5_SetNotifyInterface(This,Val) (This)->lpVtbl->SetNotifyInterface(This,Val)
#define IBackgroundCopyJob5_GetNotifyInterface(This,pVal) (This)->lpVtbl->GetNotifyInterface(This,pVal)
#define IBackgroundCopyJob5_SetMinimumRetryDelay(This,Seconds) (This)->lpVtbl->SetMinimumRetryDelay(This,Seconds)
#define IBackgroundCopyJob5_GetMinimumRetryDelay(This,Seconds) (This)->lpVtbl->GetMinimumRetryDelay(This,Seconds)
#define IBackgroundCopyJob5_SetNoProgressTimeout(This,Seconds) (This)->lpVtbl->SetNoProgressTimeout(This,Seconds)
#define IBackgroundCopyJob5_GetNoProgressTimeout(This,Seconds) (This)->lpVtbl->GetNoProgressTimeout(This,Seconds)
#define IBackgroundCopyJob5_GetErrorCount(This,Errors) (This)->lpVtbl->GetErrorCount(This,Errors)
#define IBackgroundCopyJob5_SetProxySettings(This,ProxyUsage,ProxyList,ProxyBypassList) (This)->lpVtbl->SetProxySettings(This,ProxyUsage,ProxyList,ProxyBypassList)
#define IBackgroundCopyJob5_GetProxySettings(This,pProxyUsage,pProxyList,pProxyBypassList) (This)->lpVtbl->GetProxySettings(This,pProxyUsage,pProxyList,pProxyBypassList)
#define IBackgroundCopyJob5_TakeOwnership(This) (This)->lpVtbl->TakeOwnership(This)
/*** IBackgroundCopyJob2 methods ***/
#define IBackgroundCopyJob5_SetNotifyCmdLine(This,prog,params) (This)->lpVtbl->SetNotifyCmdLine(This,prog,params)
#define IBackgroundCopyJob5_GetNotifyCmdLine(This,prog,params) (This)->lpVtbl->GetNotifyCmdLine(This,prog,params)
#define IBackgroundCopyJob5_GetReplyProgress(This,progress) (This)->lpVtbl->GetReplyProgress(This,progress)
#define IBackgroundCopyJob5_GetReplyData(This,pBuffer,pLength) (This)->lpVtbl->GetReplyData(This,pBuffer,pLength)
#define IBackgroundCopyJob5_SetReplyFileName(This,filename) (This)->lpVtbl->SetReplyFileName(This,filename)
#define IBackgroundCopyJob5_GetReplyFileName(This,pFilename) (This)->lpVtbl->GetReplyFileName(This,pFilename)
#define IBackgroundCopyJob5_SetCredentials(This,cred) (This)->lpVtbl->SetCredentials(This,cred)
#define IBackgroundCopyJob5_RemoveCredentials(This,target,scheme) (This)->lpVtbl->RemoveCredentials(This,target,scheme)
/*** IBackgroundCopyJob3 methods ***/
#define IBackgroundCopyJob5_ReplaceRemotePrefix(This,OldPrefix,NewPrefix) (This)->lpVtbl->ReplaceRemotePrefix(This,OldPrefix,NewPrefix)
#define IBackgroundCopyJob5_AddFileWithRanges(This,RemoteUrl,LocalName,RangeCount,Ranges) (This)->lpVtbl->AddFileWithRanges(This,RemoteUrl,LocalName,RangeCount,Ranges)
#define IBackgroundCopyJob5_SetFileACLFlags(This,Flags) (This)->lpVtbl->SetFileACLFlags(This,Flags)
#define IBackgroundCopyJob5_GetFileACLFlags(This,Flags) (This)->lpVtbl->GetFileACLFlags(This,Flags)
/*** IBackgroundCopyJob4 methods ***/
#define IBackgroundCopyJob5_SetPeerCachingFlags(This,flags) (This)->lpVtbl->SetPeerCachingFlags(This,flags)
#define IBackgroundCopyJob5_GetPeerCachingFlags(This,flags) (This)->lpVtbl->GetPeerCachingFlags(This,flags)
#define IBackgroundCopyJob5_GetOwnerIntegrityLevel(This,level) (This)->lpVtbl->GetOwnerIntegrityLevel(This,level)
#define IBackgroundCopyJob5_GetOwnerElevationState(This,elevated) (This)->lpVtbl->GetOwnerElevationState(This,elevated)
#define IBackgroundCopyJob5_SetMaximumDownloadTime(This,timeout) (This)->lpVtbl->SetMaximumDownloadTime(This,timeout)
#define IBackgroundCopyJob5_GetMaximumDownloadTime(This,timeout) (This)->lpVtbl->GetMaximumDownloadTime(This,timeout)
/*** IBackgroundCopyJob5 methods ***/
#define IBackgroundCopyJob5_SetProperty(This,id,value) (This)->lpVtbl->SetProperty(This,id,value)
#define IBackgroundCopyJob5_GetProperty(This,id,value) (This)->lpVtbl->GetProperty(This,id,value)
#else
/*** IUnknown methods ***/
static __WIDL_INLINE HRESULT IBackgroundCopyJob5_QueryInterface(IBackgroundCopyJob5* This,REFIID riid,void **ppvObject) {
    return This->lpVtbl->QueryInterface(This,riid,ppvObject);
}
static __WIDL_INLINE ULONG IBackgroundCopyJob5_AddRef(IBackgroundCopyJob5* This) {
    return This->lpVtbl->AddRef(This);
}
static __WIDL_INLINE ULONG IBackgroundCopyJob5_Release(IBackgroundCopyJob5* This) {
    return This->lpVtbl->Release(This);
}
/*** IBackgroundCopyJob methods ***/
static __WIDL_INLINE HRESULT IBackgroundCopyJob5_AddFileSet(IBackgroundCopyJob5* This,ULONG cFileCount,BG_FILE_INFO *pFileSet) {
    return This->lpVtbl->AddFileSet(This,cFileCount,pFileSet);
}
static __WIDL_INLINE HRESULT IBackgroundCopyJob5_AddFile(IBackgroundCopyJob5* This,LPCWSTR RemoteUrl,LPCWSTR LocalName) {
    return This->lpVtbl->AddFile(This,RemoteUrl,LocalName);
}
static __WIDL_INLINE HRESULT IBackgroundCopyJob5_EnumFiles(IBackgroundCopyJob5* This,IEnumBackgroundCopyFiles **pEnum) {
    return This->lpVtbl->EnumFiles(This,pEnum);
}
static __WIDL_INLINE HRESULT IBackgroundCopyJob5_Suspend(IBackgroundCopyJob5* This) {
    return This->lpVtbl->Suspend(This);
}
static __WIDL_INLINE HRESULT IBackgroundCopyJob5_Resume(IBackgroundCopyJob5* This) {
    return This->lpVtbl->Resume(This);
}
static __WIDL_INLINE HRESULT IBackgroundCopyJob5_Cancel(IBackgroundCopyJob5* This) {
    return This->lpVtbl->Cancel(This);
}
static __WIDL_INLINE HRESULT IBackgroundCopyJob5_Complete(IBackgroundCopyJob5* This) {
    return This->lpVtbl->Complete(This);
}
static __WIDL_INLINE HRESULT IBackgroundCopyJob5_GetId(IBackgroundCopyJob5* This,GUID *pVal) {
    return This->lpVtbl->GetId(This,pVal);
}
static __WIDL_INLINE HRESULT IBackgroundCopyJob5_GetType(IBackgroundCopyJob5* This,BG_JOB_TYPE *pVal) {
    return This->lpVtbl->GetType(This,pVal);
}
static __WIDL_INLINE HRESULT IBackgroundCopyJob5_GetProgress(IBackgroundCopyJob5* This,BG_JOB_PROGRESS *pVal) {
    return This->lpVtbl->GetProgress(This,pVal);
}
static __WIDL_INLINE HRESULT IBackgroundCopyJob5_GetTimes(IBackgroundCopyJob5* This,BG_JOB_TIMES *pVal) {
    return This->lpVtbl->GetTimes(This,pVal);
}
static __WIDL_INLINE HRESULT IBackgroundCopyJob5_GetState(IBackgroundCopyJob5* This,BG_JOB_STATE *pVal) {
    return This->lpVtbl->GetState(This,pVal);
}
static __WIDL_INLINE HRESULT IBackgroundCopyJob5_GetError(IBackgroundCopyJob5* This,IBackgroundCopyError **ppError) {
    return This->lpVtbl->GetError(This,ppError);
}
static __WIDL_INLINE HRESULT IBackgroundCopyJob5_GetOwner(IBackgroundCopyJob5* This,LPWSTR *pVal) {
    return This->lpVtbl->GetOwner(This,pVal);
}
static __WIDL_INLINE HRESULT IBackgroundCopyJob5_SetDisplayName(IBackgroundCopyJob5* This,LPCWSTR Val) {
    return This->lpVtbl->SetDisplayName(This,Val);
}
static __WIDL_INLINE HRESULT IBackgroundCopyJob5_GetDisplayName(IBackgroundCopyJob5* This,LPWSTR *pVal) {
    return This->lpVtbl->GetDisplayName(This,pVal);
}
static __WIDL_INLINE HRESULT IBackgroundCopyJob5_SetDescription(IBackgroundCopyJob5* This,LPCWSTR Val) {
    return This->lpVtbl->SetDescription(This,Val);
}
static __WIDL_INLINE HRESULT IBackgroundCopyJob5_GetDescription(IBackgroundCopyJob5* This,LPWSTR *pVal) {
    return This->lpVtbl->GetDescription(This,pVal);
}
static __WIDL_INLINE HRESULT IBackgroundCopyJob5_SetPriority(IBackgroundCopyJob5* This,BG_JOB_PRIORITY Val) {
    return This->lpVtbl->SetPriority(This,Val);
}
static __WIDL_INLINE HRESULT IBackgroundCopyJob5_GetPriority(IBackgroundCopyJob5* This,BG_JOB_PRIORITY *pVal) {
    return This->lpVtbl->GetPriority(This,pVal);
}
static __WIDL_INLINE HRESULT IBackgroundCopyJob5_SetNotifyFlags(IBackgroundCopyJob5* This,ULONG Val) {
    return This->lpVtbl->SetNotifyFlags(This,Val);
}
static __WIDL_INLINE HRESULT IBackgroundCopyJob5_GetNotifyFlags(IBackgroundCopyJob5* This,ULONG *pVal) {
    return This->lpVtbl->GetNotifyFlags(This,pVal);
}
static __WIDL_INLINE HRESULT IBackgroundCopyJob5_SetNotifyInterface(IBackgroundCopyJob5* This,IUnknown *Val) {
    return This->lpVtbl->SetNotifyInterface(This,Val);
}
static __WIDL_INLINE HRESULT IBackgroundCopyJob5_GetNotifyInterface(IBackgroundCopyJob5* This,IUnknown **pVal) {
    return This->lpVtbl->GetNotifyInterface(This,pVal);
}
static __WIDL_INLINE HRESULT IBackgroundCopyJob5_SetMinimumRetryDelay(IBackgroundCopyJob5* This,ULONG Seconds) {
    return This->lpVtbl->SetMinimumRetryDelay(This,Seconds);
}
static __WIDL_INLINE HRESULT IBackgroundCopyJob5_GetMinimumRetryDelay(IBackgroundCopyJob5* This,ULONG *Seconds) {
    return This->lpVtbl->GetMinimumRetryDelay(This,Seconds);
}
static __WIDL_INLINE HRESULT IBackgroundCopyJob5_SetNoProgressTimeout(IBackgroundCopyJob5* This,ULONG Seconds) {
    return This->lpVtbl->SetNoProgressTimeout(This,Seconds);
}
static __WIDL_INLINE HRESULT IBackgroundCopyJob5_GetNoProgressTimeout(IBackgroundCopyJob5* This,ULONG *Seconds) {
    return This->lpVtbl->GetNoProgressTimeout(This,Seconds);
}
static __WIDL_INLINE HRESULT IBackgroundCopyJob5_GetErrorCount(IBackgroundCopyJob5* This,ULONG *Errors) {
    return This->lpVtbl->GetErrorCount(This,Errors);
}
static __WIDL_INLINE HRESULT IBackgroundCopyJob5_SetProxySettings(IBackgroundCopyJob5* This,BG_JOB_PROXY_USAGE ProxyUsage,const WCHAR *ProxyList,const WCHAR *ProxyBypassList) {
    return This->lpVtbl->SetProxySettings(This,ProxyUsage,ProxyList,ProxyBypassList);
}
static __WIDL_INLINE HRESULT IBackgroundCopyJob5_GetProxySettings(IBackgroundCopyJob5* This,BG_JOB_PROXY_USAGE *pProxyUsage,LPWSTR *pProxyList,LPWSTR *pProxyBypassList) {
    return This->lpVtbl->GetProxySettings(This,pProxyUsage,pProxyList,pProxyBypassList);
}
static __WIDL_INLINE HRESULT IBackgroundCopyJob5_TakeOwnership(IBackgroundCopyJob5* This) {
    return This->lpVtbl->TakeOwnership(This);
}
/*** IBackgroundCopyJob2 methods ***/
static __WIDL_INLINE HRESULT IBackgroundCopyJob5_SetNotifyCmdLine(IBackgroundCopyJob5* This,LPCWSTR prog,LPCWSTR params) {
    return This->lpVtbl->SetNotifyCmdLine(This,prog,params);
}
static __WIDL_INLINE HRESULT IBackgroundCopyJob5_GetNotifyCmdLine(IBackgroundCopyJob5* This,LPWSTR *prog,LPWSTR *params) {
    return This->lpVtbl->GetNotifyCmdLine(This,prog,params);
}
static __WIDL_INLINE HRESULT IBackgroundCopyJob5_GetReplyProgress(IBackgroundCopyJob5* This,BG_JOB_REPLY_PROGRESS *progress) {
    return This->lpVtbl->GetReplyProgress(This,progress);
}
static __WIDL_INLINE HRESULT IBackgroundCopyJob5_GetReplyData(IBackgroundCopyJob5* This,byte **pBuffer,UINT64 *pLength) {
    return This->lpVtbl->GetReplyData(This,pBuffer,pLength);
}
static __WIDL_INLINE HRESULT IBackgroundCopyJob5_SetReplyFileName(IBackgroundCopyJob5* This,LPCWSTR filename) {
    return This->lpVtbl->SetReplyFileName(This,filename);
}
static __WIDL_INLINE HRESULT IBackgroundCopyJob5_GetReplyFileName(IBackgroundCopyJob5* This,LPWSTR *pFilename) {
    return This->lpVtbl->GetReplyFileName(This,pFilename);
}
static __WIDL_INLINE HRESULT IBackgroundCopyJob5_SetCredentials(IBackgroundCopyJob5* This,BG_AUTH_CREDENTIALS *cred) {
    return This->lpVtbl->SetCredentials(This,cred);
}
static __WIDL_INLINE HRESULT IBackgroundCopyJob5_RemoveCredentials(IBackgroundCopyJob5* This,BG_AUTH_TARGET target,BG_AUTH_SCHEME scheme) {
    return This->lpVtbl->RemoveCredentials(This,target,scheme);
}
/*** IBackgroundCopyJob3 methods ***/
static __WIDL_INLINE HRESULT IBackgroundCopyJob5_ReplaceRemotePrefix(IBackgroundCopyJob5* This,LPCWSTR OldPrefix,LPCWSTR NewPrefix) {
    return This->lpVtbl->ReplaceRemotePrefix(This,OldPrefix,NewPrefix);
}
static __WIDL_INLINE HRESULT IBackgroundCopyJob5_AddFileWithRanges(IBackgroundCopyJob5* This,LPCWSTR RemoteUrl,LPCWSTR LocalName,DWORD RangeCount,BG_FILE_RANGE Ranges[]) {
    return This->lpVtbl->AddFileWithRanges(This,RemoteUrl,LocalName,RangeCount,Ranges);
}
static __WIDL_INLINE HRESULT IBackgroundCopyJob5_SetFileACLFlags(IBackgroundCopyJob5* This,DWORD Flags) {
    return This->lpVtbl->SetFileACLFlags(This,Flags);
}
static __WIDL_INLINE HRESULT IBackgroundCopyJob5_GetFileACLFlags(IBackgroundCopyJob5* This,DWORD *Flags) {
    return This->lpVtbl->GetFileACLFlags(This,Flags);
}
/*** IBackgroundCopyJob4 methods ***/
static __WIDL_INLINE HRESULT IBackgroundCopyJob5_SetPeerCachingFlags(IBackgroundCopyJob5* This,DWORD flags) {
    return This->lpVtbl->SetPeerCachingFlags(This,flags);
}
static __WIDL_INLINE HRESULT IBackgroundCopyJob5_GetPeerCachingFlags(IBackgroundCopyJob5* This,DWORD *flags) {
    return This->lpVtbl->GetPeerCachingFlags(This,flags);
}
static __WIDL_INLINE HRESULT IBackgroundCopyJob5_GetOwnerIntegrityLevel(IBackgroundCopyJob5* This,ULONG *level) {
    return This->lpVtbl->GetOwnerIntegrityLevel(This,level);
}
static __WIDL_INLINE HRESULT IBackgroundCopyJob5_GetOwnerElevationState(IBackgroundCopyJob5* This,WINBOOL *elevated) {
    return This->lpVtbl->GetOwnerElevationState(This,elevated);
}
static __WIDL_INLINE HRESULT IBackgroundCopyJob5_SetMaximumDownloadTime(IBackgroundCopyJob5* This,ULONG timeout) {
    return This->lpVtbl->SetMaximumDownloadTime(This,timeout);
}
static __WIDL_INLINE HRESULT IBackgroundCopyJob5_GetMaximumDownloadTime(IBackgroundCopyJob5* This,ULONG *timeout) {
    return This->lpVtbl->GetMaximumDownloadTime(This,timeout);
}
/*** IBackgroundCopyJob5 methods ***/
static __WIDL_INLINE HRESULT IBackgroundCopyJob5_SetProperty(IBackgroundCopyJob5* This,BITS_JOB_PROPERTY_ID id,BITS_JOB_PROPERTY_VALUE value) {
    return This->lpVtbl->SetProperty(This,id,value);
}
static __WIDL_INLINE HRESULT IBackgroundCopyJob5_GetProperty(IBackgroundCopyJob5* This,BITS_JOB_PROPERTY_ID id,BITS_JOB_PROPERTY_VALUE *value) {
    return This->lpVtbl->GetProperty(This,id,value);
}
#endif
#endif

#endif


#endif  /* __IBackgroundCopyJob5_INTERFACE_DEFINED__ */

/* Begin additional prototypes for all interfaces */


/* End additional prototypes */

#ifdef __cplusplus
}
#endif

#endif /* __bits5_0_h__ */
