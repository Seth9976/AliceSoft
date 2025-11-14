// 函数: sub_6d1ea0
// 地址: 0x6d1ea0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

data_797c44(arg5, 0x80)
void* ebp = &data_79aee4
int32_t var_14
int32_t eax = sub_6d1e00(arg1, &var_14, arg2)

if (eax != 0)
    if (eax s< 0)
        return eax
    
    return 0

int32_t eax_2 = var_14
int16_t eax_6

if (eax_2 == 0)
    eax_6 = *arg4
else
    int32_t eax_3 = eax_2 & 0xf
    bool cond:1_1 = eax_3 s> arg1[3]
    var_14 = eax_3
    
    if (cond:1_1)
        int32_t eax_15 = sub_6d1bd0(arg1, eax_3)
        
        if (eax_15 != 0)
            if (eax_15 s< 0)
                return eax_15
            
            return 0
        
        eax_3 = var_14
    
    int32_t eax_4 = sub_6d1b70(arg1, eax_3)
    int32_t ebx_1 = var_14
    
    if ((1 << (ebx_1.b - 1) & eax_4) == 0)
        eax_4 += *((ebx_1 << 2) + &data_79b0c0)
    
    eax_6 = eax_4.w + *arg4
    *arg4 = eax_6

*arg5 = eax_6
int32_t ebx_2 = 0x3f
int32_t eax_9

while (true)
    eax_9 = sub_6d1e00(arg1, &var_14, arg3)
    
    if (eax_9 != 0)
        break
    
    int32_t eax_10 = var_14
    int32_t edx_5 = eax_10 s>> 4 & 0xf
    int32_t eax_11 = eax_10 & 0xf
    
    if (eax_11 == 0)
        if (edx_5 == 0xf)
            var_14 = eax_11
            ebx_2 -= 0x10
            ebp += 0x40
        label_6d1fef:
            
            if (ebx_2 s> 0)
                continue
        
        return 0
    
    var_14 = eax_11
    ebx_2 = ebx_2 - edx_5 - 1
    void* edi_1 = ebp + (edx_5 << 2)
    
    if (eax_11 s> arg1[3])
        int32_t eax_17 = sub_6d1bd0(arg1, eax_11)
        
        if (eax_17 != 0)
            if (eax_17 s< 0)
                return eax_17
            
            return 0
        
        eax_11 = var_14
    
    int32_t eax_12 = sub_6d1b70(arg1, eax_11)
    int32_t ebp_1 = var_14
    
    if ((1 << (ebp_1.b - 1) & eax_12) != 0)
        ebp = edi_1 + 4
        arg5[*edi_1] = eax_12.w
    else
        ebp = edi_1 + 4
        arg5[*edi_1] = (*((ebp_1 << 2) + &data_79b0c0)).w + eax_12.w
    
    goto label_6d1fef

if (eax_9 s< 0)
    return eax_9

return 0
