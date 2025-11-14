// 函数: sub_5183e0
// 地址: 0x5183e0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t eax
int32_t edx
edx:eax = muls.dp.d(0x2fa0be83, *(arg1 + 0xc) - *(arg1 + 8))
int32_t edx_1 = edx s>> 5
int32_t i = 0

if ((edx_1 u>> 0x1f) + edx_1 s<= 0)
    return 

long double x87_r7_1 = fconvert.t(arg2)
int32_t ebx_1 = 0
int32_t edx_3

do
    void* eax_5 = *(arg1 + 8) + ebx_1
    
    if (*(eax_5 + 0x50) != 0)
        float var_c = fconvert.s(fconvert.t(*(eax_5 + 0x8c)) * x87_r7_1)
        float var_8_1 = fconvert.s(fconvert.t(*(eax_5 + 0x90)) * x87_r7_1)
        float var_4_1 = fconvert.s(x87_r7_1 * fconvert.t(*(eax_5 + 0x94)))
        sub_5185b0(arg1, i, &var_c)
        x87_r7_1 = fconvert.t(arg2)
    
    int32_t eax_6
    int32_t edx_2
    edx_2:eax_6 = muls.dp.d(0x2fa0be83, *(arg1 + 0xc) - *(arg1 + 8))
    edx_3 = edx_2 s>> 5
    i += 1
    ebx_1 += 0xac
while (i s< (edx_3 u>> 0x1f) + edx_3)
