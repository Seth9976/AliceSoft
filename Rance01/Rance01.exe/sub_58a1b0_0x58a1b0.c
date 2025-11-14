// 函数: sub_58a1b0
// 地址: 0x58a1b0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t ecx
int32_t var_c = ecx

if (arg1[2].b == 0)
label_58a1e2:
    
    if ((*(*arg1 + 0xc))() == 0)
        return 1
    
    for (int32_t* i = arg1[9]; i != arg1[0xa]; i = &i[1])
        if (sub_591940(*i) == 0)
            return 0
    
    if (sub_58a910(&arg1[0x11]) != 0 && sub_58aa30(&arg1[0x1a]) != 0 && sub_58abb0(&arg1[0x23]) != 0
            && sub_58ae30(&arg1[0x35]) != 0)
        for (int32_t* i_1 = arg1[0x3f]; i_1 != arg1[0x40]; i_1 = &i_1[1])
            if (sub_58d920(*i_1) == 0)
                return 0
        
        int32_t* esi_2 = arg1[0x48]
        
        if (esi_2 != arg1[0x49])
            while (true)
                if (sub_58d920(*esi_2) == 0)
                    return 0
                
                esi_2 = &esi_2[1]
                
                if (esi_2 == arg1[0x49])
                    return 1
        
        return 1
else if ((*(*arg1 + 8))() != 0)
    goto label_58a1e2

return 0
