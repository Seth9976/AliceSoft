// 函数: sub_50e950
// 地址: 0x50e950
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_2 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_724b9b
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t var_c8 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_b0

if (arg2 != 0)
    int32_t ecx_1
    ecx_1.b = *(arg5 + 0xa8) == 3
    var_b0 = ecx_1 + 1
else
    var_b0 = 3

float var_d4 = 0f
int32_t eax_3
eax_3.b = 0
float* result

if (sub_50e180(eax_3.b, arg1, 0, 1, 0, 0x14, var_b0, 0, 0, 0, 0, arg3, 0, var_d4, arg4, arg5).b
        == 0)
    result.b = 0
else
    result = sub_50ebb0(arg4, arg1)
    
    if (result.b == 0)
        result.b = 0
    else
        if (*(arg1 + 0x3c) != 0)
            *(arg1 + 0x3c) = 0
        
        if (*(arg1 + 0x30) != 0)
            *(arg1 + 0x30) = 0
        
        float var_94[0x10]
        sub_4b65f0(result, arg4 + 4, arg5 + 0xc, &var_94)
        float var_54[0x12]
        sub_4b65f0(&var_54, &var_94, arg5 + 0x54, &var_54)
        int32_t var_cc_4 = 0x30
        int32_t var_a4 = 0
        int32_t var_a0_1 = 0
        int32_t var_9c_1 = 0
        sub_65a090(&var_a4, var_cc_4)
        int32_t var_4 = 0
        int32_t ebp_1 = var_a4
        __builtin_memcpy(ebp_1, arg4 + 4, 0x40)
        __builtin_memcpy(ebp_1 + 0x40, &var_94, 0x40)
        __builtin_memcpy(ebp_1 + 0x80, &var_54, 0x40)
        int32_t eax_5 = *(**(arg1 + 0x28) + 0x28)
        int32_t var_cc_5 = 3
        var_d4 = 0f
        int32_t var_cc_6 = ebp_1
        
        if (eax_5(var_d4, ebp_1, var_cc_5) != 0)
            int32_t var_4_1 = 0xffffffff
            sub_6b4d5b()
            
            if (arg3 == 0)
            label_50ead4:
                
                if (var_b0 s<= 0)
                label_50eaef:
                    int32_t* edi_6 = *(arg1 + 0x34)
                    
                    if (edi_6 == 0)
                        result.b = 0
                    else
                        void* esi_4 = *(arg5 + 0x98)
                        int32_t eax_7
                        int32_t edx_5
                        edx_5:eax_7 = muls.dp.d(0x4d4873ed, *(arg5 + 0x9c) - esi_4)
                        int32_t edx_6 = edx_5 s>> 6
                        int32_t eax_10 = (edx_6 u>> 0x1f) + edx_6
                        void* ecx_7
                        
                        if (eax_10 s> 2)
                            ecx_7 = esi_4 + 0x1a8
                        else
                            ecx_7 = nullptr
                        
                        void* edx_7
                        
                        if (eax_10 s> 1)
                            edx_7 = esi_4 + 0xd4
                        else
                            edx_7 = nullptr
                        
                        int32_t ecx_8
                        ecx_8.b = eax_10 s<= 0
                        int32_t eax_13 = *(*edi_6 + 0x20)
                        float var_ac_1 = fconvert.s(fconvert.t(*(((ecx_8 - 1) & esi_4) + 0xd0)))
                        float var_cc_9 = fconvert.s(float.t(1))
                        float var_d0_4 =
                            fconvert.s(fconvert.t(fconvert.s(fconvert.t(*(ecx_7 + 0xd0)))))
                        var_d4 = fconvert.s(fconvert.t(fconvert.s(fconvert.t(*(edx_7 + 0xd0)))))
                        result.b = eax_13(0, fconvert.s(fconvert.t(var_ac_1)), var_d4, var_d0_4, 
                            var_cc_9).b != 0
                else
                    if (sub_50f900(arg5, arg1, arg4).b != 0)
                        goto label_50eaef
                    
                    result.b = 0
            else
                if (sub_50f780(arg1, arg4).b != 0)
                    goto label_50ead4
                
                result.b = 0
        else
            sub_6b4d5b()
            result.b = 0

fsbase->NtTib.ExceptionList = ExceptionList
return result
