// 函数: sub_436da0
// 地址: 0x436da0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t ebp = arg2
int32_t eax_1
int32_t edx
edx:eax_1 = sx.q(ebp - 1)
int32_t eax_3 = (eax_1 - edx) s>> 1

while (arg3 s< ebp)
    void* ecx_2 = **arg4
    int32_t* ebx_1 = *(arg1 + (eax_3 << 2))
    void* edx_3 = *ebx_1
    int32_t esi_1 = *(edx_3 + 0x10)
    int32_t edi_1 = *(ecx_2 + 0x10)
    
    if (esi_1 s>= edi_1)
        if (esi_1 s> edi_1)
            break
        
        int32_t esi_2 = *(edx_3 + 0xc)
        int32_t edi_2 = *(ecx_2 + 0xc)
        
        if (esi_2 s>= edi_2)
            if (esi_2 s> edi_2)
                break
            
            if (*(edx_3 + 8) s>= *(ecx_2 + 8))
                break
    
    *(arg1 + (ebp << 2)) = ebx_1
    ebp = eax_3
    int32_t eax_5
    int32_t edx_5
    edx_5:eax_5 = sx.q(eax_3 - 1)
    eax_3 = (eax_5 - edx_5) s>> 1

int32_t result = *arg4
*(arg1 + (ebp << 2)) = result
return result
