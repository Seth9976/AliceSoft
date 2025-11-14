// 函数: sub_6483e0
// 地址: 0x6483e0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t eax_4
int32_t edx_2
edx_2:eax_4 = sx.q((arg3 - arg2) s/ 0x28)
int32_t eax_7 = ((eax_4 - edx_2) s>> 1) * 5
int32_t* esi = &arg2[eax_7 * 2]
sub_64a260(eax_7, arg3 - 0x28, arg2, esi, arg3 - 0x28, arg4)
int32_t* eax_8 = esi
void* i_1 = &esi[0xa]

if (arg2 u< esi)
    do
        int32_t ecx_4 = eax_8[-7]
        int32_t edx_4 = eax_8[3]
        
        if (ecx_4 s< edx_4)
            break
        
        if (ecx_4 s<= edx_4 && eax_8[-0xa] s< *eax_8)
            break
        
        if (edx_4 s< ecx_4)
            break
        
        if (edx_4 s<= ecx_4 && *eax_8 s< eax_8[-0xa])
            break
        
        eax_8 -= 0x28
    while (arg2 u< eax_8)

if (i_1 u< arg3)
    int32_t edx_5 = eax_8[3]
    
    do
        int32_t ecx_6 = *(i_1 + 0xc)
        
        if (ecx_6 s< edx_5)
            break
        
        if (ecx_6 s<= edx_5 && *i_1 s< *eax_8)
            break
        
        if (edx_5 s< ecx_6)
            break
        
        if (edx_5 s<= ecx_6 && *eax_8 s< *i_1)
            break
        
        i_1 += 0x28
    while (i_1 u< arg3)

void* i = i_1
int32_t* var_124 = eax_8

while (true)
    for (; i u< arg3; i += 0x28)
        int32_t ecx_8 = eax_8[3]
        int32_t esi_3 = *(i + 0xc)
        
        if (ecx_8 s>= esi_3 && (ecx_8 s> esi_3 || *eax_8 s>= *i))
            if (esi_3 s< ecx_8)
                break
            
            if (esi_3 s<= ecx_8 && *i s< *eax_8)
                break
            
            void var_a4
            __builtin_memcpy(&var_a4, i_1, 0x28)
            __builtin_memcpy(i_1, i, 0x28)
            i_1 += 0x28
            __builtin_memcpy(i, &var_a4, 0x28)
    
    int32_t* esi_10 = var_124
    bool cond:2_1 = esi_10 != arg2
    
    if (esi_10 u> arg2)
        void* ebx_3 = &esi_10[-0xa]
        
        do
            int32_t ecx_10 = *(ebx_3 + 0xc)
            int32_t esi_6 = eax_8[3]
            
            if (ecx_10 s>= esi_6 && (ecx_10 s> esi_6 || *ebx_3 s>= *eax_8))
                if (esi_6 s< ecx_10 || (esi_6 s<= ecx_10 && *eax_8 s< *ebx_3))
                    esi_10 = var_124
                    break
                
                eax_8 -= 0x28
                void var_54
                __builtin_memcpy(&var_54, eax_8, 0x28)
                __builtin_memcpy(eax_8, ebx_3, 0x28)
                __builtin_memcpy(ebx_3, &var_54, 0x28)
            
            esi_10 = var_124 - 0x28
            ebx_3 -= 0x28
            var_124 = esi_10
        while (arg2 u< esi_10)
        
        cond:2_1 = esi_10 != arg2
    
    if (cond:2_1)
        var_124 = esi_10 - 0x28
        
        if (i != arg3)
            void var_2c
            __builtin_memcpy(&var_2c, i, 0x28)
            __builtin_memcpy(i, var_124, 0x28)
            __builtin_memcpy(var_124, &var_2c, 0x28)
            i += 0x28
        else
            eax_8 -= 0x28
            
            if (esi_10 - 0x28 != eax_8)
                void var_cc
                __builtin_memcpy(&var_cc, esi_10 - 0x28, 0x28)
                __builtin_memcpy(var_124, eax_8, 0x28)
                __builtin_memcpy(eax_8, &var_cc, 0x28)
            
            i_1 -= 0x28
            void var_7c
            __builtin_memcpy(&var_7c, eax_8, 0x28)
            __builtin_memcpy(eax_8, i_1, 0x28)
            __builtin_memcpy(i_1, &var_7c, 0x28)
    else
        if (i == arg3)
            break
        
        if (i_1 != i)
            void var_11c
            __builtin_memcpy(&var_11c, eax_8, 0x28)
            __builtin_memcpy(eax_8, i_1, 0x28)
            __builtin_memcpy(i_1, &var_11c, 0x28)
        
        void var_f4
        __builtin_memcpy(&var_f4, eax_8, 0x28)
        i_1 += 0x28
        __builtin_memcpy(eax_8, i, 0x28)
        void* i_2 = i
        eax_8 = &eax_8[0xa]
        i += 0x28
        __builtin_memcpy(i_2, &var_f4, 0x28)

arg1[1] = i_1
*arg1 = eax_8
return arg1
