// 函数: sub_6b5b1f
// 地址: 0x6b5b1f
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t __saved_ebp_2 = 0x14
int32_t var_8 = 0x770fb0
int32_t (* var_10)(int32_t* arg1, void* arg2, int32_t arg3) = sub_6b83f0
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t eax_8 = data_78c474
int32_t var_8_3 = 0x770fb0 ^ eax_8
int32_t __saved_ebp
int32_t var_38 = eax_8 ^ &__saved_ebp
int32_t* var_1c = &var_38
void* const var_3c_2 = &data_6b5b2b
int32_t var_8_4 = 0xfffffffe
int32_t var_c = var_8_3
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_28 = 0xffffffff
int32_t var_24 = 0xffffffff
uint32_t result

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
        int32_t edx_1 = sub_6bcbfc(arg1)
        int32_t var_8_1 = 0
        int32_t eax_5 = (&data_798100)[arg1 s>> 5]
        uint32_t result_1
        int32_t var_24_1
        
        if ((*(eax_5 + esi_3 + 4) & 1) == 0)
            *__errno() = 9
            *___doserrno() = 0
            result_1 = 0xffffffff
            var_24_1 = 0xffffffff
        else
            uint32_t result_2
            int32_t edx_2
            result_2, edx_2 = sub_6b5a9a(eax_5, edx_1, arg1, arg1, arg2, arg3, arg4)
            result_1 = result_2
            var_24_1 = edx_2
        int32_t var_8_2 = 0xfffffffe
        sub_6b5bff(&__saved_ebp)
        result = result_1
else
    *___doserrno() = 0
    *__errno() = 9
    result = 0xffffffff

fsbase->NtTib.ExceptionList = ExceptionList
void* const __saved_ebp_1 = &data_6b5bfe
return result
