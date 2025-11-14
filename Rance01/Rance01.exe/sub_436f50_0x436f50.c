// 函数: sub_436f50
// 地址: 0x436f50
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

if (*(arg1 + 0x7c) != 0)
    if (*arg1 != 0)
        char eax_2
        int32_t ecx_3
        eax_2, ecx_3 = (*(**(arg1 + 0x7c) + 0x28))()
        
        if (eax_2 == 0)
            int32_t var_8_8 = ecx_3
            (*(*arg3 + 0x44))(0xff000000, fconvert.s(float.t(1)))
            arg1 = sub_435e30(&arg1[0xc], arg3, arg2)
            
            if (arg1.b == 0)
                return arg1
        else
            if ((*(**(arg1 + 0x7c) + 0x1c))(arg3).b == 0)
                arg1.b = 0
                return arg1
            
            if (sub_435e30(&arg1[0x44], arg3, arg2).b == 0)
                arg1.b = 0
                return arg1
            
            if ((*(**(arg1 + 0x7c) + 0x20))().b == 0)
                arg1.b = 0
                return arg1
            
            if ((*(**(arg1 + 0x7c) + 0x14))(arg3).b == 0)
                arg1.b = 0
                return arg1
            
            if (sub_435e30(&arg1[0xc], arg3).b == 0)
                arg1.b = 0
                return arg1
            
            if ((*(**(arg1 + 0x7c) + 0x18))().b == 0)
                arg1.b = 0
                return arg1
            
            if ((*(**(arg1 + 0x7c) + 0x24))(arg3).b == 0)
                arg1.b = 0
                return arg1
    else
        int32_t ecx
        int32_t var_8_1 = ecx
        (*(*arg3 + 0x44))(0, fconvert.s(float.t(1)))

arg1.b = 1
return arg1
