// 函数: sub_6504c0
// 地址: 0x6504c0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_7288c8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_3c
int32_t eax_2 = data_78c474 ^ &var_3c
int32_t __saved_edi
int32_t eax_4 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_38 = 0
char eax_6
int32_t* ecx
int32_t edx
void* ebp_1

if (arg1 s> 0)
    ebp_1 = data_797ddc
    int32_t* var_54_1 = arg1
    eax_6, ecx, edx = sub_418b70(ebp_1 + 0xa8, arg2, arg1)

if (arg1 s> 0 && eax_6 != 0)
    int32_t* var_54_2 = arg1
    char eax_8 = sub_418b70(ebp_1 + 0xa8, edx, ecx)
    int32_t eax_9
    
    if (eax_8 != 0)
        eax_9.b = sub_6841d0(arg1, arg3) == 1
    
    if (eax_8 != 0 && eax_9.b != 0)
        struct IString::common::CStringWrapper::VTable* const var_34 =
            &common::CStringWrapper::`vftable'{for `IString'}
        int32_t var_1c_1 = 0xf
        int32_t var_20_1 = 0
        char var_30_1 = 0
        int32_t var_4 = 0
        sub_6a16f0(arg1, &var_34, arg3)
        int128_t* edi_1 = var_34->data(eax_4)
        arg2[5] = 0xf
        arg2[4] = 0
        *arg2 = 0
        int128_t* ecx_3 = edi_1
        int128_t* eax_11
        
        do
            eax_11.b = *ecx_3
            ecx_3 += 1
        while (eax_11.b != 0)
        sub_401270(arg2, ecx_3 - (edi_1 + 1), edi_1)
        var_34 = &common::CStringWrapper::`vftable'{for `IString'}
        
        if (var_1c_1 u>= 0x10)
            int32_t var_54_6 = var_30_1.d
            sub_6b4d5b()
    else
        arg2[5] = 0xf
        arg2[4] = 0
        *arg2 = 0
        sub_401270(arg2, nullptr, 0x72d66e)
else
    arg2[5] = 0xf
    arg2[4] = 0
    *arg2 = 0
    sub_401270(arg2, nullptr, 0x72d657)

fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &var_3c)
return arg2
