// 函数: sub_65b3a0
// 地址: 0x65b3a0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t ecx = *(arg1 + 0x84)

if (ecx == 0 && *(arg1 + 0x10c) != ecx)
    void* eax_1 = *(*(arg1 + 0x108) + 0x90)
    
    if (eax_1 != 0)
        void* eax_2 = *(eax_1 + 0x84)
        
        if (eax_2 != 0)
            return sub_6579f0(eax_2)
else if (ecx == 1 && *(arg1 + 0x108) != 0)
    void* eax_5 = *(*(arg1 + 0x10c) + 0xa0)
    
    if (eax_5 != 0)
        return *(eax_5 + 0x2f4)

return 0
