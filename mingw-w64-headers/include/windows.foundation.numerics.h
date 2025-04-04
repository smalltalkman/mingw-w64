/*** Autogenerated by WIDL 10.4 from include/windows.foundation.numerics.idl - Do not edit ***/

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

#ifndef __windows_foundation_numerics_h__
#define __windows_foundation_numerics_h__

/* Forward declarations */

#ifndef ____FIReference_1_Matrix4x4_FWD_DEFINED__
#define ____FIReference_1_Matrix4x4_FWD_DEFINED__
typedef interface __FIReference_1_Matrix4x4 __FIReference_1_Matrix4x4;
#ifdef __cplusplus
#define __FIReference_1_Matrix4x4 ABI::Windows::Foundation::IReference<ABI::Windows::Foundation::Numerics::Matrix4x4 >
#endif /* __cplusplus */
#endif

#ifndef ____FIReference_1_Vector2_FWD_DEFINED__
#define ____FIReference_1_Vector2_FWD_DEFINED__
typedef interface __FIReference_1_Vector2 __FIReference_1_Vector2;
#ifdef __cplusplus
#define __FIReference_1_Vector2 ABI::Windows::Foundation::IReference<ABI::Windows::Foundation::Numerics::Vector2 >
#endif /* __cplusplus */
#endif

#ifndef ____FIReference_1_Vector3_FWD_DEFINED__
#define ____FIReference_1_Vector3_FWD_DEFINED__
typedef interface __FIReference_1_Vector3 __FIReference_1_Vector3;
#ifdef __cplusplus
#define __FIReference_1_Vector3 ABI::Windows::Foundation::IReference<ABI::Windows::Foundation::Numerics::Vector3 >
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
typedef struct __x_ABI_CWindows_CFoundation_CNumerics_CMatrix3x2 __x_ABI_CWindows_CFoundation_CNumerics_CMatrix3x2;
#else /* __cplusplus */
namespace ABI {
    namespace Windows {
        namespace Foundation {
            namespace Numerics {
                typedef struct Matrix3x2 Matrix3x2;
            }
        }
    }
}
#endif /* __cplusplus */

#ifndef __cplusplus
typedef struct __x_ABI_CWindows_CFoundation_CNumerics_CMatrix4x4 __x_ABI_CWindows_CFoundation_CNumerics_CMatrix4x4;
#else /* __cplusplus */
namespace ABI {
    namespace Windows {
        namespace Foundation {
            namespace Numerics {
                typedef struct Matrix4x4 Matrix4x4;
            }
        }
    }
}
#endif /* __cplusplus */

#ifndef __cplusplus
typedef struct __x_ABI_CWindows_CFoundation_CNumerics_CPlane __x_ABI_CWindows_CFoundation_CNumerics_CPlane;
#else /* __cplusplus */
namespace ABI {
    namespace Windows {
        namespace Foundation {
            namespace Numerics {
                typedef struct Plane Plane;
            }
        }
    }
}
#endif /* __cplusplus */

#ifndef __cplusplus
typedef struct __x_ABI_CWindows_CFoundation_CNumerics_CQuaternion __x_ABI_CWindows_CFoundation_CNumerics_CQuaternion;
#else /* __cplusplus */
namespace ABI {
    namespace Windows {
        namespace Foundation {
            namespace Numerics {
                typedef struct Quaternion Quaternion;
            }
        }
    }
}
#endif /* __cplusplus */

#ifndef __cplusplus
typedef struct __x_ABI_CWindows_CFoundation_CNumerics_CVector2 __x_ABI_CWindows_CFoundation_CNumerics_CVector2;
#else /* __cplusplus */
namespace ABI {
    namespace Windows {
        namespace Foundation {
            namespace Numerics {
                typedef struct Vector2 Vector2;
            }
        }
    }
}
#endif /* __cplusplus */

#ifndef __cplusplus
typedef struct __x_ABI_CWindows_CFoundation_CNumerics_CVector3 __x_ABI_CWindows_CFoundation_CNumerics_CVector3;
#else /* __cplusplus */
namespace ABI {
    namespace Windows {
        namespace Foundation {
            namespace Numerics {
                typedef struct Vector3 Vector3;
            }
        }
    }
}
#endif /* __cplusplus */

#ifndef __cplusplus
typedef struct __x_ABI_CWindows_CFoundation_CNumerics_CVector4 __x_ABI_CWindows_CFoundation_CNumerics_CVector4;
#else /* __cplusplus */
namespace ABI {
    namespace Windows {
        namespace Foundation {
            namespace Numerics {
                typedef struct Vector4 Vector4;
            }
        }
    }
}
#endif /* __cplusplus */

#ifndef ____FIReference_1_Matrix4x4_FWD_DEFINED__
#define ____FIReference_1_Matrix4x4_FWD_DEFINED__
typedef interface __FIReference_1_Matrix4x4 __FIReference_1_Matrix4x4;
#ifdef __cplusplus
#define __FIReference_1_Matrix4x4 ABI::Windows::Foundation::IReference<ABI::Windows::Foundation::Numerics::Matrix4x4 >
#endif /* __cplusplus */
#endif

#ifndef ____FIReference_1_Vector2_FWD_DEFINED__
#define ____FIReference_1_Vector2_FWD_DEFINED__
typedef interface __FIReference_1_Vector2 __FIReference_1_Vector2;
#ifdef __cplusplus
#define __FIReference_1_Vector2 ABI::Windows::Foundation::IReference<ABI::Windows::Foundation::Numerics::Vector2 >
#endif /* __cplusplus */
#endif

#ifndef ____FIReference_1_Vector3_FWD_DEFINED__
#define ____FIReference_1_Vector3_FWD_DEFINED__
typedef interface __FIReference_1_Vector3 __FIReference_1_Vector3;
#ifdef __cplusplus
#define __FIReference_1_Vector3 ABI::Windows::Foundation::IReference<ABI::Windows::Foundation::Numerics::Vector3 >
#endif /* __cplusplus */
#endif

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#ifdef __cplusplus
} /* extern "C" */
namespace ABI {
    namespace Windows {
        namespace Foundation {
            namespace Numerics {
                struct Matrix3x2 {
                    FLOAT M11;
                    FLOAT M12;
                    FLOAT M21;
                    FLOAT M22;
                    FLOAT M31;
                    FLOAT M32;
                };
            }
        }
    }
}
extern "C" {
#else
struct __x_ABI_CWindows_CFoundation_CNumerics_CMatrix3x2 {
    FLOAT M11;
    FLOAT M12;
    FLOAT M21;
    FLOAT M22;
    FLOAT M31;
    FLOAT M32;
};
#ifdef WIDL_using_Windows_Foundation_Numerics
#define Matrix3x2 __x_ABI_CWindows_CFoundation_CNumerics_CMatrix3x2
#endif /* WIDL_using_Windows_Foundation_Numerics */
#endif

#endif /* WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#ifdef __cplusplus
} /* extern "C" */
namespace ABI {
    namespace Windows {
        namespace Foundation {
            namespace Numerics {
                struct Matrix4x4 {
                    FLOAT M11;
                    FLOAT M12;
                    FLOAT M13;
                    FLOAT M14;
                    FLOAT M21;
                    FLOAT M22;
                    FLOAT M23;
                    FLOAT M24;
                    FLOAT M31;
                    FLOAT M32;
                    FLOAT M33;
                    FLOAT M34;
                    FLOAT M41;
                    FLOAT M42;
                    FLOAT M43;
                    FLOAT M44;
                };
            }
        }
    }
}
extern "C" {
#else
struct __x_ABI_CWindows_CFoundation_CNumerics_CMatrix4x4 {
    FLOAT M11;
    FLOAT M12;
    FLOAT M13;
    FLOAT M14;
    FLOAT M21;
    FLOAT M22;
    FLOAT M23;
    FLOAT M24;
    FLOAT M31;
    FLOAT M32;
    FLOAT M33;
    FLOAT M34;
    FLOAT M41;
    FLOAT M42;
    FLOAT M43;
    FLOAT M44;
};
#ifdef WIDL_using_Windows_Foundation_Numerics
#define Matrix4x4 __x_ABI_CWindows_CFoundation_CNumerics_CMatrix4x4
#endif /* WIDL_using_Windows_Foundation_Numerics */
#endif

#endif /* WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#ifdef __cplusplus
} /* extern "C" */
namespace ABI {
    namespace Windows {
        namespace Foundation {
            namespace Numerics {
                struct Vector3 {
                    FLOAT X;
                    FLOAT Y;
                    FLOAT Z;
                };
            }
        }
    }
}
extern "C" {
#else
struct __x_ABI_CWindows_CFoundation_CNumerics_CVector3 {
    FLOAT X;
    FLOAT Y;
    FLOAT Z;
};
#ifdef WIDL_using_Windows_Foundation_Numerics
#define Vector3 __x_ABI_CWindows_CFoundation_CNumerics_CVector3
#endif /* WIDL_using_Windows_Foundation_Numerics */
#endif

#endif /* WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#ifdef __cplusplus
} /* extern "C" */
namespace ABI {
    namespace Windows {
        namespace Foundation {
            namespace Numerics {
                struct Plane {
                    ABI::Windows::Foundation::Numerics::Vector3 Normal;
                    FLOAT D;
                };
            }
        }
    }
}
extern "C" {
#else
struct __x_ABI_CWindows_CFoundation_CNumerics_CPlane {
    __x_ABI_CWindows_CFoundation_CNumerics_CVector3 Normal;
    FLOAT D;
};
#ifdef WIDL_using_Windows_Foundation_Numerics
#define Plane __x_ABI_CWindows_CFoundation_CNumerics_CPlane
#endif /* WIDL_using_Windows_Foundation_Numerics */
#endif

#endif /* WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#ifdef __cplusplus
} /* extern "C" */
namespace ABI {
    namespace Windows {
        namespace Foundation {
            namespace Numerics {
                struct Quaternion {
                    FLOAT X;
                    FLOAT Y;
                    FLOAT Z;
                    FLOAT W;
                };
            }
        }
    }
}
extern "C" {
#else
struct __x_ABI_CWindows_CFoundation_CNumerics_CQuaternion {
    FLOAT X;
    FLOAT Y;
    FLOAT Z;
    FLOAT W;
};
#ifdef WIDL_using_Windows_Foundation_Numerics
#define Quaternion __x_ABI_CWindows_CFoundation_CNumerics_CQuaternion
#endif /* WIDL_using_Windows_Foundation_Numerics */
#endif

#endif /* WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#ifdef __cplusplus
} /* extern "C" */
namespace ABI {
    namespace Windows {
        namespace Foundation {
            namespace Numerics {
                struct Vector2 {
                    FLOAT X;
                    FLOAT Y;
                };
            }
        }
    }
}
extern "C" {
#else
struct __x_ABI_CWindows_CFoundation_CNumerics_CVector2 {
    FLOAT X;
    FLOAT Y;
};
#ifdef WIDL_using_Windows_Foundation_Numerics
#define Vector2 __x_ABI_CWindows_CFoundation_CNumerics_CVector2
#endif /* WIDL_using_Windows_Foundation_Numerics */
#endif

#endif /* WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#ifdef __cplusplus
} /* extern "C" */
namespace ABI {
    namespace Windows {
        namespace Foundation {
            namespace Numerics {
                struct Vector4 {
                    FLOAT X;
                    FLOAT Y;
                    FLOAT Z;
                    FLOAT W;
                };
            }
        }
    }
}
extern "C" {
#else
struct __x_ABI_CWindows_CFoundation_CNumerics_CVector4 {
    FLOAT X;
    FLOAT Y;
    FLOAT Z;
    FLOAT W;
};
#ifdef WIDL_using_Windows_Foundation_Numerics
#define Vector4 __x_ABI_CWindows_CFoundation_CNumerics_CVector4
#endif /* WIDL_using_Windows_Foundation_Numerics */
#endif

#endif /* WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000 */
/*****************************************************************************
 * IReference<ABI::Windows::Foundation::Numerics::Matrix4x4 > interface
 */
#ifndef ____FIReference_1_Matrix4x4_INTERFACE_DEFINED__
#define ____FIReference_1_Matrix4x4_INTERFACE_DEFINED__

DEFINE_GUID(IID___FIReference_1_Matrix4x4, 0xdacbffdc, 0x68ef, 0x5fd0, 0xb6,0x57, 0x78,0x2d,0x0a,0xc9,0x80,0x7e);
#if defined(__cplusplus) && !defined(CINTERFACE)
} /* extern "C" */
namespace ABI {
    namespace Windows {
        namespace Foundation {
            template<>
            MIDL_INTERFACE("dacbffdc-68ef-5fd0-b657-782d0ac9807e")
            IReference<ABI::Windows::Foundation::Numerics::Matrix4x4 > : IReference_impl<ABI::Windows::Foundation::Numerics::Matrix4x4 >
            {
            };
        }
    }
}
extern "C" {
#ifdef __CRT_UUID_DECL
__CRT_UUID_DECL(__FIReference_1_Matrix4x4, 0xdacbffdc, 0x68ef, 0x5fd0, 0xb6,0x57, 0x78,0x2d,0x0a,0xc9,0x80,0x7e)
#endif
#else
typedef struct __FIReference_1_Matrix4x4Vtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        __FIReference_1_Matrix4x4 *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        __FIReference_1_Matrix4x4 *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        __FIReference_1_Matrix4x4 *This);

    /*** IInspectable methods ***/
    HRESULT (STDMETHODCALLTYPE *GetIids)(
        __FIReference_1_Matrix4x4 *This,
        ULONG *iidCount,
        IID **iids);

    HRESULT (STDMETHODCALLTYPE *GetRuntimeClassName)(
        __FIReference_1_Matrix4x4 *This,
        HSTRING *className);

    HRESULT (STDMETHODCALLTYPE *GetTrustLevel)(
        __FIReference_1_Matrix4x4 *This,
        TrustLevel *trustLevel);

    /*** IReference<ABI::Windows::Foundation::Numerics::Matrix4x4 > methods ***/
    HRESULT (STDMETHODCALLTYPE *get_Value)(
        __FIReference_1_Matrix4x4 *This,
        __x_ABI_CWindows_CFoundation_CNumerics_CMatrix4x4 *value);

    END_INTERFACE
} __FIReference_1_Matrix4x4Vtbl;

interface __FIReference_1_Matrix4x4 {
    CONST_VTBL __FIReference_1_Matrix4x4Vtbl* lpVtbl;
};

#ifdef COBJMACROS
#ifndef WIDL_C_INLINE_WRAPPERS
/*** IUnknown methods ***/
#define __FIReference_1_Matrix4x4_QueryInterface(This,riid,ppvObject) (This)->lpVtbl->QueryInterface(This,riid,ppvObject)
#define __FIReference_1_Matrix4x4_AddRef(This) (This)->lpVtbl->AddRef(This)
#define __FIReference_1_Matrix4x4_Release(This) (This)->lpVtbl->Release(This)
/*** IInspectable methods ***/
#define __FIReference_1_Matrix4x4_GetIids(This,iidCount,iids) (This)->lpVtbl->GetIids(This,iidCount,iids)
#define __FIReference_1_Matrix4x4_GetRuntimeClassName(This,className) (This)->lpVtbl->GetRuntimeClassName(This,className)
#define __FIReference_1_Matrix4x4_GetTrustLevel(This,trustLevel) (This)->lpVtbl->GetTrustLevel(This,trustLevel)
/*** IReference<ABI::Windows::Foundation::Numerics::Matrix4x4 > methods ***/
#define __FIReference_1_Matrix4x4_get_Value(This,value) (This)->lpVtbl->get_Value(This,value)
#else
/*** IUnknown methods ***/
static inline HRESULT __FIReference_1_Matrix4x4_QueryInterface(__FIReference_1_Matrix4x4* This,REFIID riid,void **ppvObject) {
    return This->lpVtbl->QueryInterface(This,riid,ppvObject);
}
static inline ULONG __FIReference_1_Matrix4x4_AddRef(__FIReference_1_Matrix4x4* This) {
    return This->lpVtbl->AddRef(This);
}
static inline ULONG __FIReference_1_Matrix4x4_Release(__FIReference_1_Matrix4x4* This) {
    return This->lpVtbl->Release(This);
}
/*** IInspectable methods ***/
static inline HRESULT __FIReference_1_Matrix4x4_GetIids(__FIReference_1_Matrix4x4* This,ULONG *iidCount,IID **iids) {
    return This->lpVtbl->GetIids(This,iidCount,iids);
}
static inline HRESULT __FIReference_1_Matrix4x4_GetRuntimeClassName(__FIReference_1_Matrix4x4* This,HSTRING *className) {
    return This->lpVtbl->GetRuntimeClassName(This,className);
}
static inline HRESULT __FIReference_1_Matrix4x4_GetTrustLevel(__FIReference_1_Matrix4x4* This,TrustLevel *trustLevel) {
    return This->lpVtbl->GetTrustLevel(This,trustLevel);
}
/*** IReference<ABI::Windows::Foundation::Numerics::Matrix4x4 > methods ***/
static inline HRESULT __FIReference_1_Matrix4x4_get_Value(__FIReference_1_Matrix4x4* This,__x_ABI_CWindows_CFoundation_CNumerics_CMatrix4x4 *value) {
    return This->lpVtbl->get_Value(This,value);
}
#endif
#ifdef WIDL_using_Windows_Foundation
#define IID_IReference_Matrix4x4 IID___FIReference_1_Matrix4x4
#define IReference_Matrix4x4Vtbl __FIReference_1_Matrix4x4Vtbl
#define IReference_Matrix4x4 __FIReference_1_Matrix4x4
#define IReference_Matrix4x4_QueryInterface __FIReference_1_Matrix4x4_QueryInterface
#define IReference_Matrix4x4_AddRef __FIReference_1_Matrix4x4_AddRef
#define IReference_Matrix4x4_Release __FIReference_1_Matrix4x4_Release
#define IReference_Matrix4x4_GetIids __FIReference_1_Matrix4x4_GetIids
#define IReference_Matrix4x4_GetRuntimeClassName __FIReference_1_Matrix4x4_GetRuntimeClassName
#define IReference_Matrix4x4_GetTrustLevel __FIReference_1_Matrix4x4_GetTrustLevel
#define IReference_Matrix4x4_get_Value __FIReference_1_Matrix4x4_get_Value
#endif /* WIDL_using_Windows_Foundation */
#endif

#endif

#endif  /* ____FIReference_1_Matrix4x4_INTERFACE_DEFINED__ */

/*****************************************************************************
 * IReference<ABI::Windows::Foundation::Numerics::Vector2 > interface
 */
#ifndef ____FIReference_1_Vector2_INTERFACE_DEFINED__
#define ____FIReference_1_Vector2_INTERFACE_DEFINED__

DEFINE_GUID(IID___FIReference_1_Vector2, 0x48f6a69e, 0x8465, 0x57ae, 0x94,0x00, 0x97,0x64,0x08,0x7f,0x65,0xad);
#if defined(__cplusplus) && !defined(CINTERFACE)
} /* extern "C" */
namespace ABI {
    namespace Windows {
        namespace Foundation {
            template<>
            MIDL_INTERFACE("48f6a69e-8465-57ae-9400-9764087f65ad")
            IReference<ABI::Windows::Foundation::Numerics::Vector2 > : IReference_impl<ABI::Windows::Foundation::Numerics::Vector2 >
            {
            };
        }
    }
}
extern "C" {
#ifdef __CRT_UUID_DECL
__CRT_UUID_DECL(__FIReference_1_Vector2, 0x48f6a69e, 0x8465, 0x57ae, 0x94,0x00, 0x97,0x64,0x08,0x7f,0x65,0xad)
#endif
#else
typedef struct __FIReference_1_Vector2Vtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        __FIReference_1_Vector2 *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        __FIReference_1_Vector2 *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        __FIReference_1_Vector2 *This);

    /*** IInspectable methods ***/
    HRESULT (STDMETHODCALLTYPE *GetIids)(
        __FIReference_1_Vector2 *This,
        ULONG *iidCount,
        IID **iids);

    HRESULT (STDMETHODCALLTYPE *GetRuntimeClassName)(
        __FIReference_1_Vector2 *This,
        HSTRING *className);

    HRESULT (STDMETHODCALLTYPE *GetTrustLevel)(
        __FIReference_1_Vector2 *This,
        TrustLevel *trustLevel);

    /*** IReference<ABI::Windows::Foundation::Numerics::Vector2 > methods ***/
    HRESULT (STDMETHODCALLTYPE *get_Value)(
        __FIReference_1_Vector2 *This,
        __x_ABI_CWindows_CFoundation_CNumerics_CVector2 *value);

    END_INTERFACE
} __FIReference_1_Vector2Vtbl;

interface __FIReference_1_Vector2 {
    CONST_VTBL __FIReference_1_Vector2Vtbl* lpVtbl;
};

#ifdef COBJMACROS
#ifndef WIDL_C_INLINE_WRAPPERS
/*** IUnknown methods ***/
#define __FIReference_1_Vector2_QueryInterface(This,riid,ppvObject) (This)->lpVtbl->QueryInterface(This,riid,ppvObject)
#define __FIReference_1_Vector2_AddRef(This) (This)->lpVtbl->AddRef(This)
#define __FIReference_1_Vector2_Release(This) (This)->lpVtbl->Release(This)
/*** IInspectable methods ***/
#define __FIReference_1_Vector2_GetIids(This,iidCount,iids) (This)->lpVtbl->GetIids(This,iidCount,iids)
#define __FIReference_1_Vector2_GetRuntimeClassName(This,className) (This)->lpVtbl->GetRuntimeClassName(This,className)
#define __FIReference_1_Vector2_GetTrustLevel(This,trustLevel) (This)->lpVtbl->GetTrustLevel(This,trustLevel)
/*** IReference<ABI::Windows::Foundation::Numerics::Vector2 > methods ***/
#define __FIReference_1_Vector2_get_Value(This,value) (This)->lpVtbl->get_Value(This,value)
#else
/*** IUnknown methods ***/
static inline HRESULT __FIReference_1_Vector2_QueryInterface(__FIReference_1_Vector2* This,REFIID riid,void **ppvObject) {
    return This->lpVtbl->QueryInterface(This,riid,ppvObject);
}
static inline ULONG __FIReference_1_Vector2_AddRef(__FIReference_1_Vector2* This) {
    return This->lpVtbl->AddRef(This);
}
static inline ULONG __FIReference_1_Vector2_Release(__FIReference_1_Vector2* This) {
    return This->lpVtbl->Release(This);
}
/*** IInspectable methods ***/
static inline HRESULT __FIReference_1_Vector2_GetIids(__FIReference_1_Vector2* This,ULONG *iidCount,IID **iids) {
    return This->lpVtbl->GetIids(This,iidCount,iids);
}
static inline HRESULT __FIReference_1_Vector2_GetRuntimeClassName(__FIReference_1_Vector2* This,HSTRING *className) {
    return This->lpVtbl->GetRuntimeClassName(This,className);
}
static inline HRESULT __FIReference_1_Vector2_GetTrustLevel(__FIReference_1_Vector2* This,TrustLevel *trustLevel) {
    return This->lpVtbl->GetTrustLevel(This,trustLevel);
}
/*** IReference<ABI::Windows::Foundation::Numerics::Vector2 > methods ***/
static inline HRESULT __FIReference_1_Vector2_get_Value(__FIReference_1_Vector2* This,__x_ABI_CWindows_CFoundation_CNumerics_CVector2 *value) {
    return This->lpVtbl->get_Value(This,value);
}
#endif
#ifdef WIDL_using_Windows_Foundation
#define IID_IReference_Vector2 IID___FIReference_1_Vector2
#define IReference_Vector2Vtbl __FIReference_1_Vector2Vtbl
#define IReference_Vector2 __FIReference_1_Vector2
#define IReference_Vector2_QueryInterface __FIReference_1_Vector2_QueryInterface
#define IReference_Vector2_AddRef __FIReference_1_Vector2_AddRef
#define IReference_Vector2_Release __FIReference_1_Vector2_Release
#define IReference_Vector2_GetIids __FIReference_1_Vector2_GetIids
#define IReference_Vector2_GetRuntimeClassName __FIReference_1_Vector2_GetRuntimeClassName
#define IReference_Vector2_GetTrustLevel __FIReference_1_Vector2_GetTrustLevel
#define IReference_Vector2_get_Value __FIReference_1_Vector2_get_Value
#endif /* WIDL_using_Windows_Foundation */
#endif

#endif

#endif  /* ____FIReference_1_Vector2_INTERFACE_DEFINED__ */

/*****************************************************************************
 * IReference<ABI::Windows::Foundation::Numerics::Vector3 > interface
 */
#ifndef ____FIReference_1_Vector3_INTERFACE_DEFINED__
#define ____FIReference_1_Vector3_INTERFACE_DEFINED__

DEFINE_GUID(IID___FIReference_1_Vector3, 0x1ee770ff, 0xc954, 0x59ca, 0xa7,0x54, 0x61,0x99,0xa9,0xbe,0x28,0x2c);
#if defined(__cplusplus) && !defined(CINTERFACE)
} /* extern "C" */
namespace ABI {
    namespace Windows {
        namespace Foundation {
            template<>
            MIDL_INTERFACE("1ee770ff-c954-59ca-a754-6199a9be282c")
            IReference<ABI::Windows::Foundation::Numerics::Vector3 > : IReference_impl<ABI::Windows::Foundation::Numerics::Vector3 >
            {
            };
        }
    }
}
extern "C" {
#ifdef __CRT_UUID_DECL
__CRT_UUID_DECL(__FIReference_1_Vector3, 0x1ee770ff, 0xc954, 0x59ca, 0xa7,0x54, 0x61,0x99,0xa9,0xbe,0x28,0x2c)
#endif
#else
typedef struct __FIReference_1_Vector3Vtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        __FIReference_1_Vector3 *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        __FIReference_1_Vector3 *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        __FIReference_1_Vector3 *This);

    /*** IInspectable methods ***/
    HRESULT (STDMETHODCALLTYPE *GetIids)(
        __FIReference_1_Vector3 *This,
        ULONG *iidCount,
        IID **iids);

    HRESULT (STDMETHODCALLTYPE *GetRuntimeClassName)(
        __FIReference_1_Vector3 *This,
        HSTRING *className);

    HRESULT (STDMETHODCALLTYPE *GetTrustLevel)(
        __FIReference_1_Vector3 *This,
        TrustLevel *trustLevel);

    /*** IReference<ABI::Windows::Foundation::Numerics::Vector3 > methods ***/
    HRESULT (STDMETHODCALLTYPE *get_Value)(
        __FIReference_1_Vector3 *This,
        __x_ABI_CWindows_CFoundation_CNumerics_CVector3 *value);

    END_INTERFACE
} __FIReference_1_Vector3Vtbl;

interface __FIReference_1_Vector3 {
    CONST_VTBL __FIReference_1_Vector3Vtbl* lpVtbl;
};

#ifdef COBJMACROS
#ifndef WIDL_C_INLINE_WRAPPERS
/*** IUnknown methods ***/
#define __FIReference_1_Vector3_QueryInterface(This,riid,ppvObject) (This)->lpVtbl->QueryInterface(This,riid,ppvObject)
#define __FIReference_1_Vector3_AddRef(This) (This)->lpVtbl->AddRef(This)
#define __FIReference_1_Vector3_Release(This) (This)->lpVtbl->Release(This)
/*** IInspectable methods ***/
#define __FIReference_1_Vector3_GetIids(This,iidCount,iids) (This)->lpVtbl->GetIids(This,iidCount,iids)
#define __FIReference_1_Vector3_GetRuntimeClassName(This,className) (This)->lpVtbl->GetRuntimeClassName(This,className)
#define __FIReference_1_Vector3_GetTrustLevel(This,trustLevel) (This)->lpVtbl->GetTrustLevel(This,trustLevel)
/*** IReference<ABI::Windows::Foundation::Numerics::Vector3 > methods ***/
#define __FIReference_1_Vector3_get_Value(This,value) (This)->lpVtbl->get_Value(This,value)
#else
/*** IUnknown methods ***/
static inline HRESULT __FIReference_1_Vector3_QueryInterface(__FIReference_1_Vector3* This,REFIID riid,void **ppvObject) {
    return This->lpVtbl->QueryInterface(This,riid,ppvObject);
}
static inline ULONG __FIReference_1_Vector3_AddRef(__FIReference_1_Vector3* This) {
    return This->lpVtbl->AddRef(This);
}
static inline ULONG __FIReference_1_Vector3_Release(__FIReference_1_Vector3* This) {
    return This->lpVtbl->Release(This);
}
/*** IInspectable methods ***/
static inline HRESULT __FIReference_1_Vector3_GetIids(__FIReference_1_Vector3* This,ULONG *iidCount,IID **iids) {
    return This->lpVtbl->GetIids(This,iidCount,iids);
}
static inline HRESULT __FIReference_1_Vector3_GetRuntimeClassName(__FIReference_1_Vector3* This,HSTRING *className) {
    return This->lpVtbl->GetRuntimeClassName(This,className);
}
static inline HRESULT __FIReference_1_Vector3_GetTrustLevel(__FIReference_1_Vector3* This,TrustLevel *trustLevel) {
    return This->lpVtbl->GetTrustLevel(This,trustLevel);
}
/*** IReference<ABI::Windows::Foundation::Numerics::Vector3 > methods ***/
static inline HRESULT __FIReference_1_Vector3_get_Value(__FIReference_1_Vector3* This,__x_ABI_CWindows_CFoundation_CNumerics_CVector3 *value) {
    return This->lpVtbl->get_Value(This,value);
}
#endif
#ifdef WIDL_using_Windows_Foundation
#define IID_IReference_Vector3 IID___FIReference_1_Vector3
#define IReference_Vector3Vtbl __FIReference_1_Vector3Vtbl
#define IReference_Vector3 __FIReference_1_Vector3
#define IReference_Vector3_QueryInterface __FIReference_1_Vector3_QueryInterface
#define IReference_Vector3_AddRef __FIReference_1_Vector3_AddRef
#define IReference_Vector3_Release __FIReference_1_Vector3_Release
#define IReference_Vector3_GetIids __FIReference_1_Vector3_GetIids
#define IReference_Vector3_GetRuntimeClassName __FIReference_1_Vector3_GetRuntimeClassName
#define IReference_Vector3_GetTrustLevel __FIReference_1_Vector3_GetTrustLevel
#define IReference_Vector3_get_Value __FIReference_1_Vector3_get_Value
#endif /* WIDL_using_Windows_Foundation */
#endif

#endif

#endif  /* ____FIReference_1_Vector3_INTERFACE_DEFINED__ */

/* Begin additional prototypes for all interfaces */


/* End additional prototypes */

#ifdef __cplusplus
}
#endif

#endif /* __windows_foundation_numerics_h__ */
