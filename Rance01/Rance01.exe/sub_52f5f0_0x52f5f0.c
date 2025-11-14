// 函数: sub_52f5f0
// 地址: 0x52f5f0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_71717d
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = data_78c474 ^ &__saved_ebp
int32_t var_7c = eax_2
struct _EXCEPTION_REGISTRATION_RECORD** result = &ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_14 = &var_7c
int32_t* esi = arg3
int32_t* var_6c = esi
int32_t var_8_1 = 0

while (arg4 u> 0)
    int32_t var_64 = 0xffffffff
    int32_t var_4c_1 = 0xf
    int32_t var_50_1 = 0
    char var_60_1 = 0
    int32_t var_44
    __builtin_memset(&var_44, 0xff, 0x14)
    int32_t var_30_1 = 0
    int32_t var_2c_1 = 0xffffffff
    struct _EXCEPTION_REGISTRATION_RECORD** result_1 = nullptr
    int32_t var_24_1 = 0
    int32_t var_20_1 = 0
    var_8_1.b = 2
    
    if (esi != 0)
        sub_52fab0(&var_64, esi)
    
    var_8_1.b = 0
    result = result_1
    
    if (result != 0)
        for (struct _EXCEPTION_REGISTRATION_RECORD** j = result; j != var_24_1; j = &j[0xb])
            if (j[5] u>= 0x10)
                struct _EXCEPTION_REGISTRATION_RECORD* var_80_2 = *j
                sub_6b4d5b()
            
            j[5] = 0xf
            j[4] = 0
            *j = nullptr
        
        struct _EXCEPTION_REGISTRATION_RECORD** result_2 = result_1
        result = sub_6b4d5b()
    
    if (var_4c_1 u>= 0x10)
        int32_t var_80_3 = var_60_1.d
        result = sub_6b4d5b()
    
    arg4 -= 1
    esi = &esi[0x13]

fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &__saved_ebp)
return result
