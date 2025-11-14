// 函数: sub_59cc20
// 地址: 0x59cc20
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_719de5
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_4c = data_78c474 ^ &__saved_ebp
struct _EXCEPTION_REGISTRATION_RECORD** result = &ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_14 = &var_4c
int32_t i = arg3
int32_t* esi = arg4
int32_t* var_18 = esi
int32_t var_8_1 = 0

while (i u> 0)
    int32_t var_3c = 0
    int32_t var_38_1 = 0
    int32_t var_34_1 = 0
    int32_t var_2c = 0
    int32_t var_28_1 = 0
    int32_t var_24_1 = 0
    int32_t* var_1c_1 = esi
    var_8_1.b = 2
    
    if (esi != 0)
        sub_6b05e0(esi, &var_3c)
        var_8_1.b = 3
        result = sub_4ea490(&esi[4], &var_2c)
    
    i -= 1
    esi = &esi[8]
    var_8_1.b = 0
    arg4 = esi

fsbase->NtTib.ExceptionList = ExceptionList
return result
