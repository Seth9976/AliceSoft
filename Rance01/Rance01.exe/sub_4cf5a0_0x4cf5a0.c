// 函数: sub_4cf5a0
// 地址: 0x4cf5a0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_71b205
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_28 = data_78c474 ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_14 = &var_28
void* result = arg5
void* i = arg3
void* result_1 = result
int32_t var_8_1 = 0

for (; i != arg4; i += 0x114)
    var_8_1.b = 1
    
    if (result != 0)
        int32_t (__fastcall* var_2c_1)(void* arg1) = sub_51c700
        sub_6b53ec(result, i, 0x58, 3, sub_4bf2b0)
        *(result + 0x108) = *(i + 0x108)
        *(result + 0x10c) = *(i + 0x10c)
        *(result + 0x110) = *(i + 0x110)
    
    result += 0x114
    var_8_1.b = 0
    arg5 = result

fsbase->NtTib.ExceptionList = ExceptionList
return result
