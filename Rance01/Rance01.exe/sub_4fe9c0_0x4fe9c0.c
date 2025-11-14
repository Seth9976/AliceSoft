// 函数: sub_4fe9c0
// 地址: 0x4fe9c0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_714ac5
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_esi
int32_t var_18 = data_78c474 ^ &__saved_esi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* result = sub_4fddf0(1)
*result = *(arg1 + 4)
result[1] = *(arg1 + 4)
result[2] = *(arg1 + 4)
result[8].w = 0

if (result != 0xfffffff4)
    result[3] = *arg2
    result[4] = 0
    result[5] = 0
    result[6] = 0
    
    if (&result[4] != &arg2[1])
        result[4] = 0
        result[5] = 0
        result[6] = 0
        result[4] = arg2[1]
        result[5] = arg2[2]
        result[6] = arg2[3]
        arg2[1] = 0
        arg2[2] = 0
        arg2[3] = 0

fsbase->NtTib.ExceptionList = ExceptionList
return result
