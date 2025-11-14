// 函数: sub_55b8d0
// 地址: 0x55b8d0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_71edea
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

for (; i != arg4; i += 0x44)
    void* result_1 = result
    var_8_1.b = 1
    
    if (result != 0)
        sub_55ba80(result, i)
        var_8_1.b = 2
        *(result + 0x24) = 0xf
        *(result + 0x20) = 0
        *(result + 0x10) = 0
        sub_401180(result + 0x10, 0xffffffff, i + 0x10, 0)
        var_8_1.b = 3
        *(result + 0x2c) = *(i + 0x2c)
        *(result + 0x30) = *(i + 0x30)
        sub_52fb60(result + 0x34, i + 0x34)
    
    result += 0x44
    var_8_1.b = 0
    arg5 = result

fsbase->NtTib.ExceptionList = ExceptionList
return result
