// 函数: sub_58c760
// 地址: 0x58c760
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t* ebx = arg4
int32_t** eax = *(arg1 + 4)

if (*(arg1 + 8) == 0)
    sub_58d030(eax, arg1, arg2, 1, ebx)
    return arg2

if (arg3 == *eax)
    int32_t edx = arg3[4]
    
    if (sub_58d3e0(ebx[3], edx, arg3[3], ebx[4], edx) != 0)
        sub_58d030(arg3, arg1, arg2, 1, ebx)
        return arg2
else if (arg3 != eax)
    int32_t edx_2 = arg3[4]
    char eax_11
    int32_t edx_3
    eax_11, edx_3 = sub_58d3e0(ebx[3], edx_2, arg3[3], ebx[4], edx_2)
    
    if (eax_11 != 0)
        arg4 = arg3
        int32_t edx_4 = sub_58d1e0(&arg4)
        int32_t** eax_13 = arg4
        char eax_15
        eax_15, edx_3 = sub_58d3e0(eax_13[3], edx_4, ebx[3], eax_13[4], ebx[4])
        
        if (eax_15 != 0)
            int32_t** eax_16 = arg4
            
            if (*(eax_16[2] + 0x21) == 0)
                sub_58d030(arg3, arg1, arg2, 1, ebx)
                return arg2
            
            sub_58d030(eax_16, arg1, arg2, 0, ebx)
            return arg2
    
    if (sub_58d3e0(arg3[3], edx_3, ebx[3], arg3[4], ebx[4]) != 0)
        arg4 = arg3
        sub_58bba0(&arg4)
        int32_t** eax_23 = arg4
        
        if (eax_23 == *(arg1 + 4))
            goto label_58c8e1
        
        int32_t edx_6 = eax_23[4]
        
        if (sub_58d3e0(ebx[3], edx_6, eax_23[3], ebx[4], edx_6) != 0)
            eax_23 = arg4
        label_58c8e1:
            
            if (*(arg3[2] + 0x21) == 0)
                sub_58d030(eax_23, arg1, arg2, 1, ebx)
                return arg2
            
            sub_58d030(arg3, arg1, arg2, 0, ebx)
            return arg2
else
    int32_t** esi_1 = eax[2]
    int32_t edx_1 = ebx[4]
    
    if (sub_58d3e0(esi_1[3], edx_1, ebx[3], esi_1[4], edx_1) != 0)
        sub_58d030(esi_1, arg1, arg2, 0, ebx)
        return arg2

void* var_8
*arg2 = *sub_58ced0(arg1, &var_8, ebx)
return arg2
