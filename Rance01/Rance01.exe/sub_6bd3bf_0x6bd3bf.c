// 函数: sub_6bd3bf
// 地址: 0x6bd3bf
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t __saved_ebp_1 = 0x10
int32_t var_8 = 0x7711c8
int32_t (* var_10)(int32_t* arg1, void* arg2, int32_t arg3) = sub_6b83f0
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t eax_13 = data_78c474
int32_t var_8_3 = 0x7711c8 ^ eax_13
int32_t __saved_ebp
int32_t var_34 = eax_13 ^ &__saved_ebp
int32_t* var_1c = &var_34
void* const var_38_2 = &data_6bd3cb
int32_t var_8_4 = 0xfffffffe
int32_t var_c = var_8_3
fsbase->NtTib.ExceptionList = &ExceptionList
void* result

if (arg1 != 0xfffffffe)
    int32_t esi_3
    
    if (arg1 s>= 0 && arg1 u< data_7980e8)
        esi_3 = (arg1 & 0x1f) << 6
    
    if (arg1 s< 0 || arg1 u>= data_7980e8
            || (sx.d(*((&data_798100)[arg1 s>> 5] + esi_3 + 4)) & 1) == 0)
        *___doserrno() = 0
        *__errno() = 9
        __invalid_parameter_noinfo()
        result = 0xffffffff
    else
        sub_6bcbfc(arg1)
        int32_t var_8_1 = 0
        void* result_1
        
        if ((*((&data_798100)[arg1 s>> 5] + esi_3 + 4) & 1) == 0)
            *__errno() = 9
            *___doserrno() = 0
            result_1 = 0xffffffff
        else
            result_1 = sub_6bccc2(esi_3, arg1, arg2, arg3)
        
        int32_t var_8_2 = 0xfffffffe
        sub_6bd48b()
        result = result_1
else
    *___doserrno() = 0
    *__errno() = 9
    result = 0xffffffff

fsbase->NtTib.ExceptionList = ExceptionList
void* const __saved_ebp_2 = &data_6bd487
return result
