/*** Autogenerated by WIDL 10.0-rc1 from include/wmsbuffer.idl - Do not edit ***/

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

#ifndef __wmsbuffer_h__
#define __wmsbuffer_h__

/* Forward declarations */

#ifndef __INSSBuffer_FWD_DEFINED__
#define __INSSBuffer_FWD_DEFINED__
typedef interface INSSBuffer INSSBuffer;
#ifdef __cplusplus
interface INSSBuffer;
#endif /* __cplusplus */
#endif

#ifndef __INSSBuffer2_FWD_DEFINED__
#define __INSSBuffer2_FWD_DEFINED__
typedef interface INSSBuffer2 INSSBuffer2;
#ifdef __cplusplus
interface INSSBuffer2;
#endif /* __cplusplus */
#endif

#ifndef __INSSBuffer3_FWD_DEFINED__
#define __INSSBuffer3_FWD_DEFINED__
typedef interface INSSBuffer3 INSSBuffer3;
#ifdef __cplusplus
interface INSSBuffer3;
#endif /* __cplusplus */
#endif

/* Headers for imported files */

#include <objidl.h>

#ifdef __cplusplus
extern "C" {
#endif

/*****************************************************************************
 * INSSBuffer interface
 */
#ifndef __INSSBuffer_INTERFACE_DEFINED__
#define __INSSBuffer_INTERFACE_DEFINED__

DEFINE_GUID(IID_INSSBuffer, 0xe1cd3524, 0x03d7, 0x11d2, 0x9e,0xed, 0x00,0x60,0x97,0xd2,0xd7,0xcf);
#if defined(__cplusplus) && !defined(CINTERFACE)
MIDL_INTERFACE("e1cd3524-03d7-11d2-9eed-006097d2d7cf")
INSSBuffer : public IUnknown
{
    virtual HRESULT STDMETHODCALLTYPE GetLength(
        DWORD *pdwLength) = 0;

    virtual HRESULT STDMETHODCALLTYPE SetLength(
        DWORD dwLength) = 0;

    virtual HRESULT STDMETHODCALLTYPE GetMaxLength(
        DWORD *pdwLength) = 0;

    virtual HRESULT STDMETHODCALLTYPE GetBuffer(
        BYTE **ppdwBuffer) = 0;

    virtual HRESULT STDMETHODCALLTYPE GetBufferAndLength(
        BYTE **ppdwBuffer,
        DWORD *pdwLength) = 0;

};
#ifdef __CRT_UUID_DECL
__CRT_UUID_DECL(INSSBuffer, 0xe1cd3524, 0x03d7, 0x11d2, 0x9e,0xed, 0x00,0x60,0x97,0xd2,0xd7,0xcf)
#endif
#else
typedef struct INSSBufferVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        INSSBuffer *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        INSSBuffer *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        INSSBuffer *This);

    /*** INSSBuffer methods ***/
    HRESULT (STDMETHODCALLTYPE *GetLength)(
        INSSBuffer *This,
        DWORD *pdwLength);

    HRESULT (STDMETHODCALLTYPE *SetLength)(
        INSSBuffer *This,
        DWORD dwLength);

    HRESULT (STDMETHODCALLTYPE *GetMaxLength)(
        INSSBuffer *This,
        DWORD *pdwLength);

    HRESULT (STDMETHODCALLTYPE *GetBuffer)(
        INSSBuffer *This,
        BYTE **ppdwBuffer);

    HRESULT (STDMETHODCALLTYPE *GetBufferAndLength)(
        INSSBuffer *This,
        BYTE **ppdwBuffer,
        DWORD *pdwLength);

    END_INTERFACE
} INSSBufferVtbl;

interface INSSBuffer {
    CONST_VTBL INSSBufferVtbl* lpVtbl;
};

#ifdef COBJMACROS
#ifndef WIDL_C_INLINE_WRAPPERS
/*** IUnknown methods ***/
#define INSSBuffer_QueryInterface(This,riid,ppvObject) (This)->lpVtbl->QueryInterface(This,riid,ppvObject)
#define INSSBuffer_AddRef(This) (This)->lpVtbl->AddRef(This)
#define INSSBuffer_Release(This) (This)->lpVtbl->Release(This)
/*** INSSBuffer methods ***/
#define INSSBuffer_GetLength(This,pdwLength) (This)->lpVtbl->GetLength(This,pdwLength)
#define INSSBuffer_SetLength(This,dwLength) (This)->lpVtbl->SetLength(This,dwLength)
#define INSSBuffer_GetMaxLength(This,pdwLength) (This)->lpVtbl->GetMaxLength(This,pdwLength)
#define INSSBuffer_GetBuffer(This,ppdwBuffer) (This)->lpVtbl->GetBuffer(This,ppdwBuffer)
#define INSSBuffer_GetBufferAndLength(This,ppdwBuffer,pdwLength) (This)->lpVtbl->GetBufferAndLength(This,ppdwBuffer,pdwLength)
#else
/*** IUnknown methods ***/
static inline HRESULT INSSBuffer_QueryInterface(INSSBuffer* This,REFIID riid,void **ppvObject) {
    return This->lpVtbl->QueryInterface(This,riid,ppvObject);
}
static inline ULONG INSSBuffer_AddRef(INSSBuffer* This) {
    return This->lpVtbl->AddRef(This);
}
static inline ULONG INSSBuffer_Release(INSSBuffer* This) {
    return This->lpVtbl->Release(This);
}
/*** INSSBuffer methods ***/
static inline HRESULT INSSBuffer_GetLength(INSSBuffer* This,DWORD *pdwLength) {
    return This->lpVtbl->GetLength(This,pdwLength);
}
static inline HRESULT INSSBuffer_SetLength(INSSBuffer* This,DWORD dwLength) {
    return This->lpVtbl->SetLength(This,dwLength);
}
static inline HRESULT INSSBuffer_GetMaxLength(INSSBuffer* This,DWORD *pdwLength) {
    return This->lpVtbl->GetMaxLength(This,pdwLength);
}
static inline HRESULT INSSBuffer_GetBuffer(INSSBuffer* This,BYTE **ppdwBuffer) {
    return This->lpVtbl->GetBuffer(This,ppdwBuffer);
}
static inline HRESULT INSSBuffer_GetBufferAndLength(INSSBuffer* This,BYTE **ppdwBuffer,DWORD *pdwLength) {
    return This->lpVtbl->GetBufferAndLength(This,ppdwBuffer,pdwLength);
}
#endif
#endif

#endif


#endif  /* __INSSBuffer_INTERFACE_DEFINED__ */

/*****************************************************************************
 * INSSBuffer2 interface
 */
#ifndef __INSSBuffer2_INTERFACE_DEFINED__
#define __INSSBuffer2_INTERFACE_DEFINED__

DEFINE_GUID(IID_INSSBuffer2, 0x4f528693, 0x1035, 0x43fe, 0xb4,0x28, 0x75,0x75,0x61,0xad,0x3a,0x68);
#if defined(__cplusplus) && !defined(CINTERFACE)
MIDL_INTERFACE("4f528693-1035-43fe-b428-757561ad3a68")
INSSBuffer2 : public INSSBuffer
{
    virtual HRESULT STDMETHODCALLTYPE GetSampleProperties(
        DWORD size,
        BYTE *props) = 0;

    virtual HRESULT STDMETHODCALLTYPE SetSampleProperties(
        DWORD size,
        BYTE *props) = 0;

};
#ifdef __CRT_UUID_DECL
__CRT_UUID_DECL(INSSBuffer2, 0x4f528693, 0x1035, 0x43fe, 0xb4,0x28, 0x75,0x75,0x61,0xad,0x3a,0x68)
#endif
#else
typedef struct INSSBuffer2Vtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        INSSBuffer2 *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        INSSBuffer2 *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        INSSBuffer2 *This);

    /*** INSSBuffer methods ***/
    HRESULT (STDMETHODCALLTYPE *GetLength)(
        INSSBuffer2 *This,
        DWORD *pdwLength);

    HRESULT (STDMETHODCALLTYPE *SetLength)(
        INSSBuffer2 *This,
        DWORD dwLength);

    HRESULT (STDMETHODCALLTYPE *GetMaxLength)(
        INSSBuffer2 *This,
        DWORD *pdwLength);

    HRESULT (STDMETHODCALLTYPE *GetBuffer)(
        INSSBuffer2 *This,
        BYTE **ppdwBuffer);

    HRESULT (STDMETHODCALLTYPE *GetBufferAndLength)(
        INSSBuffer2 *This,
        BYTE **ppdwBuffer,
        DWORD *pdwLength);

    /*** INSSBuffer2 methods ***/
    HRESULT (STDMETHODCALLTYPE *GetSampleProperties)(
        INSSBuffer2 *This,
        DWORD size,
        BYTE *props);

    HRESULT (STDMETHODCALLTYPE *SetSampleProperties)(
        INSSBuffer2 *This,
        DWORD size,
        BYTE *props);

    END_INTERFACE
} INSSBuffer2Vtbl;

interface INSSBuffer2 {
    CONST_VTBL INSSBuffer2Vtbl* lpVtbl;
};

#ifdef COBJMACROS
#ifndef WIDL_C_INLINE_WRAPPERS
/*** IUnknown methods ***/
#define INSSBuffer2_QueryInterface(This,riid,ppvObject) (This)->lpVtbl->QueryInterface(This,riid,ppvObject)
#define INSSBuffer2_AddRef(This) (This)->lpVtbl->AddRef(This)
#define INSSBuffer2_Release(This) (This)->lpVtbl->Release(This)
/*** INSSBuffer methods ***/
#define INSSBuffer2_GetLength(This,pdwLength) (This)->lpVtbl->GetLength(This,pdwLength)
#define INSSBuffer2_SetLength(This,dwLength) (This)->lpVtbl->SetLength(This,dwLength)
#define INSSBuffer2_GetMaxLength(This,pdwLength) (This)->lpVtbl->GetMaxLength(This,pdwLength)
#define INSSBuffer2_GetBuffer(This,ppdwBuffer) (This)->lpVtbl->GetBuffer(This,ppdwBuffer)
#define INSSBuffer2_GetBufferAndLength(This,ppdwBuffer,pdwLength) (This)->lpVtbl->GetBufferAndLength(This,ppdwBuffer,pdwLength)
/*** INSSBuffer2 methods ***/
#define INSSBuffer2_GetSampleProperties(This,size,props) (This)->lpVtbl->GetSampleProperties(This,size,props)
#define INSSBuffer2_SetSampleProperties(This,size,props) (This)->lpVtbl->SetSampleProperties(This,size,props)
#else
/*** IUnknown methods ***/
static inline HRESULT INSSBuffer2_QueryInterface(INSSBuffer2* This,REFIID riid,void **ppvObject) {
    return This->lpVtbl->QueryInterface(This,riid,ppvObject);
}
static inline ULONG INSSBuffer2_AddRef(INSSBuffer2* This) {
    return This->lpVtbl->AddRef(This);
}
static inline ULONG INSSBuffer2_Release(INSSBuffer2* This) {
    return This->lpVtbl->Release(This);
}
/*** INSSBuffer methods ***/
static inline HRESULT INSSBuffer2_GetLength(INSSBuffer2* This,DWORD *pdwLength) {
    return This->lpVtbl->GetLength(This,pdwLength);
}
static inline HRESULT INSSBuffer2_SetLength(INSSBuffer2* This,DWORD dwLength) {
    return This->lpVtbl->SetLength(This,dwLength);
}
static inline HRESULT INSSBuffer2_GetMaxLength(INSSBuffer2* This,DWORD *pdwLength) {
    return This->lpVtbl->GetMaxLength(This,pdwLength);
}
static inline HRESULT INSSBuffer2_GetBuffer(INSSBuffer2* This,BYTE **ppdwBuffer) {
    return This->lpVtbl->GetBuffer(This,ppdwBuffer);
}
static inline HRESULT INSSBuffer2_GetBufferAndLength(INSSBuffer2* This,BYTE **ppdwBuffer,DWORD *pdwLength) {
    return This->lpVtbl->GetBufferAndLength(This,ppdwBuffer,pdwLength);
}
/*** INSSBuffer2 methods ***/
static inline HRESULT INSSBuffer2_GetSampleProperties(INSSBuffer2* This,DWORD size,BYTE *props) {
    return This->lpVtbl->GetSampleProperties(This,size,props);
}
static inline HRESULT INSSBuffer2_SetSampleProperties(INSSBuffer2* This,DWORD size,BYTE *props) {
    return This->lpVtbl->SetSampleProperties(This,size,props);
}
#endif
#endif

#endif


#endif  /* __INSSBuffer2_INTERFACE_DEFINED__ */

/*****************************************************************************
 * INSSBuffer3 interface
 */
#ifndef __INSSBuffer3_INTERFACE_DEFINED__
#define __INSSBuffer3_INTERFACE_DEFINED__

DEFINE_GUID(IID_INSSBuffer3, 0xc87ceaaf, 0x75be, 0x4bc4, 0x84,0xeb, 0xac,0x27,0x98,0x50,0x76,0x72);
#if defined(__cplusplus) && !defined(CINTERFACE)
MIDL_INTERFACE("c87ceaaf-75be-4bc4-84eb-ac2798507672")
INSSBuffer3 : public INSSBuffer2
{
    virtual HRESULT STDMETHODCALLTYPE SetProperty(
        GUID id,
        void *value,
        DWORD size) = 0;

    virtual HRESULT STDMETHODCALLTYPE GetProperty(
        GUID id,
        void *value,
        DWORD *size) = 0;

};
#ifdef __CRT_UUID_DECL
__CRT_UUID_DECL(INSSBuffer3, 0xc87ceaaf, 0x75be, 0x4bc4, 0x84,0xeb, 0xac,0x27,0x98,0x50,0x76,0x72)
#endif
#else
typedef struct INSSBuffer3Vtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        INSSBuffer3 *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        INSSBuffer3 *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        INSSBuffer3 *This);

    /*** INSSBuffer methods ***/
    HRESULT (STDMETHODCALLTYPE *GetLength)(
        INSSBuffer3 *This,
        DWORD *pdwLength);

    HRESULT (STDMETHODCALLTYPE *SetLength)(
        INSSBuffer3 *This,
        DWORD dwLength);

    HRESULT (STDMETHODCALLTYPE *GetMaxLength)(
        INSSBuffer3 *This,
        DWORD *pdwLength);

    HRESULT (STDMETHODCALLTYPE *GetBuffer)(
        INSSBuffer3 *This,
        BYTE **ppdwBuffer);

    HRESULT (STDMETHODCALLTYPE *GetBufferAndLength)(
        INSSBuffer3 *This,
        BYTE **ppdwBuffer,
        DWORD *pdwLength);

    /*** INSSBuffer2 methods ***/
    HRESULT (STDMETHODCALLTYPE *GetSampleProperties)(
        INSSBuffer3 *This,
        DWORD size,
        BYTE *props);

    HRESULT (STDMETHODCALLTYPE *SetSampleProperties)(
        INSSBuffer3 *This,
        DWORD size,
        BYTE *props);

    /*** INSSBuffer3 methods ***/
    HRESULT (STDMETHODCALLTYPE *SetProperty)(
        INSSBuffer3 *This,
        GUID id,
        void *value,
        DWORD size);

    HRESULT (STDMETHODCALLTYPE *GetProperty)(
        INSSBuffer3 *This,
        GUID id,
        void *value,
        DWORD *size);

    END_INTERFACE
} INSSBuffer3Vtbl;

interface INSSBuffer3 {
    CONST_VTBL INSSBuffer3Vtbl* lpVtbl;
};

#ifdef COBJMACROS
#ifndef WIDL_C_INLINE_WRAPPERS
/*** IUnknown methods ***/
#define INSSBuffer3_QueryInterface(This,riid,ppvObject) (This)->lpVtbl->QueryInterface(This,riid,ppvObject)
#define INSSBuffer3_AddRef(This) (This)->lpVtbl->AddRef(This)
#define INSSBuffer3_Release(This) (This)->lpVtbl->Release(This)
/*** INSSBuffer methods ***/
#define INSSBuffer3_GetLength(This,pdwLength) (This)->lpVtbl->GetLength(This,pdwLength)
#define INSSBuffer3_SetLength(This,dwLength) (This)->lpVtbl->SetLength(This,dwLength)
#define INSSBuffer3_GetMaxLength(This,pdwLength) (This)->lpVtbl->GetMaxLength(This,pdwLength)
#define INSSBuffer3_GetBuffer(This,ppdwBuffer) (This)->lpVtbl->GetBuffer(This,ppdwBuffer)
#define INSSBuffer3_GetBufferAndLength(This,ppdwBuffer,pdwLength) (This)->lpVtbl->GetBufferAndLength(This,ppdwBuffer,pdwLength)
/*** INSSBuffer2 methods ***/
#define INSSBuffer3_GetSampleProperties(This,size,props) (This)->lpVtbl->GetSampleProperties(This,size,props)
#define INSSBuffer3_SetSampleProperties(This,size,props) (This)->lpVtbl->SetSampleProperties(This,size,props)
/*** INSSBuffer3 methods ***/
#define INSSBuffer3_SetProperty(This,id,value,size) (This)->lpVtbl->SetProperty(This,id,value,size)
#define INSSBuffer3_GetProperty(This,id,value,size) (This)->lpVtbl->GetProperty(This,id,value,size)
#else
/*** IUnknown methods ***/
static inline HRESULT INSSBuffer3_QueryInterface(INSSBuffer3* This,REFIID riid,void **ppvObject) {
    return This->lpVtbl->QueryInterface(This,riid,ppvObject);
}
static inline ULONG INSSBuffer3_AddRef(INSSBuffer3* This) {
    return This->lpVtbl->AddRef(This);
}
static inline ULONG INSSBuffer3_Release(INSSBuffer3* This) {
    return This->lpVtbl->Release(This);
}
/*** INSSBuffer methods ***/
static inline HRESULT INSSBuffer3_GetLength(INSSBuffer3* This,DWORD *pdwLength) {
    return This->lpVtbl->GetLength(This,pdwLength);
}
static inline HRESULT INSSBuffer3_SetLength(INSSBuffer3* This,DWORD dwLength) {
    return This->lpVtbl->SetLength(This,dwLength);
}
static inline HRESULT INSSBuffer3_GetMaxLength(INSSBuffer3* This,DWORD *pdwLength) {
    return This->lpVtbl->GetMaxLength(This,pdwLength);
}
static inline HRESULT INSSBuffer3_GetBuffer(INSSBuffer3* This,BYTE **ppdwBuffer) {
    return This->lpVtbl->GetBuffer(This,ppdwBuffer);
}
static inline HRESULT INSSBuffer3_GetBufferAndLength(INSSBuffer3* This,BYTE **ppdwBuffer,DWORD *pdwLength) {
    return This->lpVtbl->GetBufferAndLength(This,ppdwBuffer,pdwLength);
}
/*** INSSBuffer2 methods ***/
static inline HRESULT INSSBuffer3_GetSampleProperties(INSSBuffer3* This,DWORD size,BYTE *props) {
    return This->lpVtbl->GetSampleProperties(This,size,props);
}
static inline HRESULT INSSBuffer3_SetSampleProperties(INSSBuffer3* This,DWORD size,BYTE *props) {
    return This->lpVtbl->SetSampleProperties(This,size,props);
}
/*** INSSBuffer3 methods ***/
static inline HRESULT INSSBuffer3_SetProperty(INSSBuffer3* This,GUID id,void *value,DWORD size) {
    return This->lpVtbl->SetProperty(This,id,value,size);
}
static inline HRESULT INSSBuffer3_GetProperty(INSSBuffer3* This,GUID id,void *value,DWORD *size) {
    return This->lpVtbl->GetProperty(This,id,value,size);
}
#endif
#endif

#endif


#endif  /* __INSSBuffer3_INTERFACE_DEFINED__ */

/* Begin additional prototypes for all interfaces */


/* End additional prototypes */

#ifdef __cplusplus
}
#endif

#endif /* __wmsbuffer_h__ */
