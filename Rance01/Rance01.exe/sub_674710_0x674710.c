// 函数: sub_674710
// 地址: 0x674710
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

if (arg2 != 0)
    if (*(arg1 + 0x10) != 0)
        int32_t result = (*(**(arg1 + 0x10) + 0xbc))(arg2)
        
        if (result != 0)
            return result
    
    if (*(arg1 + 0xc) != 0)
        return (*(**(arg1 + 0xc) + 0xbc))(arg2)

return 0
