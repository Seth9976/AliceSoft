// 函数: sub_5a6170
// 地址: 0x5a6170
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

if (arg6 == 0 || arg3 == 0 || arg7 == 0 || arg5 == 0 || arg4 == 0 || arg2 == 0)
    return 0

*arg7 = *arg3
*arg5 = arg3[1]
*arg4 = zx.d(arg3[6].b)
*arg2 = zx.d(*(arg3 + 0x19))

if (arg9 != 0)
    *arg9 = zx.d(*(arg3 + 0x1a))

if (arg10 != 0)
    *arg10 = zx.d(*(arg3 + 0x1b))

if (arg8 != 0)
    *arg8 = zx.d(arg3[7].b)

uint32_t var_c = zx.d(*(arg3 + 0x1b))
uint32_t var_10 = zx.d(*(arg3 + 0x1a))
int32_t edx_5 = arg3[1]
sub_5a4e30(arg6, edx_5, arg3, *arg3, edx_5, zx.d(arg3[6].b), zx.d(*(arg3 + 0x19)), zx.d(arg3[7].b))
return 1
