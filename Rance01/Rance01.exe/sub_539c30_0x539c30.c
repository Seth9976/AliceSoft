// 函数: sub_539c30
// 地址: 0x539c30
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_3 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_716e6a
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t var_28 = data_78c474 ^ &__saved_edi
struct _EXCEPTION_REGISTRATION_RECORD** result = &ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* ebx = arg2
int32_t* ebp = arg1

while (ebp != ebx)
    int32_t var_4 = 0
    arg2 = &ebp[4]
    var_4.b = 1
    int32_t* eax_3 = ebp[5]
    void var_14
    sub_429bc0(&ebp[4], &var_14, *eax_3, eax_3)
    int32_t var_2c_2 = ebp[5]
    sub_6b4d5b()
    int32_t var_4_1 = 2
    int32_t* eax_4 = ebp[1]
    void var_10
    sub_4365a0(ebp, &var_10, *eax_4, eax_4)
    int32_t var_4_2 = 0xffffffff
    int32_t var_2c_4 = ebp[1]
    result = sub_6b4d5b()
    ebp = &ebp[0xa]
    arg1 = ebp

fsbase->NtTib.ExceptionList = ExceptionList
return result
