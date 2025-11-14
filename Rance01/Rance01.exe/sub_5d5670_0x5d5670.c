// 函数: sub_5d5670
// 地址: 0x5d5670
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_7140a0
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
struct IString::common::CStringWrapper::VTable* const var_50
int32_t eax_2 = data_78c474 ^ &var_50
int32_t __saved_edi
int32_t var_64 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t result

if (*arg1 == 0)
    result = 0xffffffff
else
    struct IString::common::CStringWrapper::VTable* const var_30 =
        &common::CStringWrapper::`vftable'{for `IString'}
    int32_t var_18_1 = 0xf
    int32_t var_1c_1 = 0
    char var_2c = 0
    sub_401180(&var_2c, 0xffffffff, arg3, 0)
    int32_t var_4 = 0
    var_50 = &common::CStringWrapper::`vftable'{for `IString'}
    int32_t var_38_1 = 0xf
    int32_t var_3c_1 = 0
    char var_4c = 0
    sub_401180(&var_4c, 0xffffffff, arg2, 0)
    var_4.b = 1
    int32_t eax_8 = (*(**arg1 + 0x1c))(&var_30)
    
    if ((*(**arg1 + 0x54))(eax_8) != 0)
        int32_t result_1 = (*(**arg1 + 0x98))(eax_8, arg4, &var_50)
        var_50 = &common::CStringWrapper::`vftable'{for `IString'}
        
        if (var_38_1 u>= 0x10)
            int32_t var_68_6 = var_4c.d
            sub_6b4d5b()
        
        int32_t var_38_3 = 0xf
        int32_t var_3c_3 = 0
        var_4c = 0
        var_30 = &common::CStringWrapper::`vftable'{for `IString'}
        
        if (var_18_1 u>= 0x10)
            int32_t var_68_7 = var_2c.d
            sub_6b4d5b()
        
        result = result_1
    else
        var_50 = &common::CStringWrapper::`vftable'{for `IString'}
        
        if (var_38_1 u>= 0x10)
            int32_t var_68_3 = var_4c.d
            sub_6b4d5b()
        
        int32_t var_38_2 = 0xf
        int32_t var_3c_2 = 0
        var_4c = 0
        var_30 = &common::CStringWrapper::`vftable'{for `IString'}
        
        if (var_18_1 u>= 0x10)
            int32_t var_68_4 = var_2c.d
            sub_6b4d5b()
        
        result = 0xffffffff

fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &var_50)
return result
