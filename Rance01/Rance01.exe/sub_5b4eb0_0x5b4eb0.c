// 函数: sub_5b4eb0
// 地址: 0x5b4eb0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t ebx = *(arg2 + 0x48)
uint32_t edi_1 = (arg1 + 7) & 0xfffffff8

if (ebx + edi_1 s> *(arg2 + 0x4c))
    if (*(arg2 + 0x44) != 0)
        int32_t* eax_1 = sub_6b5c43(8)
        int32_t ecx_1 = *(arg2 + 0x54)
        *(arg2 + 0x50) += ebx
        eax_1[1] = ecx_1
        *eax_1 = *(arg2 + 0x44)
        *(arg2 + 0x54) = eax_1
    
    *(arg2 + 0x4c) = edi_1
    *(arg2 + 0x44) = sub_6b5c43(edi_1)
    *(arg2 + 0x48) = 0

int32_t ecx_2 = *(arg2 + 0x48)
int32_t result = *(arg2 + 0x44) + ecx_2
*(arg2 + 0x48) = ecx_2 + edi_1
return result
