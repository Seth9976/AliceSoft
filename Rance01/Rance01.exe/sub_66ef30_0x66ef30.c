// 函数: sub_66ef30
// 地址: 0x66ef30
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_8 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_718940
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_48
int32_t eax_2 = data_78c474 ^ &var_48
int32_t __saved_edi
int32_t var_5c = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t esi = arg2[7]
struct _EXCEPTION_REGISTRATION_RECORD** i

if (esi != 0)
    char var_44_1
    
    if (esi != 0xe && esi != 0xf && esi != 0x1c)
        var_44_1 = 0
    
    if (esi == 0xe || esi == 0xf || esi == 0x1c || esi == 1)
        var_44_1 = 1
    
    i = arg1[8]
    bool var_43_1 = i == 0x10
    bool var_45_1 = i == 6
    bool var_42_1 = i == 0x14
    bool var_41_1 = esi == 0x14
    arg1[8] = esi
    int32_t var_34
    int32_t var_20
    
    if (esi != 0x13)
    label_66f01f:
        
        if (var_41_1 == 0)
        label_66f07a:
            
            if (var_43_1 == 0 && var_45_1 == 0 && var_44_1 != 0)
                int32_t var_4_4 = 2
                bool cond:0_1 = sub_402680(0x7304d4, sub_66fc20(&var_34, arg2)) == 0
                int32_t var_4_5 = 0xffffffff
                sub_401110(&var_34)
                
                if (cond:0_1 != 0)
                    arg2[7] = 0x15
                label_66f0d5:
                    sub_668940(arg2, &arg1[4])
            else if (esi == 0x10)
                sub_668940(arg2, arg1)
            else if (esi != 6)
                if (esi == 5)
                    goto label_66f0d5
                
                int32_t ecx_12 = arg1[4]
                int32_t eax_17 = arg1[5]
                int32_t* ecx_5
                
                if (ecx_12 == eax_17)
                label_66f2fa:
                    ecx_5 = arg2
                else
                    while (true)
                        int32_t ecx_14 = arg1[4]
                        int32_t eax_23 = (eax_17 - ecx_12) s/ 0x24 * 9
                        
                        if (*(ecx_14 + (eax_23 << 2) - 8) == 5)
                            goto label_66f2fa
                        
                        char var_80
                        char* var_3c_1 = &var_80
                        int32_t var_6c_1 = 0xf
                        int32_t var_70_1 = 0
                        var_80 = 0
                        sub_401180(&var_80, 0xffffffff, ecx_14 + (eax_23 << 2) - 0x24, 0)
                        int32_t var_64_4 = *(ecx_14 + (eax_23 << 2) - 8)
                        int32_t var_60_9 = *(ecx_14 + (eax_23 << 2) - 4)
                        int32_t eax_25 = sub_66fa10(var_80)
                        char* var_38_1 = &var_80
                        int32_t var_6c_2 = 0xf
                        int32_t var_70_2 = 0
                        var_80 = 0
                        sub_401180(&var_80, 0xffffffff, arg2, 0)
                        int32_t var_64_5 = arg2[7]
                        int32_t var_60_10 = arg2[8]
                        
                        if (eax_25 s< sub_66fa10(var_80))
                            ecx_5 = arg2
                            break
                        
                        int32_t eax_27
                        int32_t edx_9
                        edx_9:eax_27 = muls.dp.d(0x38e38e39, arg1[5] - arg1[4])
                        int32_t edx_10 = edx_9 s>> 3
                        sub_668940(arg1[4] + ((edx_10 u>> 0x1f) + edx_10) * 0x24 - 0x24, arg1)
                        void* esi_5 = arg1[5]
                        
                        if (arg1[4] != esi_5)
                            if (*(esi_5 - 0x10) u>= 0x10)
                                int32_t var_60_11 = *(esi_5 - 0x24)
                                sub_6b4d5b()
                            
                            *(esi_5 - 0x10) = 0xf
                            *(esi_5 - 0x14) = 0
                            *(esi_5 - 0x24) = 0
                            arg1[5] -= 0x24
                        
                        ecx_12 = arg1[4]
                        eax_17 = arg1[5]
                        
                        if (ecx_12 == eax_17)
                            goto label_66f2fa
                
                sub_668940(ecx_5, &arg1[4])
            else
                int32_t ecx_6 = arg1[4]
                
                for (i = arg1[5]; ecx_6 != i; i = arg1[5])
                    int32_t* esi_2 = arg1[4] + (i - ecx_6) s/ 0x24 * 0x24 - 0x24
                    int32_t var_20_1 = 0xf
                    int32_t var_24_1 = 0
                    var_34.b = 0
                    sub_401180(&var_34, 0xffffffff, esi_2, 0)
                    int32_t eax_15 = esi_2[7]
                    int32_t var_14_1 = esi_2[8]
                    int32_t var_4_6 = esi - 3
                    void* esi_3 = arg1[5]
                    
                    if (arg1[4] != esi_3)
                        if (*(esi_3 - 0x10) u>= 0x10)
                            int32_t var_60_7 = *(esi_3 - 0x24)
                            sub_6b4d5b()
                        
                        *(esi_3 - 0x10) = 0xf
                        *(esi_3 - 0x14) = 0
                        *(esi_3 - 0x24) = 0
                        arg1[5] -= 0x24
                    
                    if (eax_15 == 5)
                        sub_4c1cf0(&var_34)
                        break
                    
                    sub_668940(&var_34, arg1)
                    int32_t var_4_7 = 0xffffffff
                    
                    if (var_20_1 u>= 0x10)
                        int32_t var_60_8 = var_34
                        sub_6b4d5b()
                    
                    ecx_6 = arg1[4]
        else if (var_42_1 != 0)
            arg2[7] = 0x17
            sub_402be0(&var_34, 0x7304d0)
            int32_t var_4_2 = 1
            sub_401180(arg2, 0xffffffff, &var_34, 0)
            int32_t var_4_3 = 0xffffffff
            
            if (var_20 u>= 0x10)
                int32_t var_60_4 = var_34
                sub_6b4d5b()
            
            goto label_66f07a
    else if (i == 0x13)
        arg2[7] = 0x16
        sub_402be0(&var_34, 0x7304cc)
        int32_t var_4 = 0
        sub_401180(arg2, 0xffffffff, &var_34, 0)
        int32_t var_4_1 = 0xffffffff
        
        if (var_20 u>= 0x10)
            int32_t var_60_2 = var_34
            sub_6b4d5b()
        
        goto label_66f01f
    i.b = 1
else
    i.b = 0

fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &var_48)
return i
