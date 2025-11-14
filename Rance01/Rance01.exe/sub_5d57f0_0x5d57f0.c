// 函数: sub_5d57f0
// 地址: 0x5d57f0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

if (arg1[1] == 0)
    if (*arg1 != 0)
        arg1.b = 1
        return arg1
    
    if (arg1[2] == 0)
        arg1[2] = 1
        int32_t* eax = sub_597300(0x736940)
        
        if (eax != 0 && sub_5d5980(arg1, eax) != 0 && sub_5d5a50(arg1) != 0 && sub_5d5d50(arg1) != 0
                && sub_5d5e50(arg1, eax) != 0)
            int32_t* eax_6 = (**eax)(0x736960)
            
            if (eax_6 != 0)
                (**eax_6)(&arg1[0x40])
                *arg1 = 1
                arg1[2] = 0
                arg1.b = 1
                return arg1
        
        sub_5d5880(arg1)

arg1.b = 0
return arg1
