// 函数: sub_53a1a0
// 地址: 0x53a1a0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_2 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_7220fa
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t var_24 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
*arg1 = &sys43vm::CJaffaVM::`vftable'{for `IVM'}
arg1[1] = &sys43vm::CJaffaVM::`vftable'{for `IVMDebugMode'}
int32_t var_4 = 9
sub_52c260(&arg1[0x4be])
void* var_14 = &arg1[0x4b9]
var_4.b = 0xa
int32_t* eax_4 = arg1[0x4ba]
void* var_10
sub_54e580(&arg1[0x4b9], &var_10, *eax_4, eax_4)
int32_t var_28_2 = arg1[0x4ba]
sub_6b4d5b()
var_10 = &arg1[0x4b5]
var_4.b = 0xb
int32_t* eax_5 = arg1[0x4b6]
sub_58bc40(&arg1[0x4b5], &var_14, *eax_5, eax_5)
int32_t var_28_4 = arg1[0x4b6]
sub_6b4d5b()
int32_t lpMem = arg1[0xa9]

if (lpMem != 0)
    HeapFree(data_797df0, HEAP_NONE, lpMem)

var_4.b = 5
sub_5598d0(&arg1[0x97])
var_4.b = 4
int32_t* ecx_3 = arg1[0x96]

if (ecx_3 != 0)
    (*(*ecx_3 + 0x2c))(1)

int32_t* ecx_4 = arg1[0x95]

if (ecx_4 != 0)
    (*(*ecx_4 + 0x10))(1)

int32_t* ecx_5 = arg1[0x94]

if (ecx_5 != 0)
    (*(*ecx_5 + 0x40))(1)

arg1[0x8e] = &sys43vm::CVMPeekLock::`vftable'{for `IVMPeekLock'}
arg1[0x88] = &sys43vm::CVMSetTraceCallBack::`vftable'{for `IVMSetTraceCallback'}
arg1[0x89] = &sys43vm::CVMTraceCallbackDummy::`vftable'{for `IVMTraceCallback'}
sub_5526f0(&arg1[0x77])
var_4.b = 0
sub_537980(&arg1[0x13])
int32_t var_4_1 = 0xffffffff
struct _EXCEPTION_REGISTRATION_RECORD** result = sub_54f3e0(&arg1[0x10])
fsbase->NtTib.ExceptionList = ExceptionList
return result
