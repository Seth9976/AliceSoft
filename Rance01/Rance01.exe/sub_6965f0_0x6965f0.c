// 函数: sub_6965f0
// 地址: 0x6965f0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_725fb8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
char var_2c
int32_t eax_2 = data_78c474 ^ &var_2c
int32_t __saved_edi
int32_t var_38 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
char* result = *arg2

if (&result[4] u> arg2[1])
    result.b = 0
else
    *(arg1 + 0x10) =
        ((zx.d(result[3]) << 8 | zx.d(result[2])) << 8 | zx.d(result[1])) << 8 | zx.d(*result)
    *arg2 += 4
    result = *arg2
    
    if (&result[4] u> arg2[1])
        result.b = 0
    else
        *(arg1 + 0x14) =
            ((zx.d(result[3]) << 8 | zx.d(result[2])) << 8 | zx.d(result[1])) << 8 | zx.d(*result)
        *arg2 += 4
        
        if (sub_5546f0(arg2, arg1 + 0x18).b == 0)
            result.b = 0
        else
            result = *arg2
            
            if (&result[1] u> arg2[1])
                result.b = 0
            else
                result.b = *result == 1
                *(arg1 + 0x1c) = result.b
                *arg2 += 1
                
                if (sub_5546f0(arg2, arg1 + 0x20).b == 0)
                    result.b = 0
                else if (sub_5546f0(arg2, arg1 + 0x24).b == 0)
                    result.b = 0
                else if (sub_5546f0(arg2, arg1 + 0x28).b == 0)
                    result.b = 0
                else if (sub_5546f0(arg2, arg1 + 0x2c).b == 0)
                    result.b = 0
                else if (sub_5546f0(arg2, arg1 + 0x30).b == 0)
                    result.b = 0
                else if (sub_5546f0(arg2, arg1 + 0x34).b == 0)
                    result.b = 0
                else if (sub_5546f0(arg2, arg1 + 0x38).b == 0)
                    result.b = 0
                else if (sub_5546f0(arg2, arg1 + 0x3c).b == 0)
                    result.b = 0
                else if (sub_5546f0(arg2, arg1 + 0x40).b == 0)
                    result.b = 0
                else if (sub_40ff40(arg1 + 0x44, arg2, arg1 + 0x44).b == 0)
                    result.b = 0
                else if (sub_5546f0(arg2, arg1 + 0x48).b == 0)
                    result.b = 0
                else
                    int32_t var_18_1 = 0xf
                    int32_t var_1c_1 = 0
                    var_2c = 0
                    int32_t var_4 = 0
                    
                    if (sub_410070(arg2, &var_2c) != 0)
                        sub_696460(arg1, &var_2c)
                        *(arg1 + 0xd8) = 1
                        sub_401110(&var_2c)
                        result.b = 1
                    else
                        sub_401110(&var_2c)
                        result.b = 0

fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &var_2c)
return result
