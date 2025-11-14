// 函数: sub_519bf0
// 地址: 0x519bf0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

if (arg1 s>= 0)
    int32_t ecx_1 = *arg2
    
    if (arg1 s< (arg2[1] - ecx_1) s>> 2)
        void* ebx_1 = *(ecx_1 + (arg1 << 2))
        *(ebx_1 + 0x1c) = arg2[5]
        *(ebx_1 + 0x20) = arg2[6]
        *(ebx_1 + 0x24) = arg2[7]
        *(ebx_1 + 0x28) = arg2[8]
        *(ebx_1 + 0x2c) = arg2[9]
        *(ebx_1 + 0x30) = arg2[0xa]
        __builtin_memcpy(ebx_1 + 0x34, &arg2[0xb], 0x40)
        __builtin_memcpy(ebx_1 + 0x74, &arg2[0x1b], 0x64)
        float var_c
        float* eax_2 = sub_51e2a0(&arg2[0x34], &var_c)
        *(ebx_1 + 0x118) = *eax_2
        *(ebx_1 + 0x11c) = eax_2[1]
        *(ebx_1 + 0x120) = eax_2[2]
        *(ebx_1 + 0x260) = fconvert.s(fconvert.t(arg2[0x37]))
        *(ebx_1 + 0x264) = fconvert.s(fconvert.t(arg2[0x38]))
        
        if (arg3 == 0)
            sub_515c70(ebx_1, arg4)
            float* eax_7
            eax_7.b = 1
            return eax_7
        
        if (arg3 == 1)
            sub_515f20(ebx_1, fconvert.s(fconvert.t(arg5)), fconvert.s(fconvert.t(arg6)))
            float* eax_6
            eax_6.b = 1
            return eax_6

arg1.b = 0
return arg1
