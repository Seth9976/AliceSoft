// 函数: sub_663570
// 地址: 0x663570
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_713945
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_28 = data_78c474 ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_14 = &var_28
char* result = arg3
int32_t var_8_1 = 0
char* eax_3 = arg1
char* result_1 = result

while (eax_3 != arg2)
    var_8_1.b = 1
    
    if (result != 0)
        sub_663290(result, eax_3)
        eax_3 = arg1
    
    result = &result[0x58]
    eax_3 = &eax_3[0x58]
    var_8_1.b = 0
    arg3 = result
    arg1 = eax_3

fsbase->NtTib.ExceptionList = ExceptionList
return result
