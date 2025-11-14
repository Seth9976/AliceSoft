// 函数: sub_500900
// 地址: 0x500900
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t eax
int32_t edx_2
edx_2:eax = muls.dp.d(0x2e8ba2e9, *(arg1 + 0x24) - *(arg1 + 0x20))
int32_t edx_3 = edx_2 s>> 3
int32_t eax_3 = (edx_3 u>> 0x1f) + edx_3
int32_t ecx = 0

if (eax_3 s> 0)
    void* esi_1 = *(arg1 + 0x20)
    int32_t* edx_4 = esi_1 + 0x20
    
    do
        if (*edx_4 == 1)
            int32_t ecx_1 = ecx * 0x2c
            int32_t ecx_2 = *(ecx_1 + esi_1 + 0x28)
            *arg2 = *(ecx_1 + esi_1 + 0x24)
            arg2[1] = ecx_2
            return arg2
        
        ecx += 1
        edx_4 = &edx_4[0xb]
    while (ecx s< eax_3)

long double x87_r7 = float.t(1)
*arg2 = fconvert.s(x87_r7)
arg2[1] = fconvert.s(x87_r7)
return arg2
