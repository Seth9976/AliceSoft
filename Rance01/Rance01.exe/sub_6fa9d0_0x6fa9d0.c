// 函数: sub_6fa9d0
// 地址: 0x6fa9d0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

void* ecx = *(arg1 + 0x58)
void* var_20 = *(arg1 + 0x37f0)
char var_18 = 1
void* eax

if (ecx != 4 && ecx != 1 && ecx != 5 && ecx != 0xff)
    eax = *(arg1 + 0x34)

if (ecx == 4 || ecx == 1 || ecx == 5 || ecx == 0xff || eax == 4 || eax == 3)
    var_18 = 0
    *(arg1 + 0x68) = 0
else
    *(arg1 + 0x68) = 1

int32_t ebp = 0
char var_1c = 0
int32_t ebx = 0
int32_t ecx_1 = *(arg1 + 0x37c0)
*(arg1 + 0x6c) = 0
*(arg1 + 0x37b8) = 0
*(arg1 + 0x37bc) = 0

if (ecx_1 s> 0)
    int32_t edi_1 = *(arg1 + 0x37cc)
    int32_t edx_1 = 0
    int32_t var_28_1 = 0
    int32_t ecx_2 = 0
    
    do
        int32_t ebx_1 = *(edx_1 + edi_1 + 4)
        
        if (var_28_1 s< ebx_1)
            var_28_1 = ebx_1
            *(arg1 + 0x37b8) = ebx_1
        
        int32_t ebx_2 = *(edx_1 + edi_1 + 8)
        
        if (ebp s< ebx_2)
            ebp = ebx_2
            *(arg1 + 0x37bc) = ebx_2
        
        if (*(edx_1 + edi_1 + 4) != 1 || *(edx_1 + edi_1 + 8) != 1)
            if (*(arg1 + 0x34) == 3)
                var_1c = 0
                *(arg1 + 0x6c) = 0
            else
                var_1c = 1
                *(arg1 + 0x6c) = 1
        
        edx_1 += 0x10
        ecx_2 += 1
    while (ecx_2 s< ecx_1)
    
    ebx = var_28_1

int32_t edi_2 = *(arg1 + 0x74)
int32_t ebx_8
int32_t ebp_3

if (edi_2 == 1)
    *(arg1 + 0x37b0) = 8
    ebx_8 = ebx * 8
    *(arg1 + 0x37b4) = 8
    ebp_3 = ebp * 8
else
    ebx_8 = ebx * 8
    *(arg1 + 0x37b4) = ebx_8
    ebp_3 = ebp * 8
    *(arg1 + 0x37b0) = ebp_3

int32_t temp0 = divs.dp.d(sx.q(*(arg1 + 0x4c) + ebx_8 - 1), ebx_8)
int32_t eax_6 = *(arg1 + 0x50) + ebp_3 - 1
*(arg1 + 0x78) = temp0
int32_t temp0_1 = divs.dp.d(sx.q(eax_6), ebp_3)
*(arg1 + 0x7c) = temp0_1
*(arg1 + 0x37c4) = temp0
*(arg1 + 0x37c8) = temp0_1 * temp0
*(arg1 + 0x18) = 0
void* eax_9

if (ecx_1 == 3 && ecx == 3 && *(arg1 + 0x34) == 3)
    eax_9 = *(arg1 + 0x37cc)
    void* var_28_2 = eax_9
    
    if (*(eax_9 + 4) != 2 || *(eax_9 + 8) != 1 || *(eax_9 + 0x14) != 1 || *(eax_9 + 0x18) != 1
            || *(eax_9 + 0x24) != 1 || *(eax_9 + 0x28) != 1)
        return 0xfffffff8

if (ecx_1 s<= 0 || ecx_1 s> 0xff)
    return 0xfffffff2

int32_t edx_6

if (edi_2 != 0)
    edx_6 = *(arg1 + 0x4de0)

if (edi_2 == 0 || edx_6 != 0)
    eax_9.b = var_1c
    
    if (eax_9.b == 0)
    label_6fab95:
        eax_9.b = var_1c
        
        if (eax_9.b == 0)
        label_6fabd7:
            eax_9.b = var_1c
            
            if (eax_9.b != 0)
            label_6fac07:
                eax_9.b = var_1c
                
                if (eax_9.b == 0)
                    eax_9.b = var_18
                    
                    if (eax_9.b == 0)
                        if (ecx_1 == 1 && *(arg1 + 0x30) == 1)
                            *(var_20 + 0xa0) = sub_6f0a00
                            ecx_1 = *(arg1 + 0x37c0)
                        
                        if (ecx_1 == 1 && *(arg1 + 0x30) != 1)
                            *(var_20 + 0xa0) = sub_6f0b70
                        else if (ecx_1 == 2)
                            *(var_20 + 0xa0) = sub_6f0b70
                        else if (ecx_1 == 3 && *(arg1 + 0x30) == 1)
                            *(var_20 + 0xa0) = sub_6f0b70
                        else if (ecx_1 == 3 && *(arg1 + 0x30) == 2)
                            void* edx_12 = *(arg1 + 0x37cc)
                            
                            if (*(edx_12 + 4) == 2 && *(edx_12 + 8) == 1 && *(edx_12 + 0x14) == 1
                                    && *(edx_12 + 0x18) == 1 && *(edx_12 + 0x24) == 1
                                    && *(edx_12 + 0x28) == 1)
                                *(arg1 + 0x18) = 0x13
                                *(var_20 + 0xa0) = sub_6f05f0
                        else if (ecx_1 == 3 && *(arg1 + 0x30) == 3)
                            if (*(arg1 + 0x34) == 2)
                                *(arg1 + 0x18) = 0
                                *(var_20 + 0xa0) = sub_6f0b70
                            else
                                *(arg1 + 0x18) = 0xf
                                *(var_20 + 0xa0) = sub_6ef690
                        else if (ecx_1 == 3 && *(arg1 + 0x30) == 4)
                            if (*(arg1 + 0x34) == 5)
                                *(arg1 + 0x18) = 0xd
                                *(var_20 + 0xa0) = sub_6eef50
                            else
                                *(var_20 + 0xa0) = sub_6f0b70
                        else if (ecx_1 == 4 && *(arg1 + 0x30) == 3)
                            *(arg1 + 0x18) = 0
                            *(var_20 + 0xa0) = sub_6f0b70
                        else if (ecx_1 == 4 && *(arg1 + 0x30) == 4)
                            *(arg1 + 0x18) = 0xe
                            *(var_20 + 0xa0) = sub_6ef330
            else
                eax_9.b = var_18
                
                if (eax_9.b == 0)
                    goto label_6fac07
                
                if (ecx_1 == 3 && *(arg1 + 0x30) == 3)
                    int32_t eax_122 = *(arg1 + 0x34)
                    
                    if (eax_122 == 1)
                        *(arg1 + 0x18) = 1
                        *(var_20 + 0xa0) = sub_6e8120
                    else if (eax_122 == 2)
                        *(arg1 + 0x18) = 2
                        *(var_20 + 0xa0) = sub_6e8540
                else if (ecx_1 == 3 && *(arg1 + 0x30) == 4)
                    if (*(arg1 + 0x34) == 5)
                        *(arg1 + 0x18) = 7
                        *(var_20 + 0xa0) = sub_6ea540
                else if (ecx_1 == 4 && *(arg1 + 0x30) == 4 && *(arg1 + 0x34) == 5)
                    *(arg1 + 0x18) = 0xa
                    *(var_20 + 0xa0) = sub_6ecbc0
        else
            eax_9.b = var_18
            
            if (eax_9.b != 0)
                goto label_6fabd7
            
            if (ecx_1 == 3 && *(arg1 + 0x30) == 1)
                if (*(arg1 + 0x4de0) != 0)
                    *(var_20 + 0xa0) = sub_6e4710
                else
                    *(var_20 + 0xa0) = sub_6f0ee0
            else if (ecx_1 == 3 && *(arg1 + 0x30) == 3)
                if (*(arg1 + 0x34) != 2)
                    void* edx_11 = *(arg1 + 0x37cc)
                    int32_t eax_89 = *(edx_11 + 4)
                    
                    if (eax_89 == 2 && *(edx_11 + 8) == 2 && *(edx_11 + 0x14) == 1
                            && *(edx_11 + 0x18) == 1 && *(edx_11 + 0x24) == 1
                            && *(edx_11 + 0x28) == 1)
                        *(arg1 + 0x18) = 0x10
                        int32_t eax_103 = *(arg1 + 0x4de8)
                        
                        if (eax_103 == 0)
                            *(var_20 + 0xa0) = sub_6efb60
                        else if (eax_103 == 1)
                            if (*(arg1 + 0x4de0) != 0)
                                *(var_20 + 0xa0) = sub_6e4710
                            else
                                *(var_20 + 0xa0) = sub_6f0ee0
                    else if (eax_89 == 2 && *(edx_11 + 8) == 1 && *(edx_11 + 0x14) == 1
                            && *(edx_11 + 0x18) == 1 && *(edx_11 + 0x24) == 1
                            && *(edx_11 + 0x28) == 1)
                        *(arg1 + 0x18) = 0x11
                        int32_t eax_98 = *(arg1 + 0x4de8)
                        
                        if (eax_98 == 0)
                            *(var_20 + 0xa0) = sub_6f0170
                        else if (eax_98 == 1)
                            if (*(arg1 + 0x4de0) != 0)
                                *(var_20 + 0xa0) = sub_6e4710
                            else
                                *(var_20 + 0xa0) = sub_6f0ee0
                    else if (*(arg1 + 0x4de0) != 0)
                        *(var_20 + 0xa0) = sub_6e4710
                    else
                        *(var_20 + 0xa0) = sub_6f0ee0
                else if (*(arg1 + 0x4de0) != 0)
                    *(var_20 + 0xa0) = sub_6e4710
                else
                    *(var_20 + 0xa0) = sub_6f0ee0
            else if (ecx_1 == 3 && *(arg1 + 0x30) == 4)
                if (*(arg1 + 0x4de0) != 0)
                    *(var_20 + 0xa0) = sub_6e4710
                else
                    *(var_20 + 0xa0) = sub_6f0ee0
            else if (ecx_1 == 4 && *(arg1 + 0x30) == 3)
                if (*(arg1 + 0x4de0) != 0)
                    *(var_20 + 0xa0) = sub_6e4710
                else
                    *(var_20 + 0xa0) = sub_6f0ee0
            else if (ecx_1 == 4 && *(arg1 + 0x30) == 4)
                if (*(arg1 + 0x4de0) != 0)
                    *(var_20 + 0xa0) = sub_6e4710
                else
                    *(var_20 + 0xa0) = sub_6f0ee0
    else
        eax_9.b = var_18
        
        if (eax_9.b == 0)
            goto label_6fab95
        
        if (ecx_1 == 3 && *(arg1 + 0x30) == 3)
            int32_t eax_48 = *(arg1 + 0x34)
            
            if (eax_48 == 1)
                void* edx_10 = *(arg1 + 0x37cc)
                int32_t eax_62 = *(edx_10 + 4)
                
                if (eax_62 == 2 && *(edx_10 + 8) == 2 && *(edx_10 + 0x14) == 1
                        && *(edx_10 + 0x18) == 1 && *(edx_10 + 0x24) == 1 && *(edx_10 + 0x28) == 1)
                    int32_t eax_72 = *(arg1 + 0x4de8)
                    
                    if (eax_72 == 0)
                        *(arg1 + 0x18) = 3
                        *(var_20 + 0xa0) = sub_6e6a20
                    else if (eax_72 == 1)
                        *(var_20 + 0xa0) = sub_6f2220
                else if (eax_62 == 2 && *(edx_10 + 8) == 1 && *(edx_10 + 0x14) == 1
                        && *(edx_10 + 0x18) == 1 && *(edx_10 + 0x24) == 1 && *(edx_10 + 0x28) == 1)
                    int32_t eax_69 = *(arg1 + 0x4de8)
                    
                    if (eax_69 == 0)
                        *(arg1 + 0x18) = 5
                        *(var_20 + 0xa0) = sub_6e8fb0
                    else if (eax_69 == 1)
                        *(var_20 + 0xa0) = sub_6f2220
                else
                    *(var_20 + 0xa0) = sub_6f2220
            else if (eax_48 == 2)
                void* edx_9 = *(arg1 + 0x37cc)
                int32_t eax_49 = *(edx_9 + 4)
                
                if (eax_49 == 2 && *(edx_9 + 8) == 2 && *(edx_9 + 0x14) == 1 && *(edx_9 + 0x18) == 1
                        && *(edx_9 + 0x24) == 1 && *(edx_9 + 0x28) == 1)
                    int32_t eax_59 = *(arg1 + 0x4de8)
                    
                    if (eax_59 == 0)
                        *(arg1 + 0x18) = 4
                        *(var_20 + 0xa0) = sub_6e7ac0
                    else if (eax_59 == 1)
                        *(var_20 + 0xa0) = sub_6f2220
                else if (eax_49 == 2 && *(edx_9 + 8) == 1 && *(edx_9 + 0x14) == 1
                        && *(edx_9 + 0x18) == 1 && *(edx_9 + 0x24) == 1 && *(edx_9 + 0x28) == 1)
                    int32_t eax_56 = *(arg1 + 0x4de8)
                    
                    if (eax_56 == 0)
                        *(arg1 + 0x18) = 6
                        *(var_20 + 0xa0) = sub_6e9af0
                    else if (eax_56 == 1)
                        *(var_20 + 0xa0) = sub_6f2220
                else
                    *(var_20 + 0xa0) = sub_6f2220
        else if (ecx_1 == 3 && *(arg1 + 0x30) == 4)
            if (*(arg1 + 0x34) == 5)
                void* edx_8 = *(arg1 + 0x37cc)
                int32_t eax_34 = *(edx_8 + 4)
                
                if (eax_34 == 2 && *(edx_8 + 8) == 2 && *(edx_8 + 0x14) == 1 && *(edx_8 + 0x18) == 1
                        && *(edx_8 + 0x24) == 1 && *(edx_8 + 0x28) == 1)
                    int32_t eax_44 = *(arg1 + 0x4de8)
                    
                    if (eax_44 == 0)
                        *(arg1 + 0x18) = 8
                        *(var_20 + 0xa0) = sub_6ebe10
                    else if (eax_44 == 1)
                        *(var_20 + 0xa0) = sub_6f2220
                else if (eax_34 == 2 && *(edx_8 + 8) == 1 && *(edx_8 + 0x14) == 1
                        && *(edx_8 + 0x18) == 1 && *(edx_8 + 0x24) == 1 && *(edx_8 + 0x28) == 1)
                    int32_t eax_41 = *(arg1 + 0x4de8)
                    
                    if (eax_41 == 0)
                        *(arg1 + 0x18) = 9
                        *(var_20 + 0xa0) = sub_6eaf80
                    else if (eax_41 == 1)
                        *(var_20 + 0xa0) = sub_6f2220
                else
                    *(var_20 + 0xa0) = sub_6f2220
        else if (ecx_1 == 4 && *(arg1 + 0x30) == 4 && *(arg1 + 0x34) == 5)
            void* edx_7 = *(arg1 + 0x37cc)
            int32_t eax_17 = *(edx_7 + 4)
            
            if (eax_17 == 2 && *(edx_7 + 8) == 1 && *(edx_7 + 0x14) == 1 && *(edx_7 + 0x18) == 1
                    && *(edx_7 + 0x24) == 1 && *(edx_7 + 0x28) == 1 && *(edx_7 + 0x34) == 2
                    && *(edx_7 + 0x38) == 1)
                int32_t eax_29 = *(arg1 + 0x4de8)
                
                if (eax_29 == 0)
                    *(arg1 + 0x18) = 0xc
                    *(var_20 + 0xa0) = sub_6ed7b0
                else if (eax_29 == 1)
                    *(var_20 + 0xa0) = sub_6f2220
            else if (eax_17 == 2 && *(edx_7 + 8) == 2 && *(edx_7 + 0x14) == 1
                    && *(edx_7 + 0x18) == 1 && *(edx_7 + 0x24) == 1 && *(edx_7 + 0x28) == 1
                    && *(edx_7 + 0x34) == 2 && *(edx_7 + 0x38) == 2)
                int32_t eax_26 = *(arg1 + 0x4de8)
                
                if (eax_26 == 0)
                    *(arg1 + 0x18) = 0xb
                    *(var_20 + 0xa0) = sub_6ee930
                else if (eax_26 == 1)
                    *(var_20 + 0xa0) = sub_6f2220
            else
                *(var_20 + 0xa0) = sub_6f2220
else if (*(arg1 + 0x34) == 3)
    *(var_20 + 0xa0) = sub_6f2280
else if (edx_6 != 0)
    *(var_20 + 0xa0) = sub_6e4710
else
    *(var_20 + 0xa0) = sub_6f0ee0

return 0
