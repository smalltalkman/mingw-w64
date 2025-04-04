/*** Autogenerated by WIDL 10.4 from include/mpeg2data.idl - Do not edit ***/

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

#ifndef __mpeg2data_h__
#define __mpeg2data_h__

/* Forward declarations */

#ifndef __IMpeg2TableFilter_FWD_DEFINED__
#define __IMpeg2TableFilter_FWD_DEFINED__
typedef interface IMpeg2TableFilter IMpeg2TableFilter;
#ifdef __cplusplus
interface IMpeg2TableFilter;
#endif /* __cplusplus */
#endif

#ifndef __Mpeg2TableFilter_FWD_DEFINED__
#define __Mpeg2TableFilter_FWD_DEFINED__
#ifdef __cplusplus
typedef class Mpeg2TableFilter Mpeg2TableFilter;
#else
typedef struct Mpeg2TableFilter Mpeg2TableFilter;
#endif /* defined __cplusplus */
#endif /* defined __Mpeg2TableFilter_FWD_DEFINED__ */

#ifndef __IMpeg2Data_FWD_DEFINED__
#define __IMpeg2Data_FWD_DEFINED__
typedef interface IMpeg2Data IMpeg2Data;
#ifdef __cplusplus
interface IMpeg2Data;
#endif /* __cplusplus */
#endif

#ifndef __ISectionList_FWD_DEFINED__
#define __ISectionList_FWD_DEFINED__
typedef interface ISectionList ISectionList;
#ifdef __cplusplus
interface ISectionList;
#endif /* __cplusplus */
#endif

#ifndef __IMpeg2Stream_FWD_DEFINED__
#define __IMpeg2Stream_FWD_DEFINED__
typedef interface IMpeg2Stream IMpeg2Stream;
#ifdef __cplusplus
interface IMpeg2Stream;
#endif /* __cplusplus */
#endif

#ifndef __SectionList_FWD_DEFINED__
#define __SectionList_FWD_DEFINED__
#ifdef __cplusplus
typedef class SectionList SectionList;
#else
typedef struct SectionList SectionList;
#endif /* defined __cplusplus */
#endif /* defined __SectionList_FWD_DEFINED__ */

#ifndef __Mpeg2Stream_FWD_DEFINED__
#define __Mpeg2Stream_FWD_DEFINED__
#ifdef __cplusplus
typedef class Mpeg2Stream Mpeg2Stream;
#else
typedef struct Mpeg2Stream Mpeg2Stream;
#endif /* defined __cplusplus */
#endif /* defined __Mpeg2Stream_FWD_DEFINED__ */

#ifndef __Mpeg2Data_FWD_DEFINED__
#define __Mpeg2Data_FWD_DEFINED__
#ifdef __cplusplus
typedef class Mpeg2Data Mpeg2Data;
#else
typedef struct Mpeg2Data Mpeg2Data;
#endif /* defined __cplusplus */
#endif /* defined __Mpeg2Data_FWD_DEFINED__ */

/* Headers for imported files */

#include <oaidl.h>
#include <ocidl.h>
#include <bdaiface.h>
#include <mpeg2structs.h>

#ifdef __cplusplus
extern "C" {
#endif

#ifndef __ISectionList_FWD_DEFINED__
#define __ISectionList_FWD_DEFINED__
typedef interface ISectionList ISectionList;
#ifdef __cplusplus
interface ISectionList;
#endif /* __cplusplus */
#endif

#ifndef __IMpeg2Stream_FWD_DEFINED__
#define __IMpeg2Stream_FWD_DEFINED__
typedef interface IMpeg2Stream IMpeg2Stream;
#ifdef __cplusplus
interface IMpeg2Stream;
#endif /* __cplusplus */
#endif

#define MPEG_PAT_PID 0x0000
#define MPEG_PAT_TID 0x00
#define MPEG_CAT_PID 0x0001
#define MPEG_CAT_TID 0x01
#define MPEG_PMT_TID 0x02
#define MPEG_TSDT_PID 0x0002
#define MPEG_TSDT_TID 0x03
#define ATSC_MGT_PID 0x1ffb
#define ATSC_MGT_TID 0xc7
#define ATSC_VCT_PID 0x1ffb
#define ATSC_VCT_TERR_TID 0xc8
#define ATSC_VCT_CABL_TID 0xc9
#define ATSC_EIT_TID 0xcb
#define ATSC_ETT_TID 0xcc
#define ATSC_RRT_TID 0xca
#define ATSC_RRT_PID 0x1ffb
#define ATSC_STT_PID 0x1ffb
#define ATSC_STT_TID 0xcd
#define ATSC_PIT_TID 0xd0
#define DVB_NIT_PID 0x0010
#define DVB_NIT_ACTUAL_TID 0x40
#define DVB_NIT_OTHER_TID 0x41
#define DVB_SDT_PID 0x0011
#define DVB_SDT_ACTUAL_TID 0x42
#define DVB_SDT_OTHER_TID 0x46
#define DVB_BAT_PID 0x0011
#define DVB_BAT_TID 0x4a
#define DVB_EIT_PID 0x0012
#define DVB_EIT_ACTUAL_TID 0x4e
#define DVB_EIT_OTHER_TID 0x4f
#define DVB_RST_PID 0x0013
#define DVB_RST_TID 0x71
#define DVB_TDT_PID 0x0014
#define DVB_TDT_TID 0x70
#define DVB_ST_PID_16 0x0010
#define DVB_ST_PID_17 0x0011
#define DVB_ST_PID_18 0x0012
#define DVB_ST_PID_19 0x0013
#define DVB_ST_PID_20 0x0014
#define DVB_ST_TID 0x72
#define ISDB_ST_TID 0x72
#define DVB_TOT_PID 0x0014
#define DVB_TOT_TID 0x73
#define DVB_DIT_PID 0x001e
#define DVB_DIT_TID 0x7e
#define DVB_SIT_PID 0x001f
#define DVB_SIT_TID 0x7f
#define ISDB_EMM_TID 0x85
#define ISDB_BIT_PID 0x0024
#define ISDB_BIT_TID 0xc4
#define ISDB_NBIT_PID 0x0025
#define ISDB_NBIT_MSG_TID 0xc5
#define ISDB_NBIT_REF_TID 0xc6
#define ISDB_LDT_PID 0x0025
#define ISDB_LDT_TID 0xc7
#define ISDB_SDTT_PID 0x0023
#define ISDB_SDTT_ALT_PID 0x0028
#define ISDB_SDTT_TID 0xc3
#define ISDB_CDT_PID 0x0029
#define ISDB_CDT_TID 0xc8
#define SCTE_EAS_TID 0xd8
#define SCTE_EAS_IB_PID 0x1ffb
#define SCTE_EAS_OOB_PID 0x1ffc
/*****************************************************************************
 * IMpeg2TableFilter interface
 */
#ifndef __IMpeg2TableFilter_INTERFACE_DEFINED__
#define __IMpeg2TableFilter_INTERFACE_DEFINED__

DEFINE_GUID(IID_IMpeg2TableFilter, 0xbdcdd913, 0x9ecd, 0x4fb2, 0x81,0xae, 0xad,0xf7,0x47,0xea,0x75,0xa5);
#if defined(__cplusplus) && !defined(CINTERFACE)
MIDL_INTERFACE("bdcdd913-9ecd-4fb2-81ae-adf747ea75a5")
IMpeg2TableFilter : public IUnknown
{
    virtual HRESULT STDMETHODCALLTYPE AddPID(
        PID p) = 0;

    virtual HRESULT STDMETHODCALLTYPE AddTable(
        PID p,
        TID t) = 0;

    virtual HRESULT STDMETHODCALLTYPE AddExtension(
        PID p,
        TID t,
        TEID e) = 0;

    virtual HRESULT STDMETHODCALLTYPE RemovePID(
        PID p) = 0;

    virtual HRESULT STDMETHODCALLTYPE RemoveTable(
        PID p,
        TID t) = 0;

    virtual HRESULT STDMETHODCALLTYPE RemoveExtension(
        PID p,
        TID t,
        TEID e) = 0;

};
#ifdef __CRT_UUID_DECL
__CRT_UUID_DECL(IMpeg2TableFilter, 0xbdcdd913, 0x9ecd, 0x4fb2, 0x81,0xae, 0xad,0xf7,0x47,0xea,0x75,0xa5)
#endif
#else
typedef struct IMpeg2TableFilterVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IMpeg2TableFilter *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IMpeg2TableFilter *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IMpeg2TableFilter *This);

    /*** IMpeg2TableFilter methods ***/
    HRESULT (STDMETHODCALLTYPE *AddPID)(
        IMpeg2TableFilter *This,
        PID p);

    HRESULT (STDMETHODCALLTYPE *AddTable)(
        IMpeg2TableFilter *This,
        PID p,
        TID t);

    HRESULT (STDMETHODCALLTYPE *AddExtension)(
        IMpeg2TableFilter *This,
        PID p,
        TID t,
        TEID e);

    HRESULT (STDMETHODCALLTYPE *RemovePID)(
        IMpeg2TableFilter *This,
        PID p);

    HRESULT (STDMETHODCALLTYPE *RemoveTable)(
        IMpeg2TableFilter *This,
        PID p,
        TID t);

    HRESULT (STDMETHODCALLTYPE *RemoveExtension)(
        IMpeg2TableFilter *This,
        PID p,
        TID t,
        TEID e);

    END_INTERFACE
} IMpeg2TableFilterVtbl;

interface IMpeg2TableFilter {
    CONST_VTBL IMpeg2TableFilterVtbl* lpVtbl;
};

#ifdef COBJMACROS
#ifndef WIDL_C_INLINE_WRAPPERS
/*** IUnknown methods ***/
#define IMpeg2TableFilter_QueryInterface(This,riid,ppvObject) (This)->lpVtbl->QueryInterface(This,riid,ppvObject)
#define IMpeg2TableFilter_AddRef(This) (This)->lpVtbl->AddRef(This)
#define IMpeg2TableFilter_Release(This) (This)->lpVtbl->Release(This)
/*** IMpeg2TableFilter methods ***/
#define IMpeg2TableFilter_AddPID(This,p) (This)->lpVtbl->AddPID(This,p)
#define IMpeg2TableFilter_AddTable(This,p,t) (This)->lpVtbl->AddTable(This,p,t)
#define IMpeg2TableFilter_AddExtension(This,p,t,e) (This)->lpVtbl->AddExtension(This,p,t,e)
#define IMpeg2TableFilter_RemovePID(This,p) (This)->lpVtbl->RemovePID(This,p)
#define IMpeg2TableFilter_RemoveTable(This,p,t) (This)->lpVtbl->RemoveTable(This,p,t)
#define IMpeg2TableFilter_RemoveExtension(This,p,t,e) (This)->lpVtbl->RemoveExtension(This,p,t,e)
#else
/*** IUnknown methods ***/
static inline HRESULT IMpeg2TableFilter_QueryInterface(IMpeg2TableFilter* This,REFIID riid,void **ppvObject) {
    return This->lpVtbl->QueryInterface(This,riid,ppvObject);
}
static inline ULONG IMpeg2TableFilter_AddRef(IMpeg2TableFilter* This) {
    return This->lpVtbl->AddRef(This);
}
static inline ULONG IMpeg2TableFilter_Release(IMpeg2TableFilter* This) {
    return This->lpVtbl->Release(This);
}
/*** IMpeg2TableFilter methods ***/
static inline HRESULT IMpeg2TableFilter_AddPID(IMpeg2TableFilter* This,PID p) {
    return This->lpVtbl->AddPID(This,p);
}
static inline HRESULT IMpeg2TableFilter_AddTable(IMpeg2TableFilter* This,PID p,TID t) {
    return This->lpVtbl->AddTable(This,p,t);
}
static inline HRESULT IMpeg2TableFilter_AddExtension(IMpeg2TableFilter* This,PID p,TID t,TEID e) {
    return This->lpVtbl->AddExtension(This,p,t,e);
}
static inline HRESULT IMpeg2TableFilter_RemovePID(IMpeg2TableFilter* This,PID p) {
    return This->lpVtbl->RemovePID(This,p);
}
static inline HRESULT IMpeg2TableFilter_RemoveTable(IMpeg2TableFilter* This,PID p,TID t) {
    return This->lpVtbl->RemoveTable(This,p,t);
}
static inline HRESULT IMpeg2TableFilter_RemoveExtension(IMpeg2TableFilter* This,PID p,TID t,TEID e) {
    return This->lpVtbl->RemoveExtension(This,p,t,e);
}
#endif
#endif

#endif


#endif  /* __IMpeg2TableFilter_INTERFACE_DEFINED__ */

/*****************************************************************************
 * Mpeg2TableFilter coclass
 */

DEFINE_GUID(CLSID_Mpeg2TableFilter, 0x752845f1, 0x758f, 0x4c83, 0xa0,0x43, 0x42,0x70,0xc5,0x93,0x30,0x8e);

#ifdef __cplusplus
class DECLSPEC_UUID("752845f1-758f-4c83-a043-4270c593308e") Mpeg2TableFilter;
#ifdef __CRT_UUID_DECL
__CRT_UUID_DECL(Mpeg2TableFilter, 0x752845f1, 0x758f, 0x4c83, 0xa0,0x43, 0x42,0x70,0xc5,0x93,0x30,0x8e)
#endif
#endif

typedef struct Mpeg2TableSampleHdr {
    BYTE SectionCount;
    BYTE Reserved[3];
    LONG SectionOffsets[1];
} Mpeg2TableSampleHdr;
#ifndef __Mpeg2DataLib_LIBRARY_DEFINED__
#define __Mpeg2DataLib_LIBRARY_DEFINED__

DEFINE_GUID(LIBID_Mpeg2DataLib, 0xdbaf6c1b, 0xb6a4, 0x4898, 0xae,0x65, 0x20,0x4f,0x0d,0x95,0x09,0xa1);

/*****************************************************************************
 * IMpeg2Data interface
 */
#ifndef __IMpeg2Data_INTERFACE_DEFINED__
#define __IMpeg2Data_INTERFACE_DEFINED__

DEFINE_GUID(IID_IMpeg2Data, 0x9b396d40, 0xf380, 0x4e3c, 0xa5,0x14, 0x1a,0x82,0xbf,0x6e,0xbf,0xe6);
#if defined(__cplusplus) && !defined(CINTERFACE)
MIDL_INTERFACE("9b396d40-f380-4e3c-a514-1a82bf6ebfe6")
IMpeg2Data : public IUnknown
{
    virtual HRESULT STDMETHODCALLTYPE GetSection(
        PID pid,
        TID tid,
        PMPEG2_FILTER filter,
        DWORD timeout,
        ISectionList **section_list) = 0;

    virtual HRESULT STDMETHODCALLTYPE GetTable(
        PID pid,
        TID tid,
        PMPEG2_FILTER filter,
        DWORD timeout,
        ISectionList **section_list) = 0;

    virtual HRESULT STDMETHODCALLTYPE GetStreamOfSections(
        PID pid,
        TID tid,
        PMPEG2_FILTER filter,
        HANDLE data_ready_event,
        IMpeg2Stream **mpeg_stream) = 0;

};
#ifdef __CRT_UUID_DECL
__CRT_UUID_DECL(IMpeg2Data, 0x9b396d40, 0xf380, 0x4e3c, 0xa5,0x14, 0x1a,0x82,0xbf,0x6e,0xbf,0xe6)
#endif
#else
typedef struct IMpeg2DataVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IMpeg2Data *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IMpeg2Data *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IMpeg2Data *This);

    /*** IMpeg2Data methods ***/
    HRESULT (STDMETHODCALLTYPE *GetSection)(
        IMpeg2Data *This,
        PID pid,
        TID tid,
        PMPEG2_FILTER filter,
        DWORD timeout,
        ISectionList **section_list);

    HRESULT (STDMETHODCALLTYPE *GetTable)(
        IMpeg2Data *This,
        PID pid,
        TID tid,
        PMPEG2_FILTER filter,
        DWORD timeout,
        ISectionList **section_list);

    HRESULT (STDMETHODCALLTYPE *GetStreamOfSections)(
        IMpeg2Data *This,
        PID pid,
        TID tid,
        PMPEG2_FILTER filter,
        HANDLE data_ready_event,
        IMpeg2Stream **mpeg_stream);

    END_INTERFACE
} IMpeg2DataVtbl;

interface IMpeg2Data {
    CONST_VTBL IMpeg2DataVtbl* lpVtbl;
};

#ifdef COBJMACROS
#ifndef WIDL_C_INLINE_WRAPPERS
/*** IUnknown methods ***/
#define IMpeg2Data_QueryInterface(This,riid,ppvObject) (This)->lpVtbl->QueryInterface(This,riid,ppvObject)
#define IMpeg2Data_AddRef(This) (This)->lpVtbl->AddRef(This)
#define IMpeg2Data_Release(This) (This)->lpVtbl->Release(This)
/*** IMpeg2Data methods ***/
#define IMpeg2Data_GetSection(This,pid,tid,filter,timeout,section_list) (This)->lpVtbl->GetSection(This,pid,tid,filter,timeout,section_list)
#define IMpeg2Data_GetTable(This,pid,tid,filter,timeout,section_list) (This)->lpVtbl->GetTable(This,pid,tid,filter,timeout,section_list)
#define IMpeg2Data_GetStreamOfSections(This,pid,tid,filter,data_ready_event,mpeg_stream) (This)->lpVtbl->GetStreamOfSections(This,pid,tid,filter,data_ready_event,mpeg_stream)
#else
/*** IUnknown methods ***/
static inline HRESULT IMpeg2Data_QueryInterface(IMpeg2Data* This,REFIID riid,void **ppvObject) {
    return This->lpVtbl->QueryInterface(This,riid,ppvObject);
}
static inline ULONG IMpeg2Data_AddRef(IMpeg2Data* This) {
    return This->lpVtbl->AddRef(This);
}
static inline ULONG IMpeg2Data_Release(IMpeg2Data* This) {
    return This->lpVtbl->Release(This);
}
/*** IMpeg2Data methods ***/
static inline HRESULT IMpeg2Data_GetSection(IMpeg2Data* This,PID pid,TID tid,PMPEG2_FILTER filter,DWORD timeout,ISectionList **section_list) {
    return This->lpVtbl->GetSection(This,pid,tid,filter,timeout,section_list);
}
static inline HRESULT IMpeg2Data_GetTable(IMpeg2Data* This,PID pid,TID tid,PMPEG2_FILTER filter,DWORD timeout,ISectionList **section_list) {
    return This->lpVtbl->GetTable(This,pid,tid,filter,timeout,section_list);
}
static inline HRESULT IMpeg2Data_GetStreamOfSections(IMpeg2Data* This,PID pid,TID tid,PMPEG2_FILTER filter,HANDLE data_ready_event,IMpeg2Stream **mpeg_stream) {
    return This->lpVtbl->GetStreamOfSections(This,pid,tid,filter,data_ready_event,mpeg_stream);
}
#endif
#endif

#endif


#endif  /* __IMpeg2Data_INTERFACE_DEFINED__ */

/*****************************************************************************
 * ISectionList interface
 */
#ifndef __ISectionList_INTERFACE_DEFINED__
#define __ISectionList_INTERFACE_DEFINED__

DEFINE_GUID(IID_ISectionList, 0xafec1eb5, 0x2a64, 0x46c6, 0xbf,0x4b, 0xae,0x3c,0xcb,0x6a,0xfd,0xb0);
#if defined(__cplusplus) && !defined(CINTERFACE)
MIDL_INTERFACE("afec1eb5-2a64-46c6-bf4b-ae3ccb6afdb0")
ISectionList : public IUnknown
{
    virtual HRESULT STDMETHODCALLTYPE Initialize(
        MPEG_REQUEST_TYPE request_type,
        IMpeg2Data *mpeg2_data,
        PMPEG_CONTEXT context,
        PID pid,
        TID tid,
        PMPEG2_FILTER filter,
        DWORD timeout,
        HANDLE done_event) = 0;

    virtual HRESULT STDMETHODCALLTYPE InitializeWithRawSections(
        PMPEG_PACKET_LIST mpl_sections) = 0;

    virtual HRESULT STDMETHODCALLTYPE CancelPendingRequest(
        ) = 0;

    virtual HRESULT STDMETHODCALLTYPE GetNumberOfSections(
        WORD *count) = 0;

    virtual HRESULT STDMETHODCALLTYPE GetSectionData(
        WORD section_number,
        DWORD *raw_packet_length,
        PSECTION *section) = 0;

    virtual HRESULT STDMETHODCALLTYPE GetProgramIdentifier(
        PID *pid) = 0;

    virtual HRESULT STDMETHODCALLTYPE GetTableIdentifier(
        TID *tid) = 0;

};
#ifdef __CRT_UUID_DECL
__CRT_UUID_DECL(ISectionList, 0xafec1eb5, 0x2a64, 0x46c6, 0xbf,0x4b, 0xae,0x3c,0xcb,0x6a,0xfd,0xb0)
#endif
#else
typedef struct ISectionListVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        ISectionList *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        ISectionList *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        ISectionList *This);

    /*** ISectionList methods ***/
    HRESULT (STDMETHODCALLTYPE *Initialize)(
        ISectionList *This,
        MPEG_REQUEST_TYPE request_type,
        IMpeg2Data *mpeg2_data,
        PMPEG_CONTEXT context,
        PID pid,
        TID tid,
        PMPEG2_FILTER filter,
        DWORD timeout,
        HANDLE done_event);

    HRESULT (STDMETHODCALLTYPE *InitializeWithRawSections)(
        ISectionList *This,
        PMPEG_PACKET_LIST mpl_sections);

    HRESULT (STDMETHODCALLTYPE *CancelPendingRequest)(
        ISectionList *This);

    HRESULT (STDMETHODCALLTYPE *GetNumberOfSections)(
        ISectionList *This,
        WORD *count);

    HRESULT (STDMETHODCALLTYPE *GetSectionData)(
        ISectionList *This,
        WORD section_number,
        DWORD *raw_packet_length,
        PSECTION *section);

    HRESULT (STDMETHODCALLTYPE *GetProgramIdentifier)(
        ISectionList *This,
        PID *pid);

    HRESULT (STDMETHODCALLTYPE *GetTableIdentifier)(
        ISectionList *This,
        TID *tid);

    END_INTERFACE
} ISectionListVtbl;

interface ISectionList {
    CONST_VTBL ISectionListVtbl* lpVtbl;
};

#ifdef COBJMACROS
#ifndef WIDL_C_INLINE_WRAPPERS
/*** IUnknown methods ***/
#define ISectionList_QueryInterface(This,riid,ppvObject) (This)->lpVtbl->QueryInterface(This,riid,ppvObject)
#define ISectionList_AddRef(This) (This)->lpVtbl->AddRef(This)
#define ISectionList_Release(This) (This)->lpVtbl->Release(This)
/*** ISectionList methods ***/
#define ISectionList_Initialize(This,request_type,mpeg2_data,context,pid,tid,filter,timeout,done_event) (This)->lpVtbl->Initialize(This,request_type,mpeg2_data,context,pid,tid,filter,timeout,done_event)
#define ISectionList_InitializeWithRawSections(This,mpl_sections) (This)->lpVtbl->InitializeWithRawSections(This,mpl_sections)
#define ISectionList_CancelPendingRequest(This) (This)->lpVtbl->CancelPendingRequest(This)
#define ISectionList_GetNumberOfSections(This,count) (This)->lpVtbl->GetNumberOfSections(This,count)
#define ISectionList_GetSectionData(This,section_number,raw_packet_length,section) (This)->lpVtbl->GetSectionData(This,section_number,raw_packet_length,section)
#define ISectionList_GetProgramIdentifier(This,pid) (This)->lpVtbl->GetProgramIdentifier(This,pid)
#define ISectionList_GetTableIdentifier(This,tid) (This)->lpVtbl->GetTableIdentifier(This,tid)
#else
/*** IUnknown methods ***/
static inline HRESULT ISectionList_QueryInterface(ISectionList* This,REFIID riid,void **ppvObject) {
    return This->lpVtbl->QueryInterface(This,riid,ppvObject);
}
static inline ULONG ISectionList_AddRef(ISectionList* This) {
    return This->lpVtbl->AddRef(This);
}
static inline ULONG ISectionList_Release(ISectionList* This) {
    return This->lpVtbl->Release(This);
}
/*** ISectionList methods ***/
static inline HRESULT ISectionList_Initialize(ISectionList* This,MPEG_REQUEST_TYPE request_type,IMpeg2Data *mpeg2_data,PMPEG_CONTEXT context,PID pid,TID tid,PMPEG2_FILTER filter,DWORD timeout,HANDLE done_event) {
    return This->lpVtbl->Initialize(This,request_type,mpeg2_data,context,pid,tid,filter,timeout,done_event);
}
static inline HRESULT ISectionList_InitializeWithRawSections(ISectionList* This,PMPEG_PACKET_LIST mpl_sections) {
    return This->lpVtbl->InitializeWithRawSections(This,mpl_sections);
}
static inline HRESULT ISectionList_CancelPendingRequest(ISectionList* This) {
    return This->lpVtbl->CancelPendingRequest(This);
}
static inline HRESULT ISectionList_GetNumberOfSections(ISectionList* This,WORD *count) {
    return This->lpVtbl->GetNumberOfSections(This,count);
}
static inline HRESULT ISectionList_GetSectionData(ISectionList* This,WORD section_number,DWORD *raw_packet_length,PSECTION *section) {
    return This->lpVtbl->GetSectionData(This,section_number,raw_packet_length,section);
}
static inline HRESULT ISectionList_GetProgramIdentifier(ISectionList* This,PID *pid) {
    return This->lpVtbl->GetProgramIdentifier(This,pid);
}
static inline HRESULT ISectionList_GetTableIdentifier(ISectionList* This,TID *tid) {
    return This->lpVtbl->GetTableIdentifier(This,tid);
}
#endif
#endif

#endif


#endif  /* __ISectionList_INTERFACE_DEFINED__ */

/*****************************************************************************
 * IMpeg2Stream interface
 */
#ifndef __IMpeg2Stream_INTERFACE_DEFINED__
#define __IMpeg2Stream_INTERFACE_DEFINED__

DEFINE_GUID(IID_IMpeg2Stream, 0x400cc286, 0x32a0, 0x4ce4, 0x90,0x41, 0x39,0x57,0x11,0x25,0xa6,0x35);
#if defined(__cplusplus) && !defined(CINTERFACE)
MIDL_INTERFACE("400cc286-32a0-4ce4-9041-39571125a635")
IMpeg2Stream : public IUnknown
{
    virtual HRESULT STDMETHODCALLTYPE Initialize(
        MPEG_REQUEST_TYPE request_type,
        IMpeg2Data *mpeg2_data,
        PMPEG_CONTEXT context,
        PID pid,
        TID tid,
        PMPEG2_FILTER filter,
        HANDLE data_ready_event) = 0;

    virtual HRESULT STDMETHODCALLTYPE SupplyDataBuffer(
        PMPEG_STREAM_BUFFER stream_buffer) = 0;

};
#ifdef __CRT_UUID_DECL
__CRT_UUID_DECL(IMpeg2Stream, 0x400cc286, 0x32a0, 0x4ce4, 0x90,0x41, 0x39,0x57,0x11,0x25,0xa6,0x35)
#endif
#else
typedef struct IMpeg2StreamVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IMpeg2Stream *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IMpeg2Stream *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IMpeg2Stream *This);

    /*** IMpeg2Stream methods ***/
    HRESULT (STDMETHODCALLTYPE *Initialize)(
        IMpeg2Stream *This,
        MPEG_REQUEST_TYPE request_type,
        IMpeg2Data *mpeg2_data,
        PMPEG_CONTEXT context,
        PID pid,
        TID tid,
        PMPEG2_FILTER filter,
        HANDLE data_ready_event);

    HRESULT (STDMETHODCALLTYPE *SupplyDataBuffer)(
        IMpeg2Stream *This,
        PMPEG_STREAM_BUFFER stream_buffer);

    END_INTERFACE
} IMpeg2StreamVtbl;

interface IMpeg2Stream {
    CONST_VTBL IMpeg2StreamVtbl* lpVtbl;
};

#ifdef COBJMACROS
#ifndef WIDL_C_INLINE_WRAPPERS
/*** IUnknown methods ***/
#define IMpeg2Stream_QueryInterface(This,riid,ppvObject) (This)->lpVtbl->QueryInterface(This,riid,ppvObject)
#define IMpeg2Stream_AddRef(This) (This)->lpVtbl->AddRef(This)
#define IMpeg2Stream_Release(This) (This)->lpVtbl->Release(This)
/*** IMpeg2Stream methods ***/
#define IMpeg2Stream_Initialize(This,request_type,mpeg2_data,context,pid,tid,filter,data_ready_event) (This)->lpVtbl->Initialize(This,request_type,mpeg2_data,context,pid,tid,filter,data_ready_event)
#define IMpeg2Stream_SupplyDataBuffer(This,stream_buffer) (This)->lpVtbl->SupplyDataBuffer(This,stream_buffer)
#else
/*** IUnknown methods ***/
static inline HRESULT IMpeg2Stream_QueryInterface(IMpeg2Stream* This,REFIID riid,void **ppvObject) {
    return This->lpVtbl->QueryInterface(This,riid,ppvObject);
}
static inline ULONG IMpeg2Stream_AddRef(IMpeg2Stream* This) {
    return This->lpVtbl->AddRef(This);
}
static inline ULONG IMpeg2Stream_Release(IMpeg2Stream* This) {
    return This->lpVtbl->Release(This);
}
/*** IMpeg2Stream methods ***/
static inline HRESULT IMpeg2Stream_Initialize(IMpeg2Stream* This,MPEG_REQUEST_TYPE request_type,IMpeg2Data *mpeg2_data,PMPEG_CONTEXT context,PID pid,TID tid,PMPEG2_FILTER filter,HANDLE data_ready_event) {
    return This->lpVtbl->Initialize(This,request_type,mpeg2_data,context,pid,tid,filter,data_ready_event);
}
static inline HRESULT IMpeg2Stream_SupplyDataBuffer(IMpeg2Stream* This,PMPEG_STREAM_BUFFER stream_buffer) {
    return This->lpVtbl->SupplyDataBuffer(This,stream_buffer);
}
#endif
#endif

#endif


#endif  /* __IMpeg2Stream_INTERFACE_DEFINED__ */

/*****************************************************************************
 * SectionList coclass
 */

DEFINE_GUID(CLSID_SectionList, 0x73da5d04, 0x4347, 0x45d3, 0xa9,0xdc, 0xfa,0xe9,0xdd,0xbe,0x55,0x8d);

#ifdef __cplusplus
class DECLSPEC_UUID("73da5d04-4347-45d3-a9dc-fae9ddbe558d") SectionList;
#ifdef __CRT_UUID_DECL
__CRT_UUID_DECL(SectionList, 0x73da5d04, 0x4347, 0x45d3, 0xa9,0xdc, 0xfa,0xe9,0xdd,0xbe,0x55,0x8d)
#endif
#endif

/*****************************************************************************
 * Mpeg2Stream coclass
 */

DEFINE_GUID(CLSID_Mpeg2Stream, 0xf91d96c7, 0x8509, 0x4d0b, 0xab,0x26, 0xa0,0xdd,0x10,0x90,0x4b,0xb7);

#ifdef __cplusplus
class DECLSPEC_UUID("f91d96c7-8509-4d0b-ab26-a0dd10904bb7") Mpeg2Stream;
#ifdef __CRT_UUID_DECL
__CRT_UUID_DECL(Mpeg2Stream, 0xf91d96c7, 0x8509, 0x4d0b, 0xab,0x26, 0xa0,0xdd,0x10,0x90,0x4b,0xb7)
#endif
#endif

/*****************************************************************************
 * Mpeg2Data coclass
 */

DEFINE_GUID(CLSID_Mpeg2Data, 0xc666e115, 0xbb62, 0x4027, 0xa1,0x13, 0x82,0xd6,0x43,0xfe,0x2d,0x99);

#ifdef __cplusplus
class DECLSPEC_UUID("c666e115-bb62-4027-a113-82d643fe2d99") Mpeg2Data;
#ifdef __CRT_UUID_DECL
__CRT_UUID_DECL(Mpeg2Data, 0xc666e115, 0xbb62, 0x4027, 0xa1,0x13, 0x82,0xd6,0x43,0xfe,0x2d,0x99)
#endif
#endif

#endif /* __Mpeg2DataLib_LIBRARY_DEFINED__ */
/* Begin additional prototypes for all interfaces */


/* End additional prototypes */

#ifdef __cplusplus
}
#endif

#endif /* __mpeg2data_h__ */
