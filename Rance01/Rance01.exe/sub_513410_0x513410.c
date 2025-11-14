// 函数: sub_513410
// 地址: 0x513410
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_711670
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
int32_t edi = arg2[1]
uint32_t edi_1 = edi - *arg2
bool cond:0 = edi == *arg2
*result = 0
result[1] = 0
result[2] = 0

if (not(cond:0))
    if (edi_1 u> 0xffffffff)
        sub_6b47bf("vector<T> too long")
        noreturn
    
    char* eax_3 = sub_4015e0(edi_1)
    int32_t var_8_1 = 0
    *result = eax_3
    result[1] = eax_3
    result[2] = &eax_3[edi_1]
    int32_t ecx_3 = arg2[1]
    char* var_28_1 = arg1
    int32_t var_2c_1 = ecx_3
    int32_t var_30_1 = *arg2
    result[1] = sub_50fc30(eax_3, arg1, ecx_3)

fsbase->NtTib.ExceptionList = ExceptionList
return result
