/*** Autogenerated by WIDL 10.0-rc1 from include/windows.graphics.directx.idl - Do not edit ***/

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

#ifndef __windows_graphics_directx_h__
#define __windows_graphics_directx_h__

/* Forward declarations */

#ifndef ____FIIterable_1_DirectXPixelFormat_FWD_DEFINED__
#define ____FIIterable_1_DirectXPixelFormat_FWD_DEFINED__
typedef interface __FIIterable_1_DirectXPixelFormat __FIIterable_1_DirectXPixelFormat;
#ifdef __cplusplus
#define __FIIterable_1_DirectXPixelFormat ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::Graphics::DirectX::DirectXPixelFormat >
#endif /* __cplusplus */
#endif

#ifndef ____FIIterator_1_DirectXPixelFormat_FWD_DEFINED__
#define ____FIIterator_1_DirectXPixelFormat_FWD_DEFINED__
typedef interface __FIIterator_1_DirectXPixelFormat __FIIterator_1_DirectXPixelFormat;
#ifdef __cplusplus
#define __FIIterator_1_DirectXPixelFormat ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::Graphics::DirectX::DirectXPixelFormat >
#endif /* __cplusplus */
#endif

#ifndef ____FIVectorView_1_DirectXPixelFormat_FWD_DEFINED__
#define ____FIVectorView_1_DirectXPixelFormat_FWD_DEFINED__
typedef interface __FIVectorView_1_DirectXPixelFormat __FIVectorView_1_DirectXPixelFormat;
#ifdef __cplusplus
#define __FIVectorView_1_DirectXPixelFormat ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::Graphics::DirectX::DirectXPixelFormat >
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
typedef enum __x_ABI_CWindows_CGraphics_CDirectX_CDirectXAlphaMode __x_ABI_CWindows_CGraphics_CDirectX_CDirectXAlphaMode;
#endif /* __cplusplus */

#ifndef __cplusplus
typedef enum __x_ABI_CWindows_CGraphics_CDirectX_CDirectXPixelFormat __x_ABI_CWindows_CGraphics_CDirectX_CDirectXPixelFormat;
#endif /* __cplusplus */

#ifndef ____FIIterable_1_DirectXPixelFormat_FWD_DEFINED__
#define ____FIIterable_1_DirectXPixelFormat_FWD_DEFINED__
typedef interface __FIIterable_1_DirectXPixelFormat __FIIterable_1_DirectXPixelFormat;
#ifdef __cplusplus
#define __FIIterable_1_DirectXPixelFormat ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::Graphics::DirectX::DirectXPixelFormat >
#endif /* __cplusplus */
#endif

#ifndef ____FIIterator_1_DirectXPixelFormat_FWD_DEFINED__
#define ____FIIterator_1_DirectXPixelFormat_FWD_DEFINED__
typedef interface __FIIterator_1_DirectXPixelFormat __FIIterator_1_DirectXPixelFormat;
#ifdef __cplusplus
#define __FIIterator_1_DirectXPixelFormat ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::Graphics::DirectX::DirectXPixelFormat >
#endif /* __cplusplus */
#endif

#ifndef ____FIVectorView_1_DirectXPixelFormat_FWD_DEFINED__
#define ____FIVectorView_1_DirectXPixelFormat_FWD_DEFINED__
typedef interface __FIVectorView_1_DirectXPixelFormat __FIVectorView_1_DirectXPixelFormat;
#ifdef __cplusplus
#define __FIVectorView_1_DirectXPixelFormat ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::Graphics::DirectX::DirectXPixelFormat >
#endif /* __cplusplus */
#endif

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000
#ifdef __cplusplus
} /* extern "C" */
namespace ABI {
    namespace Windows {
        namespace Graphics {
            namespace DirectX {
                enum DirectXAlphaMode {
                    DirectXAlphaMode_Unspecified = 0,
                    DirectXAlphaMode_Premultiplied = 1,
                    DirectXAlphaMode_Straight = 2,
                    DirectXAlphaMode_Ignore = 3
                };
            }
        }
    }
}
extern "C" {
#else
enum __x_ABI_CWindows_CGraphics_CDirectX_CDirectXAlphaMode {
    DirectXAlphaMode_Unspecified = 0,
    DirectXAlphaMode_Premultiplied = 1,
    DirectXAlphaMode_Straight = 2,
    DirectXAlphaMode_Ignore = 3
};
#ifdef WIDL_using_Windows_Graphics_DirectX
#define DirectXAlphaMode __x_ABI_CWindows_CGraphics_CDirectX_CDirectXAlphaMode
#endif /* WIDL_using_Windows_Graphics_DirectX */
#endif

#endif /* WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#ifdef __cplusplus
} /* extern "C" */
namespace ABI {
    namespace Windows {
        namespace Graphics {
            namespace DirectX {
                enum DirectXPixelFormat {
                    DirectXPixelFormat_Unknown = 0,
                    DirectXPixelFormat_R32G32B32A32Typeless = 1,
                    DirectXPixelFormat_R32G32B32A32Float = 2,
                    DirectXPixelFormat_R32G32B32A32UInt = 3,
                    DirectXPixelFormat_R32G32B32A32Int = 4,
                    DirectXPixelFormat_R32G32B32Typeless = 5,
                    DirectXPixelFormat_R32G32B32Float = 6,
                    DirectXPixelFormat_R32G32B32UInt = 7,
                    DirectXPixelFormat_R32G32B32Int = 8,
                    DirectXPixelFormat_R16G16B16A16Typeless = 9,
                    DirectXPixelFormat_R16G16B16A16Float = 10,
                    DirectXPixelFormat_R16G16B16A16UIntNormalized = 11,
                    DirectXPixelFormat_R16G16B16A16UInt = 12,
                    DirectXPixelFormat_R16G16B16A16IntNormalized = 13,
                    DirectXPixelFormat_R16G16B16A16Int = 14,
                    DirectXPixelFormat_R32G32Typeless = 15,
                    DirectXPixelFormat_R32G32Float = 16,
                    DirectXPixelFormat_R32G32UInt = 17,
                    DirectXPixelFormat_R32G32Int = 18,
                    DirectXPixelFormat_R32G8X24Typeless = 19,
                    DirectXPixelFormat_D32FloatS8X24UInt = 20,
                    DirectXPixelFormat_R32FloatX8X24Typeless = 21,
                    DirectXPixelFormat_X32TypelessG8X24UInt = 22,
                    DirectXPixelFormat_R10G10B10A2Typeless = 23,
                    DirectXPixelFormat_R10G10B10A2UIntNormalized = 24,
                    DirectXPixelFormat_R10G10B10A2UInt = 25,
                    DirectXPixelFormat_R11G11B10Float = 26,
                    DirectXPixelFormat_R8G8B8A8Typeless = 27,
                    DirectXPixelFormat_R8G8B8A8UIntNormalized = 28,
                    DirectXPixelFormat_R8G8B8A8UIntNormalizedSrgb = 29,
                    DirectXPixelFormat_R8G8B8A8UInt = 30,
                    DirectXPixelFormat_R8G8B8A8IntNormalized = 31,
                    DirectXPixelFormat_R8G8B8A8Int = 32,
                    DirectXPixelFormat_R16G16Typeless = 33,
                    DirectXPixelFormat_R16G16Float = 34,
                    DirectXPixelFormat_R16G16UIntNormalized = 35,
                    DirectXPixelFormat_R16G16UInt = 36,
                    DirectXPixelFormat_R16G16IntNormalized = 37,
                    DirectXPixelFormat_R16G16Int = 38,
                    DirectXPixelFormat_R32Typeless = 39,
                    DirectXPixelFormat_D32Float = 40,
                    DirectXPixelFormat_R32Float = 41,
                    DirectXPixelFormat_R32UInt = 42,
                    DirectXPixelFormat_R32Int = 43,
                    DirectXPixelFormat_R24G8Typeless = 44,
                    DirectXPixelFormat_D24UIntNormalizedS8UInt = 45,
                    DirectXPixelFormat_R24UIntNormalizedX8Typeless = 46,
                    DirectXPixelFormat_X24TypelessG8UInt = 47,
                    DirectXPixelFormat_R8G8Typeless = 48,
                    DirectXPixelFormat_R8G8UIntNormalized = 49,
                    DirectXPixelFormat_R8G8UInt = 50,
                    DirectXPixelFormat_R8G8IntNormalized = 51,
                    DirectXPixelFormat_R8G8Int = 52,
                    DirectXPixelFormat_R16Typeless = 53,
                    DirectXPixelFormat_R16Float = 54,
                    DirectXPixelFormat_D16UIntNormalized = 55,
                    DirectXPixelFormat_R16UIntNormalized = 56,
                    DirectXPixelFormat_R16UInt = 57,
                    DirectXPixelFormat_R16IntNormalized = 58,
                    DirectXPixelFormat_R16Int = 59,
                    DirectXPixelFormat_R8Typeless = 60,
                    DirectXPixelFormat_R8UIntNormalized = 61,
                    DirectXPixelFormat_R8UInt = 62,
                    DirectXPixelFormat_R8IntNormalized = 63,
                    DirectXPixelFormat_R8Int = 64,
                    DirectXPixelFormat_A8UIntNormalized = 65,
                    DirectXPixelFormat_R1UIntNormalized = 66,
                    DirectXPixelFormat_R9G9B9E5SharedExponent = 67,
                    DirectXPixelFormat_R8G8B8G8UIntNormalized = 68,
                    DirectXPixelFormat_G8R8G8B8UIntNormalized = 69,
                    DirectXPixelFormat_BC1Typeless = 70,
                    DirectXPixelFormat_BC1UIntNormalized = 71,
                    DirectXPixelFormat_BC1UIntNormalizedSrgb = 72,
                    DirectXPixelFormat_BC2Typeless = 73,
                    DirectXPixelFormat_BC2UIntNormalized = 74,
                    DirectXPixelFormat_BC2UIntNormalizedSrgb = 75,
                    DirectXPixelFormat_BC3Typeless = 76,
                    DirectXPixelFormat_BC3UIntNormalized = 77,
                    DirectXPixelFormat_BC3UIntNormalizedSrgb = 78,
                    DirectXPixelFormat_BC4Typeless = 79,
                    DirectXPixelFormat_BC4UIntNormalized = 80,
                    DirectXPixelFormat_BC4IntNormalized = 81,
                    DirectXPixelFormat_BC5Typeless = 82,
                    DirectXPixelFormat_BC5UIntNormalized = 83,
                    DirectXPixelFormat_BC5IntNormalized = 84,
                    DirectXPixelFormat_B5G6R5UIntNormalized = 85,
                    DirectXPixelFormat_B5G5R5A1UIntNormalized = 86,
                    DirectXPixelFormat_B8G8R8A8UIntNormalized = 87,
                    DirectXPixelFormat_B8G8R8X8UIntNormalized = 88,
                    DirectXPixelFormat_R10G10B10XRBiasA2UIntNormalized = 89,
                    DirectXPixelFormat_B8G8R8A8Typeless = 90,
                    DirectXPixelFormat_B8G8R8A8UIntNormalizedSrgb = 91,
                    DirectXPixelFormat_B8G8R8X8Typeless = 92,
                    DirectXPixelFormat_B8G8R8X8UIntNormalizedSrgb = 93,
                    DirectXPixelFormat_BC6HTypeless = 94,
                    DirectXPixelFormat_BC6H16UnsignedFloat = 95,
                    DirectXPixelFormat_BC6H16Float = 96,
                    DirectXPixelFormat_BC7Typeless = 97,
                    DirectXPixelFormat_BC7UIntNormalized = 98,
                    DirectXPixelFormat_BC7UIntNormalizedSrgb = 99,
                    DirectXPixelFormat_Ayuv = 100,
                    DirectXPixelFormat_Y410 = 101,
                    DirectXPixelFormat_Y416 = 102,
                    DirectXPixelFormat_NV12 = 103,
                    DirectXPixelFormat_P010 = 104,
                    DirectXPixelFormat_P016 = 105,
                    DirectXPixelFormat_Opaque420 = 106,
                    DirectXPixelFormat_Yuy2 = 107,
                    DirectXPixelFormat_Y210 = 108,
                    DirectXPixelFormat_Y216 = 109,
                    DirectXPixelFormat_NV11 = 110,
                    DirectXPixelFormat_AI44 = 111,
                    DirectXPixelFormat_IA44 = 112,
                    DirectXPixelFormat_P8 = 113,
                    DirectXPixelFormat_A8P8 = 114,
                    DirectXPixelFormat_B4G4R4A4UIntNormalized = 115,
                    DirectXPixelFormat_P208 = 130,
                    DirectXPixelFormat_V208 = 131,
                    DirectXPixelFormat_V408 = 132,
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0xa0000
                    DirectXPixelFormat_SamplerFeedbackMinMipOpaque = 189,
#endif /* WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0xa0000 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0xa0000
                    DirectXPixelFormat_SamplerFeedbackMipRegionUsedOpaque = 190
#endif /* WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0xa0000 */
                };
            }
        }
    }
}
extern "C" {
#else
enum __x_ABI_CWindows_CGraphics_CDirectX_CDirectXPixelFormat {
    DirectXPixelFormat_Unknown = 0,
    DirectXPixelFormat_R32G32B32A32Typeless = 1,
    DirectXPixelFormat_R32G32B32A32Float = 2,
    DirectXPixelFormat_R32G32B32A32UInt = 3,
    DirectXPixelFormat_R32G32B32A32Int = 4,
    DirectXPixelFormat_R32G32B32Typeless = 5,
    DirectXPixelFormat_R32G32B32Float = 6,
    DirectXPixelFormat_R32G32B32UInt = 7,
    DirectXPixelFormat_R32G32B32Int = 8,
    DirectXPixelFormat_R16G16B16A16Typeless = 9,
    DirectXPixelFormat_R16G16B16A16Float = 10,
    DirectXPixelFormat_R16G16B16A16UIntNormalized = 11,
    DirectXPixelFormat_R16G16B16A16UInt = 12,
    DirectXPixelFormat_R16G16B16A16IntNormalized = 13,
    DirectXPixelFormat_R16G16B16A16Int = 14,
    DirectXPixelFormat_R32G32Typeless = 15,
    DirectXPixelFormat_R32G32Float = 16,
    DirectXPixelFormat_R32G32UInt = 17,
    DirectXPixelFormat_R32G32Int = 18,
    DirectXPixelFormat_R32G8X24Typeless = 19,
    DirectXPixelFormat_D32FloatS8X24UInt = 20,
    DirectXPixelFormat_R32FloatX8X24Typeless = 21,
    DirectXPixelFormat_X32TypelessG8X24UInt = 22,
    DirectXPixelFormat_R10G10B10A2Typeless = 23,
    DirectXPixelFormat_R10G10B10A2UIntNormalized = 24,
    DirectXPixelFormat_R10G10B10A2UInt = 25,
    DirectXPixelFormat_R11G11B10Float = 26,
    DirectXPixelFormat_R8G8B8A8Typeless = 27,
    DirectXPixelFormat_R8G8B8A8UIntNormalized = 28,
    DirectXPixelFormat_R8G8B8A8UIntNormalizedSrgb = 29,
    DirectXPixelFormat_R8G8B8A8UInt = 30,
    DirectXPixelFormat_R8G8B8A8IntNormalized = 31,
    DirectXPixelFormat_R8G8B8A8Int = 32,
    DirectXPixelFormat_R16G16Typeless = 33,
    DirectXPixelFormat_R16G16Float = 34,
    DirectXPixelFormat_R16G16UIntNormalized = 35,
    DirectXPixelFormat_R16G16UInt = 36,
    DirectXPixelFormat_R16G16IntNormalized = 37,
    DirectXPixelFormat_R16G16Int = 38,
    DirectXPixelFormat_R32Typeless = 39,
    DirectXPixelFormat_D32Float = 40,
    DirectXPixelFormat_R32Float = 41,
    DirectXPixelFormat_R32UInt = 42,
    DirectXPixelFormat_R32Int = 43,
    DirectXPixelFormat_R24G8Typeless = 44,
    DirectXPixelFormat_D24UIntNormalizedS8UInt = 45,
    DirectXPixelFormat_R24UIntNormalizedX8Typeless = 46,
    DirectXPixelFormat_X24TypelessG8UInt = 47,
    DirectXPixelFormat_R8G8Typeless = 48,
    DirectXPixelFormat_R8G8UIntNormalized = 49,
    DirectXPixelFormat_R8G8UInt = 50,
    DirectXPixelFormat_R8G8IntNormalized = 51,
    DirectXPixelFormat_R8G8Int = 52,
    DirectXPixelFormat_R16Typeless = 53,
    DirectXPixelFormat_R16Float = 54,
    DirectXPixelFormat_D16UIntNormalized = 55,
    DirectXPixelFormat_R16UIntNormalized = 56,
    DirectXPixelFormat_R16UInt = 57,
    DirectXPixelFormat_R16IntNormalized = 58,
    DirectXPixelFormat_R16Int = 59,
    DirectXPixelFormat_R8Typeless = 60,
    DirectXPixelFormat_R8UIntNormalized = 61,
    DirectXPixelFormat_R8UInt = 62,
    DirectXPixelFormat_R8IntNormalized = 63,
    DirectXPixelFormat_R8Int = 64,
    DirectXPixelFormat_A8UIntNormalized = 65,
    DirectXPixelFormat_R1UIntNormalized = 66,
    DirectXPixelFormat_R9G9B9E5SharedExponent = 67,
    DirectXPixelFormat_R8G8B8G8UIntNormalized = 68,
    DirectXPixelFormat_G8R8G8B8UIntNormalized = 69,
    DirectXPixelFormat_BC1Typeless = 70,
    DirectXPixelFormat_BC1UIntNormalized = 71,
    DirectXPixelFormat_BC1UIntNormalizedSrgb = 72,
    DirectXPixelFormat_BC2Typeless = 73,
    DirectXPixelFormat_BC2UIntNormalized = 74,
    DirectXPixelFormat_BC2UIntNormalizedSrgb = 75,
    DirectXPixelFormat_BC3Typeless = 76,
    DirectXPixelFormat_BC3UIntNormalized = 77,
    DirectXPixelFormat_BC3UIntNormalizedSrgb = 78,
    DirectXPixelFormat_BC4Typeless = 79,
    DirectXPixelFormat_BC4UIntNormalized = 80,
    DirectXPixelFormat_BC4IntNormalized = 81,
    DirectXPixelFormat_BC5Typeless = 82,
    DirectXPixelFormat_BC5UIntNormalized = 83,
    DirectXPixelFormat_BC5IntNormalized = 84,
    DirectXPixelFormat_B5G6R5UIntNormalized = 85,
    DirectXPixelFormat_B5G5R5A1UIntNormalized = 86,
    DirectXPixelFormat_B8G8R8A8UIntNormalized = 87,
    DirectXPixelFormat_B8G8R8X8UIntNormalized = 88,
    DirectXPixelFormat_R10G10B10XRBiasA2UIntNormalized = 89,
    DirectXPixelFormat_B8G8R8A8Typeless = 90,
    DirectXPixelFormat_B8G8R8A8UIntNormalizedSrgb = 91,
    DirectXPixelFormat_B8G8R8X8Typeless = 92,
    DirectXPixelFormat_B8G8R8X8UIntNormalizedSrgb = 93,
    DirectXPixelFormat_BC6HTypeless = 94,
    DirectXPixelFormat_BC6H16UnsignedFloat = 95,
    DirectXPixelFormat_BC6H16Float = 96,
    DirectXPixelFormat_BC7Typeless = 97,
    DirectXPixelFormat_BC7UIntNormalized = 98,
    DirectXPixelFormat_BC7UIntNormalizedSrgb = 99,
    DirectXPixelFormat_Ayuv = 100,
    DirectXPixelFormat_Y410 = 101,
    DirectXPixelFormat_Y416 = 102,
    DirectXPixelFormat_NV12 = 103,
    DirectXPixelFormat_P010 = 104,
    DirectXPixelFormat_P016 = 105,
    DirectXPixelFormat_Opaque420 = 106,
    DirectXPixelFormat_Yuy2 = 107,
    DirectXPixelFormat_Y210 = 108,
    DirectXPixelFormat_Y216 = 109,
    DirectXPixelFormat_NV11 = 110,
    DirectXPixelFormat_AI44 = 111,
    DirectXPixelFormat_IA44 = 112,
    DirectXPixelFormat_P8 = 113,
    DirectXPixelFormat_A8P8 = 114,
    DirectXPixelFormat_B4G4R4A4UIntNormalized = 115,
    DirectXPixelFormat_P208 = 130,
    DirectXPixelFormat_V208 = 131,
    DirectXPixelFormat_V408 = 132,
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0xa0000
    DirectXPixelFormat_SamplerFeedbackMinMipOpaque = 189,
#endif /* WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0xa0000 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0xa0000
    DirectXPixelFormat_SamplerFeedbackMipRegionUsedOpaque = 190
#endif /* WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0xa0000 */
};
#ifdef WIDL_using_Windows_Graphics_DirectX
#define DirectXPixelFormat __x_ABI_CWindows_CGraphics_CDirectX_CDirectXPixelFormat
#endif /* WIDL_using_Windows_Graphics_DirectX */
#endif

#endif /* WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000 */
/*****************************************************************************
 * IIterable<ABI::Windows::Graphics::DirectX::DirectXPixelFormat > interface
 */
#ifndef ____FIIterable_1_DirectXPixelFormat_INTERFACE_DEFINED__
#define ____FIIterable_1_DirectXPixelFormat_INTERFACE_DEFINED__

DEFINE_GUID(IID___FIIterable_1_DirectXPixelFormat, 0x3908f2c6, 0x1aee, 0x5129, 0xb9,0xa6, 0x2a,0x6e,0x01,0xd9,0x50,0x7e);
#if defined(__cplusplus) && !defined(CINTERFACE)
} /* extern "C" */
namespace ABI {
    namespace Windows {
        namespace Foundation {
            namespace Collections {
                template<>
                MIDL_INTERFACE("3908f2c6-1aee-5129-b9a6-2a6e01d9507e")
                IIterable<ABI::Windows::Graphics::DirectX::DirectXPixelFormat > : IIterable_impl<ABI::Windows::Graphics::DirectX::DirectXPixelFormat >
                {
                };
            }
        }
    }
}
extern "C" {
#ifdef __CRT_UUID_DECL
__CRT_UUID_DECL(__FIIterable_1_DirectXPixelFormat, 0x3908f2c6, 0x1aee, 0x5129, 0xb9,0xa6, 0x2a,0x6e,0x01,0xd9,0x50,0x7e)
#endif
#else
typedef struct __FIIterable_1_DirectXPixelFormatVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        __FIIterable_1_DirectXPixelFormat *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        __FIIterable_1_DirectXPixelFormat *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        __FIIterable_1_DirectXPixelFormat *This);

    /*** IInspectable methods ***/
    HRESULT (STDMETHODCALLTYPE *GetIids)(
        __FIIterable_1_DirectXPixelFormat *This,
        ULONG *iidCount,
        IID **iids);

    HRESULT (STDMETHODCALLTYPE *GetRuntimeClassName)(
        __FIIterable_1_DirectXPixelFormat *This,
        HSTRING *className);

    HRESULT (STDMETHODCALLTYPE *GetTrustLevel)(
        __FIIterable_1_DirectXPixelFormat *This,
        TrustLevel *trustLevel);

    /*** IIterable<ABI::Windows::Graphics::DirectX::DirectXPixelFormat > methods ***/
    HRESULT (STDMETHODCALLTYPE *First)(
        __FIIterable_1_DirectXPixelFormat *This,
        __FIIterator_1_DirectXPixelFormat **value);

    END_INTERFACE
} __FIIterable_1_DirectXPixelFormatVtbl;

interface __FIIterable_1_DirectXPixelFormat {
    CONST_VTBL __FIIterable_1_DirectXPixelFormatVtbl* lpVtbl;
};

#ifdef COBJMACROS
#ifndef WIDL_C_INLINE_WRAPPERS
/*** IUnknown methods ***/
#define __FIIterable_1_DirectXPixelFormat_QueryInterface(This,riid,ppvObject) (This)->lpVtbl->QueryInterface(This,riid,ppvObject)
#define __FIIterable_1_DirectXPixelFormat_AddRef(This) (This)->lpVtbl->AddRef(This)
#define __FIIterable_1_DirectXPixelFormat_Release(This) (This)->lpVtbl->Release(This)
/*** IInspectable methods ***/
#define __FIIterable_1_DirectXPixelFormat_GetIids(This,iidCount,iids) (This)->lpVtbl->GetIids(This,iidCount,iids)
#define __FIIterable_1_DirectXPixelFormat_GetRuntimeClassName(This,className) (This)->lpVtbl->GetRuntimeClassName(This,className)
#define __FIIterable_1_DirectXPixelFormat_GetTrustLevel(This,trustLevel) (This)->lpVtbl->GetTrustLevel(This,trustLevel)
/*** IIterable<ABI::Windows::Graphics::DirectX::DirectXPixelFormat > methods ***/
#define __FIIterable_1_DirectXPixelFormat_First(This,value) (This)->lpVtbl->First(This,value)
#else
/*** IUnknown methods ***/
static inline HRESULT __FIIterable_1_DirectXPixelFormat_QueryInterface(__FIIterable_1_DirectXPixelFormat* This,REFIID riid,void **ppvObject) {
    return This->lpVtbl->QueryInterface(This,riid,ppvObject);
}
static inline ULONG __FIIterable_1_DirectXPixelFormat_AddRef(__FIIterable_1_DirectXPixelFormat* This) {
    return This->lpVtbl->AddRef(This);
}
static inline ULONG __FIIterable_1_DirectXPixelFormat_Release(__FIIterable_1_DirectXPixelFormat* This) {
    return This->lpVtbl->Release(This);
}
/*** IInspectable methods ***/
static inline HRESULT __FIIterable_1_DirectXPixelFormat_GetIids(__FIIterable_1_DirectXPixelFormat* This,ULONG *iidCount,IID **iids) {
    return This->lpVtbl->GetIids(This,iidCount,iids);
}
static inline HRESULT __FIIterable_1_DirectXPixelFormat_GetRuntimeClassName(__FIIterable_1_DirectXPixelFormat* This,HSTRING *className) {
    return This->lpVtbl->GetRuntimeClassName(This,className);
}
static inline HRESULT __FIIterable_1_DirectXPixelFormat_GetTrustLevel(__FIIterable_1_DirectXPixelFormat* This,TrustLevel *trustLevel) {
    return This->lpVtbl->GetTrustLevel(This,trustLevel);
}
/*** IIterable<ABI::Windows::Graphics::DirectX::DirectXPixelFormat > methods ***/
static inline HRESULT __FIIterable_1_DirectXPixelFormat_First(__FIIterable_1_DirectXPixelFormat* This,__FIIterator_1_DirectXPixelFormat **value) {
    return This->lpVtbl->First(This,value);
}
#endif
#ifdef WIDL_using_Windows_Foundation_Collections
#define IID_IIterable_DirectXPixelFormat IID___FIIterable_1_DirectXPixelFormat
#define IIterable_DirectXPixelFormatVtbl __FIIterable_1_DirectXPixelFormatVtbl
#define IIterable_DirectXPixelFormat __FIIterable_1_DirectXPixelFormat
#define IIterable_DirectXPixelFormat_QueryInterface __FIIterable_1_DirectXPixelFormat_QueryInterface
#define IIterable_DirectXPixelFormat_AddRef __FIIterable_1_DirectXPixelFormat_AddRef
#define IIterable_DirectXPixelFormat_Release __FIIterable_1_DirectXPixelFormat_Release
#define IIterable_DirectXPixelFormat_GetIids __FIIterable_1_DirectXPixelFormat_GetIids
#define IIterable_DirectXPixelFormat_GetRuntimeClassName __FIIterable_1_DirectXPixelFormat_GetRuntimeClassName
#define IIterable_DirectXPixelFormat_GetTrustLevel __FIIterable_1_DirectXPixelFormat_GetTrustLevel
#define IIterable_DirectXPixelFormat_First __FIIterable_1_DirectXPixelFormat_First
#endif /* WIDL_using_Windows_Foundation_Collections */
#endif

#endif

#endif  /* ____FIIterable_1_DirectXPixelFormat_INTERFACE_DEFINED__ */

/*****************************************************************************
 * IIterator<ABI::Windows::Graphics::DirectX::DirectXPixelFormat > interface
 */
#ifndef ____FIIterator_1_DirectXPixelFormat_INTERFACE_DEFINED__
#define ____FIIterator_1_DirectXPixelFormat_INTERFACE_DEFINED__

DEFINE_GUID(IID___FIIterator_1_DirectXPixelFormat, 0xea016190, 0xac80, 0x5840, 0x8f,0x58, 0xff,0x43,0x4c,0x7b,0x29,0x07);
#if defined(__cplusplus) && !defined(CINTERFACE)
} /* extern "C" */
namespace ABI {
    namespace Windows {
        namespace Foundation {
            namespace Collections {
                template<>
                MIDL_INTERFACE("ea016190-ac80-5840-8f58-ff434c7b2907")
                IIterator<ABI::Windows::Graphics::DirectX::DirectXPixelFormat > : IIterator_impl<ABI::Windows::Graphics::DirectX::DirectXPixelFormat >
                {
                };
            }
        }
    }
}
extern "C" {
#ifdef __CRT_UUID_DECL
__CRT_UUID_DECL(__FIIterator_1_DirectXPixelFormat, 0xea016190, 0xac80, 0x5840, 0x8f,0x58, 0xff,0x43,0x4c,0x7b,0x29,0x07)
#endif
#else
typedef struct __FIIterator_1_DirectXPixelFormatVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        __FIIterator_1_DirectXPixelFormat *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        __FIIterator_1_DirectXPixelFormat *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        __FIIterator_1_DirectXPixelFormat *This);

    /*** IInspectable methods ***/
    HRESULT (STDMETHODCALLTYPE *GetIids)(
        __FIIterator_1_DirectXPixelFormat *This,
        ULONG *iidCount,
        IID **iids);

    HRESULT (STDMETHODCALLTYPE *GetRuntimeClassName)(
        __FIIterator_1_DirectXPixelFormat *This,
        HSTRING *className);

    HRESULT (STDMETHODCALLTYPE *GetTrustLevel)(
        __FIIterator_1_DirectXPixelFormat *This,
        TrustLevel *trustLevel);

    /*** IIterator<ABI::Windows::Graphics::DirectX::DirectXPixelFormat > methods ***/
    HRESULT (STDMETHODCALLTYPE *get_Current)(
        __FIIterator_1_DirectXPixelFormat *This,
        __x_ABI_CWindows_CGraphics_CDirectX_CDirectXPixelFormat *value);

    HRESULT (STDMETHODCALLTYPE *get_HasCurrent)(
        __FIIterator_1_DirectXPixelFormat *This,
        boolean *value);

    HRESULT (STDMETHODCALLTYPE *MoveNext)(
        __FIIterator_1_DirectXPixelFormat *This,
        boolean *value);

    HRESULT (STDMETHODCALLTYPE *GetMany)(
        __FIIterator_1_DirectXPixelFormat *This,
        UINT32 items_size,
        __x_ABI_CWindows_CGraphics_CDirectX_CDirectXPixelFormat *items,
        UINT32 *value);

    END_INTERFACE
} __FIIterator_1_DirectXPixelFormatVtbl;

interface __FIIterator_1_DirectXPixelFormat {
    CONST_VTBL __FIIterator_1_DirectXPixelFormatVtbl* lpVtbl;
};

#ifdef COBJMACROS
#ifndef WIDL_C_INLINE_WRAPPERS
/*** IUnknown methods ***/
#define __FIIterator_1_DirectXPixelFormat_QueryInterface(This,riid,ppvObject) (This)->lpVtbl->QueryInterface(This,riid,ppvObject)
#define __FIIterator_1_DirectXPixelFormat_AddRef(This) (This)->lpVtbl->AddRef(This)
#define __FIIterator_1_DirectXPixelFormat_Release(This) (This)->lpVtbl->Release(This)
/*** IInspectable methods ***/
#define __FIIterator_1_DirectXPixelFormat_GetIids(This,iidCount,iids) (This)->lpVtbl->GetIids(This,iidCount,iids)
#define __FIIterator_1_DirectXPixelFormat_GetRuntimeClassName(This,className) (This)->lpVtbl->GetRuntimeClassName(This,className)
#define __FIIterator_1_DirectXPixelFormat_GetTrustLevel(This,trustLevel) (This)->lpVtbl->GetTrustLevel(This,trustLevel)
/*** IIterator<ABI::Windows::Graphics::DirectX::DirectXPixelFormat > methods ***/
#define __FIIterator_1_DirectXPixelFormat_get_Current(This,value) (This)->lpVtbl->get_Current(This,value)
#define __FIIterator_1_DirectXPixelFormat_get_HasCurrent(This,value) (This)->lpVtbl->get_HasCurrent(This,value)
#define __FIIterator_1_DirectXPixelFormat_MoveNext(This,value) (This)->lpVtbl->MoveNext(This,value)
#define __FIIterator_1_DirectXPixelFormat_GetMany(This,items_size,items,value) (This)->lpVtbl->GetMany(This,items_size,items,value)
#else
/*** IUnknown methods ***/
static inline HRESULT __FIIterator_1_DirectXPixelFormat_QueryInterface(__FIIterator_1_DirectXPixelFormat* This,REFIID riid,void **ppvObject) {
    return This->lpVtbl->QueryInterface(This,riid,ppvObject);
}
static inline ULONG __FIIterator_1_DirectXPixelFormat_AddRef(__FIIterator_1_DirectXPixelFormat* This) {
    return This->lpVtbl->AddRef(This);
}
static inline ULONG __FIIterator_1_DirectXPixelFormat_Release(__FIIterator_1_DirectXPixelFormat* This) {
    return This->lpVtbl->Release(This);
}
/*** IInspectable methods ***/
static inline HRESULT __FIIterator_1_DirectXPixelFormat_GetIids(__FIIterator_1_DirectXPixelFormat* This,ULONG *iidCount,IID **iids) {
    return This->lpVtbl->GetIids(This,iidCount,iids);
}
static inline HRESULT __FIIterator_1_DirectXPixelFormat_GetRuntimeClassName(__FIIterator_1_DirectXPixelFormat* This,HSTRING *className) {
    return This->lpVtbl->GetRuntimeClassName(This,className);
}
static inline HRESULT __FIIterator_1_DirectXPixelFormat_GetTrustLevel(__FIIterator_1_DirectXPixelFormat* This,TrustLevel *trustLevel) {
    return This->lpVtbl->GetTrustLevel(This,trustLevel);
}
/*** IIterator<ABI::Windows::Graphics::DirectX::DirectXPixelFormat > methods ***/
static inline HRESULT __FIIterator_1_DirectXPixelFormat_get_Current(__FIIterator_1_DirectXPixelFormat* This,__x_ABI_CWindows_CGraphics_CDirectX_CDirectXPixelFormat *value) {
    return This->lpVtbl->get_Current(This,value);
}
static inline HRESULT __FIIterator_1_DirectXPixelFormat_get_HasCurrent(__FIIterator_1_DirectXPixelFormat* This,boolean *value) {
    return This->lpVtbl->get_HasCurrent(This,value);
}
static inline HRESULT __FIIterator_1_DirectXPixelFormat_MoveNext(__FIIterator_1_DirectXPixelFormat* This,boolean *value) {
    return This->lpVtbl->MoveNext(This,value);
}
static inline HRESULT __FIIterator_1_DirectXPixelFormat_GetMany(__FIIterator_1_DirectXPixelFormat* This,UINT32 items_size,__x_ABI_CWindows_CGraphics_CDirectX_CDirectXPixelFormat *items,UINT32 *value) {
    return This->lpVtbl->GetMany(This,items_size,items,value);
}
#endif
#ifdef WIDL_using_Windows_Foundation_Collections
#define IID_IIterator_DirectXPixelFormat IID___FIIterator_1_DirectXPixelFormat
#define IIterator_DirectXPixelFormatVtbl __FIIterator_1_DirectXPixelFormatVtbl
#define IIterator_DirectXPixelFormat __FIIterator_1_DirectXPixelFormat
#define IIterator_DirectXPixelFormat_QueryInterface __FIIterator_1_DirectXPixelFormat_QueryInterface
#define IIterator_DirectXPixelFormat_AddRef __FIIterator_1_DirectXPixelFormat_AddRef
#define IIterator_DirectXPixelFormat_Release __FIIterator_1_DirectXPixelFormat_Release
#define IIterator_DirectXPixelFormat_GetIids __FIIterator_1_DirectXPixelFormat_GetIids
#define IIterator_DirectXPixelFormat_GetRuntimeClassName __FIIterator_1_DirectXPixelFormat_GetRuntimeClassName
#define IIterator_DirectXPixelFormat_GetTrustLevel __FIIterator_1_DirectXPixelFormat_GetTrustLevel
#define IIterator_DirectXPixelFormat_get_Current __FIIterator_1_DirectXPixelFormat_get_Current
#define IIterator_DirectXPixelFormat_get_HasCurrent __FIIterator_1_DirectXPixelFormat_get_HasCurrent
#define IIterator_DirectXPixelFormat_MoveNext __FIIterator_1_DirectXPixelFormat_MoveNext
#define IIterator_DirectXPixelFormat_GetMany __FIIterator_1_DirectXPixelFormat_GetMany
#endif /* WIDL_using_Windows_Foundation_Collections */
#endif

#endif

#endif  /* ____FIIterator_1_DirectXPixelFormat_INTERFACE_DEFINED__ */

/*****************************************************************************
 * IVectorView<ABI::Windows::Graphics::DirectX::DirectXPixelFormat > interface
 */
#ifndef ____FIVectorView_1_DirectXPixelFormat_INTERFACE_DEFINED__
#define ____FIVectorView_1_DirectXPixelFormat_INTERFACE_DEFINED__

DEFINE_GUID(IID___FIVectorView_1_DirectXPixelFormat, 0x1edda1c2, 0x0f6e, 0x516c, 0x80,0xb8, 0x76,0x87,0xdc,0xd1,0x28,0x0e);
#if defined(__cplusplus) && !defined(CINTERFACE)
} /* extern "C" */
namespace ABI {
    namespace Windows {
        namespace Foundation {
            namespace Collections {
                template<>
                MIDL_INTERFACE("1edda1c2-0f6e-516c-80b8-7687dcd1280e")
                IVectorView<ABI::Windows::Graphics::DirectX::DirectXPixelFormat > : IVectorView_impl<ABI::Windows::Graphics::DirectX::DirectXPixelFormat >
                {
                };
            }
        }
    }
}
extern "C" {
#ifdef __CRT_UUID_DECL
__CRT_UUID_DECL(__FIVectorView_1_DirectXPixelFormat, 0x1edda1c2, 0x0f6e, 0x516c, 0x80,0xb8, 0x76,0x87,0xdc,0xd1,0x28,0x0e)
#endif
#else
typedef struct __FIVectorView_1_DirectXPixelFormatVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        __FIVectorView_1_DirectXPixelFormat *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        __FIVectorView_1_DirectXPixelFormat *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        __FIVectorView_1_DirectXPixelFormat *This);

    /*** IInspectable methods ***/
    HRESULT (STDMETHODCALLTYPE *GetIids)(
        __FIVectorView_1_DirectXPixelFormat *This,
        ULONG *iidCount,
        IID **iids);

    HRESULT (STDMETHODCALLTYPE *GetRuntimeClassName)(
        __FIVectorView_1_DirectXPixelFormat *This,
        HSTRING *className);

    HRESULT (STDMETHODCALLTYPE *GetTrustLevel)(
        __FIVectorView_1_DirectXPixelFormat *This,
        TrustLevel *trustLevel);

    /*** IVectorView<ABI::Windows::Graphics::DirectX::DirectXPixelFormat > methods ***/
    HRESULT (STDMETHODCALLTYPE *GetAt)(
        __FIVectorView_1_DirectXPixelFormat *This,
        UINT32 index,
        __x_ABI_CWindows_CGraphics_CDirectX_CDirectXPixelFormat *value);

    HRESULT (STDMETHODCALLTYPE *get_Size)(
        __FIVectorView_1_DirectXPixelFormat *This,
        UINT32 *value);

    HRESULT (STDMETHODCALLTYPE *IndexOf)(
        __FIVectorView_1_DirectXPixelFormat *This,
        __x_ABI_CWindows_CGraphics_CDirectX_CDirectXPixelFormat element,
        UINT32 *index,
        BOOLEAN *value);

    HRESULT (STDMETHODCALLTYPE *GetMany)(
        __FIVectorView_1_DirectXPixelFormat *This,
        UINT32 start_index,
        UINT32 items_size,
        __x_ABI_CWindows_CGraphics_CDirectX_CDirectXPixelFormat *items,
        UINT32 *value);

    END_INTERFACE
} __FIVectorView_1_DirectXPixelFormatVtbl;

interface __FIVectorView_1_DirectXPixelFormat {
    CONST_VTBL __FIVectorView_1_DirectXPixelFormatVtbl* lpVtbl;
};

#ifdef COBJMACROS
#ifndef WIDL_C_INLINE_WRAPPERS
/*** IUnknown methods ***/
#define __FIVectorView_1_DirectXPixelFormat_QueryInterface(This,riid,ppvObject) (This)->lpVtbl->QueryInterface(This,riid,ppvObject)
#define __FIVectorView_1_DirectXPixelFormat_AddRef(This) (This)->lpVtbl->AddRef(This)
#define __FIVectorView_1_DirectXPixelFormat_Release(This) (This)->lpVtbl->Release(This)
/*** IInspectable methods ***/
#define __FIVectorView_1_DirectXPixelFormat_GetIids(This,iidCount,iids) (This)->lpVtbl->GetIids(This,iidCount,iids)
#define __FIVectorView_1_DirectXPixelFormat_GetRuntimeClassName(This,className) (This)->lpVtbl->GetRuntimeClassName(This,className)
#define __FIVectorView_1_DirectXPixelFormat_GetTrustLevel(This,trustLevel) (This)->lpVtbl->GetTrustLevel(This,trustLevel)
/*** IVectorView<ABI::Windows::Graphics::DirectX::DirectXPixelFormat > methods ***/
#define __FIVectorView_1_DirectXPixelFormat_GetAt(This,index,value) (This)->lpVtbl->GetAt(This,index,value)
#define __FIVectorView_1_DirectXPixelFormat_get_Size(This,value) (This)->lpVtbl->get_Size(This,value)
#define __FIVectorView_1_DirectXPixelFormat_IndexOf(This,element,index,value) (This)->lpVtbl->IndexOf(This,element,index,value)
#define __FIVectorView_1_DirectXPixelFormat_GetMany(This,start_index,items_size,items,value) (This)->lpVtbl->GetMany(This,start_index,items_size,items,value)
#else
/*** IUnknown methods ***/
static inline HRESULT __FIVectorView_1_DirectXPixelFormat_QueryInterface(__FIVectorView_1_DirectXPixelFormat* This,REFIID riid,void **ppvObject) {
    return This->lpVtbl->QueryInterface(This,riid,ppvObject);
}
static inline ULONG __FIVectorView_1_DirectXPixelFormat_AddRef(__FIVectorView_1_DirectXPixelFormat* This) {
    return This->lpVtbl->AddRef(This);
}
static inline ULONG __FIVectorView_1_DirectXPixelFormat_Release(__FIVectorView_1_DirectXPixelFormat* This) {
    return This->lpVtbl->Release(This);
}
/*** IInspectable methods ***/
static inline HRESULT __FIVectorView_1_DirectXPixelFormat_GetIids(__FIVectorView_1_DirectXPixelFormat* This,ULONG *iidCount,IID **iids) {
    return This->lpVtbl->GetIids(This,iidCount,iids);
}
static inline HRESULT __FIVectorView_1_DirectXPixelFormat_GetRuntimeClassName(__FIVectorView_1_DirectXPixelFormat* This,HSTRING *className) {
    return This->lpVtbl->GetRuntimeClassName(This,className);
}
static inline HRESULT __FIVectorView_1_DirectXPixelFormat_GetTrustLevel(__FIVectorView_1_DirectXPixelFormat* This,TrustLevel *trustLevel) {
    return This->lpVtbl->GetTrustLevel(This,trustLevel);
}
/*** IVectorView<ABI::Windows::Graphics::DirectX::DirectXPixelFormat > methods ***/
static inline HRESULT __FIVectorView_1_DirectXPixelFormat_GetAt(__FIVectorView_1_DirectXPixelFormat* This,UINT32 index,__x_ABI_CWindows_CGraphics_CDirectX_CDirectXPixelFormat *value) {
    return This->lpVtbl->GetAt(This,index,value);
}
static inline HRESULT __FIVectorView_1_DirectXPixelFormat_get_Size(__FIVectorView_1_DirectXPixelFormat* This,UINT32 *value) {
    return This->lpVtbl->get_Size(This,value);
}
static inline HRESULT __FIVectorView_1_DirectXPixelFormat_IndexOf(__FIVectorView_1_DirectXPixelFormat* This,__x_ABI_CWindows_CGraphics_CDirectX_CDirectXPixelFormat element,UINT32 *index,BOOLEAN *value) {
    return This->lpVtbl->IndexOf(This,element,index,value);
}
static inline HRESULT __FIVectorView_1_DirectXPixelFormat_GetMany(__FIVectorView_1_DirectXPixelFormat* This,UINT32 start_index,UINT32 items_size,__x_ABI_CWindows_CGraphics_CDirectX_CDirectXPixelFormat *items,UINT32 *value) {
    return This->lpVtbl->GetMany(This,start_index,items_size,items,value);
}
#endif
#ifdef WIDL_using_Windows_Foundation_Collections
#define IID_IVectorView_DirectXPixelFormat IID___FIVectorView_1_DirectXPixelFormat
#define IVectorView_DirectXPixelFormatVtbl __FIVectorView_1_DirectXPixelFormatVtbl
#define IVectorView_DirectXPixelFormat __FIVectorView_1_DirectXPixelFormat
#define IVectorView_DirectXPixelFormat_QueryInterface __FIVectorView_1_DirectXPixelFormat_QueryInterface
#define IVectorView_DirectXPixelFormat_AddRef __FIVectorView_1_DirectXPixelFormat_AddRef
#define IVectorView_DirectXPixelFormat_Release __FIVectorView_1_DirectXPixelFormat_Release
#define IVectorView_DirectXPixelFormat_GetIids __FIVectorView_1_DirectXPixelFormat_GetIids
#define IVectorView_DirectXPixelFormat_GetRuntimeClassName __FIVectorView_1_DirectXPixelFormat_GetRuntimeClassName
#define IVectorView_DirectXPixelFormat_GetTrustLevel __FIVectorView_1_DirectXPixelFormat_GetTrustLevel
#define IVectorView_DirectXPixelFormat_GetAt __FIVectorView_1_DirectXPixelFormat_GetAt
#define IVectorView_DirectXPixelFormat_get_Size __FIVectorView_1_DirectXPixelFormat_get_Size
#define IVectorView_DirectXPixelFormat_IndexOf __FIVectorView_1_DirectXPixelFormat_IndexOf
#define IVectorView_DirectXPixelFormat_GetMany __FIVectorView_1_DirectXPixelFormat_GetMany
#endif /* WIDL_using_Windows_Foundation_Collections */
#endif

#endif

#endif  /* ____FIVectorView_1_DirectXPixelFormat_INTERFACE_DEFINED__ */

/* Begin additional prototypes for all interfaces */


/* End additional prototypes */

#ifdef __cplusplus
}
#endif

#endif /* __windows_graphics_directx_h__ */
