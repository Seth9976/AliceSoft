// 函数: sub_58f2a0
// 地址: 0x58f2a0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_711168
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t var_2c = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
BOOL result

if (*(arg1 + 0x18) == 0)
    result.b = 0
else
    BOOL result_1 = 0xffffffff
    int32_t var_14_1 = 0
    int32_t var_10_1 = 0
    int32_t var_4 = 0
    bool cond:0_1 = sub_601f00(&result_1, arg1 + 8) != 0
    result = result_1
    
    if (cond:0_1)
        int32_t lDistanceToMove = *(arg2 + 4)
        
        if (result == 0xffffffff)
            result.b = 0
        else if (lDistanceToMove u>= var_10_1)
            CloseHandle(result)
            result.b = 0
        else
            SetFilePointer(result, lDistanceToMove, nullptr, FILE_BEGIN)
            int32_t lDistanceToMove_1 = lDistanceToMove
            sub_404f60(*(arg2 + 8), arg3)
            uint32_t eax_5 = *arg3
            bool cond:1_1 = sub_6021f0(&result_1, arg3[1] - eax_5, eax_5) == 0
            result = result_1
            
            if (cond:1_1)
                goto label_58f302
            
            if (result != 0xffffffff)
                CloseHandle(result)
            
            result.b = 1
    else
    label_58f302:
        
        if (result == 0xffffffff)
            result.b = 0
        else
            CloseHandle(result)
            result.b = 0

fsbase->NtTib.ExceptionList = ExceptionList
return result
