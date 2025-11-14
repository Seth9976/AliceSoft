// 函数: sub_6634f0
// 地址: 0x6634f0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_712325
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t var_14 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* result = arg5

for (; arg3 != arg4; arg3 = &arg3[4])
    if (result != 0)
        *result = 0
        result[1] = 0
        result[2] = 0
        
        if (result != arg3)
            *result = 0
            result[1] = 0
            result[2] = 0
            *result = *arg3
            result[1] = arg3[1]
            result[2] = arg3[2]
            *arg3 = 0
            arg3[1] = 0
            arg3[2] = 0
    
    result = &result[4]

fsbase->NtTib.ExceptionList = ExceptionList
return result
