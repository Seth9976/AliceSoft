// 函数: sub_52d690
// 地址: 0x52d690
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_71f15d
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_esi
int32_t var_24 = data_78c474 ^ &__saved_esi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* result = arg4

while (arg3 u> 0)
    if (result != 0)
        *result = 0
        result[1] = 0
        result[2] = 0
        void var_1c
        
        if (result != &var_1c)
            *result = 0
            result[1] = 0
            result[2] = 0
    
    arg3 -= 1
    result = &result[4]

fsbase->NtTib.ExceptionList = ExceptionList
return result
