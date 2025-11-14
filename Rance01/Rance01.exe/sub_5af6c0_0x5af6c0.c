// 函数: sub_5af6c0
// 地址: 0x5af6c0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

char* edx = arg2
char* ecx = arg3
uint32_t result = zx.d(*ecx)
char ebx_1 = *edx + result.b
void* esi_1 = *(arg1 + 4) + edx
*edx = ebx_1
void* ecx_1 = &ecx[1]
arg1 = result
arg2 = &edx[1]

if (&edx[1] u< esi_1)
    while (true)
        uint32_t edi_1 = zx.d(*ecx_1)
        uint32_t ebx_2 = zx.d(ebx_1)
        uint32_t edi_2 = edi_1 - result
        uint32_t ebp_2 = ebx_2 - result
        int32_t eax_2
        int32_t edx_2
        edx_2:eax_2 = sx.q(edi_2)
        int32_t ecx_5 = (eax_2 ^ edx_2) - edx_2
        int32_t eax_4
        int32_t edx_3
        edx_3:eax_4 = sx.q(ebp_2)
        int32_t esi_4 = (eax_4 ^ edx_3) - edx_3
        int32_t eax_6
        int32_t edx_4
        edx_4:eax_6 = sx.q(edi_2 + ebp_2)
        
        if (esi_4 s< ecx_5)
            ebx_2 = edi_1
            ecx_5 = esi_4
        
        if ((eax_6 ^ edx_4) - edx_4 s< ecx_5)
            ebx_2 = arg1
        
        ebx_1 = ebx_2.b + *arg2
        *arg2 = ebx_1
        result = arg2 + 1
        arg1 = edi_1
        arg2 = result
        
        if (result u>= esi_1)
            break
        
        ecx_1 += 1
        result = arg1

return result
