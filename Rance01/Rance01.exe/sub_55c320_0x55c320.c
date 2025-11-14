// 函数: sub_55c320
// 地址: 0x55c320
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_71edb3
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_60 = data_78c474 ^ &__saved_ebp
struct _EXCEPTION_REGISTRATION_RECORD** result = &ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_14 = &var_60
void* ebx = arg1
void* var_1c = ebx
int32_t var_8_1 = 0

while (arg2 u> 0)
    void var_50
    void* eax_3 = sub_55bb50(&var_50)
    void* var_20_1 = ebx
    var_8_1.b = 2
    
    if (ebx != 0)
        sub_55c6b0(ebx, eax_3)
        var_8_1.b = 3
        sub_55ba80(ebx + 0x10, eax_3 + 0x10)
        *(ebx + 0x20) = *(eax_3 + 0x20)
        *(ebx + 0x24) = *(eax_3 + 0x24)
    
    void var_40
    void* var_20_2 = &var_40
    var_8_1.b = 5
    int32_t* var_3c
    void var_24
    sub_429bc0(&var_40, &var_24, *var_3c, var_3c)
    int32_t* var_64_5 = var_3c
    sub_6b4d5b()
    var_8_1.b = 6
    int32_t* var_4c
    void var_28
    sub_4365a0(&var_50, &var_28, *var_4c, var_4c)
    var_8_1.b = 0
    int32_t* var_64_7 = var_4c
    result = sub_6b4d5b()
    arg2 -= 1
    ebx += 0x28
    arg1 = ebx

fsbase->NtTib.ExceptionList = ExceptionList
return result
