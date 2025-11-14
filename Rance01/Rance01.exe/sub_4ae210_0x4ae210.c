// 函数: sub_4ae210
// 地址: 0x4ae210
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_7134ad
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_2c = data_78c474 ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_14 = &var_2c
int32_t* result = arg5
void* i = arg3
int32_t* result_2 = result
int32_t var_8_1 = 0

for (; i != arg4; i += 0x48)
    int32_t* result_1 = result
    var_8_1.b = 1
    
    if (result != 0)
        sub_4f7750(result, i)
        var_8_1.b = 2
        result[4] = *(i + 0x10)
        result[5] = *(i + 0x14)
        result[6] = *(i + 0x18)
        result[7] = *(i + 0x1c)
        result[8] = *(i + 0x20)
        result[9] = *(i + 0x24)
        sub_4f7750(&result[0xa], i + 0x28)
        result[0xe] = *(i + 0x38)
        result[0xf] = *(i + 0x3c)
        result[0x10] = *(i + 0x40)
        result[0x11] = *(i + 0x44)
    
    result = &result[0x12]
    var_8_1.b = 0
    arg5 = result

fsbase->NtTib.ExceptionList = ExceptionList
return result
