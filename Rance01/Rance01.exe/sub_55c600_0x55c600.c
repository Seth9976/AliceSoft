// 函数: sub_55c600
// 地址: 0x55c600
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_721eaf
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_2c = data_78c474 ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_14 = &var_2c
void* result = arg5
void* i = arg3
void* result_2 = result
int32_t var_8_1 = 0

for (; i != arg4; i += 0x28)
    void* result_1 = result
    var_8_1.b = 1
    
    if (result != 0)
        sub_55c6b0(result, i)
        var_8_1.b = 2
        sub_55ba80(result + 0x10, i + 0x10)
        *(result + 0x20) = *(i + 0x20)
        *(result + 0x24) = *(i + 0x24)
    
    result += 0x28
    var_8_1.b = 0
    arg5 = result

fsbase->NtTib.ExceptionList = ExceptionList
return result
