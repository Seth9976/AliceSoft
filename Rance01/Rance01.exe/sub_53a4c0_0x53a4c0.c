// 函数: sub_53a4c0
// 地址: 0x53a4c0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

if (arg2 != 0)
    if (sub_4022d0(arg2, 0x74cb7c) != 0)
        return &arg1[0x88]
    
    if (sub_4022d0(arg2, 0x74cb8c) != 0)
        return &arg1[0x8c]
    
    if (sub_4022d0(arg2, 0x74cb9c) != 0)
        return sub_53cdf0(arg1)
    
    if (sub_4022d0(arg2, 0x74cbbc) != 0)
        return &arg1[0x8e]
    
    if (sub_4022d0(arg2, 0x74cb5c) != 0)
        return sub_54a630(arg1)
    
    if (sub_4022d0(arg2, 0x74cbec) == 0)
        if (sub_4022d0(arg2, 0x74cbfc) == 0)
            if (sub_4022d0(arg2, 0x74cb6c) == 0)
                if (sub_4022d0(arg2, 0x74cbac) == 0)
                    if (sub_4022d0(arg2, 0x74cbcc) == 0)
                        if (sub_4022d0(arg2, 0x74cbdc) != 0)
                            return &arg1[5]
                        
                        if (sub_4022d0(arg2, 0x74cc0c) != 0)
                            return &arg1[0x6e]
                    else if (arg1 != 0)
                        return &arg1[1]
                else if (arg1[0x66] == arg1[0x90])
                    if (sub_4022d0(0x74cbac, 0x74cb5c) != 0)
                        goto label_53a59e
                    
                    if (sub_4022d0(0x74cbac, 0x74cbec) != 0)
                        goto label_53a5d1
                    
                    if (sub_4022d0(0x74cbac, 0x74cbfc) != 0)
                        goto label_53a607
                    
                    if (sub_4022d0(0x74cbac, 0x74cb6c) != 0)
                        goto label_53a63d
                    
                    if (sub_4022d0(0x74cbac, 0x74cbac) != 0)
                        goto label_53a673
                    
                    if (sub_4022d0(0x74cbac, 0x74cb7c) != 0)
                        return (*(*arg1 + 0x10))(0x74cb7c)
            else if (arg1[0x66] == arg1[0x90])
                if (sub_4022d0(0x74cb6c, 0x74cb5c) != 0)
                    goto label_53a59e
                
                if (sub_4022d0(0x74cb6c, 0x74cbec) != 0)
                    goto label_53a5d1
                
                if (sub_4022d0(0x74cb6c, 0x74cbfc) != 0)
                    goto label_53a607
                
                if (sub_4022d0(0x74cb6c, 0x74cb6c) != 0)
                    goto label_53a63d
                
                if (sub_4022d0(0x74cb6c, 0x74cbac) != 0)
                    goto label_53a673
                
                if (sub_4022d0(0x74cb6c, 0x74cb7c) != 0)
                    return (*(*arg1 + 0x10))(0x74cb7c)
        else if (arg1[0x66] == arg1[0x90])
            if (sub_4022d0(0x74cbfc, 0x74cb5c) != 0)
                goto label_53a59e
            
            if (sub_4022d0(0x74cbfc, 0x74cbec) != 0)
                goto label_53a5d1
            
            if (sub_4022d0(0x74cbfc, 0x74cbfc) != 0)
                goto label_53a607
            
            if (sub_4022d0(0x74cbfc, 0x74cb6c) != 0)
                goto label_53a63d
            
            if (sub_4022d0(0x74cbfc, 0x74cbac) != 0)
                goto label_53a673
            
            if (sub_4022d0(0x74cbfc, 0x74cb7c) != 0)
                return (*(*arg1 + 0x10))(0x74cb7c)
    else if (arg1[0x66] == arg1[0x90])
        if (sub_4022d0(0x74cbec, 0x74cb5c) != 0)
        label_53a59e:
            arg1[0x93] = arg1
            arg1[0x92] = &arg1[0x77]
            return sub_54f200(0x74cb5c, &arg1[0x92])
        
        if (sub_4022d0(0x74cbec, 0x74cbec) != 0)
        label_53a5d1:
            arg1[0x93] = arg1
            arg1[0x92] = &arg1[0x77]
            return sub_54f200(0x74cbec, &arg1[0x92])
        
        if (sub_4022d0(0x74cbec, 0x74cbfc) != 0)
        label_53a607:
            arg1[0x93] = arg1
            arg1[0x92] = &arg1[0x77]
            return sub_54f200(0x74cbfc, &arg1[0x92])
        
        if (sub_4022d0(0x74cbec, 0x74cb6c) != 0)
        label_53a63d:
            arg1[0x93] = arg1
            arg1[0x92] = &arg1[0x77]
            return sub_54f200(0x74cb6c, &arg1[0x92])
        
        if (sub_4022d0(0x74cbec, 0x74cbac) != 0)
        label_53a673:
            arg1[0x93] = arg1
            arg1[0x92] = &arg1[0x77]
            return sub_54f200(0x74cbac, &arg1[0x92])
        
        if (sub_4022d0(0x74cbec, 0x74cb7c) != 0)
            return (*(*arg1 + 0x10))(0x74cb7c)

return 0
