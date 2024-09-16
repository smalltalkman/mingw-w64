/*** Autogenerated by WIDL 9.17 from include/naptypes.idl - Do not edit ***/

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

#ifndef __naptypes_h__
#define __naptypes_h__

#ifndef __WIDL_INLINE
#if defined(__cplusplus) || defined(_MSC_VER)
#define __WIDL_INLINE inline
#elif defined(__GNUC__)
#define __WIDL_INLINE __inline__
#endif
#endif

/* Forward declarations */

/* Headers for imported files */

#include <oaidl.h>
#include <ocidl.h>

#ifdef __cplusplus
extern "C" {
#endif

#include <winapifamily.h>

#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
/*****************************************************************************
 * INapTypes interface (v0.0)
 */
#ifndef __INapTypes_INTERFACE_DEFINED__
#define __INapTypes_INTERFACE_DEFINED__

extern RPC_IF_HANDLE INapTypes_v0_0_c_ifspec;
extern RPC_IF_HANDLE INapTypes_v0_0_s_ifspec;
#define freshSoHRequest (0x1)

#define shaFixup (0x1)

#define percentageNotSupported (101)

#define maxSoHAttributeCount (100)

#define maxSoHAttributeSize (4000)

#define minNetworkSoHSize (12)

#define maxNetworkSoHSize (4000)

#define maxDwordCountPerSoHAttribute (maxSoHAttributeSize / sizeof(DWORD))

#define maxIpv4CountPerSoHAttribute (maxSoHAttributeSize / 4)

#define maxIpv6CountPerSoHAttribute (maxSoHAttributeSize / 16)

#define maxStringLength (1024)

#define maxStringLengthInBytes ((maxStringLength + 1) * sizeof(WCHAR))

#define maxSystemHealthEntityCount (20)

#define maxEnforcerCount (20)

#define maxPrivateDataSize (200)

#define maxConnectionCountPerEnforcer (20)

#define maxCachedSoHCount ((maxSystemHealthEntityCount * maxEnforcerCount) * maxConnectionCountPerEnforcer)

#define failureCategoryCount (5)

#define ComponentTypeEnforcementClientSoH (0x1)

#define ComponentTypeEnforcementClientRp (0x2)

typedef enum tagIsolationState {
    isolationStateNotRestricted = 1,
    isolationStateInProbation = 2,
    isolationStateRestrictedAccess = 3
} IsolationState;
typedef enum tagExtendedIsolationState {
    extendedIsolationStateNoData = 0x0,
    extendedIsolationStateTransition = 0x1,
    extendedIsolationStateInfected = 0x2,
    extendedIsolationStateUnknown = 0x3
} ExtendedIsolationState;
typedef enum tagNapTracingLevel {
    tracingLevelUndefined = 0,
    tracingLevelBasic = 1,
    tracingLevelAdvanced = 2,
    tracingLevelDebug = 3
} NapTracingLevel;
typedef enum tagFailureCategory {
    failureCategoryNone = 0,
    failureCategoryOther = 1,
    failureCategoryClientComponent = 2,
    failureCategoryClientCommunication = 3,
    failureCategoryServerComponent = 4,
    failureCategoryServerCommunication = 5
} FailureCategory;
typedef enum tagFixupState {
    fixupStateSuccess = 0,
    fixupStateInProgress = 1,
    fixupStateCouldNotUpdate = 2
} FixupState;
typedef enum tagNapNotifyType {
    napNotifyTypeUnknown = 0,
    napNotifyTypeServiceState = 1,
    napNotifyTypeQuarState = 2
} NapNotifyType;
typedef enum tagRemoteConfigurationType {
    remoteConfigTypeMachine = 1,
    remoteConfigTypeConfigBlob = 2
} RemoteConfigurationType;
typedef FILETIME ProbationTime;
typedef UINT32 MessageId;
typedef UINT32 NapComponentId;
typedef NapComponentId SystemHealthEntityId;
typedef NapComponentId EnforcementEntityId;
typedef struct tagCountedString {
    UINT16 length;
    WCHAR *string;
} CountedString;
typedef CountedString StringCorrelationId;
typedef struct tagIsolationInfo {
    IsolationState isolationState;
    ProbationTime probEndTime;
    CountedString failureUrl;
} IsolationInfo;
typedef struct tagIsolationInfoEx {
    IsolationState isolationState;
    ExtendedIsolationState extendedIsolationState;
    ProbationTime probEndTime;
    CountedString failureUrl;
} IsolationInfoEx;
typedef struct tagFailureCategoryMapping {
    WINBOOL mappingCompliance[5];
} FailureCategoryMapping;
typedef UINT16 SystemHealthEntityCount;
typedef UINT16 EnforcementEntityCount;
typedef struct tagCorrelationId {
    GUID connId;
    FILETIME timeStamp;
} CorrelationId;
typedef GUID ConnectionId;
typedef UINT8 Percentage;
typedef struct tagResultCodes {
    UINT16 count;
    HRESULT *results;
} ResultCodes;
typedef struct tagIpv4Address {
    BYTE addr[4];
} Ipv4Address;
typedef struct tagIpv6Address {
    BYTE addr[16];
} Ipv6Address;
typedef struct tagFixupInfo {
    FixupState state;
    Percentage percentage;
    ResultCodes resultCodes;
    MessageId fixupMsgId;
} FixupInfo;
typedef struct tagSystemHealthAgentState {
    SystemHealthEntityId id;
    ResultCodes shaResultCodes;
    FailureCategory failureCategory;
    FixupInfo fixupInfo;
} SystemHealthAgentState;
typedef struct tagSoHAttribute {
    UINT16 type;
    UINT16 size;
    BYTE *value;
} SoHAttribute;
typedef struct tagSoH {
    UINT16 count;
    SoHAttribute *attributes;
} SoH;
typedef struct tagSoH SoHRequest;
typedef struct tagSoH SoHResponse;
typedef struct tagNetworkSoH {
    UINT16 size;
    BYTE *data;
} NetworkSoH;
typedef struct tagNetworkSoH NetworkSoHRequest;
typedef struct tagNetworkSoH NetworkSoHResponse;
typedef struct tagPrivateData {
    UINT16 size;
    BYTE *data;
} PrivateData;
typedef struct tagNapComponentRegistrationInfo {
    NapComponentId id;
    CountedString friendlyName;
    CountedString description;
    CountedString version;
    CountedString vendorName;
    CLSID infoClsid;
    CLSID configClsid;
    FILETIME registrationDate;
    UINT32 componentType;
} NapComponentRegistrationInfo;

#endif  /* __INapTypes_INTERFACE_DEFINED__ */

#endif
/* Begin additional prototypes for all interfaces */


/* End additional prototypes */

#ifdef __cplusplus
}
#endif

#endif /* __naptypes_h__ */
