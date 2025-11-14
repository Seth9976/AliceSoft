// 函数: sub_4b2480
// 地址: 0x4b2480
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t ecx
int32_t var_4_1 = ecx
int32_t eax = arg4
int32_t* ebp = arg3
int32_t* ecx_1 = ebp

if (ebp != eax)
    void* ebx_1 = arg1
    int32_t edx_1 = *(ebx_1 + 4)
    
    while (eax != edx_1)
        int32_t esi_1 = eax
        int32_t* edi_1 = ebp
        eax += 0x24
        ebp = &ebp[9]
        __builtin_memcpy(edi_1, esi_1, 0x24)
    
    int32_t edi_2 = *(ebx_1 + 4)
    int32_t* esi_2 = ebp
    
    if (ebp != edi_2)
        do
            int32_t* ecx_2 = *esi_2
            
            if (ecx_2 != 0)
                (*(*ecx_2 + 4))()
                *esi_2 = 0
            
            esi_2[8].b = 0
            esi_2 = &esi_2[9]
        while (esi_2 != edi_2)
        
        ebx_1 = arg1
    
    *(ebx_1 + 4) = ebp

*arg2 = ecx_1
return arg2
