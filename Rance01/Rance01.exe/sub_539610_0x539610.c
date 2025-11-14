// 函数: sub_539610
// 地址: 0x539610
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t* ecx = arg2
int32_t ebx = ecx[4]

if (ebx == 0)
    return 0xffffffff

int32_t ebp = *(arg1 + 0x100)
int32_t** esi = *(arg1 + 0xfc)
int32_t** var_4 = esi

if (esi != ebp)
    int32_t eax_1 = ecx[5]
    
    while (true)
        if (eax_1 u>= 0x10)
            ecx = *ecx
        
        int32_t edi_1 = esi[4]
        int32_t eax_2 = edi_1
        
        if (edi_1 u>= ebx)
            eax_2 = ebx
        
        int32_t* edx_1
        
        if (esi[5] u< 0x10)
            edx_1 = esi
        else
            edx_1 = *esi
        
        if (sub_402320(eax_2, edx_1, ecx, eax_2) == 0 && edi_1 u>= ebx)
            int32_t eax_3
            eax_3.b = edi_1 != ebx
            
            if (eax_3 == 0)
                return (esi - var_4) s/ 0x1c
        
        esi = &esi[7]
        
        if (esi == ebp)
            break
        
        ecx = arg2

return 0xffffffff
