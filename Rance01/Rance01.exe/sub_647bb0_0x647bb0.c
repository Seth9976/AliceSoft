// 函数: sub_647bb0
// 地址: 0x647bb0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t eax_4
int32_t edx_2
edx_2:eax_4 = sx.q((arg3 - arg2) s/ 0x28)
int32_t eax_7 = ((eax_4 - edx_2) s>> 1) * 5
int32_t* esi = &arg2[eax_7 * 2]
sub_649910(eax_7, arg3 - 0x28, arg2, esi, arg3 - 0x28, arg4)
int32_t* eax_8 = esi
void* i_1 = &esi[0xa]

if (arg2 u< esi)
    do
        int32_t ecx_4 = eax_8[-0xa]
        int32_t edx_4 = *eax_8
        
        if (edx_4 s> ecx_4)
            break
        
        if (edx_4 s< ecx_4)
            break
        
        eax_8 = &eax_8[-0xa]
    while (arg2 u< eax_8)

if (i_1 u< arg3)
    int32_t edx_5 = *eax_8
    
    do
        int32_t ecx_5 = *i_1
        
        if (edx_5 s> ecx_5)
            break
        
        if (edx_5 s< ecx_5)
            break
        
        i_1 += 0x28
    while (i_1 u< arg3)

void* i = i_1
int32_t* var_124 = eax_8

while (true)
    for (; i u< arg3; i += 0x28)
        int32_t ecx_6 = *eax_8
        int32_t esi_1 = *i
        
        if (esi_1 s<= ecx_6)
            if (esi_1 s< ecx_6)
                break
            
            void var_a4
            __builtin_memcpy(&var_a4, i_1, 0x28)
            __builtin_memcpy(i_1, i, 0x28)
            i_1 += 0x28
            __builtin_memcpy(i, &var_a4, 0x28)
    
    void* edi_3 = var_124
    bool cond:2_1 = edi_3 != arg2
    
    if (edi_3 u> arg2)
        void* ebx_2 = edi_3 - 0x28
        
        do
            int32_t ecx_7 = *ebx_2
            int32_t esi_4 = *eax_8
            
            if (esi_4 s<= ecx_7)
                if (esi_4 s< ecx_7)
                    break
                
                eax_8 -= 0x28
                void var_54
                __builtin_memcpy(&var_54, eax_8, 0x28)
                __builtin_memcpy(eax_8, ebx_2, 0x28)
                __builtin_memcpy(ebx_2, &var_54, 0x28)
            
            edi_3 = var_124 - 0x28
            ebx_2 -= 0x28
            var_124 = edi_3
        while (arg2 u< edi_3)
        
        cond:2_1 = edi_3 != arg2
    
    if (cond:2_1)
        var_124 = edi_3 - 0x28
        
        if (i != arg3)
            void var_2c
            __builtin_memcpy(&var_2c, i, 0x28)
            __builtin_memcpy(i, var_124, 0x28)
            __builtin_memcpy(var_124, &var_2c, 0x28)
            i += 0x28
        else
            eax_8 -= 0x28
            
            if (edi_3 - 0x28 != eax_8)
                void var_cc
                __builtin_memcpy(&var_cc, edi_3 - 0x28, 0x28)
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
        __builtin_memcpy(eax_8, i, 0x28)
        void* i_2 = i
        i_1 += 0x28
        eax_8 = &eax_8[0xa]
        i += 0x28
        __builtin_memcpy(i_2, &var_f4, 0x28)

arg1[1] = i_1
*arg1 = eax_8
return arg1
