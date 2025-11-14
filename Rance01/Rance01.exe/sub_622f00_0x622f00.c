// 函数: sub_622f00
// 地址: 0x622f00
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_44 = 0xffffffff
int32_t (* var_48)(void* arg1) = sub_71d28b
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_f8
int32_t eax_2 = data_78c474 ^ &var_f8
int32_t __saved_edi
int32_t eax_4 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* result

if (arg1 - 0xa u> 0x25)
label_62307e:
    float var_108_10 = arg3
    int32_t var_44_3 = 2
    result = sub_401ef0(arg4, sub_4104a0("<%7d>"))
    int32_t var_c4
    
    if (var_c4 u>= 0x10)
        int32_t var_d8
        int32_t var_108_11 = var_d8
        result = sub_6b4d5b()
else
    uint32_t ecx_1 = zx.d(*(arg1 + &jump_table_6230d8[3]:2))
    
    switch (ecx_1)
        case 0
            float var_108_1 = arg3
            int32_t var_44_1 = 0
            sub_401ef0(arg4, sub_4104a0(0x733df0))
            void var_bc
            result = sub_401110(&var_bc)
        case 1
            int32_t var_10c
            var_10c.q = fconvert.d(fconvert.t(arg3))
            int32_t var_44_2 = 1
            sub_401ef0(arg4, sub_4104a0("%.5f"))
            void var_a0
            result = sub_401110(&var_a0)
        case 2
            int32_t* eax_9
            char ecx_5
            eax_9, ecx_5 = (*(**(arg2 + 4) + 4))(arg3)
            
            if (eax_9 != 0)
                sub_401140(ecx_5, 0x733e00, arg4)
                int128_t* eax_11
                char ecx_7
                eax_11, ecx_7 = (*(*eax_9 + 0x18))(eax_4)
                sub_405e30(ecx_7, eax_11, arg4)
                result = sub_402cb0(arg4, 0x733e04, 1)
            else
                result = sub_401140(ecx_5, 0x733dfc, arg4)
        case 3
            if (arg3 != 0)
                int128_t* eax_14
                char ecx_9
                eax_14, ecx_9 = (***(arg2 + 8))(arg3)
                
                if (eax_14 != 0)
                    result = sub_405e30(sub_401140(ecx_9, 0x733e14, arg4), eax_14, arg4)
                else
                    result = sub_401140(ecx_9, 0x733e10, arg4)
            else
                result = sub_401140(ecx_1.b, "NULL", arg4)
        case 4
            if (arg3 == 0)
                result = sub_401140(ecx_1.b, "false", arg4)
            else
                result = sub_401140(ecx_1.b, "true", arg4)
        case 5
            goto label_62307e

fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &var_f8)
return result
