// 函数: sub_5d2680
// 地址: 0x5d2680
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_c = 0xffffffff
int32_t (* var_10)(void* arg1) = sub_71dff8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t var_44
int32_t eax_2 = data_78c474 ^ &var_44
int32_t __saved_edi
int32_t eax_4 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
struct _EXCEPTION_REGISTRATION_RECORD** result

if (arg1[8] == 0)
    result.b = 0
else
    sub_5d2d80(arg1)
    struct IString::common::CStringWrapper::VTable* const var_3c =
        &common::CStringWrapper::`vftable'{for `IString'}
    int32_t var_24_1 = 0xf
    int32_t var_28_1 = 0
    char var_38_1 = 0
    int32_t var_c_1 = 0
    int32_t* ecx = arg1[8]
    var_44 = 0
    int32_t var_40 = 0
    
    if ((*(*ecx + 0x24))(arg2, &var_3c, &var_44, &var_40).b != 0)
        int128_t* eax_8 = var_3c->data(eax_4)
        
        if (sub_5d37d0(var_44, var_40, arg1, eax_8).b == 0)
            goto label_5d2712
        
        void* esi_2 = arg1[9]
        char eax_11
        
        if (esi_2 != 0)
            eax_11 = sub_5d7090(arg2, esi_2)
        
        if (esi_2 == 0 || eax_11 == 0)
            int32_t esi_5 = (*(arg1[0x1a] + 0x1c))() * (*(arg1[0x1a] + 0xc))()
            
            if (esi_5 == 0)
                esi_5 = 0x20
            
            int32_t* ecx_5 = arg1[0xa]
            arg1[0xd] = 0
            result = divu.dp.d(0:((*(*ecx_5 + 0x24))() * 8), esi_5)
        else
            int32_t eax_13 = sub_5d93c0(arg2, esi_2)
            void* esi_3 = arg1[9]
            arg1[0xb] = eax_13
            arg1[0xd] = sub_5d70d0(arg2, esi_3)
            result = sub_5d7110(arg2, esi_3)
        
        arg1[0xe] = result
        arg1[2] = arg2
        var_3c = &common::CStringWrapper::`vftable'{for `IString'}
        
        if (var_24_1 u>= 0x10)
            int32_t var_58_4 = var_38_1.d
            sub_6b4d5b()
        
        result.b = 1
    else
    label_5d2712:
        var_3c = &common::CStringWrapper::`vftable'{for `IString'}
        
        if (var_24_1 u>= 0x10)
            int32_t var_58_2 = var_38_1.d
            sub_6b4d5b()
        
        result.b = 0

fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &var_44)
return result
