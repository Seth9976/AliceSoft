// 函数: sub_539e50
// 地址: 0x539e50
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_72219b
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t var_20 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
arg1[1] = &IVMDebugMode::`vftable'
*arg1 = &sys43vm::CJaffaVM::`vftable'{for `IVM'}
arg1[1] = &sys43vm::CJaffaVM::`vftable'{for `IVMDebugMode'}
arg1[3] = 0
arg1[4] = 0
arg1[2] = 1
arg1[5] = &sys43vm::CErrorMsgBox::`vftable'{for `IErrorMsgBox'}
__builtin_memset(&arg1[6], 0, 0x28)
arg1[0x10].w = 0x101
arg1[0x11] = 0
arg1[0x12] = 0
int32_t var_4 = 0
sub_537530(&arg1[0x13])
arg1[0x77] = &sys43vm::CMemoryFrameManager::`vftable'
arg1[0x78] = 0
arg1[0x79] = 0
arg1[0x7a] = 0
arg1[0x7b] = 0
arg1[0x7d] = 0xffffffff
arg1[0x7e] = 1
arg1[0x80] = 0
arg1[0x81] = 0
arg1[0x82] = 0
arg1[0x84] = 0x20
arg1[0x85] = 0
arg1[0x86] = 0
arg1[0x87] = 0
arg1[0x7f] = &arg1[0x77]
arg1[0x88] = &sys43vm::CVMSetTraceCallBack::`vftable'{for `IVMSetTraceCallback'}
arg1[0x89] = &sys43vm::CVMTraceCallbackDummy::`vftable'{for `IVMTraceCallback'}
arg1[0x8b] = 0
arg1[0x8a] = &arg1[0x89]
arg1[0x8c] = &sys43vm::CVMGameMsg::`vftable'{for `IVMGameMsg'}
arg1[0x8d] = 0
arg1[0x8e] = &sys43vm::CVMPeekLock::`vftable'{for `IVMPeekLock'}
arg1[0x8f] = 0
var_4.b = 4
arg1[0x90] = 0
arg1[0x91].b = 0
sub_54edb0(&arg1[0x92])
var_4.b = 5
sub_5597e0(&arg1[0x97], &arg1[0x10])
arg1[0xa3] = 0
arg1[0xa4] = 0
arg1[0xa5] = 0
arg1[0xa6].b = 0
arg1[0xa7] = 0
arg1[0xa8].w = 1
arg1[0xa9] = 0
arg1[0xaa] = 0x4000
arg1[0xab] = 0x4000
int32_t eax_7 = HeapAlloc(data_797df0, HEAP_NONE, 0x10000)
arg1[0xa9] = eax_7
arg1[0xac] = eax_7
var_4.b = 7
arg1[0x1ad] = &arg1[0xad]
sub_6bc670(&arg1[0xad], 0, 0x400)
arg1[0x2ae] = &arg1[0x1ae]
sub_6bc670(&arg1[0x1ae], 0, 0x400)
arg1[0x3af] = &arg1[0x2af]
sub_6bc670(&arg1[0x2af], 0, 0x400)
arg1[0x4b0] = &arg1[0x3b0]
sub_6bc670(&arg1[0x3b0], 0, 0x400)
arg1[0x4b1] = 0
arg1[0x4b2] = 0
arg1[0x4b3] = 0
arg1[0x4b4] = 0xffffffff
arg1[0x4b7] = 0
int32_t* eax_11 = sub_416b10(1)
arg1[0x4b6] = eax_11
*eax_11 = eax_11
void* eax_12 = arg1[0x4b6]
*(eax_12 + 4) = eax_12
void* eax_13 = arg1[0x4b6]
*(eax_13 + 8) = eax_13
arg1[0x4b6]->vFunc_4.b = 1
*(&arg1[0x4b6]->vFunc_4 + 1) = 1
var_4.b = 8
arg1[0x4bb] = 0
int32_t* eax_15 = sub_4fddf0(1)
arg1[0x4ba] = eax_15
*eax_15 = eax_15
void* eax_16 = arg1[0x4ba]
*(eax_16 + 4) = eax_16
void* eax_17 = arg1[0x4ba]
*(eax_17 + 8) = eax_17
*(arg1[0x4ba] + 0x20) = 1
*(arg1[0x4ba] + 0x21) = 1
sub_52c1d0(&arg1[0x4be])
arg1[0x4ce].b = 0
arg1[0x2ae]->vFunc_0 = 0xffffffff
arg1[0x2ae] = &arg1[0x2ae]->vFunc_1
arg1[0x8d] = &arg1[0x13]
arg1[6] = arg1
arg1[0x78] = arg1
arg1[0x8b] = arg1
fsbase->NtTib.ExceptionList = ExceptionList
return arg1
