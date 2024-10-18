/*** Autogenerated by WIDL 9.20 from include/windows.devices.power.idl - Do not edit ***/

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

#ifndef __windows_devices_power_h__
#define __windows_devices_power_h__

/* Forward declarations */

#ifndef ____x_ABI_CWindows_CDevices_CPower_CIBatteryReport_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CPower_CIBatteryReport_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CDevices_CPower_CIBatteryReport __x_ABI_CWindows_CDevices_CPower_CIBatteryReport;
#ifdef __cplusplus
#define __x_ABI_CWindows_CDevices_CPower_CIBatteryReport ABI::Windows::Devices::Power::IBatteryReport
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Power {
                interface IBatteryReport;
            }
        }
    }
}
#endif /* __cplusplus */
#endif

#ifndef ____x_ABI_CWindows_CDevices_CPower_CBatteryReport_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CPower_CBatteryReport_FWD_DEFINED__
#ifdef __cplusplus
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Power {
                class BatteryReport;
            }
        }
    }
}
#else
typedef struct __x_ABI_CWindows_CDevices_CPower_CBatteryReport __x_ABI_CWindows_CDevices_CPower_CBatteryReport;
#endif /* defined __cplusplus */
#endif /* defined ____x_ABI_CWindows_CDevices_CPower_CBatteryReport_FWD_DEFINED__ */

/* Headers for imported files */

#include <inspectable.h>
#include <windows.foundation.h>
#include <windows.system.power.h>

#ifdef __cplusplus
extern "C" {
#endif

#ifndef ____x_ABI_CWindows_CDevices_CPower_CIBatteryReport_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CPower_CIBatteryReport_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CDevices_CPower_CIBatteryReport __x_ABI_CWindows_CDevices_CPower_CIBatteryReport;
#ifdef __cplusplus
#define __x_ABI_CWindows_CDevices_CPower_CIBatteryReport ABI::Windows::Devices::Power::IBatteryReport
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Power {
                interface IBatteryReport;
            }
        }
    }
}
#endif /* __cplusplus */
#endif

/*****************************************************************************
 * IBatteryReport interface
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#ifndef ____x_ABI_CWindows_CDevices_CPower_CIBatteryReport_INTERFACE_DEFINED__
#define ____x_ABI_CWindows_CDevices_CPower_CIBatteryReport_INTERFACE_DEFINED__

DEFINE_GUID(IID___x_ABI_CWindows_CDevices_CPower_CIBatteryReport, 0xc9858c3a, 0x4e13, 0x420a, 0xa8,0xd0, 0x24,0xf1,0x8f,0x39,0x54,0x01);
#if defined(__cplusplus) && !defined(CINTERFACE)
} /* extern "C" */
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Power {
                MIDL_INTERFACE("c9858c3a-4e13-420a-a8d0-24f18f395401")
                IBatteryReport : public IInspectable
                {
                    virtual HRESULT STDMETHODCALLTYPE get_ChargeRateInMilliwatts(
                        ABI::Windows::Foundation::IReference<INT32 > **value) = 0;

                    virtual HRESULT STDMETHODCALLTYPE get_DesignCapacityInMilliwattHours(
                        ABI::Windows::Foundation::IReference<INT32 > **value) = 0;

                    virtual HRESULT STDMETHODCALLTYPE get_FullChargeCapacityInMilliwattHours(
                        ABI::Windows::Foundation::IReference<INT32 > **value) = 0;

                    virtual HRESULT STDMETHODCALLTYPE get_RemainingCapacityInMilliwattHours(
                        ABI::Windows::Foundation::IReference<INT32 > **value) = 0;

                    virtual HRESULT STDMETHODCALLTYPE get_Status(
                        ABI::Windows::System::Power::BatteryStatus *value) = 0;

                };
            }
        }
    }
}
extern "C" {
#ifdef __CRT_UUID_DECL
__CRT_UUID_DECL(__x_ABI_CWindows_CDevices_CPower_CIBatteryReport, 0xc9858c3a, 0x4e13, 0x420a, 0xa8,0xd0, 0x24,0xf1,0x8f,0x39,0x54,0x01)
#endif
#else
typedef struct __x_ABI_CWindows_CDevices_CPower_CIBatteryReportVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        __x_ABI_CWindows_CDevices_CPower_CIBatteryReport *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        __x_ABI_CWindows_CDevices_CPower_CIBatteryReport *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        __x_ABI_CWindows_CDevices_CPower_CIBatteryReport *This);

    /*** IInspectable methods ***/
    HRESULT (STDMETHODCALLTYPE *GetIids)(
        __x_ABI_CWindows_CDevices_CPower_CIBatteryReport *This,
        ULONG *iidCount,
        IID **iids);

    HRESULT (STDMETHODCALLTYPE *GetRuntimeClassName)(
        __x_ABI_CWindows_CDevices_CPower_CIBatteryReport *This,
        HSTRING *className);

    HRESULT (STDMETHODCALLTYPE *GetTrustLevel)(
        __x_ABI_CWindows_CDevices_CPower_CIBatteryReport *This,
        TrustLevel *trustLevel);

    /*** IBatteryReport methods ***/
    HRESULT (STDMETHODCALLTYPE *get_ChargeRateInMilliwatts)(
        __x_ABI_CWindows_CDevices_CPower_CIBatteryReport *This,
        __FIReference_1_INT32 **value);

    HRESULT (STDMETHODCALLTYPE *get_DesignCapacityInMilliwattHours)(
        __x_ABI_CWindows_CDevices_CPower_CIBatteryReport *This,
        __FIReference_1_INT32 **value);

    HRESULT (STDMETHODCALLTYPE *get_FullChargeCapacityInMilliwattHours)(
        __x_ABI_CWindows_CDevices_CPower_CIBatteryReport *This,
        __FIReference_1_INT32 **value);

    HRESULT (STDMETHODCALLTYPE *get_RemainingCapacityInMilliwattHours)(
        __x_ABI_CWindows_CDevices_CPower_CIBatteryReport *This,
        __FIReference_1_INT32 **value);

    HRESULT (STDMETHODCALLTYPE *get_Status)(
        __x_ABI_CWindows_CDevices_CPower_CIBatteryReport *This,
        __x_ABI_CWindows_CSystem_CPower_CBatteryStatus *value);

    END_INTERFACE
} __x_ABI_CWindows_CDevices_CPower_CIBatteryReportVtbl;

interface __x_ABI_CWindows_CDevices_CPower_CIBatteryReport {
    CONST_VTBL __x_ABI_CWindows_CDevices_CPower_CIBatteryReportVtbl* lpVtbl;
};

#ifdef COBJMACROS
#ifndef WIDL_C_INLINE_WRAPPERS
/*** IUnknown methods ***/
#define __x_ABI_CWindows_CDevices_CPower_CIBatteryReport_QueryInterface(This,riid,ppvObject) (This)->lpVtbl->QueryInterface(This,riid,ppvObject)
#define __x_ABI_CWindows_CDevices_CPower_CIBatteryReport_AddRef(This) (This)->lpVtbl->AddRef(This)
#define __x_ABI_CWindows_CDevices_CPower_CIBatteryReport_Release(This) (This)->lpVtbl->Release(This)
/*** IInspectable methods ***/
#define __x_ABI_CWindows_CDevices_CPower_CIBatteryReport_GetIids(This,iidCount,iids) (This)->lpVtbl->GetIids(This,iidCount,iids)
#define __x_ABI_CWindows_CDevices_CPower_CIBatteryReport_GetRuntimeClassName(This,className) (This)->lpVtbl->GetRuntimeClassName(This,className)
#define __x_ABI_CWindows_CDevices_CPower_CIBatteryReport_GetTrustLevel(This,trustLevel) (This)->lpVtbl->GetTrustLevel(This,trustLevel)
/*** IBatteryReport methods ***/
#define __x_ABI_CWindows_CDevices_CPower_CIBatteryReport_get_ChargeRateInMilliwatts(This,value) (This)->lpVtbl->get_ChargeRateInMilliwatts(This,value)
#define __x_ABI_CWindows_CDevices_CPower_CIBatteryReport_get_DesignCapacityInMilliwattHours(This,value) (This)->lpVtbl->get_DesignCapacityInMilliwattHours(This,value)
#define __x_ABI_CWindows_CDevices_CPower_CIBatteryReport_get_FullChargeCapacityInMilliwattHours(This,value) (This)->lpVtbl->get_FullChargeCapacityInMilliwattHours(This,value)
#define __x_ABI_CWindows_CDevices_CPower_CIBatteryReport_get_RemainingCapacityInMilliwattHours(This,value) (This)->lpVtbl->get_RemainingCapacityInMilliwattHours(This,value)
#define __x_ABI_CWindows_CDevices_CPower_CIBatteryReport_get_Status(This,value) (This)->lpVtbl->get_Status(This,value)
#else
/*** IUnknown methods ***/
static inline HRESULT __x_ABI_CWindows_CDevices_CPower_CIBatteryReport_QueryInterface(__x_ABI_CWindows_CDevices_CPower_CIBatteryReport* This,REFIID riid,void **ppvObject) {
    return This->lpVtbl->QueryInterface(This,riid,ppvObject);
}
static inline ULONG __x_ABI_CWindows_CDevices_CPower_CIBatteryReport_AddRef(__x_ABI_CWindows_CDevices_CPower_CIBatteryReport* This) {
    return This->lpVtbl->AddRef(This);
}
static inline ULONG __x_ABI_CWindows_CDevices_CPower_CIBatteryReport_Release(__x_ABI_CWindows_CDevices_CPower_CIBatteryReport* This) {
    return This->lpVtbl->Release(This);
}
/*** IInspectable methods ***/
static inline HRESULT __x_ABI_CWindows_CDevices_CPower_CIBatteryReport_GetIids(__x_ABI_CWindows_CDevices_CPower_CIBatteryReport* This,ULONG *iidCount,IID **iids) {
    return This->lpVtbl->GetIids(This,iidCount,iids);
}
static inline HRESULT __x_ABI_CWindows_CDevices_CPower_CIBatteryReport_GetRuntimeClassName(__x_ABI_CWindows_CDevices_CPower_CIBatteryReport* This,HSTRING *className) {
    return This->lpVtbl->GetRuntimeClassName(This,className);
}
static inline HRESULT __x_ABI_CWindows_CDevices_CPower_CIBatteryReport_GetTrustLevel(__x_ABI_CWindows_CDevices_CPower_CIBatteryReport* This,TrustLevel *trustLevel) {
    return This->lpVtbl->GetTrustLevel(This,trustLevel);
}
/*** IBatteryReport methods ***/
static inline HRESULT __x_ABI_CWindows_CDevices_CPower_CIBatteryReport_get_ChargeRateInMilliwatts(__x_ABI_CWindows_CDevices_CPower_CIBatteryReport* This,__FIReference_1_INT32 **value) {
    return This->lpVtbl->get_ChargeRateInMilliwatts(This,value);
}
static inline HRESULT __x_ABI_CWindows_CDevices_CPower_CIBatteryReport_get_DesignCapacityInMilliwattHours(__x_ABI_CWindows_CDevices_CPower_CIBatteryReport* This,__FIReference_1_INT32 **value) {
    return This->lpVtbl->get_DesignCapacityInMilliwattHours(This,value);
}
static inline HRESULT __x_ABI_CWindows_CDevices_CPower_CIBatteryReport_get_FullChargeCapacityInMilliwattHours(__x_ABI_CWindows_CDevices_CPower_CIBatteryReport* This,__FIReference_1_INT32 **value) {
    return This->lpVtbl->get_FullChargeCapacityInMilliwattHours(This,value);
}
static inline HRESULT __x_ABI_CWindows_CDevices_CPower_CIBatteryReport_get_RemainingCapacityInMilliwattHours(__x_ABI_CWindows_CDevices_CPower_CIBatteryReport* This,__FIReference_1_INT32 **value) {
    return This->lpVtbl->get_RemainingCapacityInMilliwattHours(This,value);
}
static inline HRESULT __x_ABI_CWindows_CDevices_CPower_CIBatteryReport_get_Status(__x_ABI_CWindows_CDevices_CPower_CIBatteryReport* This,__x_ABI_CWindows_CSystem_CPower_CBatteryStatus *value) {
    return This->lpVtbl->get_Status(This,value);
}
#endif
#ifdef WIDL_using_Windows_Devices_Power
#define IID_IBatteryReport IID___x_ABI_CWindows_CDevices_CPower_CIBatteryReport
#define IBatteryReportVtbl __x_ABI_CWindows_CDevices_CPower_CIBatteryReportVtbl
#define IBatteryReport __x_ABI_CWindows_CDevices_CPower_CIBatteryReport
#define IBatteryReport_QueryInterface __x_ABI_CWindows_CDevices_CPower_CIBatteryReport_QueryInterface
#define IBatteryReport_AddRef __x_ABI_CWindows_CDevices_CPower_CIBatteryReport_AddRef
#define IBatteryReport_Release __x_ABI_CWindows_CDevices_CPower_CIBatteryReport_Release
#define IBatteryReport_GetIids __x_ABI_CWindows_CDevices_CPower_CIBatteryReport_GetIids
#define IBatteryReport_GetRuntimeClassName __x_ABI_CWindows_CDevices_CPower_CIBatteryReport_GetRuntimeClassName
#define IBatteryReport_GetTrustLevel __x_ABI_CWindows_CDevices_CPower_CIBatteryReport_GetTrustLevel
#define IBatteryReport_get_ChargeRateInMilliwatts __x_ABI_CWindows_CDevices_CPower_CIBatteryReport_get_ChargeRateInMilliwatts
#define IBatteryReport_get_DesignCapacityInMilliwattHours __x_ABI_CWindows_CDevices_CPower_CIBatteryReport_get_DesignCapacityInMilliwattHours
#define IBatteryReport_get_FullChargeCapacityInMilliwattHours __x_ABI_CWindows_CDevices_CPower_CIBatteryReport_get_FullChargeCapacityInMilliwattHours
#define IBatteryReport_get_RemainingCapacityInMilliwattHours __x_ABI_CWindows_CDevices_CPower_CIBatteryReport_get_RemainingCapacityInMilliwattHours
#define IBatteryReport_get_Status __x_ABI_CWindows_CDevices_CPower_CIBatteryReport_get_Status
#endif /* WIDL_using_Windows_Devices_Power */
#endif

#endif

#endif  /* ____x_ABI_CWindows_CDevices_CPower_CIBatteryReport_INTERFACE_DEFINED__ */
#endif /* WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000 */

/*
 * Class Windows.Devices.Power.BatteryReport
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#ifndef RUNTIMECLASS_Windows_Devices_Power_BatteryReport_DEFINED
#define RUNTIMECLASS_Windows_Devices_Power_BatteryReport_DEFINED
#if !defined(_MSC_VER) && !defined(__MINGW32__)
static const WCHAR RuntimeClass_Windows_Devices_Power_BatteryReport[] = {'W','i','n','d','o','w','s','.','D','e','v','i','c','e','s','.','P','o','w','e','r','.','B','a','t','t','e','r','y','R','e','p','o','r','t',0};
#elif defined(__GNUC__) && !defined(__cplusplus)
const DECLSPEC_SELECTANY WCHAR RuntimeClass_Windows_Devices_Power_BatteryReport[] = L"Windows.Devices.Power.BatteryReport";
#else
extern const DECLSPEC_SELECTANY WCHAR RuntimeClass_Windows_Devices_Power_BatteryReport[] = {'W','i','n','d','o','w','s','.','D','e','v','i','c','e','s','.','P','o','w','e','r','.','B','a','t','t','e','r','y','R','e','p','o','r','t',0};
#endif
#endif /* RUNTIMECLASS_Windows_Devices_Power_BatteryReport_DEFINED */
#endif /* WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000 */

/* Begin additional prototypes for all interfaces */


/* End additional prototypes */

#ifdef __cplusplus
}
#endif

#endif /* __windows_devices_power_h__ */
