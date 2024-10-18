/*** Autogenerated by WIDL 9.20 from include/dxvahd.idl - Do not edit ***/

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

#ifndef __dxvahd_h__
#define __dxvahd_h__

/* Forward declarations */

#ifndef __IDXVAHD_Device_FWD_DEFINED__
#define __IDXVAHD_Device_FWD_DEFINED__
typedef interface IDXVAHD_Device IDXVAHD_Device;
#ifdef __cplusplus
interface IDXVAHD_Device;
#endif /* __cplusplus */
#endif

#ifndef __IDXVAHD_VideoProcessor_FWD_DEFINED__
#define __IDXVAHD_VideoProcessor_FWD_DEFINED__
typedef interface IDXVAHD_VideoProcessor IDXVAHD_VideoProcessor;
#ifdef __cplusplus
interface IDXVAHD_VideoProcessor;
#endif /* __cplusplus */
#endif

/* Headers for imported files */

#include <unknwn.h>

#ifdef __cplusplus
extern "C" {
#endif

#include <winapifamily.h>

#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)

#if (_WIN32_WINNT >= 0x0601)
#if 0
#ifndef __IDirect3DSurface9_FWD_DEFINED__
#define __IDirect3DSurface9_FWD_DEFINED__
typedef interface IDirect3DSurface9 IDirect3DSurface9;
#ifdef __cplusplus
interface IDirect3DSurface9;
#endif /* __cplusplus */
#endif

#ifndef __IDirect3DDevice9Ex_FWD_DEFINED__
#define __IDirect3DDevice9Ex_FWD_DEFINED__
typedef interface IDirect3DDevice9Ex IDirect3DDevice9Ex;
#ifdef __cplusplus
interface IDirect3DDevice9Ex;
#endif /* __cplusplus */
#endif

typedef DWORD D3DFORMAT;
typedef DWORD D3DPOOL;
typedef struct __WIDL_dxvahd_generated_name_0000000C {
    char dummy;
} D3DCOLOR;
#endif
#ifndef CALLBACK
#if defined(_ARM_)
#define CALLBACK
#else
#define CALLBACK __stdcall
#endif
#endif
#ifndef __IDXVAHD_Device_FWD_DEFINED__
#define __IDXVAHD_Device_FWD_DEFINED__
typedef interface IDXVAHD_Device IDXVAHD_Device;
#ifdef __cplusplus
interface IDXVAHD_Device;
#endif /* __cplusplus */
#endif

#ifndef __IDXVAHD_VideoProcessor_FWD_DEFINED__
#define __IDXVAHD_VideoProcessor_FWD_DEFINED__
typedef interface IDXVAHD_VideoProcessor IDXVAHD_VideoProcessor;
#ifdef __cplusplus
interface IDXVAHD_VideoProcessor;
#endif /* __cplusplus */
#endif

typedef enum _DXVAHD_ALPHA_FILL_MODE {
    DXVAHD_ALPHA_FILL_MODE_OPAQUE = 0,
    DXVAHD_ALPHA_FILL_MODE_BACKGROUND = 1,
    DXVAHD_ALPHA_FILL_MODE_DESTINATION = 2,
    DXVAHD_ALPHA_FILL_MODE_SOURCE_STREAM = 3
} DXVAHD_ALPHA_FILL_MODE;
typedef struct _DXVAHD_COLOR_YCbCrA {
    FLOAT Y;
    FLOAT Cb;
    FLOAT Cr;
    FLOAT A;
} DXVAHD_COLOR_YCbCrA;
typedef struct _DXVAHD_COLOR_RGBA {
    FLOAT R;
    FLOAT G;
    FLOAT B;
    FLOAT A;
} DXVAHD_COLOR_RGBA;
typedef union _DXVAHD_COLOR {
    DXVAHD_COLOR_RGBA RGB;
    DXVAHD_COLOR_YCbCrA YCbCr;
} DXVAHD_COLOR;
typedef struct _DXVAHD_BLT_STATE_BACKGROUND_COLOR_DATA {
    WINBOOL YCbCr;
    DXVAHD_COLOR BackgroundColor;
} DXVAHD_BLT_STATE_BACKGROUND_COLOR_DATA;
typedef enum _DXVAHD_BLT_STATE {
    DXVAHD_BLT_STATE_TARGET_RECT = 0,
    DXVAHD_BLT_STATE_BACKGROUND_COLOR = 1,
    DXVAHD_BLT_STATE_OUTPUT_COLOR_SPACE = 2,
    DXVAHD_BLT_STATE_ALPHA_FILL = 3,
    DXVAHD_BLT_STATE_CONSTRICTION = 4,
    DXVAHD_BLT_STATE_PRIVATE = 1000
} DXVAHD_BLT_STATE;
typedef enum _DXVAHD_DEVICE_CAPS {
    DXVAHD_DEVICE_CAPS_LINEAR_SPACE = 0x1,
    DXVAHD_DEVICE_CAPS_xvYCC = 0x2,
    DXVAHD_DEVICE_CAPS_RGB_RANGE_CONVERSION = 0x4,
    DXVAHD_DEVICE_CAPS_YCbCr_MATRIX_CONVERSION = 0x8
} DXVAHD_DEVICE_CAPS;
typedef enum _DXVAHD_DEVICE_TYPE {
    DXVAHD_DEVICE_TYPE_HARDWARE = 0,
    DXVAHD_DEVICE_TYPE_SOFTWARE = 1,
    DXVAHD_DEVICE_TYPE_REFERENCE = 2,
    DXVAHD_DEVICE_TYPE_OTHER = 3
} DXVAHD_DEVICE_TYPE;
typedef enum _DXVAHD_DEVICE_USAGE {
    DXVAHD_DEVICE_USAGE_PLAYBACK_NORMAL = 0,
    DXVAHD_DEVICE_USAGE_OPTIMAL_SPEED = 1,
    DXVAHD_DEVICE_USAGE_OPTIMAL_QUALITY = 2
} DXVAHD_DEVICE_USAGE;
typedef enum _DXVAHD_FEATURE_CAPS {
    DXVAHD_FEATURE_CAPS_ALPHA_FILL = 0x1,
    DXVAHD_FEATURE_CAPS_CONSTRICTION = 0x2,
    DXVAHD_FEATURE_CAPS_LUMA_KEY = 0x4,
    DXVAHD_FEATURE_CAPS_ALPHA_PALETTE = 0x8
} DXVAHD_FEATURE_CAPS;
typedef enum _DXVAHD_FILTER {
    DXVAHD_FILTER_BRIGHTNESS = 0,
    DXVAHD_FILTER_CONTRAST = 1,
    DXVAHD_FILTER_HUE = 2,
    DXVAHD_FILTER_SATURATION = 3,
    DXVAHD_FILTER_NOISE_REDUCTION = 4,
    DXVAHD_FILTER_EDGE_ENHANCEMENT = 5,
    DXVAHD_FILTER_ANAMORPHIC_SCALING = 6
} DXVAHD_FILTER;
typedef enum _DXVAHD_FILTER_CAPS {
    DXVAHD_FILTER_CAPS_BRIGHTNESS = 0x1,
    DXVAHD_FILTER_CAPS_CONTRAST = 0x2,
    DXVAHD_FILTER_CAPS_HUE = 0x4,
    DXVAHD_FILTER_CAPS_SATURATION = 0x8,
    DXVAHD_FILTER_CAPS_NOISE_REDUCTION = 0x10,
    DXVAHD_FILTER_CAPS_EDGE_ENHANCEMENT = 0x20,
    DXVAHD_FILTER_CAPS_ANAMORPHIC_SCALING = 0x40
} DXVAHD_FILTER_CAPS;
typedef enum _DXVAHD_FRAME_FORMAT {
    DXVAHD_FRAME_FORMAT_PROGRESSIVE = 0,
    DXVAHD_FRAME_FORMAT_INTERLACED_TOP_FIELD_FIRST = 1,
    DXVAHD_FRAME_FORMAT_INTERLACED_BOTTOM_FIELD_FIRST = 2
} DXVAHD_FRAME_FORMAT;
typedef enum _DXVAHD_INPUT_FORMAT_CAPS {
    DXVAHD_INPUT_FORMAT_CAPS_RGB_INTERLACED = 0x1,
    DXVAHD_INPUT_FORMAT_CAPS_RGB_PROCAMP = 0x2,
    DXVAHD_INPUT_FORMAT_CAPS_RGB_LUMA_KEY = 0x4,
    DXVAHD_INPUT_FORMAT_CAPS_PALETTE_INTERLACED = 0x8
} DXVAHD_INPUT_FORMAT_CAPS;
typedef enum _DXVAHD_ITELECINE_CAPS {
    DXVAHD_ITELECINE_CAPS_32 = 0x1,
    DXVAHD_ITELECINE_CAPS_22 = 0x2,
    DXVAHD_ITELECINE_CAPS_2224 = 0x4,
    DXVAHD_ITELECINE_CAPS_2332 = 0x8,
    DXVAHD_ITELECINE_CAPS_32322 = 0x10,
    DXVAHD_ITELECINE_CAPS_55 = 0x20,
    DXVAHD_ITELECINE_CAPS_64 = 0x40,
    DXVAHD_ITELECINE_CAPS_87 = 0x80,
    DXVAHD_ITELECINE_CAPS_222222222223 = 0x100,
    DXVAHD_ITELECINE_CAPS_OTHER = 0x80000000
} DXVAHD_ITELECINE_CAPS;
typedef enum _DXVAHD_OUTPUT_RATE {
    DXVAHD_OUTPUT_RATE_NORMAL = 0,
    DXVAHD_OUTPUT_RATE_HALF = 1,
    DXVAHD_OUTPUT_RATE_CUSTOM = 2
} DXVAHD_OUTPUT_RATE;
typedef enum _DXVAHD_PROCESSOR_CAPS {
    DXVAHD_PROCESSOR_CAPS_DEINTERLACE_BLEND = 0x1,
    DXVAHD_PROCESSOR_CAPS_DEINTERLACE_BOB = 0x2,
    DXVAHD_PROCESSOR_CAPS_DEINTERLACE_ADAPTIVE = 0x4,
    DXVAHD_PROCESSOR_CAPS_DEINTERLACE_MOTION_COMPENSATION = 0x8,
    DXVAHD_PROCESSOR_CAPS_INVERSE_TELECINE = 0x10,
    DXVAHD_PROCESSOR_CAPS_FRAME_RATE_CONVERSION = 0x20
} DXVAHD_PROCESSOR_CAPS;
typedef enum _DXVAHD_STREAM_STATE {
    DXVAHD_STREAM_STATE_D3DFORMAT = 0,
    DXVAHD_STREAM_STATE_FRAME_FORMAT = 1,
    DXVAHD_STREAM_STATE_INPUT_COLOR_SPACE = 2,
    DXVAHD_STREAM_STATE_OUTPUT_RATE = 3,
    DXVAHD_STREAM_STATE_SOURCE_RECT = 4,
    DXVAHD_STREAM_STATE_DESTINATION_RECT = 5,
    DXVAHD_STREAM_STATE_ALPHA = 6,
    DXVAHD_STREAM_STATE_PALETTE = 7,
    DXVAHD_STREAM_STATE_LUMA_KEY = 8,
    DXVAHD_STREAM_STATE_ASPECT_RATIO = 9,
    DXVAHD_STREAM_STATE_FILTER_BRIGHTNESS = 100,
    DXVAHD_STREAM_STATE_FILTER_CONTRAST = 101,
    DXVAHD_STREAM_STATE_FILTER_HUE = 102,
    DXVAHD_STREAM_STATE_FILTER_SATURATION = 103,
    DXVAHD_STREAM_STATE_FILTER_NOISE_REDUCTION = 104,
    DXVAHD_STREAM_STATE_FILTER_EDGE_ENHANCEMENT = 105,
    DXVAHD_STREAM_STATE_FILTER_ANAMORPHIC_SCALING = 106,
    DXVAHD_STREAM_STATE_PRIVATE = 1000
} DXVAHD_STREAM_STATE;
typedef enum _DXVAHD_SURFACE_TYPE {
    DXVAHD_SURFACE_TYPE_VIDEO_INPUT = 0,
    DXVAHD_SURFACE_TYPE_VIDEO_INPUT_PRIVATE = 1,
    DXVAHD_SURFACE_TYPE_VIDEO_OUTPUT = 2
} DXVAHD_SURFACE_TYPE;
typedef struct _DXVAHD_VPDEVCAPS {
    DXVAHD_DEVICE_TYPE DeviceType;
    UINT DeviceCaps;
    UINT FeatureCaps;
    UINT FilterCaps;
    UINT InputFormatCaps;
    D3DPOOL InputPool;
    UINT OutputFormatCount;
    UINT InputFormatCount;
    UINT VideoProcessorCount;
    UINT MaxInputStreams;
    UINT MaxStreamStates;
} DXVAHD_VPDEVCAPS;
typedef struct _DXVAHD_BLT_STATE_ALPHA_FILL_DATA {
    DXVAHD_ALPHA_FILL_MODE Mode;
    UINT StreamNumber;
} DXVAHD_BLT_STATE_ALPHA_FILL_DATA;
typedef struct _DXVAHD_BLT_STATE_CONSTRICTION_DATA {
    WINBOOL Enable;
    SIZE Size;
} DXVAHD_BLT_STATE_CONSTRICTION_DATA;
typedef struct _DXVAHD_BLT_STATE_OUTPUT_COLOR_SPACE_DATA {
    __C89_NAMELESS union {
        __C89_NAMELESS struct {
            UINT Usage : 1;
            UINT RGB_Range : 1;
            UINT YCbCr_Matrix : 1;
            UINT YCbCr_xvYCC : 1;
            UINT Reserved : 28;
        } __C89_NAMELESSSTRUCTNAME;
        UINT Value;
    } __C89_NAMELESSUNIONNAME;
} DXVAHD_BLT_STATE_OUTPUT_COLOR_SPACE_DATA;
typedef struct _DXVAHD_BLT_STATE_PRIVATE_DATA {
    GUID Guid;
    UINT DataSize;
    void *pData;
} DXVAHD_BLT_STATE_PRIVATE_DATA;
typedef struct _DXVAHD_BLT_STATE_TARGET_RECT_DATA {
    WINBOOL Enable;
    RECT TargetRect;
} DXVAHD_BLT_STATE_TARGET_RECT_DATA;
typedef struct _DXVAHD_RATIONAL {
    UINT Numerator;
    UINT Denominator;
} DXVAHD_RATIONAL;
typedef struct _DXVAHD_CONTENT_DESC {
    DXVAHD_FRAME_FORMAT InputFrameFormat;
    DXVAHD_RATIONAL InputFrameRate;
    UINT InputWidth;
    UINT InputHeight;
    DXVAHD_RATIONAL OutputFrameRate;
    UINT OutputWidth;
    UINT OutputHeight;
} DXVAHD_CONTENT_DESC;
typedef struct _DXVAHD_CUSTOM_RATE_DATA {
    DXVAHD_RATIONAL CustomRate;
    UINT OutputFrames;
    WINBOOL InputInterlaced;
    UINT InputFramesOrFields;
} DXVAHD_CUSTOM_RATE_DATA;
typedef struct _DXVAHD_FILTER_RANGE_DATA {
    INT Minimum;
    INT Maximum;
    INT Default;
    FLOAT Multiplier;
} DXVAHD_FILTER_RANGE_DATA;
typedef struct _DXVAHD_STREAM_DATA {
    WINBOOL Enable;
    UINT OutputIndex;
    UINT InputFrameOrField;
    UINT PastFrames;
    UINT FutureFrames;
    IDirect3DSurface9 **ppPastSurfaces;
    IDirect3DSurface9 *pInputSurface;
    IDirect3DSurface9 **ppFutureSurfaces;
} DXVAHD_STREAM_DATA;
typedef struct _DXVAHD_VPCAPS {
    GUID VPGuid;
    UINT PastFrames;
    UINT FutureFrames;
    UINT ProcessorCaps;
    UINT ITelecineCaps;
    UINT CustomRateCount;
} DXVAHD_VPCAPS;
typedef struct _DXVAHD_STREAM_STATE_ALPHA_DATA {
    WINBOOL Enable;
    FLOAT Alpha;
} DXVAHD_STREAM_STATE_ALPHA_DATA;
typedef struct _DXVAHD_STREAM_STATE_ASPECT_RATIO_DATA {
    WINBOOL Enable;
    DXVAHD_RATIONAL SourceAspectRatio;
    DXVAHD_RATIONAL DestinationAspectRatio;
} DXVAHD_STREAM_STATE_ASPECT_RATIO_DATA;
typedef struct _DXVAHD_STREAM_STATE_D3DFORMAT_DATA {
    D3DFORMAT Format;
} DXVAHD_STREAM_STATE_D3DFORMAT_DATA;
typedef struct _DXVAHD_STREAM_STATE_DESTINATION_RECT_DATA {
    WINBOOL Enable;
    RECT DestinationRect;
} DXVAHD_STREAM_STATE_DESTINATION_RECT_DATA;
typedef struct _DXVAHD_STREAM_STATE_FILTER_DATA {
    WINBOOL Enable;
    INT Level;
} DXVAHD_STREAM_STATE_FILTER_DATA;
typedef struct _DXVAHD_STREAM_STATE_FRAME_FORMAT_DATA {
    DXVAHD_FRAME_FORMAT FrameFormat;
} DXVAHD_STREAM_STATE_FRAME_FORMAT_DATA;
typedef struct _DXVAHD_STREAM_STATE_INPUT_COLOR_SPACE_DATA {
    __C89_NAMELESS union {
        __C89_NAMELESS struct {
            UINT Type : 1;
            UINT RGB_Range : 1;
            UINT YCbCr_Matrix : 1;
            UINT YCbCr_xvYCC : 1;
            UINT Reserved : 28;
        } __C89_NAMELESSSTRUCTNAME;
        UINT Value;
    } __C89_NAMELESSUNIONNAME;
} DXVAHD_STREAM_STATE_INPUT_COLOR_SPACE_DATA;
typedef struct _DXVAHD_STREAM_STATE_LUMA_KEY_DATA {
    WINBOOL Enable;
    FLOAT Lower;
    FLOAT Upper;
} DXVAHD_STREAM_STATE_LUMA_KEY_DATA;
typedef struct _DXVAHD_STREAM_STATE_OUTPUT_RATE_DATA {
    WINBOOL RepeatFrame;
    DXVAHD_OUTPUT_RATE OutputRate;
    DXVAHD_RATIONAL CustomRate;
} DXVAHD_STREAM_STATE_OUTPUT_RATE_DATA;
typedef struct _DXVAHD_STREAM_STATE_SOURCE_RECT_DATA {
    WINBOOL Enable;
    RECT SourceRect;
} DXVAHD_STREAM_STATE_SOURCE_RECT_DATA;
typedef struct _DXVAHD_STREAM_STATE_PRIVATE_IVTC_DATA {
    WINBOOL Enable;
    UINT ITelecineFlags;
    UINT Frames;
    UINT InputField;
} DXVAHD_STREAM_STATE_PRIVATE_IVTC_DATA;
typedef struct _DXVAHD_STREAM_STATE_PRIVATE_DATA {
    GUID Guid;
    UINT DataSize;
    void *pData;
} DXVAHD_STREAM_STATE_PRIVATE_DATA;
typedef struct _DXVAHD_STREAM_STATE_PALETTE_DATA {
    UINT Count;
    D3DCOLOR *pEntries;
} DXVAHD_STREAM_STATE_PALETTE_DATA;
typedef HRESULT ( CALLBACK *PDXVAHDSW_CreateDevice )(IDirect3DDevice9Ex *pD3DDevice,HANDLE *phDevice);
typedef HRESULT ( CALLBACK *PDXVAHDSW_ProposeVideoPrivateFormat )(HANDLE hDevice,D3DFORMAT *pFormat);
typedef HRESULT ( CALLBACK *PDXVAHDSW_GetVideoProcessorDeviceCaps )(HANDLE hDevice,const DXVAHD_CONTENT_DESC *pContentDesc,DXVAHD_DEVICE_USAGE Usage,DXVAHD_VPDEVCAPS *pCaps);
typedef HRESULT ( CALLBACK *PDXVAHDSW_GetVideoProcessorOutputFormats )(HANDLE hDevice,const DXVAHD_CONTENT_DESC *pContentDesc,DXVAHD_DEVICE_USAGE Usage,UINT Count,D3DFORMAT *pFormats);
typedef HRESULT ( CALLBACK *PDXVAHDSW_GetVideoProcessorInputFormats )(HANDLE hDevice,const DXVAHD_CONTENT_DESC *pContentDesc,DXVAHD_DEVICE_USAGE Usage,UINT Count,D3DFORMAT *pFormats);
typedef HRESULT ( CALLBACK *PDXVAHDSW_GetVideoProcessorCaps )(HANDLE hDevice,const DXVAHD_CONTENT_DESC *pContentDesc,DXVAHD_DEVICE_USAGE Usage,UINT Count,DXVAHD_VPCAPS *pCaps);
typedef HRESULT ( CALLBACK *PDXVAHDSW_GetVideoProcessorCustomRates )(HANDLE hDevice,const GUID *pVPGuid,UINT Count,DXVAHD_CUSTOM_RATE_DATA *pRates);
typedef HRESULT ( CALLBACK *PDXVAHDSW_SetVideoProcessBltState )(HANDLE hVideoProcessor,DXVAHD_BLT_STATE State,UINT DataSize,const void *pData);
typedef HRESULT ( CALLBACK *PDXVAHDSW_CreateVideoProcessor )(HANDLE hDevice,const GUID *pVPGuid,HANDLE *phVideoProcessor);
typedef HRESULT ( CALLBACK *PDXVAHDSW_DestroyDevice )(HANDLE hDevice);
typedef HRESULT ( CALLBACK *PDXVAHDSW_GetVideoProcessorFilterRange )(HANDLE hDevice,DXVAHD_FILTER Filter,DXVAHD_FILTER_RANGE_DATA *pRange);
typedef HRESULT ( CALLBACK *PDXVAHDSW_DestroyVideoProcessor )(HANDLE hVideoProcessor);
typedef HRESULT ( CALLBACK *PDXVAHDSW_VideoProcessBltHD )(HANDLE hVideoProcessor,IDirect3DSurface9 *pOutputSurface,UINT OutputFrame,UINT StreamCount,const DXVAHD_STREAM_DATA *pStreams);
typedef HRESULT ( CALLBACK *PDXVAHDSW_GetVideoProcessStreamStatePrivate )(HANDLE hVideoProcessor,UINT StreamNumber,DXVAHD_STREAM_STATE_PRIVATE_DATA *pData);
typedef HRESULT ( CALLBACK *PDXVAHDSW_SetVideoProcessStreamState )(HANDLE hVideoProcessor,UINT StreamNumber,DXVAHD_STREAM_STATE State,UINT DataSize,const void *pData);
typedef HRESULT ( CALLBACK *PDXVAHDSW_GetVideoProcessBltStatePrivate )(HANDLE hVideoProcessor,DXVAHD_BLT_STATE_PRIVATE_DATA *pData);
typedef HRESULT ( CALLBACK *PDXVAHDSW_Plugin )(UINT Size,void *pCallbacks);

typedef struct _DXVAHDSW_CALLBACKS {
  PDXVAHDSW_CreateDevice                      CreateDevice;
  PDXVAHDSW_ProposeVideoPrivateFormat         ProposeVideoPrivateFormat;
  PDXVAHDSW_GetVideoProcessorDeviceCaps       GetVideoProcessorDeviceCaps;
  PDXVAHDSW_GetVideoProcessorOutputFormats    GetVideoProcessorOutputFormats;
  PDXVAHDSW_GetVideoProcessorInputFormats     GetVideoProcessorInputFormats;
  PDXVAHDSW_GetVideoProcessorCaps             GetVideoProcessorCaps;
  PDXVAHDSW_GetVideoProcessorCustomRates      GetVideoProcessorCustomRates;
  PDXVAHDSW_GetVideoProcessorFilterRange      GetVideoProcessorFilterRange;
  PDXVAHDSW_DestroyDevice                     DestroyDevice;
  PDXVAHDSW_CreateVideoProcessor              CreateVideoProcessor;
  PDXVAHDSW_SetVideoProcessBltState           SetVideoProcessBltState;
  PDXVAHDSW_GetVideoProcessBltStatePrivate    GetVideoProcessBltStatePrivate;
  PDXVAHDSW_SetVideoProcessStreamState        SetVideoProcessStreamState;
  PDXVAHDSW_GetVideoProcessStreamStatePrivate GetVideoProcessStreamStatePrivate;
  PDXVAHDSW_VideoProcessBltHD                 VideoProcessBltHD;
  PDXVAHDSW_DestroyVideoProcessor             DestroyVideoProcessor;
} DXVAHDSW_CALLBACKS;

HRESULT DXVAHD_CreateDevice(IDirect3DDevice9Ex *pD3DDevice,const DXVAHD_CONTENT_DESC *pContentDesc,DXVAHD_DEVICE_USAGE Usage,PDXVAHDSW_Plugin pPlugin,IDXVAHD_Device **ppDevice);

/*****************************************************************************
 * IDXVAHD_Device interface
 */
#ifndef __IDXVAHD_Device_INTERFACE_DEFINED__
#define __IDXVAHD_Device_INTERFACE_DEFINED__

DEFINE_GUID(IID_IDXVAHD_Device, 0x95f12dfd, 0xd77e, 0x49be, 0x81,0x5f, 0x57,0xd5,0x79,0x63,0x4d,0x6d);
#if defined(__cplusplus) && !defined(CINTERFACE)
MIDL_INTERFACE("95f12dfd-d77e-49be-815f-57d579634d6d")
IDXVAHD_Device : public IUnknown
{
    virtual HRESULT STDMETHODCALLTYPE CreateVideoSurface(
        UINT Width,
        UINT Height,
        D3DFORMAT Format,
        D3DPOOL Pool,
        DWORD Usage,
        DXVAHD_SURFACE_TYPE Type,
        UINT NumSurfaces,
        IDirect3DSurface9 **ppSurfaces,
        HANDLE *pSharedHandle) = 0;

    virtual HRESULT STDMETHODCALLTYPE GetVideoProcessorDeviceCaps(
        DXVAHD_VPDEVCAPS *pCaps) = 0;

    virtual HRESULT STDMETHODCALLTYPE GetVideoProcessorOutputFormats(
        UINT Count,
        D3DFORMAT *pFormats) = 0;

    virtual HRESULT STDMETHODCALLTYPE GetVideoProcessorInputFormats(
        UINT Count,
        D3DFORMAT *pFormats) = 0;

    virtual HRESULT STDMETHODCALLTYPE GetVideoProcessorCaps(
        UINT Count,
        DXVAHD_VPCAPS *pCaps) = 0;

    virtual HRESULT STDMETHODCALLTYPE GetVideoProcessorCustomRates(
        const GUID *pVPGuid,
        UINT Count,
        DXVAHD_CUSTOM_RATE_DATA *pRates) = 0;

    virtual HRESULT STDMETHODCALLTYPE GetVideoProcessorFilterRange(
        DXVAHD_FILTER Filter,
        DXVAHD_FILTER_RANGE_DATA *pRange) = 0;

    virtual HRESULT STDMETHODCALLTYPE CreateVideoProcessor(
        const GUID *pVPGuid,
        IDXVAHD_VideoProcessor **ppVideoProcessor) = 0;

};
#ifdef __CRT_UUID_DECL
__CRT_UUID_DECL(IDXVAHD_Device, 0x95f12dfd, 0xd77e, 0x49be, 0x81,0x5f, 0x57,0xd5,0x79,0x63,0x4d,0x6d)
#endif
#else
typedef struct IDXVAHD_DeviceVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IDXVAHD_Device *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IDXVAHD_Device *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IDXVAHD_Device *This);

    /*** IDXVAHD_Device methods ***/
    HRESULT (STDMETHODCALLTYPE *CreateVideoSurface)(
        IDXVAHD_Device *This,
        UINT Width,
        UINT Height,
        D3DFORMAT Format,
        D3DPOOL Pool,
        DWORD Usage,
        DXVAHD_SURFACE_TYPE Type,
        UINT NumSurfaces,
        IDirect3DSurface9 **ppSurfaces,
        HANDLE *pSharedHandle);

    HRESULT (STDMETHODCALLTYPE *GetVideoProcessorDeviceCaps)(
        IDXVAHD_Device *This,
        DXVAHD_VPDEVCAPS *pCaps);

    HRESULT (STDMETHODCALLTYPE *GetVideoProcessorOutputFormats)(
        IDXVAHD_Device *This,
        UINT Count,
        D3DFORMAT *pFormats);

    HRESULT (STDMETHODCALLTYPE *GetVideoProcessorInputFormats)(
        IDXVAHD_Device *This,
        UINT Count,
        D3DFORMAT *pFormats);

    HRESULT (STDMETHODCALLTYPE *GetVideoProcessorCaps)(
        IDXVAHD_Device *This,
        UINT Count,
        DXVAHD_VPCAPS *pCaps);

    HRESULT (STDMETHODCALLTYPE *GetVideoProcessorCustomRates)(
        IDXVAHD_Device *This,
        const GUID *pVPGuid,
        UINT Count,
        DXVAHD_CUSTOM_RATE_DATA *pRates);

    HRESULT (STDMETHODCALLTYPE *GetVideoProcessorFilterRange)(
        IDXVAHD_Device *This,
        DXVAHD_FILTER Filter,
        DXVAHD_FILTER_RANGE_DATA *pRange);

    HRESULT (STDMETHODCALLTYPE *CreateVideoProcessor)(
        IDXVAHD_Device *This,
        const GUID *pVPGuid,
        IDXVAHD_VideoProcessor **ppVideoProcessor);

    END_INTERFACE
} IDXVAHD_DeviceVtbl;

interface IDXVAHD_Device {
    CONST_VTBL IDXVAHD_DeviceVtbl* lpVtbl;
};

#ifdef COBJMACROS
#ifndef WIDL_C_INLINE_WRAPPERS
/*** IUnknown methods ***/
#define IDXVAHD_Device_QueryInterface(This,riid,ppvObject) (This)->lpVtbl->QueryInterface(This,riid,ppvObject)
#define IDXVAHD_Device_AddRef(This) (This)->lpVtbl->AddRef(This)
#define IDXVAHD_Device_Release(This) (This)->lpVtbl->Release(This)
/*** IDXVAHD_Device methods ***/
#define IDXVAHD_Device_CreateVideoSurface(This,Width,Height,Format,Pool,Usage,Type,NumSurfaces,ppSurfaces,pSharedHandle) (This)->lpVtbl->CreateVideoSurface(This,Width,Height,Format,Pool,Usage,Type,NumSurfaces,ppSurfaces,pSharedHandle)
#define IDXVAHD_Device_GetVideoProcessorDeviceCaps(This,pCaps) (This)->lpVtbl->GetVideoProcessorDeviceCaps(This,pCaps)
#define IDXVAHD_Device_GetVideoProcessorOutputFormats(This,Count,pFormats) (This)->lpVtbl->GetVideoProcessorOutputFormats(This,Count,pFormats)
#define IDXVAHD_Device_GetVideoProcessorInputFormats(This,Count,pFormats) (This)->lpVtbl->GetVideoProcessorInputFormats(This,Count,pFormats)
#define IDXVAHD_Device_GetVideoProcessorCaps(This,Count,pCaps) (This)->lpVtbl->GetVideoProcessorCaps(This,Count,pCaps)
#define IDXVAHD_Device_GetVideoProcessorCustomRates(This,pVPGuid,Count,pRates) (This)->lpVtbl->GetVideoProcessorCustomRates(This,pVPGuid,Count,pRates)
#define IDXVAHD_Device_GetVideoProcessorFilterRange(This,Filter,pRange) (This)->lpVtbl->GetVideoProcessorFilterRange(This,Filter,pRange)
#define IDXVAHD_Device_CreateVideoProcessor(This,pVPGuid,ppVideoProcessor) (This)->lpVtbl->CreateVideoProcessor(This,pVPGuid,ppVideoProcessor)
#else
/*** IUnknown methods ***/
static inline HRESULT IDXVAHD_Device_QueryInterface(IDXVAHD_Device* This,REFIID riid,void **ppvObject) {
    return This->lpVtbl->QueryInterface(This,riid,ppvObject);
}
static inline ULONG IDXVAHD_Device_AddRef(IDXVAHD_Device* This) {
    return This->lpVtbl->AddRef(This);
}
static inline ULONG IDXVAHD_Device_Release(IDXVAHD_Device* This) {
    return This->lpVtbl->Release(This);
}
/*** IDXVAHD_Device methods ***/
static inline HRESULT IDXVAHD_Device_CreateVideoSurface(IDXVAHD_Device* This,UINT Width,UINT Height,D3DFORMAT Format,D3DPOOL Pool,DWORD Usage,DXVAHD_SURFACE_TYPE Type,UINT NumSurfaces,IDirect3DSurface9 **ppSurfaces,HANDLE *pSharedHandle) {
    return This->lpVtbl->CreateVideoSurface(This,Width,Height,Format,Pool,Usage,Type,NumSurfaces,ppSurfaces,pSharedHandle);
}
static inline HRESULT IDXVAHD_Device_GetVideoProcessorDeviceCaps(IDXVAHD_Device* This,DXVAHD_VPDEVCAPS *pCaps) {
    return This->lpVtbl->GetVideoProcessorDeviceCaps(This,pCaps);
}
static inline HRESULT IDXVAHD_Device_GetVideoProcessorOutputFormats(IDXVAHD_Device* This,UINT Count,D3DFORMAT *pFormats) {
    return This->lpVtbl->GetVideoProcessorOutputFormats(This,Count,pFormats);
}
static inline HRESULT IDXVAHD_Device_GetVideoProcessorInputFormats(IDXVAHD_Device* This,UINT Count,D3DFORMAT *pFormats) {
    return This->lpVtbl->GetVideoProcessorInputFormats(This,Count,pFormats);
}
static inline HRESULT IDXVAHD_Device_GetVideoProcessorCaps(IDXVAHD_Device* This,UINT Count,DXVAHD_VPCAPS *pCaps) {
    return This->lpVtbl->GetVideoProcessorCaps(This,Count,pCaps);
}
static inline HRESULT IDXVAHD_Device_GetVideoProcessorCustomRates(IDXVAHD_Device* This,const GUID *pVPGuid,UINT Count,DXVAHD_CUSTOM_RATE_DATA *pRates) {
    return This->lpVtbl->GetVideoProcessorCustomRates(This,pVPGuid,Count,pRates);
}
static inline HRESULT IDXVAHD_Device_GetVideoProcessorFilterRange(IDXVAHD_Device* This,DXVAHD_FILTER Filter,DXVAHD_FILTER_RANGE_DATA *pRange) {
    return This->lpVtbl->GetVideoProcessorFilterRange(This,Filter,pRange);
}
static inline HRESULT IDXVAHD_Device_CreateVideoProcessor(IDXVAHD_Device* This,const GUID *pVPGuid,IDXVAHD_VideoProcessor **ppVideoProcessor) {
    return This->lpVtbl->CreateVideoProcessor(This,pVPGuid,ppVideoProcessor);
}
#endif
#endif

#endif


#endif  /* __IDXVAHD_Device_INTERFACE_DEFINED__ */

/*****************************************************************************
 * IDXVAHD_VideoProcessor interface
 */
#ifndef __IDXVAHD_VideoProcessor_INTERFACE_DEFINED__
#define __IDXVAHD_VideoProcessor_INTERFACE_DEFINED__

DEFINE_GUID(IID_IDXVAHD_VideoProcessor, 0x95f4edf4, 0x6e03, 0x4cd7, 0xbe,0x1b, 0x30,0x75,0xd6,0x65,0xaa,0x52);
#if defined(__cplusplus) && !defined(CINTERFACE)
MIDL_INTERFACE("95f4edf4-6e03-4cd7-be1b-3075d665aa52")
IDXVAHD_VideoProcessor : public IUnknown
{
    virtual HRESULT STDMETHODCALLTYPE SetVideoProcessBltState(
        DXVAHD_BLT_STATE State,
        UINT DataSize,
        const void *pData) = 0;

    virtual HRESULT STDMETHODCALLTYPE GetVideoProcessBltState(
        DXVAHD_BLT_STATE State,
        UINT DataSize,
        void *pData) = 0;

    virtual HRESULT STDMETHODCALLTYPE SetVideoProcessStreamState(
        UINT StreamNumber,
        DXVAHD_STREAM_STATE State,
        UINT DataSize,
        const void *pData) = 0;

    virtual HRESULT STDMETHODCALLTYPE GetVideoProcessStreamState(
        UINT StreamNumber,
        DXVAHD_STREAM_STATE State,
        UINT DataSize,
        void *pData) = 0;

    virtual HRESULT STDMETHODCALLTYPE VideoProcessBltHD(
        IDirect3DSurface9 *pOutputSurface,
        UINT OutputFrame,
        UINT StreamCount,
        const DXVAHD_STREAM_DATA *pStreams) = 0;

};
#ifdef __CRT_UUID_DECL
__CRT_UUID_DECL(IDXVAHD_VideoProcessor, 0x95f4edf4, 0x6e03, 0x4cd7, 0xbe,0x1b, 0x30,0x75,0xd6,0x65,0xaa,0x52)
#endif
#else
typedef struct IDXVAHD_VideoProcessorVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IDXVAHD_VideoProcessor *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IDXVAHD_VideoProcessor *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IDXVAHD_VideoProcessor *This);

    /*** IDXVAHD_VideoProcessor methods ***/
    HRESULT (STDMETHODCALLTYPE *SetVideoProcessBltState)(
        IDXVAHD_VideoProcessor *This,
        DXVAHD_BLT_STATE State,
        UINT DataSize,
        const void *pData);

    HRESULT (STDMETHODCALLTYPE *GetVideoProcessBltState)(
        IDXVAHD_VideoProcessor *This,
        DXVAHD_BLT_STATE State,
        UINT DataSize,
        void *pData);

    HRESULT (STDMETHODCALLTYPE *SetVideoProcessStreamState)(
        IDXVAHD_VideoProcessor *This,
        UINT StreamNumber,
        DXVAHD_STREAM_STATE State,
        UINT DataSize,
        const void *pData);

    HRESULT (STDMETHODCALLTYPE *GetVideoProcessStreamState)(
        IDXVAHD_VideoProcessor *This,
        UINT StreamNumber,
        DXVAHD_STREAM_STATE State,
        UINT DataSize,
        void *pData);

    HRESULT (STDMETHODCALLTYPE *VideoProcessBltHD)(
        IDXVAHD_VideoProcessor *This,
        IDirect3DSurface9 *pOutputSurface,
        UINT OutputFrame,
        UINT StreamCount,
        const DXVAHD_STREAM_DATA *pStreams);

    END_INTERFACE
} IDXVAHD_VideoProcessorVtbl;

interface IDXVAHD_VideoProcessor {
    CONST_VTBL IDXVAHD_VideoProcessorVtbl* lpVtbl;
};

#ifdef COBJMACROS
#ifndef WIDL_C_INLINE_WRAPPERS
/*** IUnknown methods ***/
#define IDXVAHD_VideoProcessor_QueryInterface(This,riid,ppvObject) (This)->lpVtbl->QueryInterface(This,riid,ppvObject)
#define IDXVAHD_VideoProcessor_AddRef(This) (This)->lpVtbl->AddRef(This)
#define IDXVAHD_VideoProcessor_Release(This) (This)->lpVtbl->Release(This)
/*** IDXVAHD_VideoProcessor methods ***/
#define IDXVAHD_VideoProcessor_SetVideoProcessBltState(This,State,DataSize,pData) (This)->lpVtbl->SetVideoProcessBltState(This,State,DataSize,pData)
#define IDXVAHD_VideoProcessor_GetVideoProcessBltState(This,State,DataSize,pData) (This)->lpVtbl->GetVideoProcessBltState(This,State,DataSize,pData)
#define IDXVAHD_VideoProcessor_SetVideoProcessStreamState(This,StreamNumber,State,DataSize,pData) (This)->lpVtbl->SetVideoProcessStreamState(This,StreamNumber,State,DataSize,pData)
#define IDXVAHD_VideoProcessor_GetVideoProcessStreamState(This,StreamNumber,State,DataSize,pData) (This)->lpVtbl->GetVideoProcessStreamState(This,StreamNumber,State,DataSize,pData)
#define IDXVAHD_VideoProcessor_VideoProcessBltHD(This,pOutputSurface,OutputFrame,StreamCount,pStreams) (This)->lpVtbl->VideoProcessBltHD(This,pOutputSurface,OutputFrame,StreamCount,pStreams)
#else
/*** IUnknown methods ***/
static inline HRESULT IDXVAHD_VideoProcessor_QueryInterface(IDXVAHD_VideoProcessor* This,REFIID riid,void **ppvObject) {
    return This->lpVtbl->QueryInterface(This,riid,ppvObject);
}
static inline ULONG IDXVAHD_VideoProcessor_AddRef(IDXVAHD_VideoProcessor* This) {
    return This->lpVtbl->AddRef(This);
}
static inline ULONG IDXVAHD_VideoProcessor_Release(IDXVAHD_VideoProcessor* This) {
    return This->lpVtbl->Release(This);
}
/*** IDXVAHD_VideoProcessor methods ***/
static inline HRESULT IDXVAHD_VideoProcessor_SetVideoProcessBltState(IDXVAHD_VideoProcessor* This,DXVAHD_BLT_STATE State,UINT DataSize,const void *pData) {
    return This->lpVtbl->SetVideoProcessBltState(This,State,DataSize,pData);
}
static inline HRESULT IDXVAHD_VideoProcessor_GetVideoProcessBltState(IDXVAHD_VideoProcessor* This,DXVAHD_BLT_STATE State,UINT DataSize,void *pData) {
    return This->lpVtbl->GetVideoProcessBltState(This,State,DataSize,pData);
}
static inline HRESULT IDXVAHD_VideoProcessor_SetVideoProcessStreamState(IDXVAHD_VideoProcessor* This,UINT StreamNumber,DXVAHD_STREAM_STATE State,UINT DataSize,const void *pData) {
    return This->lpVtbl->SetVideoProcessStreamState(This,StreamNumber,State,DataSize,pData);
}
static inline HRESULT IDXVAHD_VideoProcessor_GetVideoProcessStreamState(IDXVAHD_VideoProcessor* This,UINT StreamNumber,DXVAHD_STREAM_STATE State,UINT DataSize,void *pData) {
    return This->lpVtbl->GetVideoProcessStreamState(This,StreamNumber,State,DataSize,pData);
}
static inline HRESULT IDXVAHD_VideoProcessor_VideoProcessBltHD(IDXVAHD_VideoProcessor* This,IDirect3DSurface9 *pOutputSurface,UINT OutputFrame,UINT StreamCount,const DXVAHD_STREAM_DATA *pStreams) {
    return This->lpVtbl->VideoProcessBltHD(This,pOutputSurface,OutputFrame,StreamCount,pStreams);
}
#endif
#endif

#endif


#endif  /* __IDXVAHD_VideoProcessor_INTERFACE_DEFINED__ */

#endif /*(_WIN32_WINNT >= 0x0601)*/
#endif /*WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)*/
/* Begin additional prototypes for all interfaces */


/* End additional prototypes */

#ifdef __cplusplus
}
#endif

#endif /* __dxvahd_h__ */
