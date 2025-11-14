// 函数: sub_40abe0
// 地址: 0x40abe0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

void* eax = *(arg1 + 4)

if (eax != 0)
    void* esi_1 = *(eax + 0x30)
    
    if (esi_1 != 0)
        if (*(esi_1 + 0x2d4) != 0)
            (*(**(esi_1 + 0x2d4) + 0x10))()
        
        sub_40d2b0(esi_1 + 0x28c)
        sub_40d2b0(esi_1 + 0x2ac)
    
    *(arg1 + 4) = 0

return 0
