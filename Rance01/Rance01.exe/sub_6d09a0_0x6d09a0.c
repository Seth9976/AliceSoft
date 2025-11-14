// 函数: sub_6d09a0
// 地址: 0x6d09a0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_1c = 0
int32_t var_18 = 0
int16_t edx = *arg5
*arg5 = (neg.d(zx.d(*arg4))).w + edx
*arg4 = edx
int16_t* var_414 = arg5
int16_t var_400
int16_t* var_410 = &var_400
int32_t* var_40c = &var_1c
int32_t* var_408 = &var_18
sub_7022e0(&var_18)
int32_t result
int32_t var_300
int16_t var_200

if (*(arg1 + 0x3c) == 0)
    int32_t ebp_6
    
    if (zx.d(*arg5) == 0)
        result = sub_6d3be0(zx.d(*(arg2 + 0x408)), *(arg2 + 8), arg1)
        
        if (result == 0)
            int32_t var_300_2 = var_300 - 1
            ebp_6 = 0
        label_6d0bda:
            int32_t edx_15 = var_18
            
            if (edx_15 == 0)
                var_1c = 0x3f
            
            if (ebp_6 s< edx_15)
                int16_t* var_14_2 = &var_400
                
                do
                    int32_t i
                    
                    for (i = *(var_14_2 + (ebp_6 << 2) + 0x100) << 4; i s> 0xf0; i -= 0x100)
                        result = sub_6d3be0(zx.d(*(arg3 + 0x5e8)), *(arg3 + 0x3c8), arg1)
                        
                        if (result != 0)
                            return result
                    
                    int32_t ecx_8 = sx.d(var_14_2[ebp_6 + 0x100])
                    int32_t edi_3 = i + ecx_8
                    result = sub_6d3be0(
                        (sx.d(var_14_2[ebp_6]) & *((ecx_8 << 2) + &data_79b020))
                            | zx.d(*(arg3 + (edi_3 << 1) + 0x408)) << ecx_8.b, 
                        ecx_8 + *(arg3 + (edi_3 << 2) + 8), arg1)
                    
                    if (result != 0)
                        return result
                    
                    ebp_6 += 1
                while (ebp_6 s< var_18)
            
            if (var_1c s> 0)
                return sub_6d3be0(zx.d(*(arg3 + 0x408)), *(arg3 + 8), arg1)
    else
        int32_t ecx_7 = sx.d(var_200)
        result = sub_6d3be0(
            (sx.d(var_400) & *((ecx_7 << 2) + &data_79b020))
                + (zx.d(*(arg2 + (ecx_7 << 1) + 0x408)) << ecx_7.b), 
            *(arg2 + (ecx_7 << 2) + 8) + ecx_7, arg1)
        
        if (result == 0)
            ebp_6 = 1
            goto label_6d0bda
else
    int32_t ebp_3
    
    if (zx.d(*arg5) == 0)
        result = sub_6d3c10(zx.d(*(arg2 + 0x408)), *(arg2 + 8), arg1)
        
        if (result == 0)
            int32_t var_300_1 = var_300 - 1
            ebp_3 = 0
        label_6d0a65:
            int32_t edx_4 = var_18
            
            if (edx_4 == 0)
                var_1c = 0x3f
            
            if (ebp_3 s< edx_4)
                int16_t* var_14_1 = &var_400
                
                do
                    int32_t i_1
                    
                    for (i_1 = *(var_14_1 + (ebp_3 << 2) + 0x100) << 4; i_1 s> 0xf0; i_1 -= 0x100)
                        result = sub_6d3c10(zx.d(*(arg3 + 0x5e8)), *(arg3 + 0x3c8), arg1)
                        
                        if (result != 0)
                            return result
                    
                    int32_t ecx_4 = sx.d(var_14_1[ebp_3 + 0x100])
                    int32_t esi_2 = i_1 + ecx_4
                    result = sub_6d3c10(
                        (sx.d(var_14_1[ebp_3]) & *((ecx_4 << 2) + &data_79b020))
                            | zx.d(*(arg3 + (esi_2 << 1) + 0x408)) << ecx_4.b, 
                        ecx_4 + *(arg3 + (esi_2 << 2) + 8), arg1)
                    
                    if (result != 0)
                        return result
                    
                    ebp_3 += 1
                while (ebp_3 s< var_18)
            
            if (var_1c s> 0)
                return sub_6d3c10(zx.d(*(arg3 + 0x408)), *(arg3 + 8), arg1)
    else
        int32_t ecx_3 = sx.d(var_200)
        result = sub_6d3c10(
            (sx.d(var_400) & *((ecx_3 << 2) + &data_79b020))
                + (zx.d(*(arg2 + (ecx_3 << 1) + 0x408)) << ecx_3.b), 
            *(arg2 + (ecx_3 << 2) + 8) + ecx_3, arg1)
        
        if (result == 0)
            ebp_3 = 1
            goto label_6d0a65
return result
