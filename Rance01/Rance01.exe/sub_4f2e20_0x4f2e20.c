// 函数: sub_4f2e20
// 地址: 0x4f2e20
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_2 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_71fe27
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_8c
int32_t eax_2 = data_78c474 ^ &var_8c
int32_t __saved_edi
int32_t var_a0 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
void* ebp = arg2
int32_t* edi = arg1
uint32_t result = *edi
void* var_80 = ebp
int32_t* var_78 = edi

if (result + 4 u> edi[1])
label_4f312e:
    result.b = 0
else
    uint32_t ecx_6 =
        ((zx.d(*(result + 3)) << 8 | zx.d(*(result + 2))) << 8 | zx.d(*(result + 1))) << 8
        | zx.d(*result)
    *edi = result + 4
    uint32_t result_1 = 0
    
    if (ecx_6 s> 0)
        while (true)
            int32_t var_38_1 = 0xf
            int32_t var_3c_1 = 0
            char var_4c = 0
            int32_t var_4 = 0
            
            if (sub_410070(edi, &var_4c).b == 0)
                if (var_38_1 u>= 0x10)
                    int32_t var_a4_12 = var_4c.d
                    sub_6b4d5b()
                
                goto label_4f312e
            
            int32_t var_70 = 0
            int32_t var_6c_1 = 0
            int32_t var_68_1 = 0
            var_4.b = 1
            
            if (sub_4f35b0(ebp, edi, &var_70) == 0)
                var_4.b = 0
                sub_4f5da0(&var_70)
                
                if (var_38_1 u< 0x10)
                    goto label_4f312e
                
                int32_t var_a4_14 = var_4c.d
                sub_6b4d5b()
                result.b = 0
                goto label_4f3283
            
            char* eax_6 = *edi
            
            if (&eax_6[4] u> edi[1])
                var_4.b = 0
                sub_4f5da0(&var_70)
                
                if (var_38_1 u< 0x10)
                    goto label_4f312e
                
                int32_t var_a4_16 = var_4c.d
                sub_6b4d5b()
                result.b = 0
                goto label_4f3283
            
            uint32_t esi_9 =
                ((zx.d(eax_6[3]) << 8 | zx.d(eax_6[2])) << 8 | zx.d(eax_6[1])) << 8 | zx.d(*eax_6)
            *edi = &eax_6[4]
            struct sealengine::CPOLMaterial::VTable** var_88
            struct sealengine::CPOLMaterial::VTable** var_84
            
            if (esi_9 != 0)
                struct sealengine::CPOLMaterial::VTable** eax_11 = operator new(0x44)
                var_84 = eax_11
                var_4.b = 3
                struct sealengine::CPOLMaterial::VTable** ebp_1
                
                if (eax_11 == 0)
                    ebp_1 = nullptr
                else
                    ebp_1 = sub_4f7e20(eax_11, &var_4c, 1, &var_70)
                
                var_4.b = 1
                var_84 = ebp_1
                var_88 = nullptr
                
                if (esi_9 s> 0)
                    while (true)
                        int32_t var_1c_1 = 0xf
                        int32_t var_20_1 = 0
                        char var_30 = 0
                        var_4.b = 4
                        
                        if (sub_410070(edi, &var_30) == 0)
                            if (ebp_1 != 0)
                                (*ebp_1)->vFunc_0(1)
                            
                            if (var_1c_1 u>= 0x10)
                                int32_t var_a4_17 = var_30.d
                                sub_6b4d5b()
                            
                            int32_t var_1c_2 = 0xf
                            int32_t var_20_2 = 0
                            var_30 = 0
                            var_4.b = 0
                            sub_4f5da0(&var_70)
                            
                            if (var_38_1 u< 0x10)
                                break
                            
                            int32_t var_a4_19 = var_4c.d
                            sub_6b4d5b()
                            result.b = 0
                            goto label_4f3283
                        
                        int32_t var_5c = 0
                        int32_t var_58_1 = 0
                        int32_t var_54_1 = 0
                        var_4.b = 5
                        
                        if (sub_4f35b0(var_80, edi, &var_5c) == 0)
                            if (ebp_1 != 0)
                                (*ebp_1)->vFunc_0(1)
                            
                            var_4.b = 4
                            sub_4f5da0(&var_5c)
                            
                            if (var_1c_1 u>= 0x10)
                                int32_t var_a4_21 = var_30.d
                                sub_6b4d5b()
                            
                            int32_t var_1c_3 = 0xf
                            int32_t var_20_3 = 0
                            var_30 = 0
                            var_4.b = 0
                            sub_4f5da0(&var_70)
                            
                            if (var_38_1 u< 0x10)
                                break
                            
                            int32_t var_a4_23 = var_4c.d
                            sub_6b4d5b()
                            result.b = 0
                            goto label_4f3283
                        
                        struct sealengine::CPOLMaterial::VTable** eax_15 = operator new(0x44)
                        struct sealengine::CPOLMaterial::VTable** var_7c = eax_15
                        var_4.b = 6
                        struct sealengine::CPOLMaterial::VTable** eax_16
                        
                        if (eax_15 == 0)
                            eax_16 = nullptr
                        else
                            eax_16 = sub_4f7e20(eax_15, &var_30, 0, &var_5c)
                        
                        var_4.b = 5
                        var_7c = eax_16
                        sub_61b5a0(&var_7c, &ebp_1[0xd])
                        var_4.b = 4
                        sub_4f5da0(&var_5c)
                        var_4.b = 1
                        
                        if (var_1c_1 u>= 0x10)
                            int32_t var_a4_9 = var_30.d
                            sub_6b4d5b()
                        
                        void* eax_19 = var_88 + 1
                        var_88 = eax_19
                        
                        if (eax_19 s>= esi_9)
                            goto label_4f30c5
                        
                        edi = var_78
                    
                    goto label_4f312e
                
            label_4f30c5:
                sub_61b5a0(&var_84, var_80 + 8)
            else
                struct sealengine::CPOLMaterial::VTable** eax_8 = operator new(0x44)
                var_84 = eax_8
                var_4.b = 2
                struct sealengine::CPOLMaterial::VTable** eax_9
                
                if (eax_8 == 0)
                    eax_9 = nullptr
                else
                    eax_9 = sub_4f7e20(eax_8, &var_4c, 0, &var_70)
                
                var_4.b = 1
                var_88 = eax_9
                sub_61b5a0(&var_88, ebp + 8)
            var_4.b = 0
            sub_4f5da0(&var_70)
            int32_t var_4_1 = 0xffffffff
            
            if (var_38_1 u>= 0x10)
                int32_t var_a4_11 = var_4c.d
                sub_6b4d5b()
            
            result = result_1 + 1
            result_1 = result
            
            if (result s>= ecx_6)
                break
            
            edi = var_78
            ebp = var_80
    
    result.b = 1

label_4f3283:
fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &var_8c)
return result
