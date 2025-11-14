// 函数: sub_6b6951
// 地址: 0x6b6951
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t __saved_ebp_2 = 0xc
int32_t var_8 = 0x771038
int32_t (* var_10)(int32_t* arg1, void* arg2, int32_t arg3) = sub_6b83f0
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t eax_3 = data_78c474
int32_t var_8_3 = 0x771038 ^ eax_3
int32_t __saved_ebp
int32_t var_30 = eax_3 ^ &__saved_ebp
int32_t* var_1c = &var_30
void* const var_34_2 = &data_6b695d
int32_t var_8_4 = 0xfffffffe
int32_t var_c = var_8_3
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t result_1 = 0xffffffff
int32_t eax
eax.b = arg1 != 0
int32_t result

if (eax != 0)
    if ((arg1[3].b & 0x40) == 0)
        sub_6b600f(arg1)
        int32_t var_8_1 = 0
        result_1 = __fclose_nolock(arg1)
        int32_t var_8_2 = 0xfffffffe
        sub_6b69bd(arg1)
    else
        arg1[3] = 0
    
    result = result_1
else
    *__errno() = 0x16
    __invalid_parameter_noinfo()
    result = 0xffffffff

fsbase->NtTib.ExceptionList = ExceptionList
void* const __saved_ebp_1 = &data_6b6996
return result
