// 函数: sub_504620
// 地址: 0x504620
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_714a05
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_28 = data_78c474 ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_14 = &var_28
int32_t* result = arg3
int32_t var_8_1 = 0
int32_t* ecx = arg1
int32_t* result_1 = result

while (ecx != arg2)
    var_8_1.b = 1
    
    if (result != 0)
        sub_504710(ecx, result)
        ecx = arg1
    
    result = &result[0x11]
    ecx = &ecx[0x11]
    var_8_1.b = 0
    arg3 = result
    arg1 = ecx

fsbase->NtTib.ExceptionList = ExceptionList
return result
