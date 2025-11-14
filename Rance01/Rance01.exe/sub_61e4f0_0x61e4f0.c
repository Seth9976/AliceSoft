// 函数: sub_61e4f0
// 地址: 0x61e4f0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t ebx_2 = (*(arg1 + 0x14) - *(arg1 + 0x10)) s/ 0x1c
int32_t result = 0

if (ebx_2 s> 0)
    struct _EXCEPTION_REGISTRATION_RECORD** eax_1 = arg2
    int32_t edx_3 = eax_1[4]
    int32_t ecx_2 = eax_1[5]
    int32_t** ebp_1 = *(arg1 + 0x10)
    int32_t var_8_1 = edx_3
    
    while (true)
        struct _EXCEPTION_REGISTRATION_RECORD* ecx_3
        
        if (ecx_2 u< 0x10)
            ecx_3 = eax_1
        else
            ecx_3 = *eax_1
        
        int32_t esi_1 = ebp_1[4]
        int32_t eax_2 = esi_1
        
        if (esi_1 u>= edx_3)
            eax_2 = edx_3
        
        int32_t* edx_4
        
        if (ebp_1[5] u< 0x10)
            edx_4 = ebp_1
        else
            edx_4 = *ebp_1
        
        if (sub_402320(eax_2, edx_4, ecx_3, eax_2) == 0 && esi_1 u>= var_8_1)
            int32_t edx_5
            edx_5.b = esi_1 != var_8_1
            
            if (edx_5 == 0)
                return result
        
        int32_t result_1 = result + 1
        ebp_1 = &ebp_1[7]
        result = result_1
        
        if (result_1 s>= ebx_2)
            break
        
        eax_1 = arg2
        edx_3 = var_8_1

sub_405220(arg2, arg1 + 0x10)
return (*(arg1 + 0x14) - *(arg1 + 0x10)) s/ 0x1c - 1
