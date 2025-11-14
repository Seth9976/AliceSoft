// 函数: sub_508190
// 地址: 0x508190
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_7280db
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
bool result

if (*arg1 != 0)
    int32_t* ecx_1 = arg1[1]
    int32_t __saved_edi
    
    if (ecx_1 == 0)
        result = true
    else if ((*(*ecx_1 + 0xc))(data_78c474 ^ &__saved_edi) == 0)
        result = true
    else
        sub_508540(arg1)
        
        if (sub_4c1c20(arg1[0x1a5], *(*arg1 + 0x198)) == 0)
            result = false
        else
            int32_t* eax_6 = *arg1
            
            if (sub_4caf00(&arg1[0x41], eax_6, eax_6[0x5b], &eax_6[0x62], &arg1[0x1a7], arg1[1])
                    != 0)
                struct sealengine::CSQT::VTable* var_108
                sub_4b6a60(&var_108, *arg1 + 0x20)
                int32_t var_4 = 0
                int32_t* eax_10 = *arg1
                void* ecx_3 = eax_10[0x62]
                void* edx_5 = (eax_10[0x63] - ecx_3) & 0xfffffffc
                
                if (edx_5 s<= 0xc || *(ecx_3 + 0xc) == 0)
                    char eax_11
                    eax_11, edx_5 = sub_4cb150(&arg1[0x41], eax_10, &var_108)
                    
                    if (eax_11 != 0)
                        goto label_5082a0
                    
                    sub_51ddc0(0x754438)
                    result = false
                else
                label_5082a0:
                    float var_d0[0x10]
                    float* eax_12 = &var_d0
                    float var_118
                    float* ecx_4 = &var_118
                    float var_104
                    var_118 = fconvert.s(fneg(fconvert.t(var_104)))
                    float var_100
                    float var_114_1 = fconvert.s(fneg(fconvert.t(var_100)))
                    float var_fc
                    float var_110_1 = fconvert.s(fneg(fconvert.t(var_fc)))
                    float var_f8
                    float var_10c_1 = fconvert.s(fconvert.t(var_f8))
                    sub_660a50(eax_12, edx_5, ecx_4)
                    long double x87_r7_8 = float.t(0)
                    float var_124 = fconvert.s(x87_r7_8)
                    float var_120_1 = fconvert.s(float.t(1))
                    float var_11c_1 = fconvert.s(x87_r7_8)
                    float var_dc
                    int32_t ecx_5 = sub_51e1c0(ecx_4, &var_dc, eax_12, &var_124)
                    var_124 = fconvert.s(float.t(1))
                    long double x87_r7_10 = float.t(0)
                    float var_120_2 = fconvert.s(x87_r7_10)
                    float var_11c_2 = fconvert.s(x87_r7_10)
                    float var_e8
                    sub_51e1c0(ecx_5, &var_e8, &var_d0, &var_124)
                    long double x87_r7_11 = float.t(0)
                    var_124 = fconvert.s(x87_r7_11)
                    float var_120_3 = fconvert.s(x87_r7_11)
                    float var_11c_3 = fconvert.s(float.t(1))
                    float* eax_15 = sub_51e1c0(&var_124, &var_118, &var_d0, &var_124)
                    arg1[0xb8] = *eax_15
                    float var_f4
                    var_124 = fconvert.s(fneg(fconvert.t(var_f4)))
                    arg1[0xb9] = eax_15[1]
                    int32_t edx_10 = eax_15[2]
                    float var_f0
                    float var_120_4 = fconvert.s(fneg(fconvert.t(var_f0)))
                    arg1[0xb5] = var_f4
                    float var_ec
                    float var_11c_4 = fconvert.s(fneg(fconvert.t(var_ec)))
                    arg1[0xba] = edx_10
                    arg1[0xb6] = var_f0
                    var_118 = var_104
                    arg1[0xb7] = var_ec
                    float var_114_2 = var_100
                    float var_10c_2 = var_f8
                    float var_110_2 = var_fc
                    sub_660a50(&var_d0, var_fc, &var_118)
                    float var_90[0x10]
                    float* eax_20 = &var_90
                    sub_529a50(eax_20, &var_d0, &var_124)
                    float var_50[0x11]
                    float* eax_21 = sub_4b65f0(eax_20, &var_90, &var_d0, &var_50)
                    int32_t* eax_22 = *arg1
                    __builtin_memcpy(&arg1[0xbb], eax_21, 0x40)
                    __builtin_memcpy(&arg1[0xcb], &eax_22[0x35], 0x40)
                    int32_t ecx_13
                    ecx_13.b = eax_22[0x5e] s> 0
                    
                    if (sub_4cb060(&arg1[0x41], eax_22, arg1[0x3f], &var_dc, &var_e8, &arg1[0xbb], 
                            &arg1[0xcb], zx.d(ecx_13.b), &eax_22[0x62], arg2, arg1[1]) != 0)
                        sub_51b630(&arg1[0x1a7])
                        
                        if (sub_51b7f0(&arg1[0x1a7], arg1[1]) != 0)
                            int32_t* ecx_16 = arg1[0xb2]
                            int32_t* eax_26 = arg1[0xb1]
                            
                            if (eax_26 != ecx_16)
                                arg1[0xb2] = sub_5c9170(eax_26, ecx_16, ecx_16, eax_26)
                            
                            sub_4cb100(&arg1[0xb1], &arg1[0x41])
                            
                            if (sub_5090b0(arg1) == 0)
                                result = false
                            else if (sub_509230(arg1) == 0)
                                result = false
                            else if (sub_509410(arg1) == 0)
                                result = false
                            else if (sub_509510(arg1) == 0)
                                result = false
                            else if (sub_508830(arg1) == 0)
                                result = false
                            else
                                long double x87_r7_19 = float.t(0)
                                var_124 = fconvert.s(x87_r7_19)
                                float var_120_5 = fconvert.s(x87_r7_19)
                                float var_11c_5 = fconvert.s(x87_r7_19)
                                result = sub_509630(arg1, &var_124) != 0
                        else
                            sub_51ddc0(0x7544a0)
                            result = false
                    else
                        sub_51ddc0(0x754470)
                        result = false
            else
                sub_51ddc0(0x754408)
                result = false
else
    result = true

fsbase->NtTib.ExceptionList = ExceptionList
return result
