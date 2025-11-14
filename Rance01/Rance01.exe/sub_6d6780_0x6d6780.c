// 函数: sub_6d6780
// 地址: 0x6d6780
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t edi = 0x10
int32_t esi = 0x10
int32_t ebp = *(arg1 + 0x3c)
int32_t ebx = *(arg1 + 0x4834)
int32_t ecx = *(arg1 + 0x3814)
int32_t eax = *(arg1 + 0x37f0)

if (*(arg1 + 0x78) - 1 != arg2)
    *(arg1 + 0x3814) = ecx + 0x30
else
    int32_t eax_5
    int32_t edx_1
    edx_1:eax_5 = sx.q(*(arg1 + 0x24))
    int32_t eax_10 = ((((eax_5 ^ edx_1) - edx_1) & 0xf) ^ edx_1) - edx_1
    
    if (eax_10 != 0)
        edi = eax_10
    
    *(arg1 + 0x3814) = ((arg3 << 4) + 0x10) * ebp + *(arg1 + 0x20)

if (arg3 == *(arg1 + 0x7c) - 1)
    int32_t eax_22
    int32_t edx_5
    edx_5:eax_22 = sx.q(*(arg1 + 0x28))
    int32_t eax_25
    int32_t edx_6
    edx_6:eax_25 = sx.q((eax_22 ^ edx_5) - edx_5)
    int32_t eax_30 = ((((eax_25 ^ edx_6) - edx_6) & 0xf) ^ edx_6) - edx_6
    
    if (eax_30 != 0)
        esi = eax_30

if (edi == 0x10 && esi == 0x10)
    return (*(eax + 0x70))(ecx, ebp, ebx, ebx + 0x200, ebx + 0x280)

return sub_6d5700(ecx, ebp, edi, esi, ebx)
