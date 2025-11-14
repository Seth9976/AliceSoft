// 函数: sub_5345a0
// 地址: 0x5345a0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_71aaf8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t var_48 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t result

if (arg2 u>= (*(arg3 + 0xc) - *(arg3 + 8)) s>> 2)
    result = 0xffffffff
else
    int32_t* edi_1 = *(*(arg3 + 8) + (arg2 << 2))
    
    if (edi_1 == 0)
        result = 0xffffffff
    else
        uint32_t ebx_1 = edi_1[0xf]
        int32_t var_2c = 0
        int32_t var_28_1 = 0
        int32_t var_24_1 = 0
        int32_t var_1c_1 = 0
        int32_t var_18_1 = 0
        int32_t var_14_1 = 0
        int32_t var_4 = 0
        struct _EXCEPTION_REGISTRATION_RECORD* var_30 = ebx_1
        
        if (ebx_1 s> 0)
            sub_65a090(&var_2c, ebx_1)
        
        if (sub_5346e0(arg1, ebx_1, &var_30, edi_1, arg3) != 0)
            int32_t eax_5
            int32_t edx_2
            edx_2:eax_5 = muls.dp.d(0x38e38e39, arg1[0xd] - arg1[0xc])
            int32_t edx_3 = edx_2 s>> 3
            sub_534de0(&var_30, &arg1[0xc])
            sub_534690(&var_30)
            result = (edx_3 u>> 0x1f) + edx_3
        else
            sub_534690(&var_30)
            result = 0xffffffff

fsbase->NtTib.ExceptionList = ExceptionList
return result
