// 函数: sub_612d00
// 地址: 0x612d00
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_4 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_71d828
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t var_64
int32_t eax_2 = data_78c474 ^ &var_64
int32_t __saved_edi
int32_t var_74 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
sub_401270(arg1, 6, "const ")
int32_t var_4 = 0
int32_t var_48
sub_402000(arg1, sub_61b650(arg2, &var_48), 0, 0xffffffff)
int32_t var_4_1 = 0xffffffff
int32_t var_34

if (var_34 u>= 0x10)
    int32_t var_78_1 = var_48
    sub_6b4d5b()

sub_402cb0(arg1, 0x734f2c, 1)
sub_402000(arg1, arg2 + 4, 0, 0xffffffff)
sub_402cb0(arg1, 0x734f30, 3)
int32_t eax_8 = *(arg2 + 0x34)
int32_t* result

if (eax_8 == 0xa)
    int32_t var_78_3 = *(arg2 + 0x60)
    int32_t var_4_3 = 1
    result = sub_402000(arg1, sub_4104a0(0x734f34), 0, 0xffffffff)
    int32_t var_18
    
    if (var_18 u>= 0x10)
        int32_t var_2c
        int32_t var_78_4 = var_2c
        result = sub_6b4d5b()
else if (eax_8 == 0xb)
    int32_t var_4_2 = 2
    result = sub_402000(arg1, sub_4104a0(0x734f38), 0, 0xffffffff)
    int32_t var_50
    
    if (var_50 u>= 0x10)
        int32_t var_78_2 = var_64
        result = sub_6b4d5b()
else if (eax_8 == 0xc)
    sub_402cb0(arg1, 0x734f3c, 1)
    sub_402000(arg1, arg2 + 0x68, 0, 0xffffffff)
    result = sub_402cb0(arg1, 0x734f40, 1)
else
    result = sub_402cb0(arg1, 0x734f44, 1)

fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &var_64)
return result
