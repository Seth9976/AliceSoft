// 函数: sub_673790
// 地址: 0x673790
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

if (arg2 != 0)
    if (*(arg1 + 0x10) != 0)
        int32_t eax_3 = (*(**(arg1 + 0x10) + 0x1c))(arg2)
        
        if (eax_3 != 0)
            return *(arg1 + 4) + eax_3
    
    if (*(arg1 + 0xc) != 0)
        return (*(**(arg1 + 0xc) + 0x1c))(arg2)

return 0
