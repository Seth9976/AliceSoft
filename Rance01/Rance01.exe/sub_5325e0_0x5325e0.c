// 函数: sub_5325e0
// 地址: 0x5325e0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_71474d
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = data_78c474 ^ &__saved_ebp
int32_t var_54 = eax_2
struct _EXCEPTION_REGISTRATION_RECORD** result = &ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_14 = &var_54
void* esi = arg3
void* var_40 = esi
int32_t var_8_1 = 0

while (true)
    void* var_3c_1 = esi
    
    if (arg4 u<= 0)
        break
    
    int32_t var_20_1 = 0xf
    int32_t var_24_1 = 0
    char var_34 = 0
    var_8_1.b = 2
    
    if (esi != 0)
        int32_t var_38
        *esi = var_38
        *(esi + 0x18) = 0xf
        *(esi + 0x14) = 0
        *(esi + 4) = 0
        result = sub_401180(esi + 4, 0xffffffff, &var_34, 0)
    
    var_8_1.b = 0
    
    if (var_20_1 u>= 0x10)
        int32_t var_58_1 = var_34.d
        result = sub_6b4d5b()
    
    arg4 -= 1
    esi += 0x20

fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &__saved_ebp)
return result
