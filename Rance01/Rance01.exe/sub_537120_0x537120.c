// 函数: sub_537120
// 地址: 0x537120
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_716ed0
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_2c = data_78c474 ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_14 = &var_2c
int32_t* result = arg5
int32_t* i = arg3
int32_t* result_2 = result
int32_t var_8_1 = 0

for (; i != arg4; i = &i[0xe])
    int32_t* result_1 = result
    var_8_1.b = 1
    
    if (result != 0)
        *result = *i
        result[6] = 0xf
        result[5] = 0
        result[1].b = 0
        sub_401180(&result[1], 0xffffffff, &i[1], 0)
        var_8_1.b = 2
        result[8] = i[8]
        sub_6b05e0(&result[9], &i[9])
        result[0xd] = i[0xd]
    
    result = &result[0xe]
    var_8_1.b = 0
    arg5 = result

fsbase->NtTib.ExceptionList = ExceptionList
return result
