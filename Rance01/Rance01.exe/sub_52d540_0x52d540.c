// 函数: sub_52d540
// 地址: 0x52d540
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_7147cf
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = data_78c474 ^ &__saved_ebp
int32_t var_74 = eax_2
struct _EXCEPTION_REGISTRATION_RECORD** result = &ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_14 = &var_74
void* esi = arg3
void* var_5c = esi
int32_t var_8_1 = 0

while (true)
    void* var_58_1 = esi
    
    if (arg4 u<= 0)
        break
    
    struct _EXCEPTION_REGISTRATION_RECORD* i = nullptr
    int32_t var_40_1 = 0xf
    int32_t var_44_1 = 0
    char var_54 = 0
    int32_t var_38_1 = 0
    struct _EXCEPTION_REGISTRATION_RECORD* i_1 = nullptr
    int32_t var_30_1 = 0
    int32_t var_2c_1 = 0
    int32_t var_24_1 = 0
    int32_t var_20_1 = 0
    void* var_60_1 = esi
    var_8_1.b = 2
    
    if (esi != 0)
        *(esi + 0x14) = 0xf
        *(esi + 0x10) = 0
        *esi = 0
        sub_401180(esi, 0xffffffff, &var_54, 0)
        var_8_1.b = 3
        *(esi + 0x1c) = var_38_1
        sub_52dfc0(esi + 0x20, &i_1)
        i = i_1
        *(esi + 0x30) = var_24_1
        *(esi + 0x34) = var_20_1
    
    var_8_1.b = 4
    
    if (i != 0)
        for (; i != var_30_1; i = &i[2])
            i->Next->Next(0)
        
        struct _EXCEPTION_REGISTRATION_RECORD* i_2 = i_1
        sub_6b4d5b()
    
    result = &i_1
    i_1 = nullptr
    int32_t var_30_2 = 0
    int32_t var_2c_2 = 0
    var_8_1.b = 0
    
    if (var_40_1 u>= 0x10)
        int32_t var_78_2 = var_54.d
        result = sub_6b4d5b()
    
    arg4 -= 1
    esi += 0x38

fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &__saved_ebp)
return result
