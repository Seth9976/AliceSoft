// 函数: sub_4da2f0
// 地址: 0x4da2f0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

if (arg2 s>= 0 && arg2 s<= 7 && *(arg1 + 0xc) != 0 && *(arg1 + 0x80) != 0
        && (*(**(arg1 + 0x80) + 0x10))() != 0)
    if (arg2 u> 5)
    label_4da34c:
        char eax_3
        int80_t st0
        st0, eax_3 = sub_4ceb40(arg1 + 0x28, arg2)
        
        if (eax_3 == 0)
            return 1
        
        (*(*arg4 + 0x80))(0, 0)
        
        if (arg2 != 5)
            (*(*arg4 + 0x80))(1, 0)
            (*(*arg4 + 0x80))(2, 0)
            (*(*arg4 + 0x80))(3, 0)
            (*(*arg4 + 0x80))(4, 0)
        
        (*(*arg4 + 0x84))(0)
        (*(*arg4 + 0x90))(0, 1)
        
        if (*(arg1 + 0x84) != 0 && sub_4da5e0(arg1) != 0
                && sub_4ced50(arg1 + 0x28, arg2, arg3, arg4) != 0)
            if (*(arg1 + 0x139) == 0 || arg2 != 1)
                return true
            
            if (sub_4b8550(arg4, arg1 + 0x13c, arg3, arg1 + 0x8c) != 0)
                return true
        
        return false
    
    switch (arg2)
        case 0, 5
            if (*(arg1 + 0x136) != 0)
                goto label_4da34c
        case 1, 2
            if (*(arg1 + 0x136) == 0)
                goto label_4da34c
        case 3, 4
            goto label_4da34c

return 1
