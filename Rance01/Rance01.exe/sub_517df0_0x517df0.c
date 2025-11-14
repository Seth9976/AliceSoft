// 函数: sub_517df0
// 地址: 0x517df0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t eax
int32_t edx
edx:eax = muls.dp.d(0x2fa0be83, *(arg1 + 0xc) - *(arg1 + 8))
int32_t* ecx_1 = arg2
int32_t edx_1 = edx s>> 5
int32_t result = (edx_1 u>> 0x1f) + edx_1

if (result != (ecx_1[1] - *ecx_1) s>> 5)
    result.b = 0
    return result

int32_t ebp = 0

if (result s> 0)
    int32_t ebx_1 = 0
    int32_t edi_1 = 0
    
    while (true)
        void* eax_3 = *ecx_1
        int32_t ecx_2 = *(arg1 + 8)
        *(ebx_1 + ecx_2 + 0x10) = *(eax_3 + edi_1 + 4)
        void* eax_4 = eax_3 + edi_1
        *(ebx_1 + ecx_2 + 0x14) = *(eax_3 + edi_1 + 8)
        *(ebx_1 + ecx_2 + 0x18) = *(eax_4 + 0xc)
        *(ebx_1 + ecx_2 + 0x1c) = *(eax_4 + 0x10)
        *(ebx_1 + ecx_2 + 0x20) = *(eax_4 + 0x14)
        *(ebx_1 + ecx_2 + 0x24) = *(eax_4 + 0x18)
        *(ebx_1 + ecx_2 + 0x28) = *(eax_4 + 0x1c)
        int32_t edx_11
        edx_11:result = muls.dp.d(0x2fa0be83, *(arg1 + 0xc) - *(arg1 + 8))
        int32_t edx_12 = edx_11 s>> 5
        ebp += 1
        edi_1 += 0x20
        ebx_1 += 0xac
        
        if (ebp s>= (edx_12 u>> 0x1f) + edx_12)
            break
        
        ecx_1 = arg2

*(arg1 + 0x5c) = 1
result.b = 1
return result
