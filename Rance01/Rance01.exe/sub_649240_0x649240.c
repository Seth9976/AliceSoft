// 函数: sub_649240
// 地址: 0x649240
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t eax_4
int32_t edx_2
edx_2:eax_4 = sx.q((arg3 - arg2) s/ 0x28)
int32_t eax_7 = ((eax_4 - edx_2) s>> 1) * 5
int32_t* esi = &arg2[eax_7 * 2]
int32_t var_144 = arg3 - 0x28
sub_64b250(eax_7, edx_2, arg2, esi, var_144, arg4)
void* i_1 = &esi[0xa]
int32_t* eax_8 = esi
void* i_3 = i_1
void* ecx_4
char edx_3

if (arg2 u< esi)
    do
        ecx_4.b = eax_8[-1].b
        int32_t esi_1 = eax_8[-0xa]
        int32_t edi_2 = *eax_8
        edx_3 = eax_8[9].b
        
        if (ecx_4.b == 0)
            if (edx_3 != 0)
                break
            
            goto label_6492b9
        
        if (edx_3 == 0)
        label_6492c1:
            
            if (ecx_4.b != 0)
                break
            
        label_6492cb:
            
            if (edi_2 s< esi_1)
                break
        else
        label_6492b9:
            
            if (esi_1 s< edi_2)
                break
            
            if (edx_3 == 0)
                goto label_6492c1
            
            if (ecx_4.b != 0)
                goto label_6492cb
        
        eax_8 = &eax_8[-0xa]
    while (arg2 u< eax_8)

if (i_1 u< arg3)
    int32_t edi_3 = *eax_8
    edx_3 = eax_8[9].b
    
    do
        ecx_4.b = *(i_1 + 0x24)
        int32_t esi_2 = *i_1
        
        if (ecx_4.b == 0)
            if (edx_3 != 0)
                break
            
            goto label_6492f7
        
        if (edx_3 == 0)
        label_6492ff:
            
            if (ecx_4.b != 0)
                break
            
        label_649309:
            
            if (edi_3 s< esi_2)
                break
        else
        label_6492f7:
            
            if (esi_2 s< edi_3)
                break
            
            if (edx_3 == 0)
                goto label_6492ff
            
            if (ecx_4.b != 0)
                goto label_649309
        
        i_1 += 0x28
    while (i_1 u< arg3)
    
    i_3 = i_1

void* i = i_1
int32_t* var_124 = eax_8

while (true)
    for (; i u< arg3; i += 0x28)
        ecx_4.b = eax_8[9].b
        int32_t esi_3 = *eax_8
        int32_t edi_4 = *i
        i_1.b = *(i + 0x24)
        
        if (ecx_4.b == 0)
            if (i_1.b == 0 && esi_3 s>= edi_4)
            label_64935c:
                
                if (i_1.b == 0)
                    goto label_649360
                
                if (ecx_4.b == 0 || edi_4 s>= esi_3)
                    goto label_6493b4
                
                i_1 = i_3
                break
            
            i_1 = i_3
        else if (i_1.b == 0)
        label_649360:
            
            if (ecx_4.b != 0 || edi_4 s< esi_3)
                i_1 = i_3
                break
            
        label_6493b4:
            void var_54
            __builtin_memcpy(&var_54, i_3, 0x28)
            __builtin_memcpy(i_3, i, 0x28)
            i_1 = i_3 + 0x28
            i_3 = i_1
            __builtin_memcpy(i, &var_54, 0x28)
        else
            if (esi_3 s>= edi_4)
                goto label_64935c
            
            i_1 = i_3
    
    if (arg2 u< var_124)
        void* ebp_2 = &var_124[-0xa]
        
        do
            ecx_4.b = *(ebp_2 + 0x24)
            int32_t esi_4 = *ebp_2
            int32_t edi_5 = *eax_8
            i_1.b = eax_8[9].b
            
            if (ecx_4.b != 0)
                if (i_1.b == 0)
                label_6493e9:
                    
                    if (ecx_4.b != 0)
                        break
                    
                    if (edi_5 s< esi_4)
                        break
                    
                label_6493f7:
                    eax_8 -= 0x28
                    void var_11c
                    __builtin_memcpy(&var_11c, eax_8, 0x28)
                    __builtin_memcpy(eax_8, ebp_2, 0x28)
                    __builtin_memcpy(ebp_2, &var_11c, 0x28)
                else
                label_6493e1:
                    
                    if (esi_4 s>= edi_5)
                        if (i_1.b == 0)
                            goto label_6493e9
                        
                        if (ecx_4.b == 0 || edi_5 s>= esi_4)
                            goto label_6493f7
                        
                        break
            else if (i_1.b == 0)
                goto label_6493e1
            
            ecx_4 = var_124 - 0x28
            ebp_2 -= 0x28
            var_124 = ecx_4
        while (arg2 u< ecx_4)
        
        i_1 = i_3
    
    if (var_124 != arg2)
        void* esi_14 = var_124 - 0x28
        var_124 = esi_14
        
        if (i != arg3)
            void var_2c
            __builtin_memcpy(&var_2c, i, 0x28)
            __builtin_memcpy(i, var_124, 0x28)
            __builtin_memcpy(var_124, &var_2c, 0x28)
            i += 0x28
        else
            eax_8 -= 0x28
            
            if (esi_14 != eax_8)
                void var_cc
                __builtin_memcpy(&var_cc, esi_14, 0x28)
                __builtin_memcpy(var_124, eax_8, 0x28)
                __builtin_memcpy(eax_8, &var_cc, 0x28)
            
            i_1 -= 0x28
            void var_7c
            __builtin_memcpy(&var_7c, eax_8, 0x28)
            __builtin_memcpy(eax_8, i_1, 0x28)
            i_3 = i_1
            __builtin_memcpy(i_1, &var_7c, 0x28)
    else
        if (i == arg3)
            break
        
        if (i_1 != i)
            void var_a4
            __builtin_memcpy(&var_a4, eax_8, 0x28)
            __builtin_memcpy(eax_8, i_1, 0x28)
            __builtin_memcpy(i_1, &var_a4, 0x28)
        
        void var_f4
        __builtin_memcpy(&var_f4, eax_8, 0x28)
        __builtin_memcpy(eax_8, i, 0x28)
        i_1 += 0x28
        void* i_2 = i
        eax_8 = &eax_8[0xa]
        i_3 = i_1
        i += 0x28
        __builtin_memcpy(i_2, &var_f4, 0x28)

*arg1 = eax_8
arg1[1] = i_1
return arg1
