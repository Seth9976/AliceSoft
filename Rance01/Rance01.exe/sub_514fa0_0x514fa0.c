// 函数: sub_514fa0
// 地址: 0x514fa0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_2 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_7148f0
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t __saved_edi
int32_t result

if ((*(**(arg1 + 0x274) + 0x28))(data_78c474 ^ &__saved_edi).b != 0)
    if ((*(**(arg1 + 0x270) + 0x20))().b == 0)
        result.b = 0
    else
        int32_t result_2 = 0
        int32_t var_1c_1 = 0
        int32_t var_18_1 = 0
        int32_t var_4 = 0
        int32_t var_30 = 0
        int32_t var_2c_1 = 0
        int32_t var_28_1 = 0
        var_4.b = 1
        bool cond:0_1 = sub_515220(arg1, arg2, 0, &var_30, &result_2) == 0
        int32_t eax_6 = var_30
        arg2.b = cond:0_1
        
        if (eax_6 != 0)
            int32_t var_4c_2 = eax_6
            sub_6b4d5b()
        
        int32_t var_4_1 = 0xffffffff
        result = result_2
        
        if (result != 0)
            int32_t result_1 = result
            sub_6b4d5b()
        
        if (arg2.b != 0)
            result.b = 0
        else
            int32_t* edx_2 = *(arg1 + 0x270)
            void* ebp_1 = *edx_2
            int32_t eax_9
            int32_t edx_4
            edx_4:eax_9 = muls.dp.d(0x55555556, (*(**(arg1 + 0x274) + 0x20))())
            int32_t eax_14 = (*(*edx_2 + 0x1c))(0, (edx_4 u>> 0x1f) + edx_4)
            *(arg1 + 0x270)
            result.b = (*(ebp_1 + 0x28))(0, 0, eax_14).b != 0
else
    result.b = 0

fsbase->NtTib.ExceptionList = ExceptionList
return result
