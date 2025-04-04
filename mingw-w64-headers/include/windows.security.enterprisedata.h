/*** Autogenerated by WIDL 10.4 from include/windows.security.enterprisedata.idl - Do not edit ***/

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

#ifndef __windows_security_enterprisedata_h__
#define __windows_security_enterprisedata_h__

/* Forward declarations */

#ifndef ____FIAsyncOperationCompletedHandler_1_ProtectionPolicyEvaluationResult_FWD_DEFINED__
#define ____FIAsyncOperationCompletedHandler_1_ProtectionPolicyEvaluationResult_FWD_DEFINED__
typedef interface __FIAsyncOperationCompletedHandler_1_ProtectionPolicyEvaluationResult __FIAsyncOperationCompletedHandler_1_ProtectionPolicyEvaluationResult;
#ifdef __cplusplus
#define __FIAsyncOperationCompletedHandler_1_ProtectionPolicyEvaluationResult ABI::Windows::Foundation::IAsyncOperationCompletedHandler<ABI::Windows::Security::EnterpriseData::ProtectionPolicyEvaluationResult >
#endif /* __cplusplus */
#endif

#ifndef ____FIAsyncOperation_1_ProtectionPolicyEvaluationResult_FWD_DEFINED__
#define ____FIAsyncOperation_1_ProtectionPolicyEvaluationResult_FWD_DEFINED__
typedef interface __FIAsyncOperation_1_ProtectionPolicyEvaluationResult __FIAsyncOperation_1_ProtectionPolicyEvaluationResult;
#ifdef __cplusplus
#define __FIAsyncOperation_1_ProtectionPolicyEvaluationResult ABI::Windows::Foundation::IAsyncOperation<ABI::Windows::Security::EnterpriseData::ProtectionPolicyEvaluationResult >
#endif /* __cplusplus */
#endif

/* Headers for imported files */

#include <inspectable.h>
#include <asyncinfo.h>
#include <eventtoken.h>
#include <windowscontracts.h>
#include <windows.foundation.h>

#ifdef __cplusplus
extern "C" {
#endif

#ifndef __cplusplus
typedef enum __x_ABI_CWindows_CSecurity_CEnterpriseData_CProtectionPolicyEvaluationResult __x_ABI_CWindows_CSecurity_CEnterpriseData_CProtectionPolicyEvaluationResult;
#endif /* __cplusplus */

#ifndef ____FIAsyncOperation_1_ProtectionPolicyEvaluationResult_FWD_DEFINED__
#define ____FIAsyncOperation_1_ProtectionPolicyEvaluationResult_FWD_DEFINED__
typedef interface __FIAsyncOperation_1_ProtectionPolicyEvaluationResult __FIAsyncOperation_1_ProtectionPolicyEvaluationResult;
#ifdef __cplusplus
#define __FIAsyncOperation_1_ProtectionPolicyEvaluationResult ABI::Windows::Foundation::IAsyncOperation<ABI::Windows::Security::EnterpriseData::ProtectionPolicyEvaluationResult >
#endif /* __cplusplus */
#endif

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#ifdef __cplusplus
} /* extern "C" */
namespace ABI {
    namespace Windows {
        namespace Security {
            namespace EnterpriseData {
                enum ProtectionPolicyEvaluationResult {
                    ProtectionPolicyEvaluationResult_Allowed = 0,
                    ProtectionPolicyEvaluationResult_Blocked = 1,
                    ProtectionPolicyEvaluationResult_ConsentRequired = 2
                };
            }
        }
    }
}
extern "C" {
#else
enum __x_ABI_CWindows_CSecurity_CEnterpriseData_CProtectionPolicyEvaluationResult {
    ProtectionPolicyEvaluationResult_Allowed = 0,
    ProtectionPolicyEvaluationResult_Blocked = 1,
    ProtectionPolicyEvaluationResult_ConsentRequired = 2
};
#ifdef WIDL_using_Windows_Security_EnterpriseData
#define ProtectionPolicyEvaluationResult __x_ABI_CWindows_CSecurity_CEnterpriseData_CProtectionPolicyEvaluationResult
#endif /* WIDL_using_Windows_Security_EnterpriseData */
#endif

#endif /* WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000 */
/*****************************************************************************
 * IAsyncOperationCompletedHandler<ABI::Windows::Security::EnterpriseData::ProtectionPolicyEvaluationResult > interface
 */
#ifndef ____FIAsyncOperationCompletedHandler_1_ProtectionPolicyEvaluationResult_INTERFACE_DEFINED__
#define ____FIAsyncOperationCompletedHandler_1_ProtectionPolicyEvaluationResult_INTERFACE_DEFINED__

DEFINE_GUID(IID___FIAsyncOperationCompletedHandler_1_ProtectionPolicyEvaluationResult, 0x2833ba54, 0xa4e1, 0x5c2d, 0x8a,0x7a, 0x13,0x6e,0x85,0x10,0xc7,0x8b);
#if defined(__cplusplus) && !defined(CINTERFACE)
} /* extern "C" */
namespace ABI {
    namespace Windows {
        namespace Foundation {
            template<>
            MIDL_INTERFACE("2833ba54-a4e1-5c2d-8a7a-136e8510c78b")
            IAsyncOperationCompletedHandler<ABI::Windows::Security::EnterpriseData::ProtectionPolicyEvaluationResult > : IAsyncOperationCompletedHandler_impl<ABI::Windows::Security::EnterpriseData::ProtectionPolicyEvaluationResult >
            {
            };
        }
    }
}
extern "C" {
#ifdef __CRT_UUID_DECL
__CRT_UUID_DECL(__FIAsyncOperationCompletedHandler_1_ProtectionPolicyEvaluationResult, 0x2833ba54, 0xa4e1, 0x5c2d, 0x8a,0x7a, 0x13,0x6e,0x85,0x10,0xc7,0x8b)
#endif
#else
typedef struct __FIAsyncOperationCompletedHandler_1_ProtectionPolicyEvaluationResultVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        __FIAsyncOperationCompletedHandler_1_ProtectionPolicyEvaluationResult *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        __FIAsyncOperationCompletedHandler_1_ProtectionPolicyEvaluationResult *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        __FIAsyncOperationCompletedHandler_1_ProtectionPolicyEvaluationResult *This);

    /*** IAsyncOperationCompletedHandler<ABI::Windows::Security::EnterpriseData::ProtectionPolicyEvaluationResult > methods ***/
    HRESULT (STDMETHODCALLTYPE *Invoke)(
        __FIAsyncOperationCompletedHandler_1_ProtectionPolicyEvaluationResult *This,
        __FIAsyncOperation_1_ProtectionPolicyEvaluationResult *info,
        AsyncStatus status);

    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_ProtectionPolicyEvaluationResultVtbl;

interface __FIAsyncOperationCompletedHandler_1_ProtectionPolicyEvaluationResult {
    CONST_VTBL __FIAsyncOperationCompletedHandler_1_ProtectionPolicyEvaluationResultVtbl* lpVtbl;
};

#ifdef COBJMACROS
#ifndef WIDL_C_INLINE_WRAPPERS
/*** IUnknown methods ***/
#define __FIAsyncOperationCompletedHandler_1_ProtectionPolicyEvaluationResult_QueryInterface(This,riid,ppvObject) (This)->lpVtbl->QueryInterface(This,riid,ppvObject)
#define __FIAsyncOperationCompletedHandler_1_ProtectionPolicyEvaluationResult_AddRef(This) (This)->lpVtbl->AddRef(This)
#define __FIAsyncOperationCompletedHandler_1_ProtectionPolicyEvaluationResult_Release(This) (This)->lpVtbl->Release(This)
/*** IAsyncOperationCompletedHandler<ABI::Windows::Security::EnterpriseData::ProtectionPolicyEvaluationResult > methods ***/
#define __FIAsyncOperationCompletedHandler_1_ProtectionPolicyEvaluationResult_Invoke(This,info,status) (This)->lpVtbl->Invoke(This,info,status)
#else
/*** IUnknown methods ***/
static inline HRESULT __FIAsyncOperationCompletedHandler_1_ProtectionPolicyEvaluationResult_QueryInterface(__FIAsyncOperationCompletedHandler_1_ProtectionPolicyEvaluationResult* This,REFIID riid,void **ppvObject) {
    return This->lpVtbl->QueryInterface(This,riid,ppvObject);
}
static inline ULONG __FIAsyncOperationCompletedHandler_1_ProtectionPolicyEvaluationResult_AddRef(__FIAsyncOperationCompletedHandler_1_ProtectionPolicyEvaluationResult* This) {
    return This->lpVtbl->AddRef(This);
}
static inline ULONG __FIAsyncOperationCompletedHandler_1_ProtectionPolicyEvaluationResult_Release(__FIAsyncOperationCompletedHandler_1_ProtectionPolicyEvaluationResult* This) {
    return This->lpVtbl->Release(This);
}
/*** IAsyncOperationCompletedHandler<ABI::Windows::Security::EnterpriseData::ProtectionPolicyEvaluationResult > methods ***/
static inline HRESULT __FIAsyncOperationCompletedHandler_1_ProtectionPolicyEvaluationResult_Invoke(__FIAsyncOperationCompletedHandler_1_ProtectionPolicyEvaluationResult* This,__FIAsyncOperation_1_ProtectionPolicyEvaluationResult *info,AsyncStatus status) {
    return This->lpVtbl->Invoke(This,info,status);
}
#endif
#ifdef WIDL_using_Windows_Foundation
#define IID_IAsyncOperationCompletedHandler_ProtectionPolicyEvaluationResult IID___FIAsyncOperationCompletedHandler_1_ProtectionPolicyEvaluationResult
#define IAsyncOperationCompletedHandler_ProtectionPolicyEvaluationResultVtbl __FIAsyncOperationCompletedHandler_1_ProtectionPolicyEvaluationResultVtbl
#define IAsyncOperationCompletedHandler_ProtectionPolicyEvaluationResult __FIAsyncOperationCompletedHandler_1_ProtectionPolicyEvaluationResult
#define IAsyncOperationCompletedHandler_ProtectionPolicyEvaluationResult_QueryInterface __FIAsyncOperationCompletedHandler_1_ProtectionPolicyEvaluationResult_QueryInterface
#define IAsyncOperationCompletedHandler_ProtectionPolicyEvaluationResult_AddRef __FIAsyncOperationCompletedHandler_1_ProtectionPolicyEvaluationResult_AddRef
#define IAsyncOperationCompletedHandler_ProtectionPolicyEvaluationResult_Release __FIAsyncOperationCompletedHandler_1_ProtectionPolicyEvaluationResult_Release
#define IAsyncOperationCompletedHandler_ProtectionPolicyEvaluationResult_Invoke __FIAsyncOperationCompletedHandler_1_ProtectionPolicyEvaluationResult_Invoke
#endif /* WIDL_using_Windows_Foundation */
#endif

#endif

#endif  /* ____FIAsyncOperationCompletedHandler_1_ProtectionPolicyEvaluationResult_INTERFACE_DEFINED__ */

/*****************************************************************************
 * IAsyncOperation<ABI::Windows::Security::EnterpriseData::ProtectionPolicyEvaluationResult > interface
 */
#ifndef ____FIAsyncOperation_1_ProtectionPolicyEvaluationResult_INTERFACE_DEFINED__
#define ____FIAsyncOperation_1_ProtectionPolicyEvaluationResult_INTERFACE_DEFINED__

DEFINE_GUID(IID___FIAsyncOperation_1_ProtectionPolicyEvaluationResult, 0xe8d81715, 0xc56c, 0x5a6b, 0xb7,0x38, 0x5d,0xf6,0xc2,0x77,0x5b,0x7b);
#if defined(__cplusplus) && !defined(CINTERFACE)
} /* extern "C" */
namespace ABI {
    namespace Windows {
        namespace Foundation {
            template<>
            MIDL_INTERFACE("e8d81715-c56c-5a6b-b738-5df6c2775b7b")
            IAsyncOperation<ABI::Windows::Security::EnterpriseData::ProtectionPolicyEvaluationResult > : IAsyncOperation_impl<ABI::Windows::Security::EnterpriseData::ProtectionPolicyEvaluationResult >
            {
            };
        }
    }
}
extern "C" {
#ifdef __CRT_UUID_DECL
__CRT_UUID_DECL(__FIAsyncOperation_1_ProtectionPolicyEvaluationResult, 0xe8d81715, 0xc56c, 0x5a6b, 0xb7,0x38, 0x5d,0xf6,0xc2,0x77,0x5b,0x7b)
#endif
#else
typedef struct __FIAsyncOperation_1_ProtectionPolicyEvaluationResultVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        __FIAsyncOperation_1_ProtectionPolicyEvaluationResult *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        __FIAsyncOperation_1_ProtectionPolicyEvaluationResult *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        __FIAsyncOperation_1_ProtectionPolicyEvaluationResult *This);

    /*** IInspectable methods ***/
    HRESULT (STDMETHODCALLTYPE *GetIids)(
        __FIAsyncOperation_1_ProtectionPolicyEvaluationResult *This,
        ULONG *iidCount,
        IID **iids);

    HRESULT (STDMETHODCALLTYPE *GetRuntimeClassName)(
        __FIAsyncOperation_1_ProtectionPolicyEvaluationResult *This,
        HSTRING *className);

    HRESULT (STDMETHODCALLTYPE *GetTrustLevel)(
        __FIAsyncOperation_1_ProtectionPolicyEvaluationResult *This,
        TrustLevel *trustLevel);

    /*** IAsyncOperation<ABI::Windows::Security::EnterpriseData::ProtectionPolicyEvaluationResult > methods ***/
    HRESULT (STDMETHODCALLTYPE *put_Completed)(
        __FIAsyncOperation_1_ProtectionPolicyEvaluationResult *This,
        __FIAsyncOperationCompletedHandler_1_ProtectionPolicyEvaluationResult *handler);

    HRESULT (STDMETHODCALLTYPE *get_Completed)(
        __FIAsyncOperation_1_ProtectionPolicyEvaluationResult *This,
        __FIAsyncOperationCompletedHandler_1_ProtectionPolicyEvaluationResult **handler);

    HRESULT (STDMETHODCALLTYPE *GetResults)(
        __FIAsyncOperation_1_ProtectionPolicyEvaluationResult *This,
        __x_ABI_CWindows_CSecurity_CEnterpriseData_CProtectionPolicyEvaluationResult *results);

    END_INTERFACE
} __FIAsyncOperation_1_ProtectionPolicyEvaluationResultVtbl;

interface __FIAsyncOperation_1_ProtectionPolicyEvaluationResult {
    CONST_VTBL __FIAsyncOperation_1_ProtectionPolicyEvaluationResultVtbl* lpVtbl;
};

#ifdef COBJMACROS
#ifndef WIDL_C_INLINE_WRAPPERS
/*** IUnknown methods ***/
#define __FIAsyncOperation_1_ProtectionPolicyEvaluationResult_QueryInterface(This,riid,ppvObject) (This)->lpVtbl->QueryInterface(This,riid,ppvObject)
#define __FIAsyncOperation_1_ProtectionPolicyEvaluationResult_AddRef(This) (This)->lpVtbl->AddRef(This)
#define __FIAsyncOperation_1_ProtectionPolicyEvaluationResult_Release(This) (This)->lpVtbl->Release(This)
/*** IInspectable methods ***/
#define __FIAsyncOperation_1_ProtectionPolicyEvaluationResult_GetIids(This,iidCount,iids) (This)->lpVtbl->GetIids(This,iidCount,iids)
#define __FIAsyncOperation_1_ProtectionPolicyEvaluationResult_GetRuntimeClassName(This,className) (This)->lpVtbl->GetRuntimeClassName(This,className)
#define __FIAsyncOperation_1_ProtectionPolicyEvaluationResult_GetTrustLevel(This,trustLevel) (This)->lpVtbl->GetTrustLevel(This,trustLevel)
/*** IAsyncOperation<ABI::Windows::Security::EnterpriseData::ProtectionPolicyEvaluationResult > methods ***/
#define __FIAsyncOperation_1_ProtectionPolicyEvaluationResult_put_Completed(This,handler) (This)->lpVtbl->put_Completed(This,handler)
#define __FIAsyncOperation_1_ProtectionPolicyEvaluationResult_get_Completed(This,handler) (This)->lpVtbl->get_Completed(This,handler)
#define __FIAsyncOperation_1_ProtectionPolicyEvaluationResult_GetResults(This,results) (This)->lpVtbl->GetResults(This,results)
#else
/*** IUnknown methods ***/
static inline HRESULT __FIAsyncOperation_1_ProtectionPolicyEvaluationResult_QueryInterface(__FIAsyncOperation_1_ProtectionPolicyEvaluationResult* This,REFIID riid,void **ppvObject) {
    return This->lpVtbl->QueryInterface(This,riid,ppvObject);
}
static inline ULONG __FIAsyncOperation_1_ProtectionPolicyEvaluationResult_AddRef(__FIAsyncOperation_1_ProtectionPolicyEvaluationResult* This) {
    return This->lpVtbl->AddRef(This);
}
static inline ULONG __FIAsyncOperation_1_ProtectionPolicyEvaluationResult_Release(__FIAsyncOperation_1_ProtectionPolicyEvaluationResult* This) {
    return This->lpVtbl->Release(This);
}
/*** IInspectable methods ***/
static inline HRESULT __FIAsyncOperation_1_ProtectionPolicyEvaluationResult_GetIids(__FIAsyncOperation_1_ProtectionPolicyEvaluationResult* This,ULONG *iidCount,IID **iids) {
    return This->lpVtbl->GetIids(This,iidCount,iids);
}
static inline HRESULT __FIAsyncOperation_1_ProtectionPolicyEvaluationResult_GetRuntimeClassName(__FIAsyncOperation_1_ProtectionPolicyEvaluationResult* This,HSTRING *className) {
    return This->lpVtbl->GetRuntimeClassName(This,className);
}
static inline HRESULT __FIAsyncOperation_1_ProtectionPolicyEvaluationResult_GetTrustLevel(__FIAsyncOperation_1_ProtectionPolicyEvaluationResult* This,TrustLevel *trustLevel) {
    return This->lpVtbl->GetTrustLevel(This,trustLevel);
}
/*** IAsyncOperation<ABI::Windows::Security::EnterpriseData::ProtectionPolicyEvaluationResult > methods ***/
static inline HRESULT __FIAsyncOperation_1_ProtectionPolicyEvaluationResult_put_Completed(__FIAsyncOperation_1_ProtectionPolicyEvaluationResult* This,__FIAsyncOperationCompletedHandler_1_ProtectionPolicyEvaluationResult *handler) {
    return This->lpVtbl->put_Completed(This,handler);
}
static inline HRESULT __FIAsyncOperation_1_ProtectionPolicyEvaluationResult_get_Completed(__FIAsyncOperation_1_ProtectionPolicyEvaluationResult* This,__FIAsyncOperationCompletedHandler_1_ProtectionPolicyEvaluationResult **handler) {
    return This->lpVtbl->get_Completed(This,handler);
}
static inline HRESULT __FIAsyncOperation_1_ProtectionPolicyEvaluationResult_GetResults(__FIAsyncOperation_1_ProtectionPolicyEvaluationResult* This,__x_ABI_CWindows_CSecurity_CEnterpriseData_CProtectionPolicyEvaluationResult *results) {
    return This->lpVtbl->GetResults(This,results);
}
#endif
#ifdef WIDL_using_Windows_Foundation
#define IID_IAsyncOperation_ProtectionPolicyEvaluationResult IID___FIAsyncOperation_1_ProtectionPolicyEvaluationResult
#define IAsyncOperation_ProtectionPolicyEvaluationResultVtbl __FIAsyncOperation_1_ProtectionPolicyEvaluationResultVtbl
#define IAsyncOperation_ProtectionPolicyEvaluationResult __FIAsyncOperation_1_ProtectionPolicyEvaluationResult
#define IAsyncOperation_ProtectionPolicyEvaluationResult_QueryInterface __FIAsyncOperation_1_ProtectionPolicyEvaluationResult_QueryInterface
#define IAsyncOperation_ProtectionPolicyEvaluationResult_AddRef __FIAsyncOperation_1_ProtectionPolicyEvaluationResult_AddRef
#define IAsyncOperation_ProtectionPolicyEvaluationResult_Release __FIAsyncOperation_1_ProtectionPolicyEvaluationResult_Release
#define IAsyncOperation_ProtectionPolicyEvaluationResult_GetIids __FIAsyncOperation_1_ProtectionPolicyEvaluationResult_GetIids
#define IAsyncOperation_ProtectionPolicyEvaluationResult_GetRuntimeClassName __FIAsyncOperation_1_ProtectionPolicyEvaluationResult_GetRuntimeClassName
#define IAsyncOperation_ProtectionPolicyEvaluationResult_GetTrustLevel __FIAsyncOperation_1_ProtectionPolicyEvaluationResult_GetTrustLevel
#define IAsyncOperation_ProtectionPolicyEvaluationResult_put_Completed __FIAsyncOperation_1_ProtectionPolicyEvaluationResult_put_Completed
#define IAsyncOperation_ProtectionPolicyEvaluationResult_get_Completed __FIAsyncOperation_1_ProtectionPolicyEvaluationResult_get_Completed
#define IAsyncOperation_ProtectionPolicyEvaluationResult_GetResults __FIAsyncOperation_1_ProtectionPolicyEvaluationResult_GetResults
#endif /* WIDL_using_Windows_Foundation */
#endif

#endif

#endif  /* ____FIAsyncOperation_1_ProtectionPolicyEvaluationResult_INTERFACE_DEFINED__ */

/* Begin additional prototypes for all interfaces */


/* End additional prototypes */

#ifdef __cplusplus
}
#endif

#endif /* __windows_security_enterprisedata_h__ */
