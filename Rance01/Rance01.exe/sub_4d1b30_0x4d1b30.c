// 函数: sub_4d1b30
// 地址: 0x4d1b30
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t ecx
int32_t var_4_1 = ecx
int32_t** esi = *(arg1 + 0xc)
int32_t* eax = *(arg1 + 0x10)
int32_t edi
int32_t var_14 = edi
int32_t** var_4 = esi

if (esi != eax)
    int32_t ebx_1 = arg2[4]
    
    do
        int32_t* ecx_1
        
        if (arg2[5] u< 0x10)
            ecx_1 = arg2
        else
            ecx_1 = *arg2
        
        int32_t edi_2 = esi[4]
        int32_t eax_1 = edi_2
        
        if (edi_2 u>= ebx_1)
            eax_1 = ebx_1
        
        int32_t* edx_1
        
        if (esi[5] u< 0x10)
            edx_1 = esi
        else
            edx_1 = *esi
        
        if (sub_402320(eax_1, edx_1, ecx_1, eax_1) == 0 && edi_2 u>= ebx_1)
            int32_t eax_2
            eax_2.b = edi_2 != ebx_1
            
            if (eax_2 == 0)
                return (esi - var_4) s/ 0x9c
        
        esi = &esi[0x27]
    while (esi != eax)

return 0xffffffff
