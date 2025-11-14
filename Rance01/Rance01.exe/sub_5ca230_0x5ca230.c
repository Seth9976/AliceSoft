// 函数: sub_5ca230
// 地址: 0x5ca230
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_7166c0
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_2c = data_78c474 ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_14 = &var_2c
char* result = arg5
char* i = arg3
char* result_2 = result
int32_t var_8_1 = 0

for (; i != arg4; i = &i[0x30])
    char* result_1 = result
    var_8_1.b = 1
    
    if (result != 0)
        *result = *i
        *(result + 0x18) = 0xf
        *(result + 0x14) = 0
        result[4] = 0
        sub_401180(&result[4], 0xffffffff, &i[4], 0)
        var_8_1.b = 2
        sub_6b05e0(&result[0x20], &i[0x20])
    
    result = &result[0x30]
    var_8_1.b = 0
    arg5 = result

fsbase->NtTib.ExceptionList = ExceptionList
return result
