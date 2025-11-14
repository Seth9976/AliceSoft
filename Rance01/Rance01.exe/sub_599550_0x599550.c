// 函数: sub_599550
// 地址: 0x599550
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_71427d
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = data_78c474 ^ &__saved_ebp
int32_t var_9c = eax_2
struct _EXCEPTION_REGISTRATION_RECORD** result = &ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_14 = &var_9c
int32_t* esi = arg3
int32_t* var_8c = esi
int32_t var_8_1 = 0

while (true)
    int32_t* var_88_1 = esi
    
    if (arg4 u<= 0)
        break
    
    int32_t var_84 = 0
    int32_t var_80_1 = 0
    int32_t var_7c_1 = 0
    int32_t var_64_1 = 0xf
    int32_t var_68_1 = 0
    char var_78_1 = 0
    int32_t var_5c
    __builtin_memset(&var_5c, 0, 0x40)
    var_8_1.b = 2
    
    if (esi != 0)
        result = sub_599730(esi, &var_84)
    
    var_8_1.b = 0
    
    if (var_64_1 u>= 0x10)
        int32_t var_a0_1 = var_78_1.d
        result = sub_6b4d5b()
    
    arg4 -= 1
    esi = &esi[0x1a]

fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &__saved_ebp)
return result
