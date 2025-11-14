// 函数: sub_5c91b0
// 地址: 0x5c91b0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = __ehhandler$?_Init@?$_Mpunct@G@std@@IAEXABV_Locinfo@2@_N@Z
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = data_78c474 ^ &__saved_ebp
int32_t var_64 = eax_2
struct _EXCEPTION_REGISTRATION_RECORD** result = &ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_14 = &var_64
void* esi = arg3
void* var_50 = esi
int32_t var_8_1 = 0

while (true)
    void* var_4c_1 = esi
    
    if (arg4 u<= 0)
        break
    
    result = nullptr
    char var_48_1 = 0
    int32_t var_30_1 = 0xf
    int32_t var_34_1 = 0
    char var_44 = 0
    struct _EXCEPTION_REGISTRATION_RECORD** result_2 = nullptr
    int32_t var_24_1 = 0
    int32_t var_20_1 = 0
    void* var_54_1 = esi
    var_8_1.b = 2
    
    if (esi != 0)
        *esi = 0
        *(esi + 0x18) = 0xf
        *(esi + 0x14) = 0
        *(esi + 4) = 0
        sub_401180(esi + 4, 0xffffffff, &var_44, 0)
        var_8_1.b = 3
        sub_6b05e0(esi + 0x20, &result_2)
        result = result_2
    
    var_8_1.b = 0
    
    if (result != 0)
        struct _EXCEPTION_REGISTRATION_RECORD** result_1 = result
        result = sub_6b4d5b()
    
    if (var_30_1 u>= 0x10)
        int32_t var_68_2 = var_44.d
        result = sub_6b4d5b()
    
    arg4 -= 1
    esi += 0x30

fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &__saved_ebp)
return result
