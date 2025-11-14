// 函数: sub_500960
// 地址: 0x500960
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t ebp = arg3
int32_t eax
int32_t edx_2
edx_2:eax = muls.dp.d(0x2e8ba2e9, *(arg1 + 0x24) - *(arg1 + 0x20))
int32_t edx_3 = edx_2 s>> 3
int32_t eax_3 = (edx_3 u>> 0x1f) + edx_3
int32_t ecx = 0
arg3 = 0

if (eax_3 s> 0)
    void* edi_1 = *(arg1 + 0x20)
    int32_t* edx_4 = edi_1 + 0x20
    
    do
        if (*edx_4 == ebp)
            *(arg2 + 0x14) = 0xf
            *(arg2 + 0x10) = 0
            *arg2 = 0
            sub_401180(arg2, 0xffffffff, ecx * 0x2c + edi_1 + 4, 0)
            return arg2
        
        ecx += 1
        edx_4 = &edx_4[0xb]
    while (ecx s< eax_3)

*(arg2 + 0x14) = 0xf
*(arg2 + 0x10) = 0
*arg2 = 0
return arg2
