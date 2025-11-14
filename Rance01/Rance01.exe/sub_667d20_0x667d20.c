// 函数: sub_667d20
// 地址: 0x667d20
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_22 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_726c69
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t* var_cc
int32_t eax_2 = data_78c474 ^ &var_cc
int32_t __saved_edi
int32_t var_e0 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
char* eax_6 = operator new(0x34)
char* var_c0 = eax_6
char* edi = nullptr
int32_t var_4 = 0

if (eax_6 != 0)
    *(eax_6 + 0x14) = 0xf
    *(eax_6 + 0x10) = 0
    *eax_6 = 0
    sub_401270(eax_6, nullptr, 0x72d34b)
    *(eax_6 + 0x1c) = 0
    *(eax_6 + 0x20) = 0
    *(eax_6 + 0x24) = 0
    *(eax_6 + 0x28) = 0
    *(eax_6 + 0x30) = 0
    edi = eax_6

int32_t var_4_1 = 0xffffffff
char* var_c8 = edi
sub_401180(edi, 0xffffffff, arg4 + 0xc, 0)
*(arg4 + 0x7c) = edi
*(arg4 + 8) = 6
int32_t eax_7 = *(arg3 + 0x20)
int32_t ecx_1 = *(arg3 + 0x1c)
int32_t* result
char var_b8

if (ecx_1 == eax_7)
label_667e25:
    int32_t var_a4_1 = 0xf
    int32_t var_a8_1 = 0
    var_b8 = 0
    sub_401270(&var_b8, 0x22, 0x731440)
    int32_t var_4_2 = 1
    sub_6686d0(nullptr, arg2, &var_b8)
    
    if (var_a4_1 u>= 0x10)
        int32_t var_e4_2 = var_b8.d
        sub_6b4d5b()
    
label_667e6d:
    result.b = 0
else
    int32_t ebx_1 = *(arg3 + 0x2c)
    
    if ((eax_7 - ecx_1) s/ 0x24 s<= ebx_1)
        goto label_667e25
    
    void* eax_13 = *(arg3 + 0x1c) + ebx_1 * 0x24
    
    if (eax_13 == 0)
        goto label_667e25
    
    result = *(eax_13 + 0x1c)
    var_cc = nullptr
    
    if (result != 0xc)
    label_668328:
        *(arg3 + 0x2c) -= 1
    else
        while (true)
            int32_t* esi_2 = 1
            int32_t* var_c0_1 = 1
            int32_t* ebx_2
            
            while (true)
                *(arg3 + 0x2c) += 1
                int32_t eax_14 = *(arg3 + 0x20)
                int32_t edx_5 = *(arg3 + 0x1c)
                int32_t ecx_5 = *(arg3 + 0x2c)
                
                if (edx_5 != eax_14 && (eax_14 - edx_5) s/ 0x24 s> ecx_5)
                    ebx_2 = *(arg3 + 0x1c) + ecx_5 * 0x24
                    
                    if (ebx_2 != 0)
                        if (ebx_2[7] != 0xc)
                            break
                        
                        esi_2 += 1
                        var_c0_1 = esi_2
                        continue
                
                int32_t var_a4_2 = 0xf
                int32_t var_a8_3 = 0
                var_b8 = 0
                sub_401270(&var_b8, 0x22, 0x731464)
                int32_t var_4_17 = 2
                sub_6685f0(&var_b8, arg2)
                
                if (var_a4_2 u< 0x10)
                    goto label_667e6d
                
                int32_t var_e4_18 = var_b8.d
                sub_6b4d5b()
                result.b = 0
                goto label_6685bf
            
            int32_t* edi_1 = nullptr
            
            if (esi_2 == 0)
                int32_t var_a8_4 = 0
                int32_t var_a4_3 = 0xf
                var_b8 = 0
                sub_401270(&var_b8, 0x22, 0x731488)
                int32_t var_4_18 = 3
                sub_6686d0(ebx_2, arg2, &var_b8)
                
                if (var_a4_3 u< 0x10)
                    goto label_667e6d
                
                int32_t var_e4_20 = var_b8.d
                sub_6b4d5b()
                result.b = 0
                goto label_6685bf
            
            int32_t* edx_10 = var_cc
            
            if (edx_10 + 1 s< esi_2)
                int32_t var_a8_5 = 0
                int32_t var_a4_4 = 0xf
                var_b8 = 0
                sub_401270(&var_b8, 0x2e, 0x7314ac)
                int32_t var_4_19 = 4
                sub_6686d0(ebx_2, arg2, &var_b8)
                
                if (var_a4_4 u< 0x10)
                    goto label_667e6d
                
                int32_t var_e4_22 = var_b8.d
                sub_6b4d5b()
                result.b = 0
                goto label_6685bf
            
            int32_t eax_20 = ebx_2[7]
            void* var_e8_10
            int32_t* var_e4_23
            int32_t var_9c
            
            if (eax_20 != 0x12 && eax_20 != 0x11)
                sub_402be0(&var_9c, 0x7314dc)
                var_e4_23 = &var_9c
                int32_t var_4_20 = 5
                var_e8_10 = arg2
            label_66846c:
                sub_6686d0(ebx_2, var_e8_10, var_e4_23)
                sub_401110(&var_9c)
                result.b = 0
                goto label_6685bf
            
            int32_t var_80
            int32_t var_6c
            
            if (edx_10 != esi_2)
                void* edi_3
                
                if (edx_10 + 1 == esi_2)
                    if (*(var_c8 + 0x1c) != 0)
                        sub_402be0(&var_9c, 0x731518)
                        var_e4_23 = &var_9c
                        int32_t var_4_21 = 8
                        var_e8_10 = arg2
                        goto label_66846c
                    
                    int32_t* eax_27 = operator new(0x34)
                    var_cc = eax_27
                    int32_t var_4_7 = 9
                    
                    if (eax_27 == 0)
                        var_cc = nullptr
                    else
                        sub_673190(eax_27)
                        edi_1 = eax_27
                        var_cc = edi_1
                    
                    int32_t var_4_8 = 0xffffffff
                    int32_t var_4_9 = 0xa
                    sub_401180(edi_1, 0xffffffff, sub_66fc20(&var_9c, ebx_2), 0)
                    int32_t var_4_10 = 0xffffffff
                    sub_401110(&var_9c)
                    char* eax_29 = var_c8
                    edi_1[0xc] = eax_29
                    var_c8 = edi_1
                    edi_3 = &eax_29[0x20]
                    goto label_6680f4
                
                void* edi_4 = *(var_c8 + 0x30)
                void* i_2 = var_cc - esi_2
                
                if (i_2 s> 0)
                    void* i
                    
                    do
                        i = i_2
                        i_2 -= 1
                        edi_4 = *(edi_4 + 0x30)
                    while (i != 1)
                
                int32_t* eax_31 = operator new(0x34)
                var_cc = eax_31
                int32_t var_4_11 = 0xb
                
                if (eax_31 == 0)
                    var_cc = nullptr
                else
                    sub_673190(eax_31)
                    var_cc = eax_31
                
                int32_t var_4_12 = 0xffffffff
                int32_t* eax_32 = sub_66fc20(&var_80, ebx_2)
                int32_t var_4_13 = 0xc
                int32_t* esi_6 = var_cc
                sub_401180(esi_6, 0xffffffff, eax_32, 0)
                int32_t var_4_14 = 0xffffffff
                
                if (var_6c u>= 0x10)
                    int32_t var_e4_7 = var_80
                    sub_6b4d5b()
                
                esi_6[0xc] = edi_4
                var_c8 = esi_6
                edi_3 = edi_4 + 0x20
            label_6680f4:
                sub_61b5a0(&var_c8, edi_3)
                var_c8 = var_cc
            else
                char* eax_21 = operator new(0x34)
                var_cc = eax_21
                int32_t var_4_3 = 6
                
                if (eax_21 == 0)
                    var_cc = nullptr
                else
                    sub_673190(eax_21)
                    edi_1 = eax_21
                    var_cc = edi_1
                
                int32_t var_4_4 = 0xffffffff
                int32_t var_4_5 = 7
                sub_401180(edi_1, 0xffffffff, sub_66fc20(&var_80, ebx_2), 0)
                int32_t var_4_6 = 0xffffffff
                
                if (var_6c u>= 0x10)
                    int32_t var_e4_4 = var_80
                    sub_6b4d5b()
                
                char* eax_24 = var_c8
                edi_1[0xc] = *(eax_24 + 0x30)
                void* eax_25 = *(eax_24 + 0x30)
                var_c8 = edi_1
                sub_61b5a0(&var_c8, eax_25 + 0x20)
                var_c8 = var_cc
            
            var_cc = var_c0_1
            void* var_64
            sub_66fc20(&var_64, ebx_2)
            int32_t var_4_15 = 0xd
            *(arg3 + 0x2c) += 1
            int32_t eax_35 = *(arg3 + 0x20)
            int32_t ecx_16 = *(arg3 + 0x1c)
            int32_t edi_5 = *(arg3 + 0x2c)
            
            if (ecx_16 != eax_35 && (eax_35 - ecx_16) s/ 0x24 s> edi_5)
                int32_t* esi_8 = *(arg3 + 0x1c) + edi_5 * 0x24
                
                if (esi_8 != 0)
                    int32_t eax_41 = esi_8[7]
                    
                    if (eax_41 == 0xb)
                        char* edi_6 = sub_6697c0(arg1)
                        char eax_43 = sub_664430(arg1, arg2, arg3, edi_6)
                        int16_t top = top - 1
                        unimplemented  {call 0x664430}
                        
                        if (eax_43 == 0)
                            sub_402be0(&var_9c, 0x731568)
                            var_4_15.b = 0xf
                            sub_6686d0(esi_8, arg2, &var_9c)
                            sub_401110(&var_9c)
                            sub_401110(&var_64)
                            result.b = 0
                            goto label_6685bf
                        
                        void var_48
                        sub_402be0(&var_48, 0x72d57b)
                        var_4_15.b = 0x10
                        
                        for (int32_t* i_1 = *(var_c8 + 0x30); i_1 != 0; i_1 = i_1[0xc])
                            char* var_e4_11 = sub_66fc20(&var_9c, i_1)
                            var_4_15.b = 0x11
                            sub_402c60(&var_80, 0x731584, nullptr)
                            var_4_15.b = 0x12
                            var_4_15.b = 0x13
                            sub_401ef0(&var_48, sub_4c1d70(&var_48, &var_b8, &var_80, &var_b8))
                            int32_t var_a4
                            
                            if (var_a4 u>= 0x10)
                                int32_t var_e4_13 = var_b8.d
                                sub_6b4d5b()
                            
                            var_a4 = 0xf
                            int32_t var_a8_2 = 0
                            var_b8 = 0
                            
                            if (var_6c u>= 0x10)
                                int32_t var_e4_14 = var_80
                                sub_6b4d5b()
                            
                            var_4_15.b = 0x10
                            var_6c = 0xf
                            int32_t var_70_1 = 0
                            var_80.b = 0
                            int32_t var_88
                            
                            if (var_88 u>= 0x10)
                                int32_t var_e4_15 = var_9c
                                sub_6b4d5b()
                        
                        var_4_15.b = 0x14
                        void var_2c
                        sub_401180(&edi_6[0xc], 0xffffffff, sub_426250(&var_2c, &var_48, &var_64), 
                            0)
                        var_4_15.b = 0x10
                        sub_401110(&var_2c)
                        sub_6732c0(var_c8, edi_6)
                        esi_8 = sub_66fff0(arg3)
                        
                        if (esi_8 == 0)
                            sub_402be0(&var_2c, 0x731588)
                            var_4_15.b = 0x15
                            sub_6686d0(nullptr, arg2, &var_2c)
                            sub_401110(&var_2c)
                            sub_401110(&var_48)
                            sub_401110(&var_64)
                            result.b = 0
                            goto label_6685bf
                        
                        sub_401110(&var_48)
                    else if (eax_41 != 0xc)
                        *(arg3 + 0x2c) = edi_5 - 1
                        sub_401110(&var_64)
                        break
                    
                    int32_t var_4_16 = 0xffffffff
                    sub_401110(&var_64)
                    
                    if (esi_8[7] != 0xc)
                        goto label_668328
                    
                    continue
            
            int32_t var_a4_5 = 0xf
            int32_t var_a8_6 = 0
            var_b8 = 0
            sub_401270(&var_b8, 0x12, 0x731554)
            var_4_15.b = 0xe
            sub_6686d0(nullptr, arg2, &var_b8)
            
            if (var_a4_5 u>= 0x10)
                int32_t var_e4_25 = var_b8.d
                sub_6b4d5b()
            
            int32_t var_50
            
            if (var_50 u< 0x10)
                goto label_667e6d
            
            void* var_e4_26 = var_64
            sub_6b4d5b()
            result.b = 0
            goto label_6685bf
    
    result.b = 1
label_6685bf:
fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &var_cc)
return result
