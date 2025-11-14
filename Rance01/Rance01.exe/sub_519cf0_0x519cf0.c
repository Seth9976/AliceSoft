// 函数: sub_519cf0
// 地址: 0x519cf0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t result

if (arg1 s>= 0)
    result = *arg2
    
    if (arg1 s< (arg2[1] - result) s>> 2)
        int32_t* ebx = *(result + (arg1 << 2))
        ebx[7] = arg2[5]
        ebx[8] = arg2[6]
        ebx[9] = arg2[7]
        ebx[0xa] = arg2[8]
        ebx[0xb] = arg2[9]
        ebx[0xc] = arg2[0xa]
        __builtin_memcpy(&ebx[0xd], &arg2[0xb], 0x40)
        __builtin_memcpy(&ebx[0x1d], &arg2[0x1b], 0x64)
        float var_c
        float* eax_2 = sub_51e2a0(&arg2[0x34], &var_c)
        ebx[0x46] = *eax_2
        ebx[0x47] = eax_2[1]
        ebx[0x48] = eax_2[2]
        ebx[0x98] = fconvert.s(fconvert.t(arg2[0x37]))
        ebx[0x99] = fconvert.s(fconvert.t(arg2[0x38]))
        return sub_515170(ebx)

result.b = 0
return result
