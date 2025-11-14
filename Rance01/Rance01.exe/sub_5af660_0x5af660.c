// 函数: sub_5af660
// 地址: 0x5af660
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

char* ecx = arg2
int32_t result = (zx.d(*(arg1 + 0xb)) + 7) s>> 3
int32_t i_2 = *(arg1 + 4) - result
char* edi = arg3

if (result != 0)
    int32_t esi_1 = result
    int32_t i
    
    do
        void* edx
        edx.b = *edi
        edx.b u>>= 1
        *ecx += edx.b
        edi = &edi[1]
        ecx = &ecx[1]
        i = esi_1
        esi_1 -= 1
    while (i != 1)

if (i_2 != 0)
    void* esi_3 = ecx - result
    void* edi_1 = edi - ecx
    int32_t i_1
    
    do
        int32_t eax_4
        int32_t edx_2
        edx_2:eax_4 = sx.q(zx.d(*(edi_1 + ecx)) + zx.d(*esi_3))
        result = (eax_4 - edx_2) s>> 1
        *ecx += result.b
        ecx = &ecx[1]
        esi_3 += 1
        i_1 = i_2
        i_2 -= 1
    while (i_1 != 1)

return result
