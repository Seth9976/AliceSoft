// 函数: sub_41d7a0
// 地址: 0x41d7a0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_724fa1
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t var_1c = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
*(arg2 + 1) = arg4
*(arg2 + 4) = arg1
*(arg2 + 8) = 0
*(arg2 + 0x10) = 0
*(arg2 + 0x14) = 0
*(arg2 + 0x18) = 0
int32_t var_4 = 0
*(arg2 + 0x20) = 0
*(arg2 + 0x24) = 0
*(arg2 + 0x28) = 0
int32_t eax_4 = *(arg2 + 4)
*(arg2 + 0x30) = 0
*(arg2 + 0x34) = 0
*(arg2 + 0x38) = 0
*(arg2 + 0x3c) = 0
*(arg2 + 0x40) = 0
*(arg2 + 0x44) = 0
*(arg2 + 0x48) = 0
*(arg2 + 0x4c) = 0
*(arg2 + 0x50) = 0x50
*(arg2 + 0x54) = 0x1f4
*(arg2 + 0x58) = 0
*(arg2 + 0x5c) = 0
*(arg2 + 0x60) = 0
*(arg2 + 0x68) = eax_4
var_4.b = 2
void* eax_5 = sub_5f7370(*data_797da0, *(arg2 + 4))

if (eax_5 != 0)
    *(*(eax_5 + 0xc) + 0x20) = arg3

sub_41e150(arg2)
fsbase->NtTib.ExceptionList = ExceptionList
return arg2
