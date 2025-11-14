// 函数: sub_6797c0
// 地址: 0x6797c0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_11 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_71bfe0
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t var_48
int32_t eax_2 = data_78c474 ^ &var_48
int32_t __saved_edi
int32_t var_5c = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
char result = sub_405d70(arg2, arg1 + 0x6c)

if (result == 0)
    sub_401180(arg1 + 0x6c, 0xffffffff, arg2, 0)
    int32_t var_4 = 0
    sub_401ef0(arg1 + 0x88, sub_405c90(&var_48, arg2, 0x72fda4))
    int32_t var_4_1 = 0xffffffff
    int32_t var_34
    
    if (var_34 u>= 0x10)
        int32_t var_60_1 = var_48
        sub_6b4d5b()
    
    int32_t var_4_2 = 1
    sub_401ef0(arg1 + 0xa4, sub_405c90(&var_48, arg2, 0x72fdac))
    int32_t var_4_3 = 0xffffffff
    
    if (var_34 u>= 0x10)
        int32_t var_60_2 = var_48
        sub_6b4d5b()
    
    int32_t var_4_4 = 2
    sub_401ef0(arg1 + 0xc0, sub_405c90(&var_48, arg2, 0x72fdb4))
    int32_t var_4_5 = 0xffffffff
    
    if (var_34 u>= 0x10)
        int32_t var_60_3 = var_48
        sub_6b4d5b()
    
    int32_t var_4_6 = 3
    sub_401ef0(arg1 + 0xdc, sub_405c90(&var_48, arg2, 0x72fdc0))
    int32_t var_4_7 = 0xffffffff
    
    if (var_34 u>= 0x10)
        int32_t var_60_4 = var_48
        sub_6b4d5b()
    
    int32_t var_4_8 = 4
    sub_401ef0(arg1 + 0xf8, sub_405c90(&var_48, arg2, 0x72fdd4))
    int32_t var_4_9 = 0xffffffff
    
    if (var_34 u>= 0x10)
        int32_t var_60_5 = var_48
        sub_6b4d5b()
    
    int32_t var_4_10 = 5
    int32_t var_2c
    result = sub_401ef0(arg1 + 0x114, sub_405c90(&var_2c, arg2, 0x72fde8))
    int32_t var_18
    
    if (var_18 u>= 0x10)
        int32_t var_60_6 = var_2c
        result = sub_6b4d5b()
    
    *(arg1 + 0x14c) = 1

fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &var_48)
return result
