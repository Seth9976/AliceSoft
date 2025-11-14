// 函数: sub_4c6da0
// 地址: 0x4c6da0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_726f28
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_70
int32_t eax_2 = data_78c474 ^ &var_70
int32_t __saved_edi
int32_t var_84 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
char* result = *arg2

if (&result[4] u> arg2[1])
    result.b = 0
else
    *(arg1 + 8) =
        ((zx.d(result[3]) << 8 | zx.d(result[2])) << 8 | zx.d(result[1])) << 8 | zx.d(*result)
    *arg2 += 4
    int32_t var_50_1 = 0xf
    int32_t var_54_1 = 0
    char var_64 = 0
    int32_t var_4 = 0
    int32_t ecx_3
    result, ecx_3 = sub_410070(arg2, &var_64)
    
    if (result.b != 0)
        int32_t ecx_4
        result, ecx_4 = sub_40ff40(ecx_3, arg2, arg1 + 0x28)
        
        if (result.b != 0)
            char eax_7
            int32_t ecx_6
            eax_7, ecx_6 = sub_40ff40(ecx_4, arg2, arg1 + 0x2c)
            
            if (eax_7 == 0)
                goto label_4c7286
            
            if (sub_40ff40(ecx_6, arg2, arg1 + 0x30) == 0)
                goto label_4c7286
            
            char eax_10
            int32_t ecx_8
            eax_10, ecx_8 = sub_40ff40(arg1 + 0x34, arg2, arg1 + 0x34)
            
            if (eax_10 == 0)
                goto label_4c7286
            
            char eax_11
            int32_t ecx_9
            eax_11, ecx_9 = sub_40ff40(ecx_8, arg2, arg1 + 0x38)
            
            if (eax_11 == 0)
                goto label_4c7286
            
            if (sub_40ff40(ecx_9, arg2, arg1 + 0x3c) == 0)
                goto label_4c7286
            
            char eax_14
            int32_t ecx_11
            eax_14, ecx_11 = sub_40ff40(arg1 + 0x40, arg2, arg1 + 0x40)
            
            if (eax_14 == 0)
                goto label_4c7286
            
            char eax_15
            int32_t ecx_12
            eax_15, ecx_12 = sub_40ff40(ecx_11, arg2, arg1 + 0x44)
            
            if (eax_15 == 0)
                goto label_4c7286
            
            if (sub_40ff40(ecx_12, arg2, arg1 + 0x48) == 0)
                goto label_4c7286
            
            char eax_18
            int32_t ecx_14
            eax_18, ecx_14 = sub_40ff40(arg1 + 0x4c, arg2, arg1 + 0x4c)
            
            if (eax_18 == 0)
                goto label_4c7286
            
            char eax_19
            int32_t ecx_15
            eax_19, ecx_15 = sub_40ff40(ecx_14, arg2, arg1 + 0x50)
            
            if (eax_19 == 0)
                goto label_4c7286
            
            if (sub_40ff40(ecx_15, arg2, arg1 + 0x54) == 0)
                goto label_4c7286
            
            int32_t* ecx_16 = arg2
            uint32_t var_68
            
            if (sub_5546f0(ecx_16, &var_68) == 0)
                goto label_4c7286
            
            sub_4addb0(var_68, arg1 + 0x58)
            
            for (float* i = *(arg1 + 0x58); i != *(arg1 + 0x5c); i = &i[3])
                char eax_24
                int32_t ecx_17
                eax_24, ecx_17 = sub_40ff40(ecx_16, arg2, i)
                
                if (eax_24 == 0)
                    goto label_4c7286
                
                char eax_25
                int32_t ecx_18
                eax_25, ecx_18 = sub_40ff40(ecx_17, arg2, &i[1])
                
                if (eax_25 == 0)
                    goto label_4c7286
                
                char eax_27
                eax_27, ecx_16 = sub_40ff40(ecx_18, arg2, &i[2])
                
                if (eax_27 == 0)
                    goto label_4c7286
            
            if (sub_5546f0(arg2, &var_68) == 0)
                goto label_4c7286
            
            int32_t ecx_20 = sub_4b3ba0(var_68, arg1 + 0x68)
            
            for (float* i_1 = *(arg1 + 0x68); i_1 != *(arg1 + 0x6c); i_1 = &i_1[2])
                char eax_30
                int32_t ecx_21
                eax_30, ecx_21 = sub_40ff40(ecx_20, arg2, i_1)
                
                if (eax_30 == 0)
                    goto label_4c7286
                
                char eax_31
                eax_31, ecx_20 = sub_40ff40(ecx_21, arg2, &i_1[1])
                
                if (eax_31 == 0)
                    goto label_4c7286
            
            if (sub_40ff40(ecx_20, arg2, arg1 + 0x78) == 0)
                goto label_4c7286
            
            char eax_34
            int32_t ecx_23
            eax_34, ecx_23 = sub_40ff40(arg1 + 0x7c, arg2, arg1 + 0x7c)
            
            if (eax_34 == 0)
                goto label_4c7286
            
            char eax_35
            int32_t ecx_24
            eax_35, ecx_24 = sub_40ff40(ecx_23, arg2, arg1 + 0x80)
            
            if (eax_35 == 0)
                goto label_4c7286
            
            if (sub_40ff40(ecx_24, arg2, arg1 + 0x84) == 0)
                goto label_4c7286
            
            char eax_38
            int32_t ecx_26
            eax_38, ecx_26 = sub_40ff40(arg1 + 0x88, arg2, arg1 + 0x88)
            
            if (eax_38 == 0)
                goto label_4c7286
            
            char eax_39
            int32_t ecx_27
            eax_39, ecx_27 = sub_40ff40(ecx_26, arg2, arg1 + 0x8c)
            
            if (eax_39 == 0)
                goto label_4c7286
            
            if (sub_40ff40(ecx_27, arg2, arg1 + 0x90) == 0)
                goto label_4c7286
            
            char eax_42
            int32_t ecx_29
            eax_42, ecx_29 = sub_40ff40(arg1 + 0x94, arg2, arg1 + 0x94)
            
            if (eax_42 == 0)
                goto label_4c7286
            
            char eax_43
            int32_t ecx_30
            eax_43, ecx_30 = sub_40ff40(ecx_29, arg2, arg1 + 0x98)
            
            if (eax_43 == 0)
                goto label_4c7286
            
            if (sub_40ff40(ecx_30, arg2, arg1 + 0x9c) == 0)
                goto label_4c7286
            
            char eax_46
            int32_t ecx_32
            eax_46, ecx_32 = sub_40ff40(arg1 + 0xa0, arg2, arg1 + 0xa0)
            
            if (eax_46 == 0)
                goto label_4c7286
            
            char eax_47
            int32_t ecx_33
            eax_47, ecx_33 = sub_40ff40(ecx_32, arg2, arg1 + 0xa4)
            
            if (eax_47 == 0)
                goto label_4c7286
            
            if (sub_40ff40(ecx_33, arg2, arg1 + 0xa8) == 0)
                goto label_4c7286
            
            char eax_50
            int32_t ecx_35
            eax_50, ecx_35 = sub_40ff40(arg1 + 0xac, arg2, arg1 + 0xac)
            
            if (eax_50 == 0)
                goto label_4c7286
            
            if (sub_40ff40(ecx_35, arg2, arg1 + 0xb0) == 0)
                goto label_4c7286
            
            if (sub_40fea0(arg2, arg1 + 0xb4) == 0)
                goto label_4c7286
            
            if (sub_40fea0(arg2, arg1 + 0xb5) == 0)
                goto label_4c7286
            
            if (sub_40fea0(arg2, arg1 + 0xb6) == 0)
                goto label_4c7286
            
            if (sub_40fea0(arg2, arg1 + 0xb7) == 0)
                goto label_4c7286
            
            if (sub_5546f0(arg2, &var_68) == 0)
                goto label_4c7286
            
            int32_t* ecx_38 = sub_65a090(arg1 + 0xb8, var_68)
            
            for (uint32_t* i_2 = *(arg1 + 0xb8); i_2 != *(arg1 + 0xbc); i_2 = &i_2[1])
                ecx_38 = arg2
                
                if (sub_5546f0(ecx_38, i_2) == 0)
                    goto label_4c7286
            
            if (sub_40ff40(ecx_38, arg2, arg1 + 0x128) == 0)
                goto label_4c7286
            
            if (sub_4daef0(arg1 + 0x12c, arg2) == 0)
                goto label_4c7286
            
            if (sub_4daef0(arg1 + 0x144, arg2) == 0)
                goto label_4c7286
            
            int32_t var_34_1 = 0xf
            int32_t var_38_1 = 0
            char var_48 = 0
            var_4.b = 1
            
            if (sub_410070(arg2, &var_48) == 0)
                goto label_4c727d
            
            int32_t var_18_1 = 0xf
            int32_t var_1c_1 = 0
            char var_2c = 0
            var_4.b = 2
            
            if (sub_410070(arg2, &var_2c) != 0)
                if (sub_40fea0(arg2, arg1 + 0x1a4) == 0)
                    goto label_4c7274
                
                char eax_76
                int32_t ecx_44
                eax_76, ecx_44 = sub_40fea0(arg2, arg1 + 0x1a5)
                
                if (eax_76 == 0)
                    goto label_4c7274
                
                if (sub_40ff40(ecx_44, arg2, arg1 + 0x1a8) == 0)
                    goto label_4c7274
                
                if (sub_5546f0(arg2, &var_68) == 0)
                    goto label_4c7274
                
                int32_t* ecx_47 = sub_65a090(arg1 + 0x1bc, var_68)
                
                for (uint32_t* i_3 = *(arg1 + 0x1bc); i_3 != *(arg1 + 0x1c0); i_3 = &i_3[1])
                    ecx_47 = arg2
                    
                    if (sub_5546f0(ecx_47, i_3) == 0)
                        goto label_4c7274
                
                if (sub_40ff40(ecx_47, arg2, arg1 + 0x1cc) == 0)
                    goto label_4c7274
                
                if (sub_5546f0(arg2, arg1 + 0x260) == 0)
                    goto label_4c7274
                
                char var_69
                char eax_84
                struct sealengine::CLightParamList::VTable** ecx_49
                eax_84, ecx_49 = sub_40fea0(arg2, &var_69)
                
                if (eax_84 == 0)
                    goto label_4c7274
                
                if (var_69 != 0)
                    if (sub_4c4100(ecx_49, arg1) == 0)
                        goto label_4c7274
                    
                    char eax_86
                    eax_86, ecx_49 = sub_4cbcd0(*(arg1 + 0x264), arg2)
                    
                    if (eax_86 == 0)
                        goto label_4c7274
                
                if (sub_40ff40(ecx_49, arg2, arg1 + 0x284) == 0)
                    goto label_4c7274
                
                if (sub_40ff40(arg1 + 0x288, arg2, arg1 + 0x288) == 0)
                    goto label_4c7274
                
                if (sub_40fea0(arg2, arg1 + 0x28c) == 0)
                    goto label_4c7274
                
                if (sub_40fea0(arg2, arg1 + 0x28d) == 0)
                    goto label_4c7274
                
                int32_t* ebx
                ebx.b = *(arg1 + 0x28c)
                *(arg1 + 0x28c) = 0
                
                if (sub_4c50e0(arg1, &var_64) == 0)
                    goto label_4c7274
                
                if (*(arg1 + 0x1c) != 0 && var_38_1 != 0 && sub_4c5290(arg1, &var_48) == 0)
                    goto label_4c7274
                
                if (*(arg1 + 0x1c) != 0 && var_1c_1 != 0 && sub_4c54c0(arg1, &var_2c) == 0)
                    goto label_4c7274
                
                *(arg1 + 0x28c) = ebx.b
                sub_401110(&var_2c)
                sub_401110(&var_48)
                sub_401110(&var_64)
                result.b = 1
            else
            label_4c7274:
                sub_401110(&var_2c)
            label_4c727d:
                sub_401110(&var_48)
            label_4c7286:
                sub_401110(&var_64)
                result.b = 0
        else if (var_50_1 u< 0x10)
            result.b = 0
        else
            int32_t var_88_4 = var_64.d
            sub_6b4d5b()
            result.b = 0
    else
        if (var_50_1 u>= 0x10)
            int32_t var_88_2 = var_64.d
            sub_6b4d5b()
        
        result.b = 0

fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &var_70)
return result
