// 函数: sub_58c4d0
// 地址: 0x58c4d0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

void* ebx = arg3
void** eax = *(ebx + 4)

if (*(ebx + 8) == 0)
    void* __saved_ebp = arg1
    sub_58ca50(ebx, arg2, 1, eax)
    return arg2

int32_t ecx

if (arg4 == *eax)
    ecx = *(arg1 + 0xc)
    
    if (ecx u< arg4[3])
        void* var_18_1 = arg1
        sub_58ca50(ebx, arg2, 1, arg4)
        return arg2
else if (arg4 != eax)
    if (*(arg1 + 0xc) u< arg4[3])
        arg3 = arg4
        sub_58d1e0(&arg3)
        void** eax_7 = arg3
        ecx = *(arg1 + 0xc)
        
        if (eax_7[3] u< ecx)
            void* var_18_3 = arg1
            
            if (*(eax_7[2] + 0x21) == 0)
                sub_58ca50(ebx, arg2, 1, arg4)
                return arg2
            
            sub_58ca50(ebx, arg2, 0, eax_7)
            return arg2
    
    if (arg4[3] u< *(arg1 + 0xc))
        arg3 = arg4
        sub_58bba0(&arg3)
        void** eax_12 = arg3
        
        if (eax_12 != *(ebx + 4))
            ecx = *(arg1 + 0xc)
        
        if (eax_12 == *(ebx + 4) || ecx u< eax_12[3])
            void* var_18_4 = arg1
            
            if (*(arg4[2] + 0x21) == 0)
                sub_58ca50(ebx, arg2, 1, eax_12)
                return arg2
            
            sub_58ca50(ebx, arg2, 0, arg4)
            return arg2
else
    void** eax_3 = eax[2]
    
    if (eax_3[3] u< *(arg1 + 0xc))
        void* var_18_2 = arg1
        sub_58ca50(ebx, arg2, 0, eax_3)
        return arg2

void* var_18_5 = arg1
void* var_8
*arg2 = *sub_58c940(ecx, &var_8, ebx)
return arg2
