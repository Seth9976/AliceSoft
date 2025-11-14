// 函数: sub_56d030
// 地址: 0x56d030
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_7145ed
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = data_78c474 ^ &__saved_ebp
int32_t var_5c = eax_2
struct _EXCEPTION_REGISTRATION_RECORD** result = &ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_14 = &var_5c
void* esi = arg3
void* var_48 = esi
int32_t var_8_1 = 0

while (true)
    void* var_44_1 = esi
    
    if (arg4 u<= 0)
        break
    
    result = 0xf
    int32_t var_40_1 = 0x64
    int32_t var_3c_1 = 0x64
    char var_38_1 = 0
    int32_t var_20_1 = 0xf
    int32_t var_24_1 = 0
    char var_34 = 0
    var_8_1.b = 2
    
    if (esi != 0)
        *esi = 0x64
        *(esi + 4) = 0x64
        *(esi + 8) = 0
        *(esi + 0x20) = 0xf
        *(esi + 0x1c) = 0
        *(esi + 0xc) = 0
        result = sub_401180(esi + 0xc, 0xffffffff, &var_34, 0)
    
    var_8_1.b = 0
    
    if (var_20_1 u>= 0x10)
        int32_t var_60_1 = var_34.d
        result = sub_6b4d5b()
    
    arg4 -= 1
    esi += 0x28

fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &__saved_ebp)
return result
