// 函数: sub_5a5eb0
// 地址: 0x5a5eb0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

void var_1c
int32_t var_4 = data_78c474 ^ &var_1c
uint32_t eax_2 = arg2

if (arg2 s< 0)
    eax_2 = not.d(eax_2) + 1

char* result = sub_5a5cc0(eax_2, arg2, &var_4, &var_1c, arg3)

if (arg2 s< 0 && result u> &var_1c)
    result -= 1
    *result = 0x2d

if (arg5 - 1 u<= 7)
    int32_t var_28_1 = 0x20
    result = sub_5a5c80(0, result, (arg5 << 5) + arg4 - 0x20, arg5 - 1)

sub_6b4885(var_4 ^ &var_1c)
return result
