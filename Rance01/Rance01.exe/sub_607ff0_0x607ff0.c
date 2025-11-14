// 函数: sub_607ff0
// 地址: 0x607ff0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_2 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_71da68
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
uint32_t var_60
int32_t eax_2 = data_78c474 ^ &var_60
int32_t __saved_esi
int32_t var_70 = data_78c474 ^ &__saved_esi
fsbase->NtTib.ExceptionList = &ExceptionList
char* result = *arg1

if (&result[4] u> arg1[1])
    result.b = 0
else
    *arg2 = ((zx.d(result[3]) << 8 | zx.d(result[2])) << 8 | zx.d(result[1])) << 8 | zx.d(*result)
    *arg1 += 4
    
    if (sub_410070(arg1, &arg2[1]).b == 0)
        result.b = 0
    else if (sub_5546f0(arg1, &arg2[8]).b == 0)
        result.b = 0
    else if (sub_5546f0(arg1, &arg2[9]).b == 0)
        result.b = 0
    else if (sub_5546f0(arg1, &arg2[0xa]).b == 0)
        result.b = 0
    else if (sub_410070(arg1, &arg2[0xb]).b == 0)
        result.b = 0
    else if (sub_5546f0(arg1, &var_60).b == 0)
        result.b = 0
    else
        int32_t ebx_1 = 0
        
        if (var_60 s> 0)
            while (true)
                uint32_t var_58 = 0
                uint32_t var_54 = 0
                int32_t var_3c_1 = 0xf
                int32_t var_40_1 = 0
                char var_50 = 0
                int32_t var_20_1 = 0xf
                int32_t var_24_1 = 0
                char var_34 = 0
                int32_t var_4 = 0
                void var_5c
                
                if (sub_5546f0(arg1, &var_58) != 0 && sub_5546f0(arg1, &var_54) != 0
                        && sub_410070(arg1, &var_50) != 0 && sub_410070(arg1, &var_34) != 0)
                    sub_609680(&var_5c, &arg2[0x13])
                    int32_t var_4_1 = 0xffffffff
                    sub_5046c0(&var_5c)
                    ebx_1 += 1
                    
                    if (ebx_1 s>= var_60)
                        goto label_6080d5
                    
                    continue
                
                sub_5046c0(&var_5c)
                break
            
            result.b = 0
        else
        label_6080d5:
            
            if (sub_410070(arg1, &arg2[0x17]).b == 0)
                result.b = 0
            else
                result.b = sub_5546f0(arg1, &arg2[0x1e]).b != 0

fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &var_60)
return result
