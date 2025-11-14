// 函数: sub_58f6c0
// 地址: 0x58f6c0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

void** result = arg3
int32_t** eax = arg1[1]

if (arg1[2] == 0)
    sub_58f8d0(eax, arg1, result, 1, arg2)
    return result

if (arg4 != *eax)
    if (arg4 != eax)
        if (arg2[3] u< arg4[3])
            arg3 = arg4
            sub_58d1e0(&arg3)
            int32_t** eax_9 = arg3
            
            if (eax_9[3] u< arg2[3])
                if (*(eax_9[2] + 0x21) != 0)
                    sub_58f8d0(eax_9, arg1, result, 0, arg2)
                    return result
                
                sub_58f8d0(arg4, arg1, result, 1, arg2)
                return result
        
        if (arg4[3] u< arg2[3])
            arg3 = arg4
            sub_58bba0(&arg3)
            int32_t** eax_13 = arg3
            
            if (eax_13 == arg1[1] || arg2[3] u< eax_13[3])
                if (*(arg4[2] + 0x21) == 0)
                    sub_58f8d0(eax_13, arg1, result, 1, arg2)
                    return result
                
                sub_58f8d0(arg4, arg1, result, 0, arg2)
                return result
    else
        int32_t** eax_5 = eax[2]
        
        if (eax_5[3] u< arg2[3])
            sub_58f8d0(eax_5, arg1, result, 0, arg2)
            return result
else if (arg2[3] u< arg4[3])
    sub_58f8d0(arg4, arg1, result, 1, arg2)
    return result

void* var_8
*result = *sub_58f800(&var_8, arg1, arg2)
return result
