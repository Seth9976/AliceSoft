// 函数: sub_4fefe0
// 地址: 0x4fefe0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_717585
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_28 = data_78c474 ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_14 = &var_28
char* result = arg5
int32_t* i = arg3
char* result_1 = result
int32_t var_8_1 = 0

for (; i != arg4; i = &i[0x10])
    var_8_1.b = 1
    
    if (result != 0)
        *(result + 0x14) = 0xf
        *(result + 0x10) = 0
        *result = 0
        sub_401180(result, 0xffffffff, i, 0)
        *(result + 0x1c) = i[7]
        *(result + 0x20) = &sealengine::CSQT::`vftable'
        *(result + 0x24) = i[9]
        *(result + 0x28) = i[0xa]
        *(result + 0x2c) = i[0xb]
        *(result + 0x30) = i[0xc]
        *(result + 0x34) = i[0xd]
        *(result + 0x38) = i[0xe]
        *(result + 0x3c) = i[0xf]
    
    result = &result[0x40]
    var_8_1.b = 0
    arg5 = result

fsbase->NtTib.ExceptionList = ExceptionList
return result
