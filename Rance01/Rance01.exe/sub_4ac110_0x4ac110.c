// 函数: sub_4ac110
// 地址: 0x4ac110
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t ebx = arg2
int32_t eax_1
int32_t edx
edx:eax_1 = sx.q(ebx - 1)
int32_t eax_3 = (eax_1 - edx) s>> 1

while (arg3 s< ebx)
    void* edx_1 = *arg4
    void* ecx_2 = *(arg1 + (eax_3 << 2))
    int32_t esi_1 = *(ecx_2 + 0x10)
    int32_t edi_1 = *(edx_1 + 0x10)
    
    if (esi_1 s>= edi_1)
        if (esi_1 s> edi_1)
            break
        
        int32_t esi_2 = *(ecx_2 + 0xc)
        int32_t edi_2 = *(edx_1 + 0xc)
        
        if (esi_2 s>= edi_2)
            if (esi_2 s> edi_2)
                break
            
            if (*(ecx_2 + 8) s>= *(edx_1 + 8))
                break
    
    *(arg1 + (ebx << 2)) = ecx_2
    ebx = eax_3
    int32_t eax_5
    int32_t edx_2
    edx_2:eax_5 = sx.q(eax_3 - 1)
    eax_3 = (eax_5 - edx_2) s>> 1

int32_t result = *arg4
*(arg1 + (ebx << 2)) = result
return result
