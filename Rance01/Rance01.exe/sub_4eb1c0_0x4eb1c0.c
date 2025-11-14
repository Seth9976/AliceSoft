// 函数: sub_4eb1c0
// 地址: 0x4eb1c0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_717855
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_28 = data_78c474 ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_14 = &var_28
char* result = arg3
int32_t var_8_1 = 0
int32_t* eax_3 = arg1
char* result_1 = result

while (eax_3 != arg2)
    var_8_1.b = 1
    
    if (result != 0)
        *(result + 0x14) = 0xf
        *(result + 0x10) = 0
        *result = 0
        sub_401180(result, 0xffffffff, eax_3, 0)
        eax_3 = arg1
    
    result = &result[0x1c]
    eax_3 = &eax_3[7]
    var_8_1.b = 0
    arg3 = result
    arg1 = eax_3

fsbase->NtTib.ExceptionList = ExceptionList
return result
