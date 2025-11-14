// 函数: sub_50cfc0
// 地址: 0x50cfc0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_723d18
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t eax_2 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
struct IMemory::common::CIMemory::VTable** arg_8
struct IMemory::common::CIMemory::VTable** ebp = arg_8
arg_8 = nullptr
int32_t result_2 = 0
int32_t var_1c = 0
int32_t var_18 = 0
int32_t var_4 = 0

if (sub_50c320(arg1, arg2, &arg_8, &result_2) == 0)
    goto label_50d069

struct IMemory::common::CIMemory::VTable** esi_1 = arg_8
int32_t result_3 = result_2
int32_t result

if (esi_1 != 0)
    char eax_9 = sub_4dd970((*esi_1)->vFunc_6((*esi_1)->vFunc_5(eax_2)), ebp)
    int32_t (__fastcall* const vFunc_1)(int32_t* arg1) = (*esi_1)->vFunc_1
    
    if (eax_9 != 0)
        vFunc_1()
    label_50d093:
        
        if (result_3 != 0)
            int32_t result_5 = result_3
            sub_6b4d5b()
        
        result.b = 1
    else
        vFunc_1()
    label_50d069:
        result = result_2
        
        if (result != 0)
            int32_t result_1 = result
            sub_6b4d5b()
        
        result.b = 0
else
    if (result_3 != var_1c && sub_4dd970(result_3, ebp, var_1c - result_3).b != 0)
        goto label_50d093
    
    if (result_3 == 0)
        result.b = 0
    else
        int32_t result_4 = result_3
        sub_6b4d5b()
        result.b = 0

fsbase->NtTib.ExceptionList = ExceptionList
return result
