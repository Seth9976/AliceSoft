// 函数: sub_6d2140
// 地址: 0x6d2140
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

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
        int32_t eax_12 = sub_6d1bd0(arg1, eax_3)
        
        if (eax_12 != 0)
            if (eax_12 s< 0)
                return eax_12
            
            return 0
        
        eax_3 = var_14
    
    int32_t eax_4 = sub_6d1b70(arg1, eax_3)
    int32_t edi_1 = var_14
    
    if ((1 << (edi_1.b - 1) & eax_4) == 0)
        eax_4 += *((edi_1 << 2) + &data_79b0c0)
    
    eax_6 = eax_4.w + *arg4
    *arg4 = eax_6

*arg5 = eax_6
int32_t esi_1 = 0x3f
int32_t eax_8

while (true)
    eax_8 = sub_6d1e00(arg1, &var_14, arg3)
    
    if (eax_8 != 0)
        break
    
    int32_t eax_9 = var_14
    int32_t edx_5 = eax_9 s>> 4 & 0xf
    int32_t eax_10 = eax_9 & 0xf
    
    if (eax_10 == 0)
        if (edx_5 == 0xf)
            var_14 = eax_10
            esi_1 -= 0x10
        label_6d223c:
            
            if (esi_1 s> 0)
                continue
        
        return 0
    
    var_14 = eax_10
    esi_1 = esi_1 - edx_5 - 1
    
    if (eax_10 s> arg1[3])
        int32_t eax_14 = sub_6d1bd0(arg1, eax_10)
        
        if (eax_14 != 0)
            if (eax_14 s< 0)
                return eax_14
            
            return 0
        
        eax_10 = var_14
    
    sub_6d1b70(arg1, eax_10)
    goto label_6d223c

if (eax_8 s< 0)
    return eax_8

return 0
