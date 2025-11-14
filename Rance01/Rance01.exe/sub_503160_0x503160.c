// 函数: sub_503160
// 地址: 0x503160
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

if (arg2 s< 0 || arg2 s> 7 || *(arg1 + 0xc) == 0)
    int32_t result
    result.b = 1
    return result

if (sub_4cce80(arg1 + 0x14) != 0 && *(arg1 + 0xd4) != 0 && (*(**(arg1 + 0xd4) + 0x10))() != 0)
    if (arg2 u> 5)
    label_5031e4:
        bool eax_3
        int80_t st0
        st0, eax_3 = sub_4ceb40(arg1 + 0x24, arg2)
        
        if (eax_3 == 0)
            return true
        
        if (*(arg1 + 0xd8) != 0 && sub_5033a0(arg1) != 0)
            if (arg2 != 6 && arg2 != 7)
                return sub_4ced50(arg1 + 0x24, arg2, arg3, arg4) != 0
            
            if (sub_4ced50(arg1 + 0x24, 2, arg3, arg4) != 0)
                return sub_4ced50(arg1 + 0x24, arg2, arg3, arg4) != 0
        
        return false
    
    switch (arg2)
        case 0
            if (*(arg1 + 0x164) == 0)
                return 1
            
            goto label_5031e4
        case 1, 2
            if (*(arg1 + 0x164) == 0)
                goto label_5031e4
        case 3, 4
            goto label_5031e4
        case 5
            if (*(arg1 + 0x164) != 0)
                goto label_5031e4

return 1
