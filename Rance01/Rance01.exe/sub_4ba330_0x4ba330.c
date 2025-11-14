// 函数: sub_4ba330
// 地址: 0x4ba330
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t* edi = *(arg1 + 0xcc)
int32_t eax
int32_t edx
edx:eax = muls.dp.d(0x38e38e39, *(arg1 + 0xd0) - edi)
int32_t edx_1 = edx s>> 3
int32_t eax_3 = (edx_1 u>> 0x1f) + edx_1
int32_t ecx_1

if (eax_3 s> 0)
    ecx_1 = *edi
else
    ecx_1 = 0

*arg2 = ecx_1
int32_t ecx_2 = *(arg1 + 0x30)

if (ecx_2 s<= 0)
    if (eax_3 s> 0)
        *arg3 = *edi
        return eax_3
    
    *arg3 = 0
    return eax_3

if (ecx_2 != 1)
    if (eax_3 s> 0)
        *arg3 = *(arg1 + 0x34) + edi[eax_3 * 9 - 9]
        return eax_3
    
    *arg3 = *(arg1 + 0x34)
    return eax_3

if (eax_3 s> 0)
    int32_t eax_7 = *(arg1 + 0x34) + *edi
    *arg3 = eax_7
    return eax_7

int32_t eax_5 = *(arg1 + 0x34)
*arg3 = eax_5
return eax_5
