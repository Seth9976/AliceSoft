// 函数: sub_54e9b0
// 地址: 0x54e9b0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

void** ebx = arg3
void** eax = ebx[1]

if (ebx[2] == 0)
    sub_54ebd0(ebx, eax, arg2, 1, arg1)
    return arg2

if (arg4 != *eax)
    if (arg4 != eax)
        if (arg1[3] s< arg4[3])
            arg3 = arg4
            sub_58d1e0(&arg3)
            void** eax_9 = arg3
            
            if (eax_9[3] s< arg1[3])
                if (*(eax_9[2] + 0x21) == 0)
                    sub_54ebd0(ebx, arg4, arg2, 1, arg1)
                    return arg2
                
                sub_54ebd0(ebx, eax_9, arg2, 0, arg1)
                return arg2
        
        if (arg4[3] s< arg1[3])
            arg3 = arg4
            sub_58bba0(&arg3)
            void** eax_15 = arg3
            
            if (eax_15 == ebx[1] || arg1[3] s< eax_15[3])
                if (*(arg4[2] + 0x21) == 0)
                    sub_54ebd0(ebx, eax_15, arg2, 1, arg1)
                    return arg2
                
                sub_54ebd0(ebx, arg4, arg2, 0, arg1)
                return arg2
    else
        void** eax_5 = eax[2]
        
        if (eax_5[3] s< arg1[3])
            sub_54ebd0(ebx, eax_5, arg2, 0, arg1)
            return arg2
else if (arg1[3] s< arg4[3])
    sub_54ebd0(ebx, arg4, arg2, 1, arg1)
    return arg2

void* var_8
*arg2 = *sub_54eb00(ebx, &var_8, arg1)
return arg2
