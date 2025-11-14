// 函数: sub_6141f0
// 地址: 0x6141f0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_7124dd
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_3c = data_78c474 ^ &__saved_ebp
struct _EXCEPTION_REGISTRATION_RECORD** result = &ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_14 = &var_3c
int32_t i = arg3
int32_t* esi = arg4
int32_t* var_18 = esi
int32_t var_8_1 = 0

while (i u> 0)
    int32_t var_28 = 0
    int32_t var_24_1 = 0
    int32_t var_20_1 = 0
    var_8_1.b = 2
    
    if (esi != 0)
        result = sub_614380(esi, &var_28)
    
    var_8_1.b = 0
    i -= 1
    esi = &esi[4]
    var_28 = 0
    int32_t var_24_2 = 0
    int32_t var_20_2 = 0
    arg4 = esi

fsbase->NtTib.ExceptionList = ExceptionList
return result
