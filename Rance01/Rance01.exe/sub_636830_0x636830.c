// 函数: sub_636830
// 地址: 0x636830
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_7123dd
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_44 = data_78c474 ^ &__saved_ebp
struct _EXCEPTION_REGISTRATION_RECORD** result = &ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_14 = &var_44
int32_t i = arg3
int32_t* esi = arg4
int32_t* var_18 = esi
int32_t var_8_1 = 0

while (i u> 0)
    int32_t var_30
    __builtin_memset(&var_30, 0, 0x14)
    var_8_1.b = 2
    
    if (esi != 0)
        *esi = 0
        esi[1] = 0
        int32_t var_28
        result = sub_6b05e0(&esi[2], &var_28)
    
    i -= 1
    esi = &esi[6]
    var_8_1.b = 0
    arg4 = esi

fsbase->NtTib.ExceptionList = ExceptionList
return result
