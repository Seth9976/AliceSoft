// 函数: sub_60a880
// 地址: 0x60a880
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_7194d1
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_esi
int32_t var_18 = data_78c474 ^ &__saved_esi
fsbase->NtTib.ExceptionList = &ExceptionList
*arg2 = *arg1
arg2[6] = 0xf
arg2[5] = 0
arg2[1].b = 0
sub_401180(&arg2[1], 0xffffffff, &arg1[1], 0)
int32_t var_4 = 0
arg2[8] = arg1[8]
arg2[9] = arg1[9]
arg2[0xa] = arg1[0xa]
arg2[0x10] = 0xf
arg2[0xf] = 0
arg2[0xb].b = 0
sub_401180(&arg2[0xb], 0xffffffff, &arg1[0xb], 0)
var_4.b = 1
arg2[0x12] = arg1[0x12]
sub_60aa60(&arg2[0x13], &arg1[0x13])
var_4.b = 2
arg2[0x1c] = 0xf
arg2[0x1b] = 0
arg2[0x17].b = 0
sub_401180(&arg2[0x17], 0xffffffff, &arg1[0x17], 0)
arg2[0x1e] = arg1[0x1e]
fsbase->NtTib.ExceptionList = ExceptionList
return arg2
