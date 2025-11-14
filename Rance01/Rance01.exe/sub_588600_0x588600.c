// 函数: sub_588600
// 地址: 0x588600
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_2 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_71e733
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t ecx
int32_t var_10 = ecx
int32_t __saved_edi
int32_t var_20 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
*arg1 = &graphengine::CGraphEngine::`vftable'{for `IGraphEngine'}
arg1[1] = 1
arg1[2].b = 0
arg1[3] = 0
arg1[4] = 0
arg1[5] = 0
arg1[6] = 0
int32_t* eax_3 = operator new(0x68)
int32_t* var_10_1 = eax_3
int32_t var_4 = 0
int32_t* eax_4

if (eax_3 == 0)
    eax_4 = nullptr
else
    eax_4 = sub_587650(eax_3)

arg1[7] = eax_4
int32_t var_4_1 = 1
arg1[8] = &graphengine::CGraphicsObjectManager<class graphengine::CVertexBuffer, class IVertexBuffer>::`vftable'
void* var_10_2 = &arg1[8]
arg1[9] = 0
arg1[0xa] = 0
arg1[0xb] = 0
var_4_1.b = 2
arg1[0xf] = 0
int32_t* eax_5 = sub_416b10(1)
arg1[0xe] = eax_5
*eax_5 = eax_5
void* eax_6 = arg1[0xe]
*(eax_6 + 4) = eax_6
void* eax_7 = arg1[0xe]
*(eax_7 + 8) = eax_7
arg1[0xe]->vFunc_4.b = 1
*(&arg1[0xe]->vFunc_4 + 1) = 1
arg1[0x11] = &graphengine::CGraphicsObjectManager<class graphengine::CIndexBuffer, class IIndexBuffer>::`vftable'
void* var_10_3 = &arg1[0x11]
arg1[0x12] = 0
arg1[0x13] = 0
arg1[0x14] = 0
var_4_1.b = 4
arg1[0x18] = 0
int32_t* eax_9 = sub_416b10(1)
arg1[0x17] = eax_9
*eax_9 = eax_9
void* eax_10 = arg1[0x17]
*(eax_10 + 4) = eax_10
void* eax_11 = arg1[0x17]
*(eax_11 + 8) = eax_11
arg1[0x17]->vFunc_4.b = 1
*(&arg1[0x17]->vFunc_4 + 1) = 1
arg1[0x1a] =
    &graphengine::CGraphicsObjectManager<class graphengine::CTexture, class ITexture>::`vftable'
void* var_10_4 = &arg1[0x1a]
arg1[0x1b] = 0
arg1[0x1c] = 0
arg1[0x1d] = 0
var_4_1.b = 6
arg1[0x21] = 0
int32_t* eax_13 = sub_416b10(1)
arg1[0x20] = eax_13
*eax_13 = eax_13
void* eax_14 = arg1[0x20]
*(eax_14 + 4) = eax_14
void* eax_15 = arg1[0x20]
*(eax_15 + 8) = eax_15
arg1[0x20]->vFunc_4.b = 1
*(&arg1[0x20]->vFunc_4 + 1) = 1
arg1[0x23] = &graphengine::CGraphicsObjectManager<class graphengine::CRenderTexture, class IRenderTexture>::`vftable'
void* var_10_5 = &arg1[0x23]
arg1[0x24] = 0
arg1[0x25] = 0
arg1[0x26] = 0
var_4_1.b = 8
arg1[0x2a] = 0
int32_t* eax_16 = sub_416b10(1)
arg1[0x29] = eax_16
*eax_16 = eax_16
void* eax_17 = arg1[0x29]
*(eax_17 + 4) = eax_17
void* eax_18 = arg1[0x29]
*(eax_18 + 8) = eax_18
arg1[0x29]->vFunc_4.b = 1
*(&arg1[0x29]->vFunc_4 + 1) = 1
arg1[0x2c] =
    &graphengine::CGraphicsObjectManager<class graphengine::CViewport, class IViewport>::`vftable'
void* var_10_6 = &arg1[0x2c]
arg1[0x2d] = 0
arg1[0x2e] = 0
arg1[0x2f] = 0
var_4_1.b = 0xa
arg1[0x33] = 0
int32_t* eax_20 = sub_416b10(1)
arg1[0x32] = eax_20
*eax_20 = eax_20
void* eax_21 = arg1[0x32]
*(eax_21 + 4) = eax_21
void* eax_22 = arg1[0x32]
*(eax_22 + 8) = eax_22
arg1[0x32]->vFunc_4.b = 1
*(&arg1[0x32]->vFunc_4 + 1) = 1
arg1[0x35] = &graphengine::CGraphicsObjectManager<class graphengine::CDepthSurface, class IDepthSurface>::`vftable'
void* var_10_7 = &arg1[0x35]
arg1[0x36] = 0
arg1[0x37] = 0
arg1[0x38] = 0
var_4_1.b = 0xc
arg1[0x3c] = 0
int32_t* eax_24 = sub_416b10(1)
arg1[0x3b] = eax_24
*eax_24 = eax_24
void* eax_25 = arg1[0x3b]
*(eax_25 + 4) = eax_25
void* eax_26 = arg1[0x3b]
*(eax_26 + 8) = eax_26
arg1[0x3b]->vFunc_4.b = 1
*(&arg1[0x3b]->vFunc_4 + 1) = 1
arg1[0x3e] = &graphengine::CGraphicsObjectManager<class graphengine::CVertexShader, class IVertexShader>::`vftable'
void* var_10_8 = &arg1[0x3e]
arg1[0x3f] = 0
arg1[0x40] = 0
arg1[0x41] = 0
var_4_1.b = 0xe
arg1[0x45] = 0
int32_t* eax_27 = sub_416b10(1)
arg1[0x44] = eax_27
*eax_27 = eax_27
void* eax_28 = arg1[0x44]
*(eax_28 + 4) = eax_28
void* eax_29 = arg1[0x44]
*(eax_29 + 8) = eax_29
arg1[0x44]->vFunc_4.b = 1
*(&arg1[0x44]->vFunc_4 + 1) = 1
arg1[0x47] = &graphengine::CGraphicsObjectManager<class graphengine::CPixelShader, class IPixelShader>::`vftable'
void* var_10_9 = &arg1[0x47]
arg1[0x48] = 0
arg1[0x49] = 0
arg1[0x4a] = 0
var_4_1.b = 0x10
arg1[0x4e] = 0
int32_t* eax_31 = sub_416b10(1)
arg1[0x4d] = eax_31
*eax_31 = eax_31
void* eax_32 = arg1[0x4d]
*(eax_32 + 4) = eax_32
void* eax_33 = arg1[0x4d]
*(eax_33 + 8) = eax_33
arg1[0x4d]->vFunc_4.b = 1
*(&arg1[0x4d]->vFunc_4 + 1) = 1
var_4_1.b = 0x11
sub_590f60(&arg1[0x50])
var_4_1.b = 0x12
sub_58fab0(&arg1[0x5a])
arg1[0x76] = 0
arg1[0x77] = 0
arg1[0x78] = 0
arg1[0x79] = 0
arg1[0x55] = arg1
fsbase->NtTib.ExceptionList = ExceptionList
return arg1
