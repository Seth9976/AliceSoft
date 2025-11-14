// 函数: sub_4cd000
// 地址: 0x4cd000
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

void** result = arg3
int32_t** eax = arg1[1]

if (arg1[2] == 0)
    sub_58cd40(eax, arg1, result, 1, arg2)
    return result

if (arg4 != *eax)
    if (arg4 != eax)
        if (arg2[3] s< arg4[3])
            arg3 = arg4
            sub_58d240(&arg3)
            int32_t** eax_9 = arg3
            
            if (eax_9[3] s< arg2[3])
                if (*(eax_9[2] + 0x15) != 0)
                    sub_58cd40(eax_9, arg1, result, 0, arg2)
                    return result
                
                sub_58cd40(arg4, arg1, result, 1, arg2)
                return result
        
        if (arg4[3] s< arg2[3])
            arg3 = arg4
            sub_5cc250(&arg3)
            int32_t** eax_13 = arg3
            
            if (eax_13 == arg1[1] || arg2[3] s< eax_13[3])
                if (*(arg4[2] + 0x15) == 0)
                    sub_58cd40(eax_13, arg1, result, 1, arg2)
                    return result
                
                sub_58cd40(arg4, arg1, result, 0, arg2)
                return result
    else
        int32_t** eax_5 = eax[2]
        
        if (eax_5[3] s< arg2[3])
            sub_58cd40(eax_5, arg1, result, 0, arg2)
            return result
else if (arg2[3] s< arg4[3])
    sub_58cd40(arg4, arg1, result, 1, arg2)
    return result

void* var_8
*result = *sub_5d7ff0(&var_8, arg1, arg2)
return result
