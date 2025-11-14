// 函数: sub_510df0
// 地址: 0x510df0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_7287e8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_esi
int32_t eax_2 = data_78c474 ^ &__saved_esi
fsbase->NtTib.ExceptionList = &ExceptionList

if (arg1[1].b != 0)
    int32_t* result = sub_510ef0(arg2, arg1)
    fsbase->NtTib.ExceptionList = ExceptionList
    return result

int32_t var_20 = 0
int32_t var_1c = 0
int32_t var_18 = 0
int32_t var_34_1 = arg2
int32_t var_4 = 0
int32_t* ecx
int32_t edx

if (sub_58f220(&arg1[2], edx, ecx, &var_20) != 0)
    int32_t ebp_1 = var_20
    
    if (ebp_1 != var_1c)
        int32_t* eax_7 = (*(**arg1 + 0x34))(eax_2)
        
        if (eax_7 != 0 && (*(*eax_7 + 8))(ebp_1, var_1c - ebp_1) == 0)
            (*(*eax_7 + 4))()
        
        sub_65ab60(&var_20)
    else if (ebp_1 != 0)
        int32_t var_34_4 = ebp_1
        sub_6b4d5b()
else
    int32_t var_34_2 = arg2
    sub_51ddc0(0x753c84)
    int32_t eax_5 = var_20
    
    if (eax_5 != 0)
        int32_t var_34_3 = eax_5
        sub_6b4d5b()

fsbase->NtTib.ExceptionList = ExceptionList
return 0
