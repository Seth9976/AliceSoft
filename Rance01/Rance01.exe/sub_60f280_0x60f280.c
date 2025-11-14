// 函数: sub_60f280
// 地址: 0x60f280
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_713de5
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = data_78c474 ^ &__saved_ebp
int32_t var_6c = eax_2
struct _EXCEPTION_REGISTRATION_RECORD** result = &ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_14 = &var_6c
void* esi = arg3
void* var_58 = esi
int32_t var_8_1 = 0

while (true)
    void* var_54_1 = esi
    
    if (arg4 u<= 0)
        break
    
    int32_t var_3c_1 = 0xf
    int32_t var_40_1 = 0
    char var_50 = 0
    int32_t var_20_1 = 0xf
    int32_t var_24_1 = 0
    char var_34 = 0
    void* var_5c_1 = esi
    var_8_1.b = 2
    
    if (esi != 0)
        *(esi + 0x14) = 0xf
        *(esi + 0x10) = 0
        *esi = 0
        sub_401180(esi, 0xffffffff, &var_50, 0)
        var_8_1.b = 3
        *(esi + 0x30) = 0xf
        *(esi + 0x2c) = 0
        *(esi + 0x1c) = 0
        result = sub_401180(esi + 0x1c, 0xffffffff, &var_34, 0)
    
    var_8_1.b = 0
    
    if (var_20_1 u>= 0x10)
        int32_t var_70_1 = var_34.d
        result = sub_6b4d5b()
    
    if (var_3c_1 u>= 0x10)
        int32_t var_70_2 = var_50.d
        result = sub_6b4d5b()
    
    arg4 -= 1
    esi += 0x38

fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &__saved_ebp)
return result
