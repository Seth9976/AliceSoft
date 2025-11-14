// 函数: sub_5c9e20
// 地址: 0x5c9e20
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

if (arg3 != arg1)
    int32_t edx = arg1[1]
    int32_t* ecx = *arg1
    int32_t ebx_3 = (edx - ecx) s>> 4
    
    if (ebx_3 != 0)
        int32_t* ebp_1 = *arg3
        int32_t eax_5 = (arg3[1] - ebp_1) s>> 4
        
        if (ebx_3 u<= eax_5)
            sub_5c9170(eax_5, edx, ecx, ebp_1)
            arg3[1] = ((arg1[1] - *arg1) & 0xfffffff0) + *arg3
            return arg3
        
        if (ebx_3 u<= (arg3[2] - ebp_1) s>> 4)
            int32_t eax_11 = eax_5 * 2
            void* ebx_4 = &ecx[eax_11 * 2]
            sub_5c9170(eax_11, ebx_4, ecx, ebp_1)
            int32_t* var_1c_1 = arg3
            void* var_20 = ebx_4
            arg3[1] = sub_4ed4a0(arg3[1], arg1[1], arg3)
            return arg3
        
        if (ebp_1 != 0)
            int32_t* var_18_3 = ebp_1
            sub_6b4d5b()
        
        if (sub_5c9f50((arg1[1] - *arg1) s>> 4, arg3) != 0)
            int32_t* var_18_4 = arg3
            int32_t var_1c_2 = *arg1
            arg3[1] = sub_4ed4a0(*arg3, arg1[1], arg3)
    else
        int32_t* ecx_1 = arg3[1]
        int32_t* eax = *arg3
        
        if (eax != ecx_1)
            arg3[1] = sub_5c9170(eax, ecx_1, ecx_1, eax)

return arg3
