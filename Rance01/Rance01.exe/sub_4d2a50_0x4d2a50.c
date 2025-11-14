// 函数: sub_4d2a50
// 地址: 0x4d2a50
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t ecx_4 = *(arg1 + 0x2c)

if (ecx_4 == *(arg1 + 0x30))
    long double x87_r7 = float.t(0)
    float var_c = fconvert.s(x87_r7)
    float var_8 = fconvert.s(x87_r7)
    float var_4 = fconvert.s(x87_r7)
    *arg2 = fconvert.s(x87_r7)
    arg2[1] = var_c
    arg2[2] = var_8
    arg2[3] = var_4
    return arg2

int32_t var_1c = ecx_4
void var_14
void* eax_3
int80_t st0
st0, eax_3 = sub_4cefd0(&var_14, arg1 + 0x2c, fconvert.s(fconvert.t(arg3)))
int32_t edx_2 = *(eax_3 + 8)
*arg2 = *(eax_3 + 4)
int32_t ecx_3 = *(eax_3 + 0xc)
arg2[1] = edx_2
int32_t edx_3 = *(eax_3 + 0x10)
arg2[2] = ecx_3
arg2[3] = edx_3
return arg2
