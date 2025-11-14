// 函数: sub_5a4930
// 地址: 0x5a4930
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

if (arg1 == 0)
    return 

if (arg2 s< 0 || arg3 s<= 0 || arg4 s< 0 || arg5 s< 0 || arg6 s< 0 || arg7 s< 0 || arg8 s< 0
        || arg9 s< 0)
    sub_5a5de0("Ignoring attempt to set negative chromaticity value", arg1)

if (arg2 s> 0x186a0 - arg3)
    sub_5a5de0("Invalid cHRM white point", arg1)

if (arg4 s> 0x186a0 - arg5)
    sub_5a5de0("Invalid cHRM red point", arg1)

if (arg6 s> 0x186a0 - arg7)
    sub_5a5de0("Invalid cHRM green point", arg1)

if (arg8 s> 0x186a0 - arg9)
    sub_5a5de0("Invalid cHRM blue point", arg1)

int32_t var_10
int32_t var_c
int32_t var_8
int32_t var_4
sub_5a5340(arg7 - arg5, sub_5a5340(arg6 - arg4, &var_10, arg9 - arg5, &var_10, &var_8), 
    arg8 - arg4, &var_c, &var_4)

if (var_10 == var_c && var_8 == var_4)
    sub_5a5de0("Ignoring attempt to set cHRM RGB triangle with zero area", arg1)
