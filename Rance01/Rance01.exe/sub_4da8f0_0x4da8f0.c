// 函数: sub_4da8f0
// 地址: 0x4da8f0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t* var_4 = arg3

if (arg3 != arg1)
    int32_t edx = *arg1
    int32_t ebp_1 = arg1[1]
    int32_t ebx_3 = (ebp_1 - edx) s>> 6
    
    if (ebx_3 == 0)
        sub_4c87d0(arg3, &var_4, *arg3, arg3[1])
        return arg3
    
    int32_t eax_3 = *arg3
    int32_t ecx_4 = (arg3[1] - eax_3) s>> 6
    
    if (ebx_3 u<= ecx_4)
        int32_t var_18_2 = ebp_1
        sub_4daa90(eax_3, edx, ecx_4)
        arg3[1] = ((arg1[1] - *arg1) & 0xffffffc0) + *arg3
        return arg3
    
    if (ebx_3 u<= (arg3[2] - eax_3) s>> 6)
        int32_t ecx_10 = ecx_4 << 6
        int32_t ebx_4 = edx + ecx_10
        int32_t var_18_3 = ebx_4
        int32_t ecx_11 = sub_4daa90(eax_3, edx, ecx_10)
        int32_t* var_1c_2 = var_4
        int32_t var_20_1 = arg1[1]
        arg3[1] = sub_4daac0(arg3[1], ebx_4, ecx_11)
        return arg3
    
    if (eax_3 != 0)
        int32_t var_18_4 = eax_3
        sub_6b4d5b()
    
    if (sub_4daa50((arg1[1] - *arg1) s>> 6, arg3) != 0)
        int32_t ecx_13 = arg1[1]
        int32_t* var_18_5 = var_4
        int32_t var_1c_3 = ecx_13
        arg3[1] = sub_4daac0(*arg3, *arg1, ecx_13)

return arg3
