// 函数: sub_562ba0
// 地址: 0x562ba0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_71a2d0
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_58
int32_t eax_2 = data_78c474 ^ &var_58
int32_t __saved_edi
int32_t eax_4 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_54 = 0
struct IString::common::CStringWrapper::VTable* const var_30 =
    &common::CStringWrapper::`vftable'{for `IString'}
int32_t var_18 = 0xf
int32_t var_1c = 0
char var_2c = 0
sub_401180(&var_2c, 0xffffffff, arg2, 0)
int32_t var_4 = 0
int32_t eax_8 = (*(*data_797dd8 + 0x1c))(&var_30)

if ((*(*data_797dd8 + 0x54))(eax_8) != 0)
    struct IString::common::CStringWrapper::VTable* const var_50 =
        &common::CStringWrapper::`vftable'{for `IString'}
    int32_t var_38_1 = 0xf
    int32_t var_3c_1 = 0
    char var_4c_1 = 0
    var_4.b = 1
    
    if ((*(*data_797dd8 + 0x54))(eax_8) == 0)
        arg1[5] = 0xf
        arg1[4] = 0
        *arg1 = 0
        sub_401180(arg1, 0xffffffff, arg3, 0)
        var_50 = &common::CStringWrapper::`vftable'{for `IString'}
        
        if (var_38_1 u>= 0x10)
            int32_t var_70_8 = var_4c_1.d
            sub_6b4d5b()
        
        int32_t var_38_3 = 0xf
        int32_t var_3c_3 = 0
        char var_4c_3 = 0
        var_30 = &common::CStringWrapper::`vftable'{for `IString'}
        
        if (var_18 u>= 0x10)
            int32_t var_70_9 = var_2c.d
            sub_6b4d5b()
    else
        (*(*data_797dd8 + 0x74))(eax_8, &var_50)
        int128_t* edi_1 = var_50->data(eax_4)
        int128_t* ecx_7 = edi_1
        arg1[5] = 0xf
        arg1[4] = 0
        *arg1 = 0
        void* edx_5 = ecx_7 + 1
        int128_t* eax_14
        
        do
            eax_14.b = *ecx_7
            ecx_7 += 1
        while (eax_14.b != 0)
        sub_401270(arg1, ecx_7 - edx_5, edi_1)
        var_50 = &common::CStringWrapper::`vftable'{for `IString'}
        
        if (var_38_1 u>= 0x10)
            int32_t var_70_6 = var_4c_1.d
            sub_6b4d5b()
        
        int32_t var_38_2 = 0xf
        int32_t var_3c_2 = 0
        char var_4c_2 = 0
        var_30 = &common::CStringWrapper::`vftable'{for `IString'}
        
        if (var_18 u>= 0x10)
            int32_t var_70_7 = var_2c.d
            sub_6b4d5b()
else
    arg1[5] = 0xf
    arg1[4] = 0
    *arg1 = 0
    sub_401180(arg1, 0xffffffff, arg3, 0)
    var_30 = &common::CStringWrapper::`vftable'{for `IString'}
    
    if (var_18 u>= 0x10)
        int32_t var_70_2 = var_2c.d
        sub_6b4d5b()

fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &var_58)
return arg1
