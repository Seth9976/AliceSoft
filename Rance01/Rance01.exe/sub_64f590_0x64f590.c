// 函数: sub_64f590
// 地址: 0x64f590
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

uint32_t eax = *(*(arg1 + 0x8c) + 0x10c)

if (eax != 0)
    eax = *(eax + 0xa4)
    
    if (eax != 0)
        eax = *(eax + 0x60)

uint32_t result = sub_64f6e0(arg1, eax)
void* ecx_1 = *(*(arg1 + 0x8c) + 0x10c)

if (ecx_1 != 0)
    void* ecx_2 = *(ecx_1 + 0xa4)
    
    if (ecx_2 != 0)
        *(ecx_2 + 0x60) = result
        int80_t st0_1
        st0_1, result = sub_65c190(ecx_2, *(ecx_2 + 0x5c))

return result
