// 函数: sub_60a5b0
// 地址: 0x60a5b0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_713e7d
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
    int32_t var_30 = 0
    int32_t var_2c_1 = 0
    int32_t var_28_1 = 0
    int32_t var_20_1 = 0xffffffff
    int32_t var_1c_1 = 0
    var_8_1.b = 2
    
    if (esi != 0)
        result = sub_6b05e0(esi, &var_30)
        esi[4] = 0xffffffff
        esi[5] = 0
    
    i -= 1
    esi = &esi[6]
    var_8_1.b = 0
    arg4 = esi

fsbase->NtTib.ExceptionList = ExceptionList
return result
