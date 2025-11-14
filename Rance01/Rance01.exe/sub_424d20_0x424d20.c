// 函数: sub_424d20
// 地址: 0x424d20
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

void* ecx = data_797d40

if (*(ecx + 0x98) != 0)
    bool cond:0_1 = *(ecx + 0x9c) u< 0x10
    void* eax_1 = ecx + 0x88
    *(eax_1 + 0x10) = 0
    
    if (not(cond:0_1))
        eax_1 = *eax_1
    
    *eax_1 = 0

return *(ecx + 0x7c) - *(ecx + 0x78)
