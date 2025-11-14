// 函数: sub_428d20
// 地址: 0x428d20
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_722b90
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
uint32_t var_48
int32_t eax_2 = data_78c474 ^ &var_48
int32_t __saved_edi
int32_t var_5c = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int128_t* result

if (arg3 == 0)
    result.b = 0
else
    char* ecx = *arg1
    
    if (&ecx[4] u> arg1[1])
        result.b = 0
    else
        int32_t eax_12 =
            (((zx.d(ecx[3]) << 8 | zx.d(ecx[2])) << 8 | zx.d(ecx[1])) << 8 | zx.d(*ecx)) + 3
        *arg1 = &ecx[4]
        int32_t var_18_1 = 0xf
        int32_t var_1c_1 = 0
        char var_2c = 0
        int32_t var_4 = 0
        
        if (sub_40ff90(arg1, &var_2c, eax_12 & 0xfffffffc).b != 0)
            uint32_t var_44 = 0
            
            if (sub_5546f0(arg1, &var_44) == 0)
                sub_401110(&var_2c)
                result.b = 0
            else
                var_48 = 0
                
                if (sub_5546f0(arg1, &var_48) == 0)
                    sub_401110(&var_2c)
                    result.b = 0
                else
                    void* edi_3 = var_48
                    
                    if (edi_3 s<= 0 || *arg1 + edi_3 u> arg1[1])
                        sub_401110(&var_2c)
                        result.b = 0
                    else
                        var_4.b = 1
                        struct _EXCEPTION_REGISTRATION_RECORD** var_3c
                        char eax_20 = sub_410150(sub_413150(&var_3c, edi_3), var_3c, arg1, edi_3)
                        void* eax_24
                        
                        if (eax_20 != 0)
                            eax_24 = ((edi_3 + 3) & 0xfffffffc) - edi_3 + *arg1
                        
                        struct _EXCEPTION_REGISTRATION_RECORD*** esi_1
                        
                        if (eax_20 == 0 || eax_24 u> arg1[1])
                            esi_1 = &var_3c
                        label_428e2c:
                            sub_65ab60(esi_1)
                            sub_401110(&var_2c)
                            result.b = 0
                        else
                            uint32_t ecx_5 = var_44
                            *arg1 = eax_24
                            esi_1 = &var_3c
                            
                            if (sub_428eb0(arg3, arg2, ecx_5, &var_2c, &var_3c) == 0)
                                goto label_428e2c
                            
                            sub_65ab60(esi_1)
                            sub_401110(&var_2c)
                            result.b = 1
        else
            if (var_18_1 u>= 0x10)
                int32_t var_60_2 = var_2c.d
                sub_6b4d5b()
            
            result.b = 0

fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &var_48)
return result
