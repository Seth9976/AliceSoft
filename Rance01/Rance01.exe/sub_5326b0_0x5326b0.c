// 函数: sub_5326b0
// 地址: 0x5326b0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_71abd5
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = data_78c474 ^ &__saved_ebp
int32_t var_60 = eax_2
struct _EXCEPTION_REGISTRATION_RECORD** result = &ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_14 = &var_60
void* esi = arg3
void* var_4c = esi
int32_t var_8_1 = 0

while (true)
    void* var_48_1 = esi
    
    if (arg4 u<= 0)
        break
    
    result = 0xf
    void* ebx_1 = nullptr
    int32_t var_30_1 = 0xf
    int32_t var_34_1 = 0
    char var_44 = 0
    void* var_28 = nullptr
    int32_t var_24_1 = 0
    int32_t var_20_1 = 0
    var_8_1.b = 2
    
    if (esi != 0)
        *(esi + 0x14) = 0xf
        *(esi + 0x10) = 0
        *esi = 0
        sub_401180(esi, 0xffffffff, &var_44, 0)
        var_8_1.b = 3
        result = sub_532da0(esi + 0x1c, &var_28)
        ebx_1 = var_28
    
    var_8_1.b = 0
    
    if (ebx_1 != 0)
        void* var_64_2 = esi
        sub_5327d0(ebx_1, var_24_1)
        void* var_68_3 = ebx_1
        result = sub_6b4d5b()
    
    if (var_30_1 u>= 0x10)
        int32_t var_64_3 = var_44.d
        result = sub_6b4d5b()
    
    arg4 -= 1
    esi += 0x2c

fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &__saved_ebp)
return result
