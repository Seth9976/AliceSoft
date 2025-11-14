// 函数: sub_52dfc0
// 地址: 0x52dfc0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_712980
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t ecx
int32_t var_14 = ecx
int32_t __saved_ebp
int32_t var_24 = data_78c474 ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_14_1 = &var_24
int32_t* result = arg1
*result = 0
result[1] = 0
result[2] = 0
int32_t esi_1 = arg2[1] - *arg2
*result = 0
int32_t esi_2 = esi_1 s>> 4
result[1] = 0
result[2] = 0

if (esi_2 != 0)
    if (esi_2 u> 0xfffffff)
        sub_6b47bf("vector<T> too long")
        noreturn
    
    struct win32only::CHighResolutionTimer::VTable** eax_3 = sub_572360(esi_2)
    int32_t var_8_1 = 0
    *result = eax_3
    result[1] = eax_3
    result[2] = &eax_3[esi_2 * 4]
    int32_t ecx_2 = arg2[1]
    void* var_28_1 = arg1
    int32_t var_2c_1 = ecx_2
    int32_t var_30_1 = *arg2
    result[1] = sub_52ec70(eax_3, arg1, ecx_2)

fsbase->NtTib.ExceptionList = ExceptionList
return result
