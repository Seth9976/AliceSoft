// 函数: sub_536610
// 地址: 0x536610
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_7146a8
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
    
    result = nullptr
    int32_t var_50_1 = 0xffffffff
    int32_t var_38_1 = 0xf
    int32_t var_3c_1 = 0
    char var_4c = 0
    int32_t var_30_1 = 0
    struct _EXCEPTION_REGISTRATION_RECORD** result_2 = nullptr
    int32_t var_28_1 = 0
    int32_t var_24_1 = 0
    int32_t var_1c_1 = 0
    void* var_5c_1 = esi
    var_8_1.b = 2
    
    if (esi != 0)
        *esi = 0xffffffff
        *(esi + 0x18) = 0xf
        *(esi + 0x14) = 0
        *(esi + 4) = 0
        sub_401180(esi + 4, 0xffffffff, &var_4c, 0)
        var_8_1.b = 3
        *(esi + 0x20) = var_30_1
        sub_6b05e0(esi + 0x24, &result_2)
        *(esi + 0x34) = var_1c_1
        result = result_2
    
    var_8_1.b = 0
    
    if (result != 0)
        struct _EXCEPTION_REGISTRATION_RECORD** result_1 = result
        result = sub_6b4d5b()
    
    if (var_38_1 u>= 0x10)
        int32_t var_70_2 = var_4c.d
        result = sub_6b4d5b()
    
    arg4 -= 1
    esi += 0x38

fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &__saved_ebp)
return result
