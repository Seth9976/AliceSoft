// 函数: sub_598d40
// 地址: 0x598d40
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_7247e0
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_2c = data_78c474 ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_14 = &var_2c
int32_t* result = sub_631c00(1)
int32_t var_8_1 = 0
*result = arg1
int32_t var_30 = arg1
int32_t* result_1 = result
result[1] = arg2
TPI1::QueryTiForCVRecord(&result[2], arg1, arg2, &result[2])
fsbase->NtTib.ExceptionList = ExceptionList
return result
