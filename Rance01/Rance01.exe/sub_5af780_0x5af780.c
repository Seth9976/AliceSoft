// 函数: sub_5af780
// 地址: 0x5af780
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

char* ebx = arg2
int32_t esi_2 = (zx.d(*(arg1 + 0xb)) + 7) s>> 3
void* ecx = &ebx[esi_2]

while (ebx u< ecx)
    char* edx_1 = arg3
    *ebx += *edx_1
    ebx = &ebx[1]
    arg3 = &edx_1[1]

uint32_t result = *(arg1 + 4) - esi_2
void* ecx_1 = ecx + result

if (ebx u< ecx_1)
    void* edx_4 = ebx - esi_2
    arg2 = edx_4
    void* ecx_3 = arg3 - esi_2
    
    while (true)
        uint32_t ebp_2 = zx.d(*edx_4)
        uint32_t result_1 = zx.d(*ecx_3)
        uint32_t edi_1 = zx.d(*arg3)
        arg3 += 1
        uint32_t edi_2 = edi_1 - result_1
        arg1 = ebp_2
        uint32_t ebp_3 = ebp_2 - result_1
        int32_t eax_5
        int32_t edx_6
        edx_6:eax_5 = sx.q(edi_2)
        int32_t ecx_7 = (eax_5 ^ edx_6) - edx_6
        int32_t eax_7
        int32_t edx_7
        edx_7:eax_7 = sx.q(ebp_3)
        int32_t esi_5 = (eax_7 ^ edx_7) - edx_7
        int32_t eax_9
        int32_t edx_8
        edx_8:eax_9 = sx.q(edi_2 + ebp_3)
        result = (eax_9 ^ edx_8) - edx_8
        
        if (esi_5 s< ecx_7)
            ecx_7 = esi_5
            arg1 = edi_1
        
        if (result s< ecx_7)
            result = result_1
            arg1 = result
        
        ecx_7.b = arg1.b
        *ebx += ecx_7.b
        arg2 += 1
        ebx = &ebx[1]
        
        if (ebx u>= ecx_1)
            break
        
        edx_4 = arg2
        ecx_3 += 1

return result
