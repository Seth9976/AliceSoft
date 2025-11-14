// 函数: sub_4f3390
// 地址: 0x4f3390
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_71fdb6
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
struct sealengine::CPOLMaterial::VTable** var_4c
int32_t eax_2 = data_78c474 ^ &var_4c
int32_t __saved_edi
int32_t var_60 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
struct sealengine::CPOLMaterial::VTable** result_1 = nullptr
void* var_34 = arg1
int32_t var_1c = 0xf
int32_t var_20 = 0
char var_30 = 0
int32_t var_4 = 0

if (sub_410070(arg2, &var_30) == 0)
    goto label_4f3451

char* eax_6 = *arg2

if (&eax_6[4] u> arg2[1])
    goto label_4f3451

uint32_t esi_7 = ((zx.d(eax_6[3]) << 8 | zx.d(eax_6[2])) << 8 | zx.d(eax_6[1])) << 8 | zx.d(*eax_6)
*arg2 = &eax_6[4]
int32_t var_44 = 0
int32_t var_40_1 = 0
int32_t var_3c_1 = 0
var_4.b = 1
char eax_8 = sub_4f35b0(arg1, arg2, &var_44)
struct sealengine::CPOLMaterial::VTable** result
uint32_t var_48

if (eax_8 != 0)
    if (sub_5546f0(arg2, &var_48) == 0)
    label_4f358c:
        var_4.b = 0
        sub_4f5da0(&var_44)
        sub_401110(&var_30)
        result = nullptr
    else
        struct sealengine::CPOLMaterial::VTable** eax_10 = operator new(0x44)
        var_4c = eax_10
        
        if (var_48 != 0)
            var_4.b = 3
            
            if (eax_10 != 0)
                result_1 = sub_4f7e20(eax_10, &var_30, esi_7 != 0, &var_44)
            
            int32_t esi_8 = 0
            var_4.b = 1
            
            if (var_48 s> 0)
                while (true)
                    struct sealengine::CPOLMaterial::VTable** eax_13 = sub_4f3390(arg2)
                    
                    if (eax_13 == 0)
                        if (result_1 != 0)
                            (*result_1)->vFunc_0(1)
                        
                        break
                    
                    var_4c = eax_13
                    sub_61b5a0(&var_4c, &result_1[0xd])
                    esi_8 += 1
                    
                    if (esi_8 s>= var_48)
                        goto label_4f3509
                
                goto label_4f358c
            
        label_4f3509:
            var_4.b = 0
            sub_4f5da0(&var_44)
            
            if (var_1c u>= 0x10)
                int32_t var_64_9 = var_30.d
                sub_6b4d5b()
            
            result = result_1
        else
            var_4.b = 2
            struct sealengine::CPOLMaterial::VTable** result_2
            
            if (eax_10 == 0)
                result_2 = nullptr
            else
                result_2 = sub_4f7e20(eax_10, &var_30, esi_7 != 0, &var_44)
            
            var_4.b = 0
            sub_4f5da0(&var_44)
            sub_401110(&var_30)
            result = result_2
else
    var_4.b = eax_8
    sub_4f5da0(&var_44)
label_4f3451:
    
    if (var_1c u>= 0x10)
        int32_t var_64_3 = var_30.d
        sub_6b4d5b()
    
    result = nullptr
fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &var_4c)
return result
