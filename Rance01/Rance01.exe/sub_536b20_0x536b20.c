// 函数: sub_536b20
// 地址: 0x536b20
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_716f25
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
    
    result = 0xf
    void* ebx_1 = nullptr
    int32_t var_34_1 = 0xf
    int32_t var_38_1 = 0
    char var_48 = 0
    void* var_2c = nullptr
    int32_t var_28_1 = 0
    int32_t var_24_1 = 0
    int32_t var_1c_1 = 0
    var_8_1.b = 2
    
    if (esi != 0)
        *(esi + 0x14) = 0xf
        *(esi + 0x10) = 0
        *esi = 0
        sub_401180(esi, 0xffffffff, &var_48, 0)
        var_8_1.b = 3
        result = sub_536fe0(esi + 0x1c, &var_2c)
        ebx_1 = var_2c
        *(esi + 0x2c) = var_1c_1
    
    var_8_1.b = 0
    
    if (ebx_1 != 0)
        void* var_68_2 = esi
        sub_536100(ebx_1, var_28_1)
        void* var_6c_3 = ebx_1
        result = sub_6b4d5b()
    
    if (var_34_1 u>= 0x10)
        int32_t var_68_3 = var_48.d
        result = sub_6b4d5b()
    
    arg4 -= 1
    esi += 0x30

fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &__saved_ebp)
return result
