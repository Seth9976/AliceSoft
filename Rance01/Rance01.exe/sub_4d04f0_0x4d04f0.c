// 函数: sub_4d04f0
// 地址: 0x4d04f0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_717bcd
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_2c = data_78c474 ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_14 = &var_2c
char* result = arg5
int32_t* i = arg3
char* result_2 = result
int32_t var_8_1 = 0

for (; i != arg4; i = &i[0xd])
    char* result_1 = result
    var_8_1.b = 1
    
    if (result != 0)
        *(result + 0x14) = 0xf
        *(result + 0x10) = 0
        *result = 0
        sub_401180(result, 0xffffffff, i, 0)
        var_8_1.b = 2
        *(result + 0x1c) = i[7]
        *(result + 0x20) = i[8]
        sub_4d05c0(&result[0x24], &i[9])
    
    result = &result[0x34]
    var_8_1.b = 0
    arg5 = result

fsbase->NtTib.ExceptionList = ExceptionList
return result
