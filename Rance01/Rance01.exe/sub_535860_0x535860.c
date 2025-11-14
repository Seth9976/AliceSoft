// 函数: sub_535860
// 地址: 0x535860
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_716fb5
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_28 = data_78c474 ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_14 = &var_28
int32_t* result = arg3
int32_t var_8_1 = 0
int32_t* eax_3 = arg1
int32_t* result_1 = result

while (eax_3 != arg2)
    var_8_1.b = 1
    
    if (result != 0)
        *result = *eax_3
        result[1] = eax_3[1]
        sub_6b05e0(&result[2], &eax_3[2])
        eax_3 = arg1
    
    result = &result[6]
    eax_3 = &eax_3[6]
    var_8_1.b = 0
    arg3 = result
    arg1 = eax_3

fsbase->NtTib.ExceptionList = ExceptionList
return result
