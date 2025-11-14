// 函数: sub_6d2420
// 地址: 0x6d2420
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t i = arg4
int32_t ecx = arg1[0xa]
int32_t ebx

if (ecx s> 0)
    arg1[0xa] = ecx - 1
else
    for (; i s<= arg5; i = ebx + 1)
        int32_t var_14
        int32_t eax_2 = sub_6d1e00(arg1, &var_14, arg3)
        
        if (eax_2 != 0)
            if (eax_2 s< 0)
                return eax_2
            
            return 0
        
        int32_t edx_1 = var_14
        int32_t edi_2 = edx_1 s>> 4
        int32_t edx_2 = edx_1 & 0xf
        
        if (edx_2 == 0)
            if (edi_2 != 0xf)
                int32_t eax_7 = 1 << edi_2.b
                
                if (edi_2 != 0)
                    arg1[0xa] = eax_7
                    bool cond:1_1 = edi_2 s> arg1[3]
                    var_14 = edx_2
                    
                    if (cond:1_1)
                        int32_t eax_10 = sub_6d1bd0(arg1, edi_2)
                        
                        if (eax_10 != 0)
                            if (eax_10 s< 0)
                                return eax_10
                            
                            return 0
                    
                    eax_7 = sub_6d1b70(arg1, edi_2) + arg1[0xa]
                
                arg1[0xa] = eax_7 - 1
                break
            
            var_14 = edx_2
            ebx = i + 0xf
        else
            var_14 = edx_2
            ebx = i + edi_2
            
            if (edx_2 s> arg1[3])
                int32_t eax_13 = sub_6d1bd0(arg1, edx_2)
                
                if (eax_13 != 0)
                    if (eax_13 s< 0)
                        return eax_13
                    
                    return 0
                
                edx_2 = var_14
            
            int32_t eax_3 = sub_6d1b70(arg1, edx_2)
            int32_t edi_3 = var_14
            
            if ((1 << (edi_3.b - 1) & eax_3) != 0)
                *(arg2 + (*((ebx << 2) + &data_79aee0) << 1)) = (eax_3 << arg6.b).w
            else
                *(arg2 + (*((ebx << 2) + &data_79aee0) << 1)) =
                    ((*((edi_3 << 2) + &data_79b0c0) + eax_3) << arg6.b).w
return 0
