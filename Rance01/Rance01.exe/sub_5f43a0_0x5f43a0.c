// 函数: sub_5f43a0
// 地址: 0x5f43a0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_4 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_71dd41
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_cc
int32_t eax_2 = data_78c474 ^ &var_cc
int32_t __saved_edi
int32_t var_e0 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_4 = 0
void var_84
int32_t edx
sub_5ee3e0(sub_5edc70(arg5 + arg4, edx, &var_84, arg3, arg4, arg6, arg1), arg2 + 0x54)
int32_t var_4_1 = 0xffffffff
int32_t result
int32_t ecx_2
result, ecx_2 = sub_4329b0(&var_84)
int32_t esi_2 = 0

if (arg5 s<= 0)
label_5f452a:
    result.b = 1
else
    while (true)
        int32_t var_e4_1 = esi_2 + arg4
        sub_4104a0(sub_401170(arg3))
        int32_t var_4_2 = 1
        struct IString::common::CStringWrapper::VTable* const var_c0 =
            &common::CStringWrapper::`vftable'{for `IString'}
        int32_t var_a8_1 = 0xf
        int32_t var_ac_1 = 0
        char var_bc = 0
        int32_t var_a0
        sub_401180(&var_bc, 0xffffffff, &var_a0, 0)
        var_4_2.b = 2
        bool cond:1_1 = sub_407fe0(&var_c0) == 1
        var_4_2.b = 1
        var_c0 = &common::CStringWrapper::`vftable'{for `IString'}
        
        if (var_a8_1 u>= 0x10)
            int32_t var_e4_3 = var_bc.d
            sub_6b4d5b()
        
        int32_t var_a8_2 = 0xf
        int32_t var_ac_2 = 0
        var_bc = 0
        int32_t var_8c
        
        if (cond:1_1 == 0)
            if (var_8c u>= 0x10)
                int32_t var_e4_5 = var_a0
                sub_6b4d5b()
            
            result.b = 0
            break
        
        int32_t var_4_3 = 0xffffffff
        
        if (var_8c u>= 0x10)
            int32_t var_e4_4 = var_a0
            sub_6b4d5b()
        
        esi_2 += 1
        
        if (esi_2 s>= arg5)
            goto label_5f452a

fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &var_cc)
return result
