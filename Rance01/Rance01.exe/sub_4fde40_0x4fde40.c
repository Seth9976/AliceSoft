// 函数: sub_4fde40
// 地址: 0x4fde40
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t* ebx = arg4
int32_t** eax = *(arg1 + 4)

if (*(arg1 + 8) == 0)
    sub_4fe270(eax, arg1, arg2, 1, ebx)
    return arg2

if (arg3 != *eax)
    if (arg3 != eax)
        if (ebx[3] s< arg3[3])
            arg4 = arg3
            sub_58d1e0(&arg4)
            int32_t** eax_9 = arg4
            
            if (eax_9[3] s< ebx[3])
                if (*(eax_9[2] + 0x21) != 0)
                    sub_4fe270(eax_9, arg1, arg2, 0, ebx)
                    return arg2
                
                sub_4fe270(arg3, arg1, arg2, 1, ebx)
                return arg2
        
        if (arg3[3] s< ebx[3])
            arg4 = arg3
            sub_58bba0(&arg4)
            int32_t** eax_13 = arg4
            
            if (eax_13 == *(arg1 + 4) || ebx[3] s< eax_13[3])
                if (*(arg3[2] + 0x21) == 0)
                    sub_4fe270(eax_13, arg1, arg2, 1, ebx)
                    return arg2
                
                sub_4fe270(arg3, arg1, arg2, 0, ebx)
                return arg2
    else
        int32_t** eax_5 = eax[2]
        
        if (eax_5[3] s< ebx[3])
            sub_4fe270(eax_5, arg1, arg2, 0, ebx)
            return arg2
else if (ebx[3] s< arg3[3])
    sub_4fe270(arg3, arg1, arg2, 1, ebx)
    return arg2

int32_t* var_8
*arg2 = *sub_4fe180(ebx, arg1, &var_8)
return arg2
