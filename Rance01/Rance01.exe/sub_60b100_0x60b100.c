// 函数: sub_60b100
// 地址: 0x60b100
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_716225
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_28 = data_78c474 ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_14 = &var_28
int32_t* result = arg5
void* i = arg3
int32_t* result_1 = result
int32_t var_8_1 = 0

for (; i != arg4; i += 0x18)
    var_8_1.b = 1
    
    if (result != 0)
        sub_6b05e0(result, i)
        result[4] = *(i + 0x10)
        result[5] = *(i + 0x14)
    
    result = &result[6]
    var_8_1.b = 0
    arg5 = result

fsbase->NtTib.ExceptionList = ExceptionList
return result
