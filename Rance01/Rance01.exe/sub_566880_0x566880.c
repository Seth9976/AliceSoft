// 函数: sub_566880
// 地址: 0x566880
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

if (sub_4022d0(arg2, 0x74b9b4) != 0)
    return arg1 + 0x238

if (sub_4022d0(arg2, 0x74b9a4) == 0 && sub_4022d0(arg2, 0x74bb44) == 0
        && sub_4022d0(arg2, 0x74bb54) == 0 && sub_4022d0(arg2, 0x74bb64) == 0)
    if (sub_4022d0(arg2, 0x74b9c4) == 0 && sub_4022d0(arg2, 0x74bab4) == 0)
        if (sub_4022d0(arg2, 0x74b9d4) != 0)
            return arg1 + 0x2f0
        
        if (sub_4022d0(arg2, 0x74b9e4) != 0)
            return arg1 + 0x300
        
        if (sub_4022d0(arg2, 0x74b9f4) != 0)
            return arg1 + 0x4ec
        
        if (sub_4022d0(arg2, 0x74ba04) == 0 && sub_4022d0(arg2, 0x74baa4) == 0)
            if (sub_4022d0(arg2, 0x74ba14) != 0)
                return arg1 + 0x630
            
            if (sub_4022d0(arg2, 0x74ba24) != 0)
                return arg1 + 0x588
            
            if (sub_4022d0(arg2, 0x74ba34) != 0)
                return arg1 + 0x644
            
            if (sub_4022d0(arg2, 0x74ba44) == 0)
                char eax_28 = sub_4022d0(arg2, 0x74ba54)
                char eax_30
                
                if (eax_28 == 0)
                    eax_30 = sub_4022d0(arg2, 0x74baf4)
                
                if (eax_28 != 0 || eax_30 != 0)
                    return arg1 + 0x4b8
                
                if (sub_4022d0(arg2, 0x74ba64) != 0)
                    return arg1 + 0x4f8
                
                if (sub_4022d0(arg2, 0x74ba74) != 0)
                    return arg1 + 0x4fc
                
                if (sub_4022d0(arg2, 0x74ba84) != 0)
                    return *(arg1 + 0x628)
                
                if (sub_4022d0(arg2, "|.Pd") != 0)
                    return arg1 + 0x570
                
                if (sub_4022d0(arg2, 0x74bac4) != 0)
                    return arg1 + 0x578
                
                if (sub_4022d0(arg2, 0x74bad4) != 0)
                    return arg1 + 0x2d4
                
                if (sub_4022d0(arg2, 0x74bae4) != 0)
                    return arg1 + 0x68c
                
                if (sub_4022d0(arg2, 0x74bb74) == 0)
                    if (sub_4022d0(arg2, 0x74bb04) != 0)
                        return arg1 + 0x580
                    
                    if (sub_4022d0(arg2, 0x74bb14) != 0)
                        return arg1 + 0x230
                    
                    if (sub_4022d0(arg2, 0x74bb24) != 0)
                        return arg1 + 0x398
                    
                    if (sub_4022d0(arg2, 0x74bb34) != 0)
                        return arg1 + 0x3a0
                    
                    if (sub_4022d0(arg2, 0x74bb84) != 0)
                        return arg1 + 0x388
                    
                    if (sub_4022d0(arg2, 0x74bb94) != 0)
                        return arg1 + 0x30c
                    
                    if (sub_4022d0(arg2, 0x74bba4) == 0)
                        if (sub_4022d0(arg2, 0x74bbb4) != 0)
                            return arg1 + 0x1d0
                        
                        char eax_65
                        struct IGraphEngine::graphengine::CGraphEngine::VTable** ecx_37
                        eax_65, ecx_37 = sub_4022d0(arg2, 0x74bbc4)
                        
                        if (eax_65 != 0)
                            return sub_562b10(ecx_37, arg1 + 0x2c0, *(arg1 + 0x1a8))
                    else
                        int32_t* ecx_34 = data_797dd8
                        
                        if (ecx_34 != 0)
                            (**ecx_34)()
                            return data_797dd8
                else if (*(arg1 + 0x394) != 0)
                    (***(arg1 + 0x394))()
                    return *(arg1 + 0x394)
            else if (arg1 != 0xfffffef0)
                return arg1 + 0x114
            
            return 0
        
        return arg1 + 0x14
    
    return arg1 + 0x1c4

return arg1 + 0x1ac
