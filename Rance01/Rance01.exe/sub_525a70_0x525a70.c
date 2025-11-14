// 函数: sub_525a70
// 地址: 0x525a70
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_717258
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t var_54 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
struct _EXCEPTION_REGISTRATION_RECORD** eax_3

if (arg1 s>= 0)
    eax_3 = data_797d4c
    
    if (arg1 s< (eax_3[0x11] - eax_3[0x10]) s>> 2)
        eax_3 = *(eax_3[0x10] + (arg1 << 2))
        
        if (eax_3 != 0 && arg2 s>= 0)
            int32_t ecx_1 = eax_3[4]
            
            if (arg2 s< (eax_3[5] - ecx_1) s>> 2)
                eax_3 = *(ecx_1 + (arg2 << 2))
                
                if (eax_3 != 0)
                    long double x87_r7 = float.t(0)
                    struct sealengine::CBoneCollisionShape::VTable* const var_48 =
                        &sealengine::CBoneCollisionShape::`vftable'
                    float var_3c = fconvert.s(x87_r7)
                    struct sealengine::CCollisionShape::VTable* const var_44 =
                        &sealengine::CCollisionShape::`vftable'
                    float var_38 = fconvert.s(x87_r7)
                    int32_t var_40 = 0
                    float var_34 = fconvert.s(x87_r7)
                    int32_t var_20 = 0xffffffff
                    float var_30 = fconvert.s(x87_r7)
                    int32_t var_1c = 0
                    float var_2c = fconvert.s(x87_r7)
                    int32_t var_18 = 0
                    float var_28 = fconvert.s(x87_r7)
                    int32_t var_14 = 0
                    float var_24 = fconvert.s(x87_r7)
                    int32_t var_4 = 0
                    sub_4b50e0(&var_48, &eax_3[0x3e])
                    
                    if (var_1c != 0)
                        int32_t var_58_1 = var_1c
                        sub_6b4d5b()
                    
                    int32_t eax_7
                    eax_7.b = 1
                    fsbase->NtTib.ExceptionList = ExceptionList
                    return eax_7

eax_3.b = 0
fsbase->NtTib.ExceptionList = ExceptionList
return eax_3
