// 函数: sub_61e180
// 地址: 0x61e180
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_7241f8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t var_34 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
LRESULT result = SendMessageA(*arg2, 0x149, arg1, 0)

if (result == 0xffffffff)
    result.b = 0
else
    LPARAM lParam_3 = 0
    int32_t var_18_1 = 0
    int32_t var_14_1 = 0
    int32_t var_4 = 0
    sub_404f60(result + 1, &lParam_3)
    LPARAM lParam = lParam_3
    result = SendMessageA(*arg2, 0x148, arg1, lParam)
    
    if (result != 0xffffffff)
        *(result + lParam) = 0
        LPARAM lParam_4 = lParam
        int32_t edx_2 = lParam_4 + 1
        char i
        
        do
            i = *lParam_4
            lParam_4 += 1
        while (i != 0)
        sub_401270(arg3, lParam_4 - edx_2, lParam)
        
        if (lParam != 0)
            LPARAM lParam_2 = lParam
            sub_6b4d5b()
        
        result.b = 1
    else
        if (lParam != 0)
            LPARAM lParam_1 = lParam
            sub_6b4d5b()
        
        result.b = 0

fsbase->NtTib.ExceptionList = ExceptionList
return result
