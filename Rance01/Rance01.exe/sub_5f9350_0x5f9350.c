// 函数: sub_5f9350
// 地址: 0x5f9350
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

uint32_t ecx = arg2
char* edx = *ecx
int32_t edi = *(ecx + 4)
uint32_t* eax

if (&edx[4] u> edi)
    eax.b = 0
    return eax

uint32_t esi_6 = ((zx.d(edx[3]) << 8 | zx.d(edx[2])) << 8 | zx.d(edx[1])) << 8 | zx.d(*edx)
*ecx = &edx[4]

if (&edx[8] u<= edi)
    uint32_t edi_5 = (zx.d(edx[7]) << 8 | zx.d(edx[6])) << 8 | zx.d(edx[5])
    uint32_t edx_5 = zx.d(edx[4])
    *ecx = &edx[8]
    uint32_t var_c
    uint32_t var_8
    uint32_t var_4
    
    if (sub_5546f0(ecx, &arg2).b != 0 && sub_5546f0(ecx, &var_c).b != 0
            && sub_5546f0(ecx, &var_8).b != 0 && sub_5546f0(ecx, &var_4).b != 0)
        uint32_t ecx_1 = var_c
        uint32_t edx_6 = var_8
        *(arg1 + 0x1c) = arg2
        *(arg1 + 0x28) = var_4
        *(arg1 + 0x20) = ecx_1
        *(arg1 + 0x24) = edx_6
        *(arg1 + 0x10) = esi_6
        *(arg1 + 0x14) = edi_5 << 8 | edx_5
        uint32_t eax_3
        eax_3.b = 1
        return eax_3

eax.b = 0
return eax
