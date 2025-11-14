// 函数: sub_6c01b9
// 地址: 0x6c01b9
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t __saved_ebp_1 = 0x10
int32_t var_8 = 0x771308
int32_t (* var_10)(int32_t* arg1, void* arg2, int32_t arg3) = sub_6b83f0
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t eax_13 = data_78c474
int32_t var_8_3 = 0x771308 ^ eax_13
int32_t __saved_ebp
int32_t var_34 = eax_13 ^ &__saved_ebp
int32_t* var_1c = &var_34
void* const var_38_3 = &data_6c01c5
int32_t var_8_4 = 0xfffffffe
int32_t var_c = var_8_3
fsbase->NtTib.ExceptionList = &ExceptionList
enum WIN32_ERROR result

if (arg1 != 0xfffffffe)
    int32_t esi_3
    
    if (arg1 s>= 0 && arg1 u< data_7980e8)
        esi_3 = (arg1 & 0x1f) << 6
    
    if (arg1 s< 0 || arg1 u>= data_7980e8
            || (sx.d(*(esi_3 + (&data_798100)[arg1 s>> 5] + 4)) & 1) == 0)
        *__errno() = 9
        __invalid_parameter_noinfo()
        result = ~NO_ERROR
    else
        sub_6bcbfc(arg1)
        int32_t var_8_1 = 0
        enum WIN32_ERROR result_1
        
        if ((*(esi_3 + (&data_798100)[arg1 s>> 5] + 4) & 1) == 0)
            *__errno() = 9
            result_1 = ~NO_ERROR
        else
            if (FlushFileBuffers(sub_6bcb93(arg1)) != 0)
                result_1 = NO_ERROR
            else
                result_1 = GetLastError()
            
            if (result_1 != NO_ERROR)
                *___doserrno() = result_1
                *__errno() = 9
                result_1 = ~NO_ERROR
        
        int32_t var_8_2 = 0xfffffffe
        sub_6c028a()
        result = result_1
else
    *__errno() = 9
    result = ~NO_ERROR

fsbase->NtTib.ExceptionList = ExceptionList
void* const __saved_ebp_2 = &data_6c0286
return result
