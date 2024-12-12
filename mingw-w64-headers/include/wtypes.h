/*** Autogenerated by WIDL 10.0-rc1 from include/wtypes.idl - Do not edit ***/

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

#ifndef __wtypes_h__
#define __wtypes_h__

/* Forward declarations */

/* Headers for imported files */

#include <wtypesbase.h>

#ifdef __cplusplus
extern "C" {
#endif

/**
 * This file is part of the mingw-w64 runtime package.
 * No warranty is given; refer to the file DISCLAIMER within this package.
 */


/*****************************************************************************
 * IWinTypes interface (v0.1)
 */
#ifndef __IWinTypes_INTERFACE_DEFINED__
#define __IWinTypes_INTERFACE_DEFINED__

extern RPC_IF_HANDLE IWinTypes_v0_1_c_ifspec;
extern RPC_IF_HANDLE IWinTypes_v0_1_s_ifspec;
typedef struct tagRemHGLOBAL {
    LONG fNullHGlobal;
    ULONG cbData;
    byte data[1];
} RemHGLOBAL;

typedef struct tagRemHMETAFILEPICT {
    LONG mm;
    LONG xExt;
    LONG yExt;
    ULONG cbData;
    byte data[1];
} RemHMETAFILEPICT;

typedef struct tagRemHENHMETAFILE {
    ULONG cbData;
    byte data[1];
} RemHENHMETAFILE;
typedef struct tagRemHBITMAP {
    ULONG cbData;
    byte data[1];
} RemHBITMAP;

typedef struct tagRemHPALETTE {
    ULONG cbData;
    byte data[1];
} RemHPALETTE;

typedef struct tagRemBRUSH {
    ULONG cbData;
    byte data[1];
} RemHBRUSH;
#if 0
typedef UINT_PTR WPARAM;
typedef LONG_PTR LPARAM;
typedef LONG_PTR LRESULT;
typedef void *HMODULE;
typedef void *HINSTANCE;
typedef void *HTASK;
typedef void *HKEY;
typedef void *HDESK;
typedef void *HMF;
typedef void *HEMF;
typedef void *HPEN;
typedef void *HRSRC;
typedef void *HSTR;
typedef void *HWINSTA;
typedef void *HKL;
typedef void *HGDIOBJ;
typedef HANDLE HDWP;
typedef INT HFILE;
typedef DWORD COLORREF;
typedef DWORD *LPCOLORREF;
typedef struct _RECTL {
    LONG left;
    LONG top;
    LONG right;
    LONG bottom;
} RECTL;
typedef struct _RECTL *PRECTL;
typedef struct _RECTL *LPRECTL;
typedef struct tagPOINT {
    LONG x;
    LONG y;
} POINT;
typedef struct tagPOINT *PPOINT;
typedef struct tagPOINT *LPPOINT;
typedef struct _POINTL {
    LONG x;
    LONG y;
} POINTL;
typedef struct _POINTL *PPOINTL;
typedef struct tagSIZE {
    LONG cx;
    LONG cy;
} SIZE;
typedef struct tagSIZE *PSIZE;
typedef struct tagSIZE *LPSIZE;
typedef struct tagSIZEL {
    LONG cx;
    LONG cy;
} SIZEL;
typedef struct tagSIZEL *PSIZEL;
typedef struct tagSIZEL *LPSIZEL;
#endif

#ifndef _PALETTEENTRY_DEFINED
#define _PALETTEENTRY_DEFINED

typedef struct tagPALETTEENTRY {
    BYTE peRed;
    BYTE peGreen;
    BYTE peBlue;
    BYTE peFlags;
} PALETTEENTRY;
typedef struct tagPALETTEENTRY *PPALETTEENTRY;
typedef struct tagPALETTEENTRY *LPPALETTEENTRY;
#endif

#ifndef _LOGPALETTE_DEFINED
#define _LOGPALETTE_DEFINED

typedef struct tagLOGPALETTE {
    WORD palVersion;
    WORD palNumEntries;
    PALETTEENTRY palPalEntry[1];
} LOGPALETTE;
typedef struct tagLOGPALETTE *PLOGPALETTE;
typedef struct tagLOGPALETTE *LPLOGPALETTE;
#endif

#ifndef _WINDEF_
typedef const RECTL *LPCRECTL;
typedef struct tagRECT {
    LONG left;
    LONG top;
    LONG right;
    LONG bottom;
} RECT;
typedef struct tagRECT *PRECT;
typedef struct tagRECT *LPRECT;
typedef const RECT *LPCRECT;
#endif

#if 0
typedef FMTID *REFFMTID;
#endif

#ifndef _ROTFLAGS_DEFINED
#define _ROTFLAGS_DEFINED
#define ROTFLAGS_REGISTRATIONKEEPSALIVE 0x1
#define ROTFLAGS_ALLOWANYCLIENT 0x2
#endif

#ifndef _ROT_COMPARE_MAX_DEFINED
#define _ROT_COMPARE_MAX_DEFINED
#define ROT_COMPARE_MAX 2048
#endif

typedef enum tagDVASPECT {
    DVASPECT_CONTENT = 1,
    DVASPECT_THUMBNAIL = 2,
    DVASPECT_ICON = 4,
    DVASPECT_DOCPRINT = 8
} DVASPECT;

typedef enum tagSTGC {
    STGC_DEFAULT = 0,
    STGC_OVERWRITE = 1,
    STGC_ONLYIFCURRENT = 2,
    STGC_DANGEROUSLYCOMMITMERELYTODISKCACHE = 4,
    STGC_CONSOLIDATE = 8
} STGC;

typedef enum tagSTGMOVE {
    STGMOVE_MOVE = 0,
    STGMOVE_COPY = 1,
    STGMOVE_SHALLOWCOPY = 2
} STGMOVE;

typedef enum tagSTATFLAG {
    STATFLAG_DEFAULT = 0,
    STATFLAG_NONAME = 1,
    STATFLAG_NOOPEN = 2
} STATFLAG;
typedef void *HCONTEXT;

#ifndef _LCID_DEFINED
#define _LCID_DEFINED
typedef DWORD LCID;
#endif

#ifndef _LANGID_DEFINED
#define _LANGID_DEFINED
typedef USHORT LANGID;
#endif

#define WDT_INPROC_CALL (0x48746457)

#define WDT_REMOTE_CALL (0x52746457)

#define WDT_INPROC64_CALL (0x50746457)


typedef struct _userCLIPFORMAT {
    LONG fContext;
    union __WIDL_wtypes_generated_name_00000001 {
        DWORD dwValue;
        wchar_t *pwszName;
    } u;
} userCLIPFORMAT;

typedef userCLIPFORMAT *wireCLIPFORMAT;
typedef WORD CLIPFORMAT;

typedef struct _GDI_NONREMOTE {
    LONG fContext;
    union __WIDL_wtypes_generated_name_00000002 {
        LONG hInproc;
        DWORD_BLOB *hRemote;
    } u;
} GDI_NONREMOTE;

typedef struct _userHGLOBAL {
    LONG fContext;
    union __WIDL_wtypes_generated_name_00000003 {
        LONG hInproc;
        FLAGGED_BYTE_BLOB *hRemote;
        INT64 hInproc64;
    } u;
} userHGLOBAL;

typedef userHGLOBAL *wireHGLOBAL;

typedef struct _userHMETAFILE {
    LONG fContext;
    union __WIDL_wtypes_generated_name_00000004 {
        LONG hInproc;
        BYTE_BLOB *hRemote;
        INT64 hInproc64;
    } u;
} userHMETAFILE;

typedef struct _remoteMETAFILEPICT {
    LONG mm;
    LONG xExt;
    LONG yExt;
    userHMETAFILE *hMF;
} remoteMETAFILEPICT;

typedef struct _userHMETAFILEPICT {
    LONG fContext;
    union __WIDL_wtypes_generated_name_00000005 {
        LONG hInproc;
        remoteMETAFILEPICT *hRemote;
        INT64 hInproc64;
    } u;
} userHMETAFILEPICT;

typedef struct _userHENHMETAFILE {
    LONG fContext;
    union __WIDL_wtypes_generated_name_00000006 {
        LONG hInproc;
        BYTE_BLOB *hRemote;
        INT64 hInproc64;
    } u;
} userHENHMETAFILE;

typedef struct _userBITMAP {
    LONG bmType;
    LONG bmWidth;
    LONG bmHeight;
    LONG bmWidthBytes;
    WORD bmPlanes;
    WORD bmBitsPixel;
    ULONG cbSize;
    byte pBuffer[1];
} userBITMAP;

typedef struct _userHBITMAP {
    LONG fContext;
    union __WIDL_wtypes_generated_name_00000007 {
        LONG hInproc;
        userBITMAP *hRemote;
        INT64 hInproc64;
    } u;
} userHBITMAP;

typedef struct _userHPALETTE {
    LONG fContext;
    union __WIDL_wtypes_generated_name_00000008 {
        LONG hInproc;
        LOGPALETTE *hRemote;
        INT64 hInproc64;
    } u;
} userHPALETTE;

typedef struct _RemotableHandle {
    LONG fContext;
    union __WIDL_wtypes_generated_name_00000009 {
        LONG hInproc;
        LONG hRemote;
    } u;
} RemotableHandle;

typedef RemotableHandle *wireHWND;
typedef RemotableHandle *wireHMENU;
typedef RemotableHandle *wireHACCEL;
typedef RemotableHandle *wireHBRUSH;
typedef RemotableHandle *wireHFONT;
typedef RemotableHandle *wireHDC;
typedef RemotableHandle *wireHICON;
typedef RemotableHandle *wireHRGN;
typedef RemotableHandle *wireHMONITOR;

#if 0
typedef void *HWND;
typedef void *HMENU;
typedef void *HACCEL;
typedef void *HBRUSH;
typedef void *HFONT;
typedef void *HDC;
typedef void *HICON;
typedef void *HRGN;
typedef void *HMONITOR;

#ifndef _HCURSOR_DEFINED
#define _HCURSOR_DEFINED
typedef HICON HCURSOR;
#endif

#endif

#ifndef _TEXTMETRIC_DEFINED
#define _TEXTMETRIC_DEFINED

typedef struct tagTEXTMETRICW {
    LONG tmHeight;
    LONG tmAscent;
    LONG tmDescent;
    LONG tmInternalLeading;
    LONG tmExternalLeading;
    LONG tmAveCharWidth;
    LONG tmMaxCharWidth;
    LONG tmWeight;
    LONG tmOverhang;
    LONG tmDigitizedAspectX;
    LONG tmDigitizedAspectY;
    WCHAR tmFirstChar;
    WCHAR tmLastChar;
    WCHAR tmDefaultChar;
    WCHAR tmBreakChar;
    BYTE tmItalic;
    BYTE tmUnderlined;
    BYTE tmStruckOut;
    BYTE tmPitchAndFamily;
    BYTE tmCharSet;
} TEXTMETRICW;
typedef struct tagTEXTMETRICW *PTEXTMETRICW;
typedef struct tagTEXTMETRICW *LPTEXTMETRICW;
#endif

#ifndef _WIN32
#ifndef WINAPI
typedef struct tagMSG {
    HWND hwnd;
    UINT message;
    WPARAM wParam;
    LPARAM lParam;
    DWORD time;
    POINT pt;
} MSG;
typedef struct tagMSG *PMSG;
typedef struct tagMSG *NPMSG;
typedef struct tagMSG *LPMSG;
#endif
#endif

typedef userHBITMAP *wireHBITMAP;
typedef userHPALETTE *wireHPALETTE;
typedef userHENHMETAFILE *wireHENHMETAFILE;
typedef userHMETAFILE *wireHMETAFILE;
typedef userHMETAFILEPICT *wireHMETAFILEPICT;

#if 0
typedef void *HGLOBAL;
typedef HGLOBAL HLOCAL;
typedef void *HBITMAP;
typedef void *HPALETTE;
typedef void *HENHMETAFILE;
typedef void *HMETAFILE;
#endif

typedef void *HMETAFILEPICT;

#endif  /* __IWinTypes_INTERFACE_DEFINED__ */


typedef double DATE;

#ifndef _tagCY_DEFINED
#define _tagCY_DEFINED
#define _CY_DEFINED

#if 0
typedef struct tagCY {
    LONGLONG int64;
} CY;
#else
typedef union tagCY {
  __C89_NAMELESS struct {
    unsigned __LONG32 Lo;
    __LONG32 Hi;
  } DUMMYSTRUCTNAME;
  LONGLONG int64;
} CY;
#endif
#endif

typedef CY *LPCY;

#if 0
typedef struct tagDEC {
    USHORT wReserved;
    BYTE scale;
    BYTE sign;
    ULONG Hi32;
    ULONGLONG Lo64;
} DECIMAL;
#else
typedef struct tagDEC {
  USHORT wReserved;
  __C89_NAMELESS union {
    __C89_NAMELESS struct {
      BYTE scale;
      BYTE sign;
    } DUMMYSTRUCTNAME;
    USHORT signscale;
  } DUMMYUNIONNAME;
  ULONG Hi32;
  __C89_NAMELESS union {
    __C89_NAMELESS struct {
      ULONG Lo32;
      ULONG Mid32;
    } DUMMYSTRUCTNAME2;
    ULONGLONG Lo64;
  } DUMMYUNIONNAME2;
} DECIMAL;

#define DECIMAL_NEG ((BYTE)0x80)
#define DECIMAL_SETZERO(dec) { (dec).Lo64 = 0; (dec).Hi32 = 0; (dec).signscale = 0; }
#endif

typedef DECIMAL *LPDECIMAL;

typedef FLAGGED_WORD_BLOB *wireBSTR;
typedef OLECHAR *BSTR;

typedef BSTR *LPBSTR;

typedef short VARIANT_BOOL;
#if 0
typedef VARIANT_BOOL _VARIANT_BOOL;
#else
#define _VARIANT_BOOL /##/
#endif

#ifndef _tagBSTRBLOB_DEFINED
#define _tagBSTRBLOB_DEFINED

typedef struct tagBSTRBLOB {
    ULONG cbSize;
    BYTE *pData;
} BSTRBLOB;
typedef struct tagBSTRBLOB *LPBSTRBLOB;
#endif

#define VARIANT_TRUE ((VARIANT_BOOL)-1)
#define VARIANT_FALSE ((VARIANT_BOOL)0)

typedef struct tagCLIPDATA {
    ULONG cbSize;
    LONG ulClipFmt;
    BYTE *pClipData;
} CLIPDATA;

#define CBPCLIPDATA(clipdata) ((clipdata).cbSize - sizeof((clipdata).ulClipFmt))

typedef unsigned short VARTYPE;

enum VARENUM {
    VT_EMPTY = 0,
    VT_NULL = 1,
    VT_I2 = 2,
    VT_I4 = 3,
    VT_R4 = 4,
    VT_R8 = 5,
    VT_CY = 6,
    VT_DATE = 7,
    VT_BSTR = 8,
    VT_DISPATCH = 9,
    VT_ERROR = 10,
    VT_BOOL = 11,
    VT_VARIANT = 12,
    VT_UNKNOWN = 13,
    VT_DECIMAL = 14,
    VT_I1 = 16,
    VT_UI1 = 17,
    VT_UI2 = 18,
    VT_UI4 = 19,
    VT_I8 = 20,
    VT_UI8 = 21,
    VT_INT = 22,
    VT_UINT = 23,
    VT_VOID = 24,
    VT_HRESULT = 25,
    VT_PTR = 26,
    VT_SAFEARRAY = 27,
    VT_CARRAY = 28,
    VT_USERDEFINED = 29,
    VT_LPSTR = 30,
    VT_LPWSTR = 31,
    VT_RECORD = 36,
    VT_INT_PTR = 37,
    VT_UINT_PTR = 38,
    VT_FILETIME = 64,
    VT_BLOB = 65,
    VT_STREAM = 66,
    VT_STORAGE = 67,
    VT_STREAMED_OBJECT = 68,
    VT_STORED_OBJECT = 69,
    VT_BLOB_OBJECT = 70,
    VT_CF = 71,
    VT_CLSID = 72,
    VT_VERSIONED_STREAM = 73,
    VT_BSTR_BLOB = 0xfff,
    VT_VECTOR = 0x1000,
    VT_ARRAY = 0x2000,
    VT_BYREF = 0x4000,
    VT_RESERVED = 0x8000,
    VT_ILLEGAL = 0xffff,
    VT_ILLEGALMASKED = 0xfff,
    VT_TYPEMASK = 0xfff
};

typedef ULONG PROPID;

#ifndef PROPERTYKEY_DEFINED
#define PROPERTYKEY_DEFINED

typedef struct _tagpropertykey {
    GUID fmtid;
    DWORD pid;
} PROPERTYKEY;
#endif

typedef struct tagCSPLATFORM {
    DWORD dwPlatformId;
    DWORD dwVersionHi;
    DWORD dwVersionLo;
    DWORD dwProcessorArch;
} CSPLATFORM;

typedef struct tagQUERYCONTEXT {
    DWORD dwContext;
    CSPLATFORM Platform;
    LCID Locale;
    DWORD dwVersionHi;
    DWORD dwVersionLo;
} QUERYCONTEXT;

typedef enum tagTYSPEC {
    TYSPEC_CLSID = 0,
    TYSPEC_FILEEXT = 1,
    TYSPEC_MIMETYPE = 2,
    TYSPEC_FILENAME = 3,
    TYSPEC_PROGID = 4,
    TYSPEC_PACKAGENAME = 5,
    TYSPEC_OBJECTID = 6
} TYSPEC;

typedef struct __WIDL_wtypes_generated_name_0000000B {
    DWORD tyspec;
    union __WIDL_wtypes_generated_name_0000000A {
        CLSID clsid;
        LPOLESTR pFileExt;
        LPOLESTR pMimeType;
        LPOLESTR pProgId;
        LPOLESTR pFileName;
        struct {
            LPOLESTR pPackageName;
            GUID PolicyId;
        } ByName;
        struct {
            GUID ObjectId;
            GUID PolicyId;
        } ByObjectId;
    } tagged_union;
} uCLSSPEC;
/* Begin additional prototypes for all interfaces */


/* End additional prototypes */

#ifdef __cplusplus
}
#endif

#endif /* __wtypes_h__ */
