// 函数: sub_57b800
// 地址: 0x57b800
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

float var_8c
int32_t eax_1 = data_78c474 ^ &var_8c
(*(*arg1 + 0x24))(0)
(*(*arg3 + 0x94))(1)
(*(*arg3 + 0x98))(1)
(*(*arg3 + 0x8c))(0, 1)
(*(*arg3 + 0x84))(0)
(*(*arg3 + 0x90))(0, 1)
(*(*arg3 + 0x7c))(0, 1, 0)
long double x87_r7 = float.t(1)
void* eax_9 = *arg3
var_8c = fconvert.s(x87_r7)
long double x87_r6 = float.t(0)
int32_t edx_7 = *(eax_9 + 0xb0)
float var_88 = fconvert.s(x87_r6)
float var_84 = fconvert.s(x87_r6)
float var_80 = fconvert.s(x87_r6)
float var_7c = fconvert.s(x87_r6)
float var_74 = fconvert.s(x87_r6)
float var_70 = fconvert.s(x87_r6)
float var_6c = fconvert.s(x87_r6)
float var_68 = fconvert.s(x87_r6)
float var_60 = fconvert.s(x87_r6)
float var_5c = fconvert.s(x87_r6)
float var_58 = fconvert.s(x87_r6)
float var_54 = fconvert.s(x87_r6)
float var_78 = fconvert.s(x87_r7)
float var_64 = fconvert.s(x87_r7)
float var_50 = fconvert.s(x87_r7)
void var_4c
__builtin_memcpy(&var_4c, &var_8c, 0x40)
edx_7(&var_4c)
(*(*arg3 + 0xb4))(&var_4c)
(*(*arg3 + 0xb8))(arg2 + 0xc)
bool result = (*(**(arg2 + 0x60) + 0x20))()

if (result != 0)
    int32_t* ecx_11 = *(arg2 + 0x60)
    int32_t eax_15
    int32_t edx_12
    edx_12:eax_15 = muls.dp.d(0x55555556, (*(*ecx_11 + 0x1c))())
    result = (*(*ecx_11 + 0x24))(0, (edx_12 u>> 0x1f) + edx_12) != 0

sub_6b4885(eax_1 ^ &var_8c)
return result
