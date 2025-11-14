// 函数: sub_5181d0
// 地址: 0x5181d0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t eax
int32_t edx
edx:eax = muls.dp.d(0x2fa0be83, *(arg1 + 0xc) - *(arg1 + 8))
int32_t edx_1 = edx s>> 5
int32_t result = (edx_1 u>> 0x1f) + edx_1
int32_t* edx_2 = arg2

if (result == (edx_2[1] - *edx_2) s>> 5)
    int32_t ebx_1 = 0
    
    if (result s> 0)
        int32_t edi_1 = 0
        int32_t ebp_1 = 0
        
        while (true)
            void* ecx_5 = *(arg1 + 8) + ebp_1
            
            if (*(ecx_5 + 0x50) == 0)
                void* eax_3 = *edx_2
                void* eax_4 = eax_3 + edi_1
                *(ecx_5 + 0x10) = *(eax_3 + edi_1 + 4)
                *(ecx_5 + 0x14) = *(eax_4 + 8)
                *(ecx_5 + 0x18) = *(eax_4 + 0xc)
                *(ecx_5 + 0x1c) = *(eax_4 + 0x10)
                *(ecx_5 + 0x20) = *(eax_4 + 0x14)
                *(ecx_5 + 0x24) = *(eax_4 + 0x18)
                *(ecx_5 + 0x28) = *(eax_4 + 0x1c)
            
            int32_t edx_9
            edx_9:result = muls.dp.d(0x2fa0be83, *(arg1 + 0xc) - *(arg1 + 8))
            int32_t edx_10 = edx_9 s>> 5
            ebx_1 += 1
            ebp_1 += 0xac
            edi_1 += 0x20
            
            if (ebx_1 s>= (edx_10 u>> 0x1f) + edx_10)
                break
            
            edx_2 = arg2

return result
