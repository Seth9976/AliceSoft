// 函数: sub_68b940
// 地址: 0x68b940
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_4 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_71be53
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t* result_1
int32_t eax_2 = data_78c474 ^ &result_1
int32_t __saved_edi
int32_t var_5c = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
char* ecx = *arg1
int32_t edx = arg1[1]
int32_t* result

if (&ecx[4] u> edx)
    result = nullptr
else
    uint32_t esi_7 = ((zx.d(ecx[3]) << 8 | zx.d(ecx[2])) << 8 | zx.d(ecx[1])) << 8 | zx.d(*ecx)
    *arg1 = &ecx[4]
    
    if (&ecx[8] u> edx)
        result = nullptr
    else
        uint32_t edx_2 = zx.d(ecx[4])
        uint32_t edi_7 = (zx.d(ecx[7]) << 8 | zx.d(ecx[6])) << 8 | zx.d(ecx[5])
        *arg1 = &ecx[8]
        uint32_t var_40
        
        if (sub_5546f0(arg1, &var_40) == 0)
            result = nullptr
        else
            int32_t* eax_8 = operator new(0x34)
            int32_t* var_44_1 = eax_8
            int32_t var_4 = 0
            
            if (eax_8 == 0)
                result_1 = nullptr
            else
                result_1 = sub_68b670(edi_7 << 8 | edx_2, eax_8, esi_7)
            
            int32_t var_4_1 = 0xffffffff
            int32_t var_44_2 = 0
            
            if (var_40 s<= 0)
            label_68bab8:
                result = result_1
            else
                while (true)
                    float var_34_1 = fconvert.s(float.t(0))
                    uint32_t var_3c = 1
                    int32_t var_38_1 = 0
                    char var_30_1 = 0
                    int32_t var_18_1 = 0xf
                    int32_t var_1c_1 = 0
                    char var_2c = 0
                    sub_401270(&var_2c, nullptr, 0x72d017)
                    int32_t var_4_2 = 1
                    char eax_11 = sub_68d240(arg1, &var_3c)
                    int32_t* result_2 = result_1
                    
                    if (eax_11 == 0)
                        if (result_2 != 0)
                            sub_68b6f0(result_2)
                            int32_t* result_3 = result_2
                            sub_6b4d5b()
                        
                        if (var_18_1 u>= 0x10)
                            int32_t var_60_4 = var_2c.d
                            sub_6b4d5b()
                        
                        break
                    
                    sub_68bb50(&var_3c, &result_2[2])
                    int32_t var_4_3 = 0xffffffff
                    
                    if (var_18_1 u>= 0x10)
                        int32_t var_60_3 = var_2c.d
                        sub_6b4d5b()
                    
                    int32_t eax_14 = var_44_2 + 1
                    var_44_2 = eax_14
                    
                    if (eax_14 s>= var_40)
                        goto label_68bab8
                
                result = nullptr

fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &result_1)
return result
