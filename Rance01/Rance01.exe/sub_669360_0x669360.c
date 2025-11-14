// 函数: sub_669360
// 地址: 0x669360
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

if (arg3 != arg1)
    int32_t* ecx = *arg1
    int32_t* eax = *arg3
    int32_t ebp_1 = arg1[1]
    int32_t ebx_3 = (ebp_1 - ecx) s>> 4
    
    if (ebx_3 != 0)
        int32_t edx_3 = (arg3[1] - eax) s>> 4
        
        if (ebx_3 u<= edx_3)
            int32_t* var_18_3 = arg3
            sub_663180(sub_669480(eax, arg3, ecx, ebp_1), arg3[1])
            arg3[1] = ((arg1[1] - *arg1) & 0xfffffff0) + *arg3
            return arg3
        
        if (ebx_3 u<= (arg3[2] - eax) s>> 4)
            void* ebx_4 = &ecx[edx_3 * 4]
            int32_t* var_18_5 = arg3
            int32_t edx_11 = sub_669480(eax, arg3, ecx, ebx_4)
            int32_t* eax_7 = arg3[1]
            int32_t* var_20_1 = arg3
            arg3[1] = sub_669650(eax_7, edx_11, ebx_4, arg1[1], eax_7)
            return arg3
        
        if (eax != 0)
            sub_663180(eax, arg3[1])
            int32_t var_18_7 = *arg3
            sub_6b4d5b()
        
        if (sub_5c9f50((arg1[1] - *arg1) s>> 4, arg3) != 0)
            int32_t edx_13 = arg1[1]
            int32_t* eax_14 = *arg3
            int32_t* var_18_8 = arg3
            arg3[1] = sub_669650(eax_14, edx_13, *arg1, edx_13, eax_14)
    else
        int32_t* ecx_1 = arg3[1]
        
        if (eax != ecx_1)
            int32_t* var_18_1 = arg3
            int32_t* eax_1 = sub_4f2850(eax, arg3, ecx_1, ecx_1)
            sub_663180(eax_1, arg3[1])
            arg3[1] = eax_1

return arg3
