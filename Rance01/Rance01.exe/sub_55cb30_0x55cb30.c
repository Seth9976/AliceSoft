// 函数: sub_55cb30
// 地址: 0x55cb30
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t ecx
int32_t var_4_1 = ecx
int32_t** esi = *arg1
int32_t* eax = arg1[1]
int32_t** var_4 = esi

if (esi != eax)
    int32_t ebx_1 = arg2[4]
    
    do
        int32_t* ecx_2
        
        if (arg2[5] u< 0x10)
            ecx_2 = arg2
        else
            ecx_2 = *arg2
        
        int32_t edi_1 = esi[4]
        int32_t eax_1 = edi_1
        
        if (edi_1 u>= ebx_1)
            eax_1 = ebx_1
        
        int32_t* edx_1
        
        if (esi[5] u< 0x10)
            edx_1 = esi
        else
            edx_1 = *esi
        
        if (sub_402320(eax_1, edx_1, ecx_2, eax_1) == 0 && edi_1 u>= ebx_1)
            int32_t eax_2
            eax_2.b = edi_1 != ebx_1
            
            if (eax_2 == 0)
                return (esi - var_4) s/ 0x2c
        
        esi = &esi[0xb]
    while (esi != eax)

return 0xffffffff
