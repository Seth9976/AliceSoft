// 函数: sub_4c8c30
// 地址: 0x4c8c30
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_7283bb
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t* var_10 = arg1
int32_t var_14 = data_78c474 ^ &var_10
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* eax_3 = operator new(0x2a0)
var_10 = eax_3
int32_t var_4 = 0
int32_t* result

if (eax_3 == 0)
    result = nullptr
else
    result = sub_4c3750(eax_3, *(arg2 + 0x10))

result[0xa3].b = *(arg2 + 0x14)
result[0xa4] = arg2
result[0xa6] = *(arg2 + 0x18)
result[0xa7] = *(arg2 + 0x1c)
fsbase->NtTib.ExceptionList = ExceptionList
return result
