// 函数: sub_6bda4a
// 地址: 0x6bda4a
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t __saved_ebp_1 = 0x10
int32_t var_8 = 0x7711e8
int32_t (* var_10)(int32_t* arg1, void* arg2, int32_t arg3) = sub_6b83f0
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t eax_17 = data_78c474
int32_t var_8_3 = 0x7711e8 ^ eax_17
int32_t __saved_ebp
int32_t var_34 = eax_17 ^ &__saved_ebp
int32_t* var_1c = &var_34
void* const var_38_2 = &data_6bda56
int32_t var_8_4 = 0xfffffffe
int32_t var_c = var_8_3
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t result

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
    else if (sbb.d(0x7fffffff, 0x7fffffff, 0x7fffffff u< arg3) != 0xffffffff)
        sub_6bcbfc(arg1)
        int32_t var_8_1 = 0
        int32_t result_1
        
        if ((*((&data_798100)[arg1 s>> 5] + esi_3 + 4) & 1) == 0)
            *__errno() = 9
            *___doserrno() = 0
            result_1 = 0xffffffff
        else
            result_1 = sub_6bd493(arg1, arg2, arg3)
        
        int32_t var_8_2 = 0xfffffffe
        sub_6bdb38()
        result = result_1
    else
        *___doserrno() = 0
        *__errno() = 0x16
        __invalid_parameter_noinfo()
        result = 0xffffffff
else
    *___doserrno() = 0
    *__errno() = 9
    result = 0xffffffff

fsbase->NtTib.ExceptionList = ExceptionList
void* const __saved_ebp_2 = &data_6bdb34
return result
