// 函数: sub_6d22d0
// 地址: 0x6d22d0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_14 = 0
int32_t eax = sub_6d1e00(arg1, &var_14, arg2)

if (eax != 0)
    if (eax s< 0)
        return eax
    
    return 0

int32_t eax_1 = var_14
int32_t eax_4

if (eax_1 == 0)
    eax_4 = sx.d(*arg4)
else
    int32_t eax_2 = eax_1 & 0xf
    bool cond:1_1 = eax_2 s> arg1[3]
    var_14 = eax_2
    
    if (cond:1_1)
        int32_t eax_7 = sub_6d1bd0(arg1, eax_2)
        
        if (eax_7 != 0)
            if (eax_7 s< 0)
                return eax_7
            
            return 0
        
        eax_2 = var_14
    
    int32_t eax_3 = sub_6d1b70(arg1, eax_2)
    int32_t edi_1 = var_14
    
    if ((1 << (edi_1.b - 1) & eax_3) == 0)
        eax_3 += *((edi_1 << 2) + &data_79b0c0)
    
    eax_4 = sx.d(*arg4 + eax_3.w)
    *arg4 = eax_4.w

*arg3 = (eax_4 << arg5).w
return 0
