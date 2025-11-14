// 函数: sub_662590
// 地址: 0x662590
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_720ff8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void* var_70
int32_t eax_2 = data_78c474 ^ &var_70
int32_t __saved_edi
int32_t var_84 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_34 = 0xf
int32_t var_38 = 0
char var_48 = 0
sub_401270(&var_48, nullptr, 0x72d5cb)
int32_t var_4 = 0
char* ecx = *arg2
int32_t* result

if (&ecx[4] u> arg2[1])
    if (var_34 u>= 0x10)
        int32_t var_88_6 = var_48.d
        sub_6b4d5b()
    
label_66279e:
    result.b = 0
else
    uint32_t eax_12 = ((zx.d(ecx[3]) << 8 | zx.d(ecx[2])) << 8 | zx.d(ecx[1])) << 8 | zx.d(*ecx)
    *arg2 = &ecx[4]
    
    if (sub_40ff90(arg2, &var_48, eax_12).b == 0)
    label_66289e:
        
        if (var_34 u< 0x10)
        label_66279e_1:
            result.b = 0
        else
            int32_t var_88_12 = var_48.d
            sub_6b4d5b()
            result.b = 0
    else
        void* edi_1 = arg3
        sub_401180(edi_1 + 0xc, 0xffffffff, &var_48, 0)
        *(edi_1 + 8) = 5
        uint32_t var_6c = 0
        
        if (sub_5546f0(arg2, &var_6c).b == 0)
            goto label_66289e
        
        int32_t* result_4 = nullptr
        int32_t* result_3 = nullptr
        int32_t var_64_1 = 0
        int32_t var_60_1 = 0
        var_4.b = 1
        int32_t var_58_1 = 0
        
        if (var_6c s> 0)
            while (true)
                char* eax_13 = *arg2
                int32_t edx_1 = arg2[1]
                
                if (&eax_13[8] u> edx_1)
                    result = result_3
                    
                    if (result != 0)
                        int32_t* result_1 = result
                        sub_6b4d5b()
                    
                    if (var_34 u< 0x10)
                        goto label_66279e_1
                    
                    int32_t var_88_11 = var_48.d
                    sub_6b4d5b()
                    result.b = 0
                    goto label_662843
                
                if (&eax_13[4] u> edx_1)
                    result = result_3
                    
                    if (result != 0)
                        int32_t* result_2 = result
                        sub_6b4d5b()
                    
                    break
                
                uint32_t edx_3 = zx.d(eax_13[1])
                uint32_t eax_14 = zx.d(*eax_13)
                uint32_t esi_6 = (zx.d(eax_13[3]) << 8 | zx.d(eax_13[2])) << 8
                *arg2 = &eax_13[4]
                uint32_t esi_9 = (esi_6 | edx_3) << 8 | eax_14
                char* var_50
                
                if (sub_5546f0(arg2, &var_50) != 0)
                    char* eax_16
                    int32_t ecx_9
                    eax_16, ecx_9 = sub_6697c0(arg1)
                    var_50 = eax_16
                    
                    if (eax_16 != 0)
                        *(eax_16 + 8) = esi_9
                        
                        if (esi_9 == 1)
                            var_70 = nullptr
                            
                            if (sub_5546f0(arg2, &var_70) != 0)
                                *(eax_16 + 0x28) = var_70
                            label_6627ef:
                                sub_61b5a0(&var_50, &result_3)
                                int32_t eax_25 = var_58_1 + 1
                                var_58_1 = eax_25
                                
                                if (eax_25 s< var_6c)
                                    continue
                                
                                result_4 = result_3
                                edi_1 = arg3
                                goto label_662817
                        else if (esi_9 == 2)
                            var_70 = fconvert.s(float.t(0))
                            
                            if (sub_40ff40(ecx_9, arg2, &var_70) != 0)
                                *(eax_16 + 0x2c) = fconvert.s(fconvert.t(var_70))
                                goto label_6627ef
                        else
                            if (esi_9 != 3)
                                goto label_6627ef
                            
                            var_70 = nullptr
                            void var_2c
                            sub_402be0(&var_2c, 0x72d5e1)
                            var_4.b = 2
                            
                            if (sub_5546f0(arg2, &var_70) == 0)
                                sub_401110(&var_2c)
                            else
                                if (sub_40ff90(arg2, &var_2c, var_70) != 0)
                                    sub_401180(&eax_16[0x30], 0xffffffff, &var_2c, 0)
                                    var_4.b = 1
                                    sub_401110(&var_2c)
                                    goto label_6627ef
                                
                                sub_401110(&var_2c)
                
                sub_65ab60(&result_3)
                sub_401110(&var_48)
                result.b = 0
                goto label_662843
            
            goto label_66289e
        
    label_662817:
        sub_4b55f0(edi_1 + 0x6c, &result_3)
        
        if (result_4 != 0)
            int32_t* result_5 = result_4
            sub_6b4d5b()
        
        if (var_34 u>= 0x10)
            int32_t var_88_10 = var_48.d
            sub_6b4d5b()
        
        result.b = 1

label_662843:
fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &var_70)
return result
