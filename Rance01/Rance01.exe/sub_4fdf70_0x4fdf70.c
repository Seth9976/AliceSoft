// 函数: sub_4fdf70
// 地址: 0x4fdf70
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

void** result = arg3
void** eax = *(arg1 + 4)

if (*(arg1 + 8) == 0)
    sub_4fe500(eax, arg1, result, 1, arg2)
    return result

if (arg4 != *eax)
    if (arg4 != eax)
        if (arg2[3] s< arg4[3])
            arg3 = arg4
            sub_58d1e0(&arg3)
            void** eax_9 = arg3
            
            if (eax_9[3] s< arg2[3])
                if (*(eax_9[2] + 0x21) != 0)
                    sub_4fe500(eax_9, arg1, result, 0, arg2)
                    return result
                
                sub_4fe500(arg4, arg1, result, 1, arg2)
                return result
        
        if (arg4[3] s< arg2[3])
            arg3 = arg4
            sub_58bba0(&arg3)
            void** eax_13 = arg3
            
            if (eax_13 == *(arg1 + 4) || arg2[3] s< eax_13[3])
                if (*(arg4[2] + 0x21) == 0)
                    sub_4fe500(eax_13, arg1, result, 1, arg2)
                    return result
                
                sub_4fe500(arg4, arg1, result, 0, arg2)
                return result
    else
        void** eax_5 = eax[2]
        
        if (eax_5[3] s< arg2[3])
            sub_4fe500(eax_5, arg1, result, 0, arg2)
            return result
else if (arg2[3] s< arg4[3])
    sub_4fe500(arg4, arg1, result, 1, arg2)
    return result

void** var_8
*result = *sub_4fe420(arg2, &var_8, arg1)
return result
