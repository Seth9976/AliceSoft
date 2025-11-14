// 函数: sub_634be0
// 地址: 0x634be0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_713bfd
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = data_78c474 ^ &__saved_ebp
int32_t var_54 = eax_2
struct _EXCEPTION_REGISTRATION_RECORD** result = &ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_14 = &var_54
int32_t* esi = arg3
int32_t* var_40 = esi
int32_t var_8_1 = 0

while (true)
    int32_t* var_3c_1 = esi
    
    if (arg4 u<= 0)
        break
    
    result = 0xf
    int32_t var_24_1 = 0xf
    int32_t var_28_1 = 0
    char var_38 = 0
    int32_t var_1c_1 = 0xffffffff
    var_8_1.b = 2
    
    if (esi != 0)
        esi[5] = 0xf
        esi[4] = 0
        *esi = 0
        result = sub_401180(esi, 0xffffffff, &var_38, 0)
        esi[7] = var_1c_1
    
    var_8_1.b = 0
    
    if (var_24_1 u>= 0x10)
        int32_t var_58_1 = var_38.d
        result = sub_6b4d5b()
    
    arg4 -= 1
    esi = &esi[8]

fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &__saved_ebp)
return result
