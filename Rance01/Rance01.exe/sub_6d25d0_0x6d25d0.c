// 函数: sub_6d25d0
// 地址: 0x6d25d0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t* edi = arg1
int32_t esi = arg4
int32_t ebx = arg5
int32_t eax = 1 << arg6
int32_t eax_1 = edi[0xa]
int32_t edx = 0xffffffff << arg6

if (eax_1 == 0 && esi s<= ebx)
    while (true)
        int32_t var_1c
        int32_t eax_3 = sub_6d1e00(edi, &var_1c, arg3)
        
        if (eax_3 != 0)
            if (eax_3 s< 0)
                return eax_3
            
            return 0
        
        int32_t eax_4 = var_1c
        int32_t ebp_2 = eax_4 s>> 4
        int32_t eax_5 = eax_4 & 0xf
        var_1c = eax_5
        
        if (eax_5 != 0)
            if (edi[3] s<= 0)
                int32_t eax_27 = sub_6d1bd0(edi, 1)
                
                if (eax_27 != 0)
                    if (eax_27 s< 0)
                        return eax_27
                    
                    return 0
            
            if (sub_6d1b70(edi, 1) == 0)
                var_1c = edx
            else
                var_1c = eax
        else if (ebp_2 != 0xf)
            ebx = arg5
            eax_1 = 1 << ebp_2.b
            edi[0xa] = eax_1
            
            if (ebp_2 != 0)
                if (ebp_2 s> edi[3])
                    int32_t eax_29 = sub_6d1bd0(edi, ebp_2)
                    
                    if (eax_29 != 0)
                        if (eax_29 s< 0)
                            return eax_29
                        
                        return 0
                
                eax_1 = sub_6d1b70(edi, ebp_2) + edi[0xa]
                edi[0xa] = eax_1
            
            break
        
        while (true)
            int32_t edi_1 = *((esi << 2) + &data_79aee0)
            
            if (zx.d(*(arg2 + (edi_1 << 1))) == 0)
                ebp_2 -= 1
                
                if (ebp_2 s< 0)
                    edi = arg1
                    break
            else
                if (arg1[3] s<= 0)
                    int32_t eax_32 = sub_6d1bd0(arg1, 1)
                    
                    if (eax_32 != 0)
                        if (eax_32 s< 0)
                            return eax_32
                        
                        return 0
                
                if (sub_6d1b70(arg1, 1) != 0)
                    int32_t edx_3 = sx.d(*(arg2 + (edi_1 << 1)))
                    
                    if ((edx_3 & eax) == 0)
                        if (edx_3 s< 0)
                            *(arg2 + (edi_1 << 1)) = edx_3.w + edx.w
                        else
                            *(arg2 + (edi_1 << 1)) = edx_3.w + eax.w
            
            esi += 1
            
            if (esi s> arg5)
                edi = arg1
                break
        
        int32_t edx_5 = var_1c
        
        if (edx_5 != 0)
            *(arg2 + (*((esi << 2) + &data_79aee0) << 1)) = edx_5.w
        
        esi += 1
        
        if (esi s> arg5)
            ebx = arg5
            eax_1 = edi[0xa]
            break

if (eax_1 s> 0)
    if (esi s<= ebx)
        int32_t esi_1 = esi
        
        do
            int32_t ebx_2 = *((esi_1 << 2) + &data_79aee0)
            
            if (zx.d(*(arg2 + (ebx_2 << 1))) != 0)
                if (edi[3] s<= 0)
                    int32_t eax_36 = sub_6d1bd0(edi, 1)
                    
                    if (eax_36 != 0)
                        if (eax_36 s< 0)
                            return eax_36
                        
                        return 0
                
                if (sub_6d1b70(edi, 1) != 0)
                    int32_t eax_22 = sx.d(*(arg2 + (ebx_2 << 1)))
                    
                    if ((eax_22 & eax) == 0)
                        if (eax_22 s< 0)
                            *(arg2 + (ebx_2 << 1)) = eax_22.w + edx.w
                        else
                            *(arg2 + (ebx_2 << 1)) = eax_22.w + eax.w
            
            esi_1 += 1
        while (esi_1 s<= arg5)
        
        eax_1 = edi[0xa]
    
    edi[0xa] = eax_1 - 1

return 0
