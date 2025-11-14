// 函数: sub_63e7a0
// 地址: 0x63e7a0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t eax_4
int32_t edx_3
edx_3:eax_4 = sx.q((arg3 - arg2) s/ 0x8c)
int32_t* esi_3 = ((eax_4 - edx_3) s>> 1) * 0x8c + arg2
sub_640e20(arg4, edx_3, arg2, esi_3, arg3 - 0x8c, arg4)
int32_t* i_1 = &esi_3[0x23]
int32_t* eax_7 = esi_3
int32_t* i_3 = i_1

if (arg2 u< esi_3)
    do
        int32_t ecx_3 = eax_7[-0x1e]
        int32_t edx_4 = eax_7[5]
        
        if (ecx_3 s< edx_4)
            break
        
        if (ecx_3 s<= edx_4 && eax_7[-0x23] s< *eax_7)
            break
        
        if (edx_4 s< ecx_3)
            break
        
        if (edx_4 s<= ecx_3 && *eax_7 s< eax_7[-0x23])
            break
        
        eax_7 -= 0x8c
    while (arg2 u< eax_7)

if (i_1 u< arg3)
    int32_t edx_5 = eax_7[5]
    
    do
        int32_t ecx_5 = i_1[5]
        
        if (ecx_5 s< edx_5)
            break
        
        if (ecx_5 s<= edx_5 && *i_1 s< *eax_7)
            break
        
        if (edx_5 s< ecx_5)
            break
        
        if (edx_5 s<= ecx_5 && *eax_7 s< *i_1)
            break
        
        i_1 = &i_1[0x23]
    while (i_1 u< arg3)
    
    i_3 = i_1

int32_t* i = i_1
int32_t* var_400 = eax_7

while (true)
    for (; i u< arg3; i = &i[0x23])
        int32_t ecx_7 = eax_7[5]
        int32_t esi_6 = i[5]
        
        if (ecx_7 s>= esi_6 && (ecx_7 s> esi_6 || *eax_7 s>= *i))
            if (esi_6 s< ecx_7)
                break
            
            if (esi_6 s<= ecx_7 && *i s< *eax_7)
                break
            
            int32_t* i_4 = i_3
            i_3 = &i_3[0x23]
            void var_128
            __builtin_memcpy(&var_128, i_4, 0x8c)
            __builtin_memcpy(i_4, i, 0x8c)
            __builtin_memcpy(i, &var_128, 0x8c)
    
    int32_t* esi_13 = var_400
    bool cond:2_1 = esi_13 != arg2
    
    if (esi_13 u> arg2)
        void* ebx_2 = &esi_13[-0x23]
        
        do
            int32_t ecx_11 = *(ebx_2 + 0x14)
            int32_t esi_9 = eax_7[5]
            
            if (ecx_11 s>= esi_9 && (ecx_11 s> esi_9 || *ebx_2 s>= *eax_7))
                if (esi_9 s< ecx_11 || (esi_9 s<= ecx_11 && *eax_7 s< *ebx_2))
                    esi_13 = var_400
                    break
                
                eax_7 -= 0x8c
                void var_3f8
                __builtin_memcpy(&var_3f8, eax_7, 0x8c)
                __builtin_memcpy(eax_7, ebx_2, 0x8c)
                __builtin_memcpy(ebx_2, &var_3f8, 0x8c)
            
            esi_13 = var_400 - 0x8c
            ebx_2 -= 0x8c
            var_400 = esi_13
        while (arg2 u< esi_13)
        
        cond:2_1 = esi_13 != arg2
    
    if (cond:2_1)
        var_400 = esi_13 - 0x8c
        
        if (i != arg3)
            void var_98
            __builtin_memcpy(&var_98, i, 0x8c)
            __builtin_memcpy(i, var_400, 0x8c)
            __builtin_memcpy(var_400, &var_98, 0x8c)
            i = &i[0x23]
        else
            eax_7 -= 0x8c
            
            if (esi_13 - 0x8c != eax_7)
                void var_2d8
                __builtin_memcpy(&var_2d8, esi_13 - 0x8c, 0x8c)
                __builtin_memcpy(var_400, eax_7, 0x8c)
                __builtin_memcpy(eax_7, &var_2d8, 0x8c)
            
            i_3 -= 0x8c
            void var_1b8
            __builtin_memcpy(&var_1b8, eax_7, 0x8c)
            __builtin_memcpy(eax_7, i_3, 0x8c)
            __builtin_memcpy(i_3, &var_1b8, 0x8c)
    else
        if (i == arg3)
            break
        
        if (i_3 != i)
            void var_248
            __builtin_memcpy(&var_248, eax_7, 0x8c)
            __builtin_memcpy(eax_7, i_3, 0x8c)
            __builtin_memcpy(i_3, &var_248, 0x8c)
        
        i_3 = &i_3[0x23]
        void var_368
        __builtin_memcpy(&var_368, eax_7, 0x8c)
        __builtin_memcpy(eax_7, i, 0x8c)
        int32_t* i_2 = i
        eax_7 = &eax_7[0x23]
        i = &i[0x23]
        __builtin_memcpy(i_2, &var_368, 0x8c)

*arg1 = eax_7
arg1[1] = i_3
return arg1
