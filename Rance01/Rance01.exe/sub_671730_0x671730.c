// 函数: sub_671730
// 地址: 0x671730
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_2 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_725172
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_88
int32_t eax_2 = data_78c474 ^ &var_88
int32_t* ebx
int32_t* var_8c = ebx
int32_t __saved_edi
int32_t var_9c = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_70 = 0
int32_t* eax_5 = sub_672710(1)
*eax_5 = eax_5
eax_5[1] = eax_5
eax_5[2] = eax_5
eax_5[0x11].b = 1
*(eax_5 + 0x45) = 1
int32_t var_4 = 0
arg1[0xb] = 0
int32_t esi = arg1[8]
int32_t edi_1 = arg1[7]
int32_t eax_12 = (esi - edi_1) s/ 0x24
char var_86 = 0
void var_78
void var_68
int32_t* var_64
int32_t var_50
int32_t var_2c

if (edi_1 != esi && eax_12 s> 0)
    int32_t* i_4 = arg1[7]
    int32_t* i_2 = i_4
    
    if (i_4 != 0)
        int32_t* i
        
        do
            char* eax_14 = sub_66fc20(&var_64, i_2)
            int32_t esi_2 = *(eax_14 + 0x10)
            int32_t ecx_3 = esi_2
            
            if (esi_2 u>= 7)
                ecx_3 = 7
            
            if (*(eax_14 + 0x14) u>= 0x10)
                eax_14 = *eax_14
            
            int32_t eax_15 = sub_402320(eax_14, eax_14, "#define", ecx_3)
            bool cond:0_1 = eax_15 == 0
            
            if (eax_15 == 0)
                int32_t eax_16
                
                if (esi_2 u>= 7)
                    eax_16.b = esi_2 != 7
                else
                    eax_16 = 0xffffffff
                
                cond:0_1 = eax_16 == 0
            
            ebx.b = cond:0_1
            var_4.b = 0
            
            if (var_50 u>= 0x10)
                int32_t* var_a0_3 = var_64
                sub_6b4d5b()
            
            if (ebx.b != 0)
                int32_t ecx_5 = arg1[0xb]
                int32_t* ebp_1
                void* esi_3
                int32_t* edi_2
                
                if (ecx_5 + 3 s< eax_12)
                    arg1[0xb] = ecx_5 + 1
                    int32_t edx_5 = arg1[7]
                    int32_t eax_17 = arg1[8]
                    int32_t edx_8
                    
                    if (edx_5 != eax_17)
                        int32_t eax_19
                        int32_t edx_7
                        edx_7:eax_19 = muls.dp.d(0x38e38e39, eax_17 - edx_5)
                        edx_8 = edx_7 s>> 3
                    
                    if (edx_5 != eax_17 && (edx_8 u>> 0x1f) + edx_8 s> ecx_5 + 1)
                        edi_2 = arg1[7] + (ecx_5 + 1) * 0x24
                    else
                        edi_2 = nullptr
                    
                    arg1[0xb] = ecx_5 + 2
                    int32_t edx_10 = arg1[7]
                    int32_t eax_24 = arg1[8]
                    int32_t edx_13
                    
                    if (edx_10 != eax_24)
                        int32_t eax_26
                        int32_t edx_12
                        edx_12:eax_26 = muls.dp.d(0x38e38e39, eax_24 - edx_10)
                        edx_13 = edx_12 s>> 3
                    
                    if (edx_10 != eax_24 && (edx_13 u>> 0x1f) + edx_13 s> ecx_5 + 2)
                        esi_3 = arg1[7] + (ecx_5 + 2) * 0x24
                    else
                        esi_3 = nullptr
                    
                    arg1[0xb] = ecx_5 + 3
                    int32_t edx_15 = arg1[7]
                    int32_t eax_31 = arg1[8]
                    int32_t edx_18
                    
                    if (edx_15 != eax_31)
                        int32_t eax_33
                        int32_t edx_17
                        edx_17:eax_33 = muls.dp.d(0x38e38e39, eax_31 - edx_15)
                        edx_18 = edx_17 s>> 3
                    
                    if (edx_15 != eax_31 && (edx_18 u>> 0x1f) + edx_18 s> ecx_5 + 3)
                        ebp_1 = arg1[7] + (ecx_5 + 3) * 0x24
                    else
                        ebp_1 = nullptr
                
                if (ecx_5 + 3 s>= eax_12 || edi_2[7] != 0x12 || *(esi_3 + 0x1c) != 0xb
                        || ebp_1[7] != 0x10)
                    var_50 = 0xf
                    int32_t var_54_1 = 0
                    var_64.b = 0
                    sub_401270(&var_64, 0x46, "#define")
                    var_4.b = 4
                    sub_671dc0(i_2, arg1, &var_64)
                    var_4.b = 0
                    
                    if (var_50 u>= 0x10)
                        int32_t* var_a0_10 = var_64
                        sub_6b4d5b()
                    
                    var_86 = 1
                else
                    sub_66fc20(&var_64, edi_2)
                    var_4.b = 2
                    
                    if (*sub_672130(&var_78, &var_64, &var_68) == eax_5)
                        char* eax_38 = sub_66fc20(&var_2c, ebp_1)
                        var_4.b = 3
                        sub_401ef0(sub_671fd0(&var_64, &var_78), eax_38)
                        sub_401110(&var_2c)
                    
                    var_4.b = 0
                    
                    if (var_50 u>= 0x10)
                        int32_t* var_a0_8 = var_64
                        sub_6b4d5b()
            
            arg1[0xb] += 1
            int32_t edx_21 = arg1[7]
            int32_t eax_40 = arg1[8]
            int32_t ecx_14 = arg1[0xb]
            
            if (edx_21 == eax_40)
                break
            
            if ((eax_40 - edx_21) s/ 0x24 s<= ecx_14)
                break
            
            i = arg1[7] + ecx_14 * 0x24
            i_2 = i
        while (i != 0)

int32_t* ebx_1 = arg1
ebx_1[0xb] = 0
int32_t ecx_16 = ebx_1[7]
int32_t eax_46 = ebx_1[8]
int32_t* esi_12

if (ecx_16 == eax_46)
    esi_12 = eax_5
else if ((eax_46 - ecx_16) s/ 0x24 s<= 0)
    esi_12 = eax_5
else
    int32_t* i_1 = ebx_1[7]
    int32_t* i_3 = i_1
    
    if (i_1 == 0)
        esi_12 = eax_5
    else
        do
            char* eax_52 = sub_66fc20(&var_64, i_1)
            int32_t esi_11 = *(eax_52 + 0x10)
            int32_t ecx_18 = esi_11
            
            if (esi_11 u>= 7)
                ecx_18 = 7
            
            if (*(eax_52 + 0x14) u>= 0x10)
                eax_52 = *eax_52
            
            int32_t eax_53 = sub_402320(eax_52, eax_52, "#define", ecx_18)
            bool cond:1_1 = eax_53 == 0
            
            if (eax_53 == 0)
                int32_t eax_54
                
                if (esi_11 u>= 7)
                    eax_54.b = esi_11 != 7
                else
                    eax_54 = 0xffffffff
                
                cond:1_1 = eax_54 == 0
            
            var_4.b = 0
            
            if (var_50 u>= 0x10)
                int32_t* var_a0_13 = var_64
                sub_6b4d5b()
            
            if (cond:1_1 != 0)
                ebx_1[0xb] += 1
            
            esi_12 = eax_5
            
            if (i_1[7] == 0x12)
                int32_t* j = *esi_12
                
                if (j != esi_12)
                    do
                        var_50 = 0xf
                        int32_t var_54_2 = 0
                        var_64.b = 0
                        sub_401180(&var_64, 0xffffffff, &j[3], 0)
                        var_4.b = 6
                        int32_t var_34_1 = 0xf
                        int32_t var_38_1 = 0
                        char var_48 = 0
                        sub_401180(&var_48, 0xffffffff, &j[0xa], 0)
                        var_4.b = 7
                        char* eax_55 = sub_66fc20(&var_2c, i_3)
                        int32_t* ecx_22 = var_64
                        
                        if (var_50 u< 0x10)
                            ecx_22 = &var_64
                        
                        int32_t esi_16 = *(eax_55 + 0x10)
                        int32_t edx_30 = esi_16
                        
                        if (esi_16 u>= var_54_2)
                            edx_30 = var_54_2
                        
                        if (*(eax_55 + 0x14) u>= 0x10)
                            eax_55 = *eax_55
                        
                        int32_t eax_56 = sub_402320(eax_55, eax_55, ecx_22, edx_30)
                        
                        if (eax_56 == 0)
                            if (esi_16 u>= var_54_2)
                                eax_56.b = esi_16 != var_54_2
                            else
                                eax_56 = 0xffffffff
                        
                        int32_t ebx_2
                        ebx_2.b = eax_56 == 0
                        var_4.b = 7
                        int32_t var_18
                        
                        if (var_18 u>= 0x10)
                            int32_t var_a0_16 = var_2c
                            sub_6b4d5b()
                        
                        if (ebx_2.b != 0)
                            sub_401180(i_3, 0xffffffff, &var_48, 0)
                            i_3[7] = 0x10
                        
                        if (var_34_1 u>= 0x10)
                            int32_t var_a0_17 = var_48.d
                            sub_6b4d5b()
                        
                        var_4.b = 0
                        int32_t var_34_2 = 0xf
                        int32_t var_38_2 = 0
                        var_48 = 0
                        
                        if (var_50 u>= 0x10)
                            int32_t* var_a0_18 = var_64
                            sub_6b4d5b()
                        
                        if (*(j + 0x45) == 0)
                            int32_t* j_2 = j[2]
                            
                            if (*(j_2 + 0x45) != 0)
                                int32_t* j_1 = j[1]
                                
                                if (*(j_1 + 0x45) == 0)
                                    while (j == j_1[2])
                                        j = j_1
                                        j_1 = j_1[1]
                                        
                                        if (*(j_1 + 0x45) != 0)
                                            break
                                
                                j = j_1
                            else
                                int32_t* j_3 = *j_2
                                
                                while (*(j_3 + 0x45) == 0)
                                    j_2 = j_3
                                    j_3 = *j_2
                                
                                j = j_2
                    while (j != esi_12)
                    
                    esi_12 = eax_5
                    ebx_1 = arg1
            
            ebx_1[0xb] += 1
            int32_t edx_33 = ebx_1[7]
            int32_t eax_59 = ebx_1[8]
            int32_t ecx_24 = ebx_1[0xb]
            
            if (edx_33 == eax_59)
                break
            
            if ((eax_59 - edx_33) s/ 0x24 s<= ecx_24)
                break
            
            i_1 = ebx_1[7] + ecx_24 * 0x24
            i_3 = i_1
        while (i_1 != 0)

ebx_1.b = var_86 == 0
int32_t var_4_1 = 9
sub_6721d0(&var_78, &var_68, *esi_12, esi_12)
int32_t* var_a0_20 = eax_5
sub_6b4d5b()
int32_t result
result.b = ebx_1.b
fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &var_88)
return result
