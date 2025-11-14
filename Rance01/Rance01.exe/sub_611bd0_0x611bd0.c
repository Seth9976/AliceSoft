// 函数: sub_611bd0
// 地址: 0x611bd0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_4 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_7235b8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_68
int32_t eax_2 = data_78c474 ^ &var_68
int32_t __saved_edi
int32_t eax_4 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
sub_401270(arg1, 8, 0x734d44)
int32_t var_4 = 0
int32_t var_64
sub_402000(arg1, sub_61b650(arg3, &var_64), 0, 0xffffffff)
int32_t var_4_1 = 0xffffffff
int32_t var_50

if (var_50 u>= 0x10)
    int32_t var_80_1 = var_64
    sub_6b4d5b()

sub_402cb0(arg1, 0x734d50, 1)
sub_402000(arg1, arg3 + 4, 0, 0xffffffff)
sub_402cb0(arg1, 0x734d54, 3)
int32_t* eax_10 = (*(***(arg2 + 0xd0) + 0x10))(0x735240)
int32_t* result

if (eax_10 != 0)
    switch (*(arg3 + 0x34) - 0xa)
        case 0
            int32_t* eax_15
            char ecx_4
            eax_15, ecx_4 = (*(*eax_10 + 0xc))(*(arg3 + 0x30))
            
            if (eax_15 == 0)
                result = sub_405e30(ecx_4, 0x734d60, arg1)
            else
                int32_t var_80_4 = *eax_15
                int32_t var_4_2 = 1
                sub_402000(arg1, sub_4104a0(0x734d5c), 0, 0xffffffff)
                void var_48
                result = sub_401110(&var_48)
        case 1
            float* eax_22
            char ecx_7
            eax_22, ecx_7 = (*(*eax_10 + 0xc))(*(arg3 + 0x30))
            
            if (eax_22 == 0)
                result = sub_405e30(ecx_7, U"?""????", arg1)
            else
                int32_t var_4_3 = 2
                sub_402000(arg1, sub_4104a0(0x734d78), 0, 0xffffffff)
                void var_2c
                result = sub_401110(&var_2c)
        case 2
            int32_t* eax_25
            char ecx_9
            eax_25, ecx_9 = (*(*eax_10 + 0xc))(*(arg3 + 0x30))
            
            if (eax_25 == 0)
                result = sub_405e30(ecx_9, &(*U"?""????")[3], arg1)
            else
                sub_405e30(ecx_9, &(*U"?""????")[1], arg1)
                int128_t* eax_27
                char ecx_11
                eax_27, ecx_11 = (**eax_25)(eax_4)
                result = sub_405e30(sub_405e30(ecx_11, eax_27, arg1), &(*U"?""????")[2], arg1)
        case 3
            int32_t* eax_30
            char ecx_14
            eax_30, ecx_14 = (*(**(*(arg2 + 0xd0) + 0xc) + 4))(0)
            
            if (eax_30 == 0)
                result = sub_405e30(ecx_14, &(*U"?""????")[4], arg1)
            else
                result =
                    sub_6133d0(arg2, arg1, *((*(*eax_30 + 0x18))(eax_4) + (*(arg3 + 0x30) << 2)))
        case 4, 5, 6, 7, 0x28
            int32_t* eax_35
            char ecx_19
            eax_35, ecx_19 = (*(**(*(arg2 + 0xd0) + 0xc) + 4))(0)
            
            if (eax_35 == 0)
                result = sub_405e30(ecx_19, &(*U"?""????")[5], arg1)
            else
                result = sub_613860(arg2, *((*(*eax_35 + 0x18))(eax_4) + (*(arg3 + 0x30) << 2)), 
                    *(arg3 + 0x34), arg1)
        case 0x25
            int32_t* eax_19
            char ecx_6
            eax_19, ecx_6 = (*(*eax_10 + 0xc))(*(arg3 + 0x30))
            
            if (eax_19 == 0)
                result = sub_405e30(ecx_6, 0x734d74, arg1)
            else if (*eax_19 != 0)
                result = sub_401140(ecx_6, "true", arg1)
            else
                result = sub_405e30(ecx_6, "false", arg1)
        default
            int32_t var_80_18 = 1
            result = sub_402cb0(arg1, &(*U"?""????")[6], 1)
else
    int32_t var_80_2 = 1
    result = sub_402cb0(arg1, &data_734d58, 1)

fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &var_68)
return result
