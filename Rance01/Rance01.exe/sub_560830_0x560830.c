// 函数: sub_560830
// 地址: 0x560830
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_6 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_71a3bb
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_ec
int32_t eax_2 = data_78c474 ^ &var_ec
int32_t __saved_edi
int32_t var_100 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* result_4 = arg1
int32_t* result = result_4[4]
int32_t* result_6 = result_4
int32_t* result_3 = result

if (result != 0)
    int32_t* result_18 = nullptr
    int32_t* result_5 = nullptr
    
    if (result s> 0)
        do
            int32_t eax_6 = result_4[5]
            char* result_8
            
            if (eax_6 u< 0x10)
                result_8 = result_4
            else
                result_8 = *result_4
            
            char var_84
            char var_68
            char var_4c
            char var_30
            int32_t* result_17
            
            if (*(result_8 + result_18) != 0x22)
                char* result_9
                
                if (eax_6 u< 0x10)
                    result_9 = result_4
                else
                    result_9 = *result_4
                
                char* result_10
                
                if (*(result_9 + result_18) != 0x2d)
                    if (eax_6 u< 0x10)
                        result_10 = result_4
                    else
                        result_10 = *result_4
                
                if (*(result_9 + result_18) == 0x2d || *(result_10 + result_18) == 0x2f)
                    int32_t* result_2 = nullptr
                    char* var_dc_1 = nullptr
                    int32_t var_d8_1 = 0
                    int32_t var_4_4 = 5
                    
                    if (eax_6 u< 0x10)
                        result_5 = result_4
                    else
                        result_17 = *result_4
                        result_5 = result_17
                    
                    char* edx_1 = sub_4247b0(&result_2, result_17, 1)
                    
                    if (var_dc_1 != 0)
                        edx_1.b = *(result_5 + result_18 + 1)
                        *var_dc_1 = edx_1.b
                    
                    char* eax_20 = &var_dc_1[1]
                    char var_e5 = 0
                    int32_t* result_11
                    
                    if (&var_e5 u< eax_20)
                        edx_1 = &var_e5
                        result_11 = result_2
                    
                    if (&var_e5 u>= eax_20 || result_11 u> &var_e5)
                        if (eax_20 == var_d8_1)
                            sub_4247b0(&result_2, edx_1, 1)
                        
                        if (eax_20 != 0)
                            *eax_20 = 0
                    else
                        int32_t ebp_3 = &var_e5 - result_11
                        
                        if (eax_20 == var_d8_1)
                            sub_4247b0(&result_2, edx_1, 1)
                            result_11 = result_2
                        
                        if (eax_20 != 0)
                            result_11.b = *(result_11 + ebp_3)
                            *eax_20 = result_11.b
                    
                    void* var_dc_3 = &eax_20[1]
                    int32_t eax_24 = result_4[5]
                    result_5 = result_18 + 3
                    int32_t* result_12
                    
                    if (eax_24 u< 0x10)
                        result_12 = result_4
                    else
                        result_12 = *result_4
                    
                    if (*(result_12 + result_18 + 2) != 0x3d)
                        goto label_561181
                    
                    int32_t* result_7
                    
                    if (eax_24 u< 0x10)
                        result_7 = result_4
                    else
                        result_7 = *result_4
                    
                    if (*(result_7 + result_18 + 3) != 0x22)
                        int128_t* var_b8 = nullptr
                        int32_t var_b4_1 = 0
                        int32_t var_b0_1 = 0
                        var_4_4.b = 0xb
                        
                        if (sub_5613d0(&var_b8, result_4, &result_5) == 0)
                            sub_65ab60(&var_b8)
                            sub_65ab60(&result_2)
                            result.b = 0
                            goto label_561137
                        
                        int128_t* esi_15 = var_b8
                        char* eax_34 = esi_15
                        int32_t var_1c_4 = 0xf
                        int32_t var_20_4 = 0
                        var_30 = 0
                        char i
                        
                        do
                            i = *eax_34
                            eax_34 = &eax_34[1]
                        while (i != 0)
                        sub_401270(&var_30, eax_34 - &eax_34[1], esi_15)
                        var_4_4.b = 0xc
                        int32_t* result_14 = result_2
                        int32_t* result_16 = result_14
                        int32_t var_70_7 = 0xf
                        int32_t var_74_7 = 0
                        var_84 = 0
                        void* esi_17 = result_16 + 1
                        char i_1
                        
                        do
                            i_1 = *result_16
                            result_16 += 1
                        while (i_1 != 0)
                        sub_401270(&var_84, result_16 - esi_17, result_14)
                        var_4_4.b = 0xd
                        int32_t var_54_5 = 0xf
                        int32_t var_58_5 = 0
                        var_68 = 0
                        sub_401180(&var_68, 0xffffffff, &var_84, 0)
                        var_4_4.b = 0xe
                        int32_t var_38_5 = 0xf
                        int32_t var_3c_5 = 0
                        var_4c = 0
                        sub_401180(&var_4c, 0xffffffff, &var_30, 0)
                        var_4_4.b = 0xf
                        result_17 = sub_561600(&var_68, arg2)
                        
                        if (var_38_5 u>= 0x10)
                            int32_t var_104_25 = var_4c.d
                            result_17 = sub_6b4d5b()
                        
                        int32_t var_38_6 = 0xf
                        int32_t var_3c_6 = 0
                        var_4c = 0
                        
                        if (var_54_5 u>= 0x10)
                            int32_t var_104_26 = var_68.d
                            result_17 = sub_6b4d5b()
                        
                        int32_t var_54_6 = 0xf
                        int32_t var_58_6 = 0
                        var_68 = 0
                        
                        if (var_70_7 u>= 0x10)
                            int32_t var_104_27 = var_84.d
                            result_17 = sub_6b4d5b()
                        
                        int32_t var_70_8 = 0xf
                        int32_t var_74_8 = 0
                        var_84 = 0
                        
                        if (var_1c_4 u>= 0x10)
                            int32_t var_104_28 = var_30.d
                            result_17 = sub_6b4d5b()
                        
                        int128_t* eax_39 = var_b8
                        
                        if (eax_39 != 0)
                            int128_t* var_104_29 = eax_39
                            result_17 = sub_6b4d5b()
                        
                        var_b8 = nullptr
                        int32_t var_b4_2 = 0
                        int32_t var_b0_2 = 0
                        goto label_5610f4
                    
                    result_5 = &result_18[1]
                    int128_t* var_c8 = nullptr
                    int32_t var_c4_1 = 0
                    int32_t var_c0_1 = 0
                    var_4_4.b = 6
                    
                    if (sub_5611a0(&var_c8, result_4, &result_5) == 0)
                        sub_65ab60(&var_c8)
                    label_561181:
                        sub_65ab60(&result_2)
                        result.b = 0
                        goto label_561137
                    
                    int128_t* esi_11 = var_c8
                    char* eax_27 = esi_11
                    int32_t var_1c_3 = 0xf
                    int32_t var_20_3 = 0
                    var_30 = 0
                    char i_2
                    
                    do
                        i_2 = *eax_27
                        eax_27 = &eax_27[1]
                    while (i_2 != 0)
                    sub_401270(&var_30, eax_27 - &eax_27[1], esi_11)
                    var_4_4.b = 7
                    int32_t* result_13 = result_2
                    int32_t* result_15 = result_13
                    int32_t var_70_5 = 0xf
                    int32_t var_74_5 = 0
                    var_84 = 0
                    void* esi_13 = result_15 + 1
                    char i_3
                    
                    do
                        i_3 = *result_15
                        result_15 += 1
                    while (i_3 != 0)
                    sub_401270(&var_84, result_15 - esi_13, result_13)
                    var_4_4.b = 8
                    int32_t var_54_3 = 0xf
                    int32_t var_58_3 = 0
                    var_68 = 0
                    sub_401180(&var_68, 0xffffffff, &var_84, 0)
                    var_4_4.b = 9
                    int32_t var_38_3 = 0xf
                    int32_t var_3c_3 = 0
                    var_4c = 0
                    sub_401180(&var_4c, 0xffffffff, &var_30, 0)
                    var_4_4.b = 0xa
                    result_17 = sub_561600(&var_68, arg2)
                    
                    if (var_38_3 u>= 0x10)
                        int32_t var_104_17 = var_4c.d
                        result_17 = sub_6b4d5b()
                    
                    int32_t var_38_4 = 0xf
                    int32_t var_3c_4 = 0
                    var_4c = 0
                    
                    if (var_54_3 u>= 0x10)
                        int32_t var_104_18 = var_68.d
                        result_17 = sub_6b4d5b()
                    
                    int32_t var_54_4 = 0xf
                    int32_t var_58_4 = 0
                    var_68 = 0
                    
                    if (var_70_5 u>= 0x10)
                        int32_t var_104_19 = var_84.d
                        result_17 = sub_6b4d5b()
                    
                    int32_t var_70_6 = 0xf
                    int32_t var_74_6 = 0
                    var_84 = 0
                    
                    if (var_1c_3 u>= 0x10)
                        int32_t var_104_20 = var_30.d
                        result_17 = sub_6b4d5b()
                    
                    int128_t* eax_31 = var_c8
                    
                    if (eax_31 != 0)
                        int128_t* var_104_21 = eax_31
                        result_17 = sub_6b4d5b()
                    
                    var_c8 = nullptr
                    int32_t var_c4_2 = 0
                    int32_t var_c0_2 = 0
                label_5610f4:
                    int32_t var_4_5 = 0xffffffff
                    result = result_2
                    
                    if (result != 0)
                        int32_t* result_1 = result
                        result, result_17 = sub_6b4d5b()
                    
                    result_2 = nullptr
                    int32_t var_dc_4 = 0
                    int32_t var_d8_2 = 0
                    result_18 = result_5
                    result_4 = result_6
                else
                    if (eax_6 u< 0x10)
                        result = result_4
                    else
                        result = *result_4
                    
                    if (*(result + result_18) != 0x20)
                        int128_t* var_a8 = nullptr
                        int32_t var_a4_1 = 0
                        int32_t var_a0_1 = 0
                        int32_t var_4_2 = 0x10
                        char eax_13
                        char ecx_5
                        eax_13, ecx_5 = sub_5613d0(&var_a8, result_4, &result_5)
                        
                        if (eax_13 == 0)
                            sub_65ab60(&var_a8)
                            result.b = 0
                            goto label_561137
                        
                        int128_t* ebp_2 = var_a8
                        char* eax_14 = ebp_2
                        int32_t var_1c_2 = 0xf
                        int32_t var_20_2 = 0
                        var_30 = 0
                        char i_4
                        
                        do
                            i_4 = *eax_14
                            eax_14 = &eax_14[1]
                        while (i_4 != 0)
                        sub_401270(&var_30, eax_14 - &eax_14[1], ebp_2)
                        var_4_2.b = 0x11
                        int32_t var_70_3 = 0xf
                        int32_t var_74_3 = 0
                        var_84 = 0
                        sub_401270(&var_84, nullptr, 0x72d942)
                        var_4_2.b = 0x12
                        var_4_2.b = 0x13
                        sub_561600(sub_560760(&var_68, &var_84, &var_30), arg2)
                        result, result_17 = sub_5618e0(&var_68)
                        
                        if (var_70_3 u>= 0x10)
                            int32_t var_104_11 = var_84.d
                            result, result_17 = sub_6b4d5b()
                        
                        int32_t var_70_4 = 0xf
                        int32_t var_74_4 = 0
                        var_84 = 0
                        
                        if (var_1c_2 u>= 0x10)
                            int32_t var_104_12 = var_30.d
                            result, result_17 = sub_6b4d5b()
                        
                        int32_t var_4_3 = 0xffffffff
                        
                        if (ebp_2 != 0)
                            int128_t* var_104_13 = ebp_2
                            result, result_17 = sub_6b4d5b()
                        
                        var_a8 = nullptr
                        int32_t var_a4_2 = 0
                        int32_t var_a0_2 = 0
                        result_18 = result_5
                        result_4 = result_6
                    else
                        result_18 += 1
                        result_5 = result_18
            else
                result_5 = result_18 + 1
                int128_t* var_98 = nullptr
                int32_t var_94_1 = 0
                int32_t var_90_1 = 0
                int32_t var_4 = 0
                
                if (sub_5611a0(&var_98, result_4, &result_5) == 0)
                    sub_65ab60(&var_98)
                    result.b = 0
                    goto label_561137
                
                int128_t* ebp_1 = var_98
                char* eax_9 = ebp_1
                int32_t var_1c_1 = 0xf
                int32_t var_20_1 = 0
                var_30 = 0
                char i_5
                
                do
                    i_5 = *eax_9
                    eax_9 = &eax_9[1]
                while (i_5 != 0)
                sub_401270(&var_30, eax_9 - &eax_9[1], ebp_1)
                var_4.b = 1
                int32_t var_70_1 = 0xf
                int32_t var_74_1 = 0
                var_84 = 0
                sub_401270(&var_84, nullptr, 0x72d941)
                var_4.b = 2
                int32_t var_54_1 = 0xf
                int32_t var_58_1 = 0
                var_68 = 0
                sub_401180(&var_68, 0xffffffff, &var_84, 0)
                var_4.b = 3
                int32_t var_38_1 = 0xf
                int32_t var_3c_1 = 0
                var_4c = 0
                sub_401180(&var_4c, 0xffffffff, &var_30, 0)
                var_4.b = 4
                result, result_17 = sub_561600(&var_68, arg2)
                
                if (var_38_1 u>= 0x10)
                    int32_t var_104_3 = var_4c.d
                    result, result_17 = sub_6b4d5b()
                
                int32_t var_38_2 = 0xf
                int32_t var_3c_2 = 0
                var_4c = 0
                
                if (var_54_1 u>= 0x10)
                    int32_t var_104_4 = var_68.d
                    result, result_17 = sub_6b4d5b()
                
                int32_t var_54_2 = 0xf
                int32_t var_58_2 = 0
                var_68 = 0
                
                if (var_70_1 u>= 0x10)
                    int32_t var_104_5 = var_84.d
                    result, result_17 = sub_6b4d5b()
                
                int32_t var_70_2 = 0xf
                int32_t var_74_2 = 0
                var_84 = 0
                
                if (var_1c_1 u>= 0x10)
                    int32_t var_104_6 = var_30.d
                    result, result_17 = sub_6b4d5b()
                
                int32_t var_4_1 = 0xffffffff
                
                if (ebp_1 != 0)
                    int128_t* var_104_7 = ebp_1
                    result, result_17 = sub_6b4d5b()
                
                var_98 = nullptr
                int32_t var_94_2 = 0
                int32_t var_90_2 = 0
                result_18 = result_5
                result_4 = result_6
        while (result_18 s< result_3)

result.b = 1
label_561137:
fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &var_ec)
return result
