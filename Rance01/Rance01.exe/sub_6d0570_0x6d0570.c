// 函数: sub_6d0570
// 地址: 0x6d0570
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t result

if (arg1[0xf] == 0)
    int32_t ecx_11 = sx.d(*arg5)
    int32_t edi_6 = neg.d(sx.d(*arg4)) + ecx_11
    *arg4 = ecx_11.w
    int32_t esi_6
    
    if (edi_6 s< 0)
        if (edi_6 s<= 0xffffff00)
            esi_6 = sx.d(*((neg.d(edi_6) s>> 8) + 0x79b560)) + 8
        else
            esi_6 = sx.d(*(0x79b560 - edi_6))
        
        edi_6 -= 1
    else if (edi_6 s>= 0x100)
        esi_6 = sx.d(*((edi_6 s>> 8) + 0x79b560)) + 8
    else
        esi_6 = sx.d(*(edi_6 + 0x79b560))
    
    result = sub_6cffa0(arg1, zx.d(*(arg2 + (esi_6 << 1) + 0x408)), *(arg2 + (esi_6 << 2) + 8))
    
    if (result == 0)
        result = sub_6cffa0(arg1, edi_6, esi_6)
        
        if (result == 0)
            int32_t i_3 = 0
            int32_t esi_8 = 4
            
            while (true)
                int32_t ebp_4 = sx.d(arg5[*(esi_8 + &data_79aee0)])
                esi_8 += 4
                
                if (ebp_4 != 0)
                    if (i_3 s> 0xf)
                        int32_t i = i_3
                        
                        do
                            result = sub_6cffa0(arg1, zx.d(*(arg3 + 0x5e8)), *(arg3 + 0x3c8))
                            
                            if (result != 0)
                                return result
                            
                            i -= 0x10
                        while (i s> 0xf)
                        
                        i_3 = i
                    
                    int32_t var_18_2
                    
                    if (ebp_4 s< 0)
                        if (ebp_4 s<= 0xffffff00)
                            var_18_2 = sx.d(*((neg.d(ebp_4) s>> 8) + 0x79b560)) + 8
                        else
                            var_18_2 = sx.d(*(0x79b560 - ebp_4))
                        
                        ebp_4 -= 1
                    else if (ebp_4 s>= 0x100)
                        var_18_2 = sx.d(*((ebp_4 s>> 8) + 0x79b560)) + 8
                    else
                        var_18_2 = sx.d(*(ebp_4 + 0x79b560))
                    
                    int32_t edx_16 = (i_3 << 4) + var_18_2
                    result = sub_6cffa0(arg1, zx.d(*(arg3 + (edx_16 << 1) + 0x408)), 
                        *(arg3 + (edx_16 << 2) + 8))
                    
                    if (result != 0)
                        break
                    
                    result = sub_6cffa0(arg1, ebp_4, var_18_2)
                    
                    if (result != 0)
                        break
                    
                    i_3 = 0
                else
                    i_3 += 1
                
                if (esi_8 s>= 0x100)
                    if (i_3 s> 0)
                        return sub_6cffa0(arg1, zx.d(*(arg3 + 0x408)), *(arg3 + 8))
                    
                    break
else
    int32_t ecx_1 = sx.d(*arg5)
    int32_t edi_2 = neg.d(sx.d(*arg4)) + ecx_1
    *arg4 = ecx_1.w
    int32_t esi
    
    if (edi_2 s< 0)
        if (edi_2 s<= 0xffffff00)
            esi = sx.d(*((neg.d(edi_2) s>> 8) + 0x79b560)) + 8
        else
            esi = sx.d(*(0x79b560 - edi_2))
        
        edi_2 -= 1
    else if (edi_2 s>= 0x100)
        esi = sx.d(*((edi_2 s>> 8) + 0x79b560)) + 8
    else
        esi = sx.d(*(edi_2 + 0x79b560))
    
    result = sub_6d0080(arg1, zx.d(*(arg2 + (esi << 1) + 0x408)), *(arg2 + (esi << 2) + 8))
    
    if (result == 0)
        result = sub_6d0080(arg1, edi_2, esi)
        
        if (result == 0)
            int32_t i_2 = 0
            int32_t esi_2 = 4
            
            while (true)
                int32_t ebp_2 = sx.d(arg5[*(esi_2 + &data_79aee0)])
                esi_2 += 4
                
                if (ebp_2 != 0)
                    if (i_2 s> 0xf)
                        int32_t i_1 = i_2
                        
                        do
                            result = sub_6d0080(arg1, zx.d(*(arg3 + 0x5e8)), *(arg3 + 0x3c8))
                            
                            if (result != 0)
                                return result
                            
                            i_1 -= 0x10
                        while (i_1 s> 0xf)
                        
                        i_2 = i_1
                    
                    int32_t var_18_1
                    
                    if (ebp_2 s< 0)
                        if (ebp_2 s<= 0xffffff00)
                            var_18_1 = sx.d(*((neg.d(ebp_2) s>> 8) + 0x79b560)) + 8
                        else
                            var_18_1 = sx.d(*(0x79b560 - ebp_2))
                        
                        ebp_2 -= 1
                    else if (ebp_2 s>= 0x100)
                        var_18_1 = sx.d(*((ebp_2 s>> 8) + 0x79b560)) + 8
                    else
                        var_18_1 = sx.d(*(ebp_2 + 0x79b560))
                    
                    int32_t edx_5 = (i_2 << 4) + var_18_1
                    result = sub_6d0080(arg1, zx.d(*(arg3 + (edx_5 << 1) + 0x408)), 
                        *(arg3 + (edx_5 << 2) + 8))
                    
                    if (result != 0)
                        break
                    
                    result = sub_6d0080(arg1, ebp_2, var_18_1)
                    
                    if (result != 0)
                        break
                    
                    i_2 = 0
                else
                    i_2 += 1
                
                if (esi_2 s>= 0x100)
                    if (i_2 s> 0)
                        return sub_6d0080(arg1, zx.d(*(arg3 + 0x408)), *(arg3 + 8))
                    
                    break

return result
