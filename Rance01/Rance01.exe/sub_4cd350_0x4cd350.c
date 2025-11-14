// 函数: sub_4cd350
// 地址: 0x4cd350
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

long double x87_r7 = float.t(0)
*(arg1 + 0xf0) = fconvert.s(x87_r7)
*(arg1 + 0xf4) = fconvert.s(x87_r7)
*(arg1 + 0x7c) = 0
sub_4be9f0(arg1 + 0x28)
*(arg1 + 4) = 0
bool cond:0 = *(arg1 + 0x1c) u< 0x10
*(arg1 + 0x18) = 0
char* result

if (cond:0)
    result = arg1 + 8
else
    result = *(arg1 + 8)

*result = 0

if (arg2 == 0 || arg8 == 0)
    result.b = 0
    return result

sub_401180(arg1 + 8, 0xffffffff, arg8, 0)
*(arg1 + 0xe8) = arg2
*(arg1 + 0xec) = arg3
*(arg1 + 0x24) = arg8[9].b
*(arg1 + 0x25) = sub_4ccb50(arg2)
*(arg1 + 0x26) = *(arg8 + 0x25)
*(arg1 + 0x64) = arg7
*(arg1 + 0x68) = arg8[0x1f].b
*(arg1 + 4) = arg8
*(arg1 + 0x66) = arg8[0x1e].b
*(arg1 + 0x65) = *(arg8 + 0x79)
*(arg1 + 0x67) = *(arg8 + 0x7a)
*(arg1 + 0x69) = *(arg8 + 0x49)
*(arg1 + 0x6a) = *(arg8 + 0x7b)
return sub_4be900(arg1 + 0x28, arg4, arg7, &arg8[0xe], arg6, arg5) != 0
