// 函数: sub_5ee800
// 地址: 0x5ee800
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_7163ed
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = data_78c474 ^ &__saved_ebp
int32_t var_9c = eax_2
struct _EXCEPTION_REGISTRATION_RECORD** result = &ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_14 = &var_9c
int32_t* edi = arg3
int32_t* var_8c = edi
int32_t var_8_1 = 0

while (true)
    int32_t* var_88_1 = edi
    
    if (arg4 u<= 0)
        break
    
    int32_t var_84
    __builtin_memset(&var_84, 0, 0x11)
    int32_t var_60_1 = 0xf
    int32_t var_64_1 = 0
    int32_t var_44_1 = 0xf
    int32_t var_48_1 = 0
    char var_58_1 = 0
    char var_3c_1 = 0
    int32_t var_38_1 = 0
    int32_t var_34_1 = 0
    int32_t var_30_1 = 0
    int32_t var_28_1 = 0
    int32_t var_24_1 = 0
    int32_t var_20_1 = 0
    var_8_1.b = 2
    
    if (edi != 0)
        sub_5ee970(&var_84, edi)
    
    var_8_1.b = 0
    result = sub_4329b0(&var_84)
    arg4 -= 1
    edi = &edi[0x1b]

fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &__saved_ebp)
return result
