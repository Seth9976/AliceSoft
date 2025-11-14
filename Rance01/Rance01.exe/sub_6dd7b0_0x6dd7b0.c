// 函数: sub_6dd7b0
// 地址: 0x6dd7b0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

void* edi = 0x10
void* esi = 8
uint32_t ebp = *(arg1 + 0x3c)
int32_t ebx = *(arg1 + 0x4834)
int32_t ecx = *(arg1 + 0x3814)
int32_t eax = *(arg1 + 0x37f0)

if (*(arg1 + 0x78) - 1 != arg2)
    *(arg1 + 0x3814) = ecx + 0x30
else
    int32_t eax_5
    int32_t edx_1
    edx_1:eax_5 = sx.q(*(arg1 + 0x24))
    void* eax_10 = ((((eax_5 ^ edx_1) - edx_1) & 0xf) ^ edx_1) - edx_1
    
    if (eax_10 != 0)
        edi = eax_10
    
    *(arg1 + 0x3814) = ((arg3 << 3) + 8) * ebp + *(arg1 + 0x20)

if (arg3 == *(arg1 + 0x7c) - 1)
    int32_t eax_19
    int32_t edx_7
    edx_7:eax_19 = sx.q(*(arg1 + 0x28))
    int32_t eax_22
    int32_t edx_8
    edx_8:eax_22 = sx.q((eax_19 ^ edx_7) - edx_7)
    void* eax_27 = ((((eax_22 ^ edx_8) - edx_8) & 7) ^ edx_8) - edx_8
    
    if (eax_27 != 0)
        esi = eax_27

if (edi == 0x10 && esi == 8)
    return (*(eax + 0x84))(ecx, ebp, ebx, ebx + 0x100, ebx + 0x180)

return sub_6dd0c0(ecx, ebp, edi, esi, ebx)
