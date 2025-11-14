// 函数: sub_63eab0
// 地址: 0x63eab0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t eax_4
int32_t edx_3
edx_3:eax_4 = sx.q((arg3 - arg2) s/ 0x8c)
int32_t* esi_3 = ((eax_4 - edx_3) s>> 1) * 0x8c + arg2
sub_6411b0(arg4, edx_3, arg2, esi_3, arg3 - 0x8c, arg4)
int32_t* i_1 = &esi_3[0x23]
int32_t* eax_7 = esi_3
int32_t* i_2 = i_1

if (arg2 u< esi_3)
    void* esi_4 = &esi_3[-0x1f]
    
    do
        int32_t ecx_4 = *(esi_4 + 4) * *esi_4
        int32_t edx_5 = *(esi_4 + 0x90) * *(esi_4 + 0x8c)
        
        if (ecx_4 s< edx_5)
            break
        
        if (ecx_4 s<= edx_5)
            i_1 = i_2
            
            if (*(esi_4 - 0x10) s< *eax_7)
                break
        
        if (edx_5 s< ecx_4)
            break
        
        if (edx_5 s<= ecx_4 && *eax_7 s< *(esi_4 - 0x10))
            break
        
        eax_7 -= 0x8c
        esi_4 -= 0x8c
    while (arg2 u< eax_7)

if (i_1 u< arg3)
    int32_t edx_7 = eax_7[5] * eax_7[4]
    
    do
        int32_t ecx_7 = i_1[5] * i_1[4]
        
        if (ecx_7 s< edx_7)
            break
        
        if (ecx_7 s<= edx_7 && *i_1 s< *eax_7)
            break
        
        if (edx_7 s< ecx_7)
            break
        
        if (edx_7 s<= ecx_7 && *eax_7 s< *i_1)
            break
        
        i_1 = &i_1[0x23]
    while (i_1 u< arg3)
    
    i_2 = i_1

int32_t* i = i_1
int32_t* var_400 = eax_7

while (true)
    for (; i u< arg3; i = &i[0x23])
        int32_t ecx_10 = eax_7[4] * eax_7[5]
        int32_t esi_7 = i[5] * i[4]
        
        if (ecx_10 s>= esi_7 && (ecx_10 s> esi_7 || *eax_7 s>= *i))
            if (esi_7 s< ecx_10)
                break
            
            if (esi_7 s<= ecx_10 && *i s< *eax_7)
                break
            
            int32_t* i_3 = i_2
            i_2 = &i_2[0x23]
            void var_128
            __builtin_memcpy(&var_128, i_3, 0x8c)
            __builtin_memcpy(i_3, i, 0x8c)
            __builtin_memcpy(i, &var_128, 0x8c)
    
    int32_t* esi_15 = var_400
    bool cond:3_1 = esi_15 != arg2
    
    if (esi_15 u> arg2)
        void* ebx_4 = &esi_15[-0x23]
        
        do
            int32_t ecx_15 = *(ebx_4 + 0x14) * *(ebx_4 + 0x10)
            int32_t esi_11 = eax_7[5] * eax_7[4]
            
            if (ecx_15 s>= esi_11 && (ecx_15 s> esi_11 || *ebx_4 s>= *eax_7))
                if (esi_11 s< ecx_15 || (esi_11 s<= ecx_15 && *eax_7 s< *ebx_4))
                    esi_15 = var_400
                    break
                
                eax_7 -= 0x8c
                void var_3f8
                __builtin_memcpy(&var_3f8, eax_7, 0x8c)
                __builtin_memcpy(eax_7, ebx_4, 0x8c)
                __builtin_memcpy(ebx_4, &var_3f8, 0x8c)
            
            esi_15 = var_400 - 0x8c
            ebx_4 -= 0x8c
            var_400 = esi_15
        while (arg2 u< esi_15)
        
        cond:3_1 = esi_15 != arg2
    
    if (cond:3_1)
        var_400 = esi_15 - 0x8c
        
        if (i != arg3)
            void var_98
            __builtin_memcpy(&var_98, i, 0x8c)
            __builtin_memcpy(i, var_400, 0x8c)
            __builtin_memcpy(var_400, &var_98, 0x8c)
            i = &i[0x23]
        else
            eax_7 -= 0x8c
            
            if (esi_15 - 0x8c != eax_7)
                void var_2d8
                __builtin_memcpy(&var_2d8, esi_15 - 0x8c, 0x8c)
                __builtin_memcpy(var_400, eax_7, 0x8c)
                __builtin_memcpy(eax_7, &var_2d8, 0x8c)
            
            i_2 -= 0x8c
            void var_1b8
            __builtin_memcpy(&var_1b8, eax_7, 0x8c)
            __builtin_memcpy(eax_7, i_2, 0x8c)
            __builtin_memcpy(i_2, &var_1b8, 0x8c)
    else
        if (i == arg3)
            break
        
        if (i_2 != i)
            void var_248
            __builtin_memcpy(&var_248, eax_7, 0x8c)
            __builtin_memcpy(eax_7, i_2, 0x8c)
            __builtin_memcpy(i_2, &var_248, 0x8c)
        
        i_2 = &i_2[0x23]
        i_1 = i
        void var_368
        __builtin_memcpy(&var_368, eax_7, 0x8c)
        __builtin_memcpy(eax_7, i_1, 0x8c)
        eax_7 = &eax_7[0x23]
        i = &i[0x23]
        __builtin_memcpy(i_1, &var_368, 0x8c)

*arg1 = eax_7
arg1[1] = i_2
return arg1
