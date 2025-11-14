// 函数: sub_4f7b00
// 地址: 0x4f7b00
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

long double x87_r7 = fconvert.t(*(arg2 + 0x68))
long double x87_r6 = fconvert.t(*(arg3 + 0x68))
x87_r6 - x87_r7
void var_78

if ((((x87_r6 < x87_r7 ? 1 : 0) << 8 | (is_unordered.t(x87_r6, x87_r7) ? 1 : 0) << 0xa
        | (x87_r6 == x87_r7 ? 1 : 0) << 0xe):1.b & 0x41) == 0)
    __builtin_memcpy(&var_78, arg2, 0x6c)
    __builtin_memcpy(arg2, arg3, 0x6c)
    __builtin_memcpy(arg3, &var_78, 0x6c)

long double x87_r7_1 = fconvert.t(*(arg4 + 0x68))
long double x87_r6_1 = fconvert.t(*(arg2 + 0x68))
x87_r6_1 - x87_r7_1

if ((((x87_r6_1 < x87_r7_1 ? 1 : 0) << 8 | (is_unordered.t(x87_r6_1, x87_r7_1) ? 1 : 0) << 0xa
        | (x87_r6_1 == x87_r7_1 ? 1 : 0) << 0xe):1.b & 0x41) == 0)
    __builtin_memcpy(&var_78, arg4, 0x6c)
    __builtin_memcpy(arg4, arg2, 0x6c)
    __builtin_memcpy(arg2, &var_78, 0x6c)

long double x87_r7_2 = fconvert.t(*(arg2 + 0x68))
long double x87_r6_2 = fconvert.t(*(arg3 + 0x68))
x87_r6_2 - x87_r7_2
arg1 = (x87_r6_2 < x87_r7_2 ? 1 : 0) << 8 | (is_unordered.t(x87_r6_2, x87_r7_2) ? 1 : 0) << 0xa
    | (x87_r6_2 == x87_r7_2 ? 1 : 0) << 0xe

if ((arg1:1.b & 0x41) == 0)
    __builtin_memcpy(&var_78, arg2, 0x6c)
    __builtin_memcpy(arg2, arg3, 0x6c)
    __builtin_memcpy(arg3, &var_78, 0x6c)

return arg1
