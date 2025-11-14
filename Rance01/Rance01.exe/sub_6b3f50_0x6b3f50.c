// 函数: sub_6b3f50
// 地址: 0x6b3f50
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

void** eax = data_797e30

if (data_797e34 == 0)
    sub_6b4140(eax, arg1, arg2, 1)
    return arg2

void** var_8

if (arg3 != *eax)
    if (arg3 != eax)
        int32_t ebp_1 = arg1[3]
        int32_t temp1_1 = arg3[3]
        bool cond:1_1 = temp1_1 u>= ebp_1
        
        if (temp1_1 u> ebp_1)
            var_8 = arg3
            sub_58d240(&var_8)
            void** eax_8 = var_8
            
            if (eax_8[3] u< ebp_1)
                if (*(eax_8[2] + 0x15) != 0)
                    sub_6b4140(eax_8, arg1, arg2, 0)
                    return arg2
                
                sub_6b4140(arg3, arg1, arg2, 1)
                return arg2
            
            cond:1_1 = arg3[3] u>= ebp_1
        
        if (not(cond:1_1))
            var_8 = arg3
            sub_5cc250(&var_8)
            void** eax_11 = var_8
            
            if (eax_11 == data_797e30 || ebp_1 u< eax_11[3])
                if (*(arg3[2] + 0x15) == 0)
                    sub_6b4140(eax_11, arg1, arg2, 1)
                    return arg2
                
                sub_6b4140(arg3, arg1, arg2, 0)
                return arg2
    else
        void** eax_5 = eax[2]
        
        if (eax_5[3] u< arg1[3])
            sub_6b4140(eax_5, arg1, arg2, 0)
            return arg2
else if (arg1[3] u< arg3[3])
    sub_6b4140(arg3, arg1, arg2, 1)
    return arg2

*arg2 = *sub_6b4070(&var_8, arg1)
return arg2
