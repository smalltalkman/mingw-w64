/*** Autogenerated by WIDL 9.20 from include/d3d10shader.idl - Do not edit ***/

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

#ifndef __d3d10shader_h__
#define __d3d10shader_h__

/* Forward declarations */

#ifndef __ID3D10ShaderReflectionType_FWD_DEFINED__
#define __ID3D10ShaderReflectionType_FWD_DEFINED__
typedef interface ID3D10ShaderReflectionType ID3D10ShaderReflectionType;
#ifdef __cplusplus
interface ID3D10ShaderReflectionType;
#endif /* __cplusplus */
#endif

#ifndef __ID3D10ShaderReflectionVariable_FWD_DEFINED__
#define __ID3D10ShaderReflectionVariable_FWD_DEFINED__
typedef interface ID3D10ShaderReflectionVariable ID3D10ShaderReflectionVariable;
#ifdef __cplusplus
interface ID3D10ShaderReflectionVariable;
#endif /* __cplusplus */
#endif

#ifndef __ID3D10ShaderReflectionConstantBuffer_FWD_DEFINED__
#define __ID3D10ShaderReflectionConstantBuffer_FWD_DEFINED__
typedef interface ID3D10ShaderReflectionConstantBuffer ID3D10ShaderReflectionConstantBuffer;
#ifdef __cplusplus
interface ID3D10ShaderReflectionConstantBuffer;
#endif /* __cplusplus */
#endif

#ifndef __ID3D10ShaderReflection_FWD_DEFINED__
#define __ID3D10ShaderReflection_FWD_DEFINED__
typedef interface ID3D10ShaderReflection ID3D10ShaderReflection;
#ifdef __cplusplus
interface ID3D10ShaderReflection;
#endif /* __cplusplus */
#endif

/* Headers for imported files */

#include <d3d10.h>

#ifdef __cplusplus
extern "C" {
#endif

#define D3D10_SHADER_DEBUG (0x1)

#define D3D10_SHADER_SKIP_VALIDATION (0x2)

#define D3D10_SHADER_SKIP_OPTIMIZATION (0x4)

#define D3D10_SHADER_PACK_MATRIX_ROW_MAJOR (0x8)

#define D3D10_SHADER_PACK_MATRIX_COLUMN_MAJOR (0x10)

#define D3D10_SHADER_PARTIAL_PRECISION (0x20)

#define D3D10_SHADER_FORCE_VS_SOFTWARE_NO_OPT (0x40)

#define D3D10_SHADER_FORCE_PS_SOFTWARE_NO_OPT (0x80)

#define D3D10_SHADER_NO_PRESHADER (0x100)

#define D3D10_SHADER_AVOID_FLOW_CONTROL (0x200)

#define D3D10_SHADER_PREFER_FLOW_CONTROL (0x400)

#define D3D10_SHADER_ENABLE_STRICTNESS (0x800)

#define D3D10_SHADER_ENABLE_BACKWARDS_COMPATIBILITY (0x1000)

#define D3D10_SHADER_IEEE_STRICTNESS (0x2000)

#define D3D10_SHADER_WARNINGS_ARE_ERRORS (0x40000)

#define D3D10_SHADER_OPTIMIZATION_LEVEL0 (0x4000)

#define D3D10_SHADER_OPTIMIZATION_LEVEL1 (0x0)

#define D3D10_SHADER_OPTIMIZATION_LEVEL2 (0xc000)

#define D3D10_SHADER_OPTIMIZATION_LEVEL3 (0x8000)

typedef D3D_SHADER_MACRO D3D10_SHADER_MACRO;
typedef D3D_SHADER_MACRO *LPD3D10_SHADER_MACRO;
typedef D3D_SHADER_VARIABLE_CLASS D3D10_SHADER_VARIABLE_CLASS;
typedef D3D_SHADER_VARIABLE_CLASS *LPD3D10_SHADER_VARIABLE_CLASS;
typedef D3D_CBUFFER_TYPE D3D10_CBUFFER_TYPE;
typedef D3D_CBUFFER_TYPE *LPD3D10_CBUFFER_TYPE;
typedef D3D_REGISTER_COMPONENT_TYPE D3D10_REGISTER_COMPONENT_TYPE;
typedef D3D_RESOURCE_RETURN_TYPE D3D10_RESOURCE_RETURN_TYPE;
typedef D3D_NAME D3D10_NAME;
typedef D3D_SHADER_INPUT_TYPE D3D10_SHADER_INPUT_TYPE;
typedef D3D_SHADER_INPUT_TYPE *LPD3D10_SHADER_INPUT_TYPE;
typedef D3D_SHADER_VARIABLE_TYPE D3D10_SHADER_VARIABLE_TYPE;
typedef D3D_SHADER_VARIABLE_TYPE *LPD3D10_SHADER_VARIABLE_TYPE;
typedef D3D_INCLUDE_TYPE D3D10_INCLUDE_TYPE;
typedef ID3DInclude ID3D10Include;
typedef ID3DInclude *LPD3D10INCLUDE;
#define IID_ID3D10Include IID_ID3DInclude
typedef struct _D3D10_SHADER_INPUT_BIND_DESC {
    const char *Name;
    D3D10_SHADER_INPUT_TYPE Type;
    UINT BindPoint;
    UINT BindCount;
    UINT uFlags;
    D3D10_RESOURCE_RETURN_TYPE ReturnType;
    D3D10_SRV_DIMENSION Dimension;
    UINT NumSamples;
} D3D10_SHADER_INPUT_BIND_DESC;
typedef struct _D3D10_SIGNATURE_PARAMETER_DESC {
    const char *SemanticName;
    UINT SemanticIndex;
    UINT Register;
    D3D10_NAME SystemValueType;
    D3D10_REGISTER_COMPONENT_TYPE ComponentType;
    BYTE Mask;
    BYTE ReadWriteMask;
} D3D10_SIGNATURE_PARAMETER_DESC;
typedef struct _D3D10_SHADER_DESC {
    UINT Version;
    const char *Creator;
    UINT Flags;
    UINT ConstantBuffers;
    UINT BoundResources;
    UINT InputParameters;
    UINT OutputParameters;
    UINT InstructionCount;
    UINT TempRegisterCount;
    UINT TempArrayCount;
    UINT DefCount;
    UINT DclCount;
    UINT TextureNormalInstructions;
    UINT TextureLoadInstructions;
    UINT TextureCompInstructions;
    UINT TextureBiasInstructions;
    UINT TextureGradientInstructions;
    UINT FloatInstructionCount;
    UINT IntInstructionCount;
    UINT UintInstructionCount;
    UINT StaticFlowControlCount;
    UINT DynamicFlowControlCount;
    UINT MacroInstructionCount;
    UINT ArrayInstructionCount;
    UINT CutInstructionCount;
    UINT EmitInstructionCount;
    D3D10_PRIMITIVE_TOPOLOGY GSOutputTopology;
    UINT GSMaxOutputVertexCount;
} D3D10_SHADER_DESC;
typedef struct _D3D10_SHADER_BUFFER_DESC {
    const char *Name;
    D3D10_CBUFFER_TYPE Type;
    UINT Variables;
    UINT Size;
    UINT uFlags;
} D3D10_SHADER_BUFFER_DESC;
typedef struct _D3D10_SHADER_VARIABLE_DESC {
    const char *Name;
    UINT StartOffset;
    UINT Size;
    UINT uFlags;
    void *DefaultValue;
} D3D10_SHADER_VARIABLE_DESC;
typedef struct _D3D10_SHADER_TYPE_DESC {
    D3D10_SHADER_VARIABLE_CLASS Class;
    D3D10_SHADER_VARIABLE_TYPE Type;
    UINT Rows;
    UINT Columns;
    UINT Elements;
    UINT Members;
    UINT Offset;
} D3D10_SHADER_TYPE_DESC;
/*****************************************************************************
 * ID3D10ShaderReflectionType interface
 */
#ifndef __ID3D10ShaderReflectionType_INTERFACE_DEFINED__
#define __ID3D10ShaderReflectionType_INTERFACE_DEFINED__

DEFINE_GUID(IID_ID3D10ShaderReflectionType, 0xc530ad7d, 0x9b16, 0x4395, 0xa9,0x79, 0xba,0x2e,0xcf,0xf8,0x3a,0xdd);
#if defined(__cplusplus) && !defined(CINTERFACE)
MIDL_INTERFACE("c530ad7d-9b16-4395-a979-ba2ecff83add")
ID3D10ShaderReflectionType
{

    BEGIN_INTERFACE

    virtual HRESULT STDMETHODCALLTYPE GetDesc(
        D3D10_SHADER_TYPE_DESC *desc) = 0;

    virtual ID3D10ShaderReflectionType * STDMETHODCALLTYPE GetMemberTypeByIndex(
        UINT index) = 0;

    virtual ID3D10ShaderReflectionType * STDMETHODCALLTYPE GetMemberTypeByName(
        const char *name) = 0;

    virtual const char * STDMETHODCALLTYPE GetMemberTypeName(
        UINT index) = 0;

    END_INTERFACE

};
#ifdef __CRT_UUID_DECL
__CRT_UUID_DECL(ID3D10ShaderReflectionType, 0xc530ad7d, 0x9b16, 0x4395, 0xa9,0x79, 0xba,0x2e,0xcf,0xf8,0x3a,0xdd)
#endif
#else
typedef struct ID3D10ShaderReflectionTypeVtbl {
    BEGIN_INTERFACE

    /*** ID3D10ShaderReflectionType methods ***/
    HRESULT (STDMETHODCALLTYPE *GetDesc)(
        ID3D10ShaderReflectionType *This,
        D3D10_SHADER_TYPE_DESC *desc);

    ID3D10ShaderReflectionType * (STDMETHODCALLTYPE *GetMemberTypeByIndex)(
        ID3D10ShaderReflectionType *This,
        UINT index);

    ID3D10ShaderReflectionType * (STDMETHODCALLTYPE *GetMemberTypeByName)(
        ID3D10ShaderReflectionType *This,
        const char *name);

    const char * (STDMETHODCALLTYPE *GetMemberTypeName)(
        ID3D10ShaderReflectionType *This,
        UINT index);

    END_INTERFACE
} ID3D10ShaderReflectionTypeVtbl;

interface ID3D10ShaderReflectionType {
    CONST_VTBL ID3D10ShaderReflectionTypeVtbl* lpVtbl;
};

#ifdef COBJMACROS
#ifndef WIDL_C_INLINE_WRAPPERS
/*** ID3D10ShaderReflectionType methods ***/
#define ID3D10ShaderReflectionType_GetDesc(This,desc) (This)->lpVtbl->GetDesc(This,desc)
#define ID3D10ShaderReflectionType_GetMemberTypeByIndex(This,index) (This)->lpVtbl->GetMemberTypeByIndex(This,index)
#define ID3D10ShaderReflectionType_GetMemberTypeByName(This,name) (This)->lpVtbl->GetMemberTypeByName(This,name)
#define ID3D10ShaderReflectionType_GetMemberTypeName(This,index) (This)->lpVtbl->GetMemberTypeName(This,index)
#else
/*** ID3D10ShaderReflectionType methods ***/
static inline HRESULT ID3D10ShaderReflectionType_GetDesc(ID3D10ShaderReflectionType* This,D3D10_SHADER_TYPE_DESC *desc) {
    return This->lpVtbl->GetDesc(This,desc);
}
static inline ID3D10ShaderReflectionType * ID3D10ShaderReflectionType_GetMemberTypeByIndex(ID3D10ShaderReflectionType* This,UINT index) {
    return This->lpVtbl->GetMemberTypeByIndex(This,index);
}
static inline ID3D10ShaderReflectionType * ID3D10ShaderReflectionType_GetMemberTypeByName(ID3D10ShaderReflectionType* This,const char *name) {
    return This->lpVtbl->GetMemberTypeByName(This,name);
}
static inline const char * ID3D10ShaderReflectionType_GetMemberTypeName(ID3D10ShaderReflectionType* This,UINT index) {
    return This->lpVtbl->GetMemberTypeName(This,index);
}
#endif
#endif

#endif


#endif  /* __ID3D10ShaderReflectionType_INTERFACE_DEFINED__ */

/*****************************************************************************
 * ID3D10ShaderReflectionVariable interface
 */
#ifndef __ID3D10ShaderReflectionVariable_INTERFACE_DEFINED__
#define __ID3D10ShaderReflectionVariable_INTERFACE_DEFINED__

DEFINE_GUID(IID_ID3D10ShaderReflectionVariable, 0x1bf63c95, 0x2650, 0x405d, 0x99,0xc1, 0x36,0x36,0xbd,0x1d,0xa0,0xa1);
#if defined(__cplusplus) && !defined(CINTERFACE)
MIDL_INTERFACE("1bf63c95-2650-405d-99c1-3636bd1da0a1")
ID3D10ShaderReflectionVariable
{

    BEGIN_INTERFACE

    virtual HRESULT STDMETHODCALLTYPE GetDesc(
        D3D10_SHADER_VARIABLE_DESC *desc) = 0;

    virtual ID3D10ShaderReflectionType * STDMETHODCALLTYPE GetType(
        ) = 0;

    END_INTERFACE

};
#ifdef __CRT_UUID_DECL
__CRT_UUID_DECL(ID3D10ShaderReflectionVariable, 0x1bf63c95, 0x2650, 0x405d, 0x99,0xc1, 0x36,0x36,0xbd,0x1d,0xa0,0xa1)
#endif
#else
typedef struct ID3D10ShaderReflectionVariableVtbl {
    BEGIN_INTERFACE

    /*** ID3D10ShaderReflectionVariable methods ***/
    HRESULT (STDMETHODCALLTYPE *GetDesc)(
        ID3D10ShaderReflectionVariable *This,
        D3D10_SHADER_VARIABLE_DESC *desc);

    ID3D10ShaderReflectionType * (STDMETHODCALLTYPE *GetType)(
        ID3D10ShaderReflectionVariable *This);

    END_INTERFACE
} ID3D10ShaderReflectionVariableVtbl;

interface ID3D10ShaderReflectionVariable {
    CONST_VTBL ID3D10ShaderReflectionVariableVtbl* lpVtbl;
};

#ifdef COBJMACROS
#ifndef WIDL_C_INLINE_WRAPPERS
/*** ID3D10ShaderReflectionVariable methods ***/
#define ID3D10ShaderReflectionVariable_GetDesc(This,desc) (This)->lpVtbl->GetDesc(This,desc)
#define ID3D10ShaderReflectionVariable_GetType(This) (This)->lpVtbl->GetType(This)
#else
/*** ID3D10ShaderReflectionVariable methods ***/
static inline HRESULT ID3D10ShaderReflectionVariable_GetDesc(ID3D10ShaderReflectionVariable* This,D3D10_SHADER_VARIABLE_DESC *desc) {
    return This->lpVtbl->GetDesc(This,desc);
}
static inline ID3D10ShaderReflectionType * ID3D10ShaderReflectionVariable_GetType(ID3D10ShaderReflectionVariable* This) {
    return This->lpVtbl->GetType(This);
}
#endif
#endif

#endif


#endif  /* __ID3D10ShaderReflectionVariable_INTERFACE_DEFINED__ */

/*****************************************************************************
 * ID3D10ShaderReflectionConstantBuffer interface
 */
#ifndef __ID3D10ShaderReflectionConstantBuffer_INTERFACE_DEFINED__
#define __ID3D10ShaderReflectionConstantBuffer_INTERFACE_DEFINED__

DEFINE_GUID(IID_ID3D10ShaderReflectionConstantBuffer, 0x66c66a94, 0xdddd, 0x4b62, 0xa6,0x6a, 0xf0,0xda,0x33,0xc2,0xb4,0xd0);
#if defined(__cplusplus) && !defined(CINTERFACE)
MIDL_INTERFACE("66c66a94-dddd-4b62-a66a-f0da33c2b4d0")
ID3D10ShaderReflectionConstantBuffer
{

    BEGIN_INTERFACE

    virtual HRESULT STDMETHODCALLTYPE GetDesc(
        D3D10_SHADER_BUFFER_DESC *desc) = 0;

    virtual ID3D10ShaderReflectionVariable * STDMETHODCALLTYPE GetVariableByIndex(
        UINT index) = 0;

    virtual ID3D10ShaderReflectionVariable * STDMETHODCALLTYPE GetVariableByName(
        const char *name) = 0;

    END_INTERFACE

};
#ifdef __CRT_UUID_DECL
__CRT_UUID_DECL(ID3D10ShaderReflectionConstantBuffer, 0x66c66a94, 0xdddd, 0x4b62, 0xa6,0x6a, 0xf0,0xda,0x33,0xc2,0xb4,0xd0)
#endif
#else
typedef struct ID3D10ShaderReflectionConstantBufferVtbl {
    BEGIN_INTERFACE

    /*** ID3D10ShaderReflectionConstantBuffer methods ***/
    HRESULT (STDMETHODCALLTYPE *GetDesc)(
        ID3D10ShaderReflectionConstantBuffer *This,
        D3D10_SHADER_BUFFER_DESC *desc);

    ID3D10ShaderReflectionVariable * (STDMETHODCALLTYPE *GetVariableByIndex)(
        ID3D10ShaderReflectionConstantBuffer *This,
        UINT index);

    ID3D10ShaderReflectionVariable * (STDMETHODCALLTYPE *GetVariableByName)(
        ID3D10ShaderReflectionConstantBuffer *This,
        const char *name);

    END_INTERFACE
} ID3D10ShaderReflectionConstantBufferVtbl;

interface ID3D10ShaderReflectionConstantBuffer {
    CONST_VTBL ID3D10ShaderReflectionConstantBufferVtbl* lpVtbl;
};

#ifdef COBJMACROS
#ifndef WIDL_C_INLINE_WRAPPERS
/*** ID3D10ShaderReflectionConstantBuffer methods ***/
#define ID3D10ShaderReflectionConstantBuffer_GetDesc(This,desc) (This)->lpVtbl->GetDesc(This,desc)
#define ID3D10ShaderReflectionConstantBuffer_GetVariableByIndex(This,index) (This)->lpVtbl->GetVariableByIndex(This,index)
#define ID3D10ShaderReflectionConstantBuffer_GetVariableByName(This,name) (This)->lpVtbl->GetVariableByName(This,name)
#else
/*** ID3D10ShaderReflectionConstantBuffer methods ***/
static inline HRESULT ID3D10ShaderReflectionConstantBuffer_GetDesc(ID3D10ShaderReflectionConstantBuffer* This,D3D10_SHADER_BUFFER_DESC *desc) {
    return This->lpVtbl->GetDesc(This,desc);
}
static inline ID3D10ShaderReflectionVariable * ID3D10ShaderReflectionConstantBuffer_GetVariableByIndex(ID3D10ShaderReflectionConstantBuffer* This,UINT index) {
    return This->lpVtbl->GetVariableByIndex(This,index);
}
static inline ID3D10ShaderReflectionVariable * ID3D10ShaderReflectionConstantBuffer_GetVariableByName(ID3D10ShaderReflectionConstantBuffer* This,const char *name) {
    return This->lpVtbl->GetVariableByName(This,name);
}
#endif
#endif

#endif


#endif  /* __ID3D10ShaderReflectionConstantBuffer_INTERFACE_DEFINED__ */

/*****************************************************************************
 * ID3D10ShaderReflection interface
 */
#ifndef __ID3D10ShaderReflection_INTERFACE_DEFINED__
#define __ID3D10ShaderReflection_INTERFACE_DEFINED__

DEFINE_GUID(IID_ID3D10ShaderReflection, 0xd40e20b6, 0xf8f7, 0x42ad, 0xab,0x20, 0x4b,0xaf,0x8f,0x15,0xdf,0xaa);
#if defined(__cplusplus) && !defined(CINTERFACE)
MIDL_INTERFACE("d40e20b6-f8f7-42ad-ab20-4baf8f15dfaa")
ID3D10ShaderReflection : public IUnknown
{
    virtual HRESULT STDMETHODCALLTYPE GetDesc(
        D3D10_SHADER_DESC *desc) = 0;

    virtual ID3D10ShaderReflectionConstantBuffer * STDMETHODCALLTYPE GetConstantBufferByIndex(
        UINT index) = 0;

    virtual ID3D10ShaderReflectionConstantBuffer * STDMETHODCALLTYPE GetConstantBufferByName(
        const char *name) = 0;

    virtual HRESULT STDMETHODCALLTYPE GetResourceBindingDesc(
        UINT index,
        D3D10_SHADER_INPUT_BIND_DESC *desc) = 0;

    virtual HRESULT STDMETHODCALLTYPE GetInputParameterDesc(
        UINT index,
        D3D10_SIGNATURE_PARAMETER_DESC *desc) = 0;

    virtual HRESULT STDMETHODCALLTYPE GetOutputParameterDesc(
        UINT index,
        D3D10_SIGNATURE_PARAMETER_DESC *desc) = 0;

};
#ifdef __CRT_UUID_DECL
__CRT_UUID_DECL(ID3D10ShaderReflection, 0xd40e20b6, 0xf8f7, 0x42ad, 0xab,0x20, 0x4b,0xaf,0x8f,0x15,0xdf,0xaa)
#endif
#else
typedef struct ID3D10ShaderReflectionVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        ID3D10ShaderReflection *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        ID3D10ShaderReflection *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        ID3D10ShaderReflection *This);

    /*** ID3D10ShaderReflection methods ***/
    HRESULT (STDMETHODCALLTYPE *GetDesc)(
        ID3D10ShaderReflection *This,
        D3D10_SHADER_DESC *desc);

    ID3D10ShaderReflectionConstantBuffer * (STDMETHODCALLTYPE *GetConstantBufferByIndex)(
        ID3D10ShaderReflection *This,
        UINT index);

    ID3D10ShaderReflectionConstantBuffer * (STDMETHODCALLTYPE *GetConstantBufferByName)(
        ID3D10ShaderReflection *This,
        const char *name);

    HRESULT (STDMETHODCALLTYPE *GetResourceBindingDesc)(
        ID3D10ShaderReflection *This,
        UINT index,
        D3D10_SHADER_INPUT_BIND_DESC *desc);

    HRESULT (STDMETHODCALLTYPE *GetInputParameterDesc)(
        ID3D10ShaderReflection *This,
        UINT index,
        D3D10_SIGNATURE_PARAMETER_DESC *desc);

    HRESULT (STDMETHODCALLTYPE *GetOutputParameterDesc)(
        ID3D10ShaderReflection *This,
        UINT index,
        D3D10_SIGNATURE_PARAMETER_DESC *desc);

    END_INTERFACE
} ID3D10ShaderReflectionVtbl;

interface ID3D10ShaderReflection {
    CONST_VTBL ID3D10ShaderReflectionVtbl* lpVtbl;
};

#ifdef COBJMACROS
#ifndef WIDL_C_INLINE_WRAPPERS
/*** IUnknown methods ***/
#define ID3D10ShaderReflection_QueryInterface(This,riid,ppvObject) (This)->lpVtbl->QueryInterface(This,riid,ppvObject)
#define ID3D10ShaderReflection_AddRef(This) (This)->lpVtbl->AddRef(This)
#define ID3D10ShaderReflection_Release(This) (This)->lpVtbl->Release(This)
/*** ID3D10ShaderReflection methods ***/
#define ID3D10ShaderReflection_GetDesc(This,desc) (This)->lpVtbl->GetDesc(This,desc)
#define ID3D10ShaderReflection_GetConstantBufferByIndex(This,index) (This)->lpVtbl->GetConstantBufferByIndex(This,index)
#define ID3D10ShaderReflection_GetConstantBufferByName(This,name) (This)->lpVtbl->GetConstantBufferByName(This,name)
#define ID3D10ShaderReflection_GetResourceBindingDesc(This,index,desc) (This)->lpVtbl->GetResourceBindingDesc(This,index,desc)
#define ID3D10ShaderReflection_GetInputParameterDesc(This,index,desc) (This)->lpVtbl->GetInputParameterDesc(This,index,desc)
#define ID3D10ShaderReflection_GetOutputParameterDesc(This,index,desc) (This)->lpVtbl->GetOutputParameterDesc(This,index,desc)
#else
/*** IUnknown methods ***/
static inline HRESULT ID3D10ShaderReflection_QueryInterface(ID3D10ShaderReflection* This,REFIID riid,void **ppvObject) {
    return This->lpVtbl->QueryInterface(This,riid,ppvObject);
}
static inline ULONG ID3D10ShaderReflection_AddRef(ID3D10ShaderReflection* This) {
    return This->lpVtbl->AddRef(This);
}
static inline ULONG ID3D10ShaderReflection_Release(ID3D10ShaderReflection* This) {
    return This->lpVtbl->Release(This);
}
/*** ID3D10ShaderReflection methods ***/
static inline HRESULT ID3D10ShaderReflection_GetDesc(ID3D10ShaderReflection* This,D3D10_SHADER_DESC *desc) {
    return This->lpVtbl->GetDesc(This,desc);
}
static inline ID3D10ShaderReflectionConstantBuffer * ID3D10ShaderReflection_GetConstantBufferByIndex(ID3D10ShaderReflection* This,UINT index) {
    return This->lpVtbl->GetConstantBufferByIndex(This,index);
}
static inline ID3D10ShaderReflectionConstantBuffer * ID3D10ShaderReflection_GetConstantBufferByName(ID3D10ShaderReflection* This,const char *name) {
    return This->lpVtbl->GetConstantBufferByName(This,name);
}
static inline HRESULT ID3D10ShaderReflection_GetResourceBindingDesc(ID3D10ShaderReflection* This,UINT index,D3D10_SHADER_INPUT_BIND_DESC *desc) {
    return This->lpVtbl->GetResourceBindingDesc(This,index,desc);
}
static inline HRESULT ID3D10ShaderReflection_GetInputParameterDesc(ID3D10ShaderReflection* This,UINT index,D3D10_SIGNATURE_PARAMETER_DESC *desc) {
    return This->lpVtbl->GetInputParameterDesc(This,index,desc);
}
static inline HRESULT ID3D10ShaderReflection_GetOutputParameterDesc(ID3D10ShaderReflection* This,UINT index,D3D10_SIGNATURE_PARAMETER_DESC *desc) {
    return This->lpVtbl->GetOutputParameterDesc(This,index,desc);
}
#endif
#endif

#endif


#endif  /* __ID3D10ShaderReflection_INTERFACE_DEFINED__ */

HRESULT __stdcall  D3D10CompileShader(const char *data,SIZE_T data_size,const char *filename,const D3D10_SHADER_MACRO *defines,ID3D10Include *include,const char *entrypoint,const char *profile,UINT flags,ID3D10Blob **shader,ID3D10Blob **error_messages);

HRESULT __stdcall  D3D10DisassembleShader(const void *data,SIZE_T data_size,WINBOOL color_code,const char *comments,ID3D10Blob **disassembly);

const char * __stdcall  D3D10GetVertexShaderProfile(ID3D10Device *device);

const char * __stdcall  D3D10GetGeometryShaderProfile(ID3D10Device *device);

const char * __stdcall  D3D10GetPixelShaderProfile(ID3D10Device *device);

HRESULT __stdcall  D3D10ReflectShader(const void *data,SIZE_T data_size,ID3D10ShaderReflection **reflector);

HRESULT __stdcall  D3D10GetInputSignatureBlob(const void *data,SIZE_T data_size,ID3D10Blob **blob);

HRESULT __stdcall  D3D10GetOutputSignatureBlob(const void *data,SIZE_T data_size,ID3D10Blob **blob);

HRESULT __stdcall  D3D10GetInputAndOutputSignatureBlob(const void *data,SIZE_T data_size,ID3D10Blob **blob);

HRESULT __stdcall  D3D10GetShaderDebugInfo(const void *data,SIZE_T data_size,ID3D10Blob **blob);

/* Begin additional prototypes for all interfaces */


/* End additional prototypes */

#ifdef __cplusplus
}
#endif

#endif /* __d3d10shader_h__ */
