// 函数: sub_64b910
// 地址: 0x64b910
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

void var_2c

if (*arg1 s< *arg2)
    __builtin_memcpy(&var_2c, arg1, 0x28)
    __builtin_memcpy(arg1, arg2, 0x28)
    __builtin_memcpy(arg2, &var_2c, 0x28)

if (*arg3 s< *arg1)
    __builtin_memcpy(&var_2c, arg3, 0x28)
    __builtin_memcpy(arg3, arg1, 0x28)
    __builtin_memcpy(arg1, &var_2c, 0x28)

if (*arg1 s>= *arg2)
    return 

__builtin_memcpy(&var_2c, arg1, 0x28)
__builtin_memcpy(arg1, arg2, 0x28)
__builtin_memcpy(arg2, &var_2c, 0x28)
