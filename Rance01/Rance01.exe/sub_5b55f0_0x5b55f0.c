// 函数: sub_5b55f0
// 地址: 0x5b55f0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

void* ecx_2 = *(arg1 + 4)
void* edi = *(arg1 + 0x68)

if (edi != 0 && ecx_2 != 0)
    void* edx_1 = *(ecx_2 + 0x1c)
    
    if (edx_1 != 0)
        char esi = (*(edx_1 + 0xe48)).b
        int32_t edx_3 = *(edx_1 + 4) s>> (esi + 1)
        *(arg1 + 0x20) = 0
        *(arg1 + 0x30) = edx_3
        *(arg1 + 0x18) = 0xffffffff
        *(arg1 + 0x38) = 0xffffffff
        *(arg1 + 0x14) = edx_3 s>> esi
        *(arg1 + 0x3c) = 0xffffffff
        *(arg1 + 0x40) = 0xffffffff
        *(arg1 + 0x44) = 0xffffffff
        *(edi + 0x80) = 0xffffffff
        *(edi + 0x84) = 0xffffffff
        return 0

return 0xffffffff
