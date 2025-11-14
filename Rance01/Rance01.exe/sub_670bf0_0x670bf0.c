// 函数: sub_670bf0
// 地址: 0x670bf0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4 = arg3

if (arg1[4] == 0)
    return 0

if (sub_402680(0x7300cc, arg1) == 0 && sub_402680("string", arg1) == 0
        && sub_402680("float", arg1) == 0 && sub_402680(&data_7300e0, arg1) == 0)
    if (sub_402680(0x7300e4, arg1) == 0 && sub_402680("#define", arg1) == 0
            && sub_402680("#include", arg1) == 0 && sub_402680("#gamename", arg1) == 0
            && sub_402680("#EOF", arg1) == 0)
        if (sub_402680(U";,(){}[]=*/+-<>%&|^~", arg1) != 0)
            return 3
        
        if (sub_402680(&(*U";,(){}[]=*/+-<>%&|^~")[1], arg1) != 0)
            return 4
        
        if (sub_402680(&(*U";,(){}[]=*/+-<>%&|^~")[2], arg1) != 0)
            return 5
        
        if (sub_402680(&(*U";,(){}[]=*/+-<>%&|^~")[3], arg1) != 0)
            return 6
        
        if (sub_402680(&(*U";,(){}[]=*/+-<>%&|^~")[4], arg1) != 0)
            return 7
        
        if (sub_402680(&(*U";,(){}[]=*/+-<>%&|^~")[5], arg1) != 0)
            return 8
        
        if (sub_402680(&(*U";,(){}[]=*/+-<>%&|^~")[6], arg1) != 0)
            return 9
        
        if (sub_402680(&(*U";,(){}[]=*/+-<>%&|^~")[7], arg1) != 0)
            return 0xa
        
        if (sub_402680(&(*U";,(){}[]=*/+-<>%&|^~")[8], arg1) != 0)
            return 0xb
        
        if (sub_402680(&(*U";,(){}[]=*/+-<>%&|^~")[9], arg1) != 0)
            return 0xc
        
        if (sub_402680(&(*U";,(){}[]=*/+-<>%&|^~")[0xa], arg1) != 0)
            return 0xd
        
        if (sub_402680(&(*U";,(){}[]=*/+-<>%&|^~")[0xb], arg1) != 0)
            return 0xe
        
        if (sub_402680(&(*U";,(){}[]=*/+-<>%&|^~")[0xc], arg1) != 0)
            return 0xf
        
        if (sub_402680(&(*U";,(){}[]=*/+-<>%&|^~")[0xd], arg1) != 0)
            return 0x13
        
        if (sub_402680(&(*U";,(){}[]=*/+-<>%&|^~")[0xe], arg1) != 0)
            return 0x14
        
        if (sub_402680(&(*U";,(){}[]=*/+-<>%&|^~")[0xf], arg1) != 0)
            return 0x18
        
        if (sub_402680(&(*U";,(){}[]=*/+-<>%&|^~")[0x10], arg1) != 0)
            return 0x19
        
        if (sub_402680(&(*U";,(){}[]=*/+-<>%&|^~")[0x11], arg1) != 0)
            return 0x1a
        
        if (sub_402680(&(*U";,(){}[]=*/+-<>%&|^~")[0x12], arg1) != 0)
            return 0x1b
        
        if (sub_402680(&(*U";,(){}[]=*/+-<>%&|^~")[0x13], arg1) != 0)
            return 0x1c
        
        int32_t ecx_23 = arg1[5]
        int32_t* eax_52
        
        if (ecx_23 u< 0x10)
            eax_52 = arg1
        else
            eax_52 = *arg1
        
        if (*eax_52 s>= 0x30)
            int32_t* eax_53
            
            if (ecx_23 u< 0x10)
                eax_53 = arg1
            else
                eax_53 = *arg1
            
            if (*eax_53 s<= 0x39)
                return 0x10
        
        int32_t* eax_55
        
        if (ecx_23 u< 0x10)
            eax_55 = arg1
        else
            eax_55 = *arg1
        
        if (*eax_55 == 0x22)
            int32_t* eax_56
            
            if (ecx_23 u< 0x10)
                eax_56 = arg1
            else
                eax_56 = *arg1
            
            if (*(eax_56 + arg1[4] - 1) == 0x22)
                return 0x11
        
        var_4.b = 0x2e
        void* eax_59 = sub_405360(arg1, &var_4, 1) + 1
        int32_t eax_60 = neg.d(eax_59)
        return (sbb.d(eax_60, eax_60, eax_59 != 0) & 0xffffffee) + 0x12
    
    return 2

return 1
