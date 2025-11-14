// 函数: sub_664070
// 地址: 0x664070
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_7259a0
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_48
int32_t eax_2 = data_78c474 ^ &var_48
int32_t __saved_edi
int32_t var_5c = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t esi = arg1
int32_t var_30 = esi
struct _EXCEPTION_REGISTRATION_RECORD** var_44 = nullptr
int32_t var_40 = 0
int32_t var_3c = 0
int32_t var_4 = 0
int32_t* ebp = *arg3
int32_t* result

if (ebp == arg3[1])
label_6641ee:
    result.b = 0
else
    while (true)
        int32_t eax_5 = *ebp
        int32_t var_2c
        int32_t var_18
        int32_t edx
        
        if ((ebp[1] - eax_5) s>> 2 s> esi)
            int32_t* ecx_4 = *(eax_5 + (esi << 2))
            
            if (ecx_4[2] == 3)
                struct _EXCEPTION_REGISTRATION_RECORD** esi_1 = &ecx_4[0xc]
                struct _EXCEPTION_REGISTRATION_RECORD** var_60_4 = esi_1
                int32_t var_64_1 = var_40
                
                if (sub_406330(var_44, edx, ecx_4) != var_40)
                    if (esi_1[5] u>= 0x10)
                        esi_1 = *esi_1
                    
                    struct _EXCEPTION_REGISTRATION_RECORD** var_60_7 = esi_1
                    var_4.b = 3
                    sub_6685f0(sub_4104a0(0x730984), arg2)
                    
                    if (var_18 u>= 0x10)
                        int32_t var_60_8 = var_2c
                        sub_6b4d5b()
                    
                    struct _EXCEPTION_REGISTRATION_RECORD** esi_3 = var_44
                    
                    if (esi_3 != 0)
                        sub_405780(esi_3, var_40)
                        struct _EXCEPTION_REGISTRATION_RECORD** var_60_9 = esi_3
                        sub_6b4d5b()
                    
                    result.b = 1
                    break
                
                result, edx = sub_405220(esi_1, &var_44)
                esi = var_30
            else
                void* eax_7 = &ecx_4[3]
                
                if (ecx_4[8] u>= 0x10)
                    eax_7 = *eax_7
                
                void* var_60_2 = eax_7
                var_4.b = 2
                result, edx = sub_6685f0(sub_4104a0(0x73094c), arg2)
                var_4.b = 0
                
                if (var_18 u>= 0x10)
                    int32_t var_60_3 = var_2c
                    result, edx = sub_6b4d5b()
        else
            var_4.b = 1
            result, edx = sub_6685f0(sub_4104a0(0x73092c), arg2)
            var_4.b = 0
            
            if (var_18 u>= 0x10)
                int32_t var_60_1 = var_2c
                result, edx = sub_6b4d5b()
        ebp = &ebp[4]
        
        if (ebp == arg3[1])
            struct _EXCEPTION_REGISTRATION_RECORD** esi_2 = var_44
            
            if (esi_2 != 0)
                struct _EXCEPTION_REGISTRATION_RECORD** ebp_1 = esi_2
                
                if (ebp_1 != var_40)
                    do
                        if (esi_2[5] u>= 0x10)
                            struct _EXCEPTION_REGISTRATION_RECORD* var_60_5 = *esi_2
                            sub_6b4d5b()
                        
                        esi_2[5] = 0xf
                        esi_2[4] = 0
                        *esi_2 = nullptr
                        esi_2 = &esi_2[7]
                    while (esi_2 != var_40)
                
                struct _EXCEPTION_REGISTRATION_RECORD** var_60_6 = ebp_1
                sub_6b4d5b()
            
            goto label_6641ee

fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &var_48)
return result
