// 函数: sub_663460
// 地址: 0x663460
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_715cd5
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_28 = data_78c474 ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_14 = &var_28
char* result = arg5
char* i = arg3
char* result_1 = result
int32_t var_8_1 = 0

for (; i != arg4; i = &i[0x58])
    var_8_1.b = 1
    
    if (result != 0)
        sub_663290(result, i)
    
    result = &result[0x58]
    var_8_1.b = 0
    arg5 = result

fsbase->NtTib.ExceptionList = ExceptionList
return result
