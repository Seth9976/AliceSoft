// 函数: sub_592c50
// 地址: 0x592c50
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_c = 0xffffffff
int32_t (* var_10)(void* arg1) = sub_71dff8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t var_44
int32_t eax_2 = data_78c474 ^ &var_44
fsbase->NtTib.ExceptionList = &ExceptionList
struct _EXCEPTION_REGISTRATION_RECORD** result

if (arg1[5] == 0)
    result.b = 0
else
    int32_t __saved_edi
    (*(*arg1 + 0x4c))(data_78c474 ^ &__saved_edi)
    (*(*arg1 + 0x18))()
    int32_t* ecx_1 = arg1[7]
    *(arg1 + 0x81) = 0
    arg1[0xd] = 0
    arg1[0xc] = 0
    arg1[0x21] = 0
    
    if (ecx_1 != 0)
        (*(*ecx_1 + 4))()
        arg1[7] = 0
    
    struct IString::common::CStringWrapper::VTable* const var_3c =
        &common::CStringWrapper::`vftable'{for `IString'}
    int32_t var_24_1 = 0xf
    int32_t var_28_1 = 0
    char var_38_1 = 0
    int32_t var_c_1 = 0
    int32_t* ecx_2 = arg1[5]
    var_44 = 0
    int32_t var_40 = 0
    
    if ((*(*ecx_2 + 0x24))(arg2, &var_3c, &var_44, &var_40).b != 0)
        int128_t* eax_11 = var_3c->data()
        
        if (sub_593b60(var_44, var_40, arg1, eax_11).b == 0)
            goto label_592d13
        
        void* ecx_5 = arg1[6]
        char eax_14
        
        if (ecx_5 != 0)
            eax_14 = sub_5d7090(arg2, ecx_5)
        
        if (ecx_5 == 0 || eax_14 == 0)
            int32_t esi_4 = (*(arg1[0x19] + 0x1c))() * (*(arg1[0x19] + 0xc))()
            
            if (esi_4 == 0)
                esi_4 = 0x20
            
            int32_t* ecx_8 = arg1[7]
            arg1[0xa] = 0
            result = divu.dp.d(0:((*(*ecx_8 + 0x24))() * 8), esi_4)
        else
            int32_t eax_16 = sub_5d93c0(arg2, ecx_5)
            void* esi_2 = arg1[6]
            arg1[8] = eax_16
            arg1[0xa] = sub_5d70d0(arg2, esi_2)
            result = sub_5d7110(arg2, esi_2)
        
        arg1[0xb] = result
        arg1[2] = arg2
        var_3c = &common::CStringWrapper::`vftable'{for `IString'}
        
        if (var_24_1 u>= 0x10)
            int32_t var_58_4 = var_38_1.d
            sub_6b4d5b()
        
        result.b = 1
    else
    label_592d13:
        var_3c = &common::CStringWrapper::`vftable'{for `IString'}
        
        if (var_24_1 u>= 0x10)
            int32_t var_58_2 = var_38_1.d
            sub_6b4d5b()
        
        result.b = 0

fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &var_44)
return result
