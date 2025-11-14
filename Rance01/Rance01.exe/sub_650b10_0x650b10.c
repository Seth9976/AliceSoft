// 函数: sub_650b10
// 地址: 0x650b10
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_7287e8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_esi
int32_t var_30 = data_78c474 ^ &__saved_esi
fsbase->NtTib.ExceptionList = &ExceptionList

if (arg1 s> 0)
    int32_t* var_34_1 = arg1
    int32_t edx
    
    if (sub_418b70(data_797ddc + 0xa8, edx, arg1) != 0)
        int32_t* var_20 = nullptr
        int32_t var_1c_1 = 0
        int32_t var_18_1 = 0
        int32_t var_4 = 0
        sub_685320(arg1, &var_20, arg2)
        int32_t* eax_7 = var_20
        
        if (eax_7 != var_1c_1)
            int32_t result = *eax_7
            int32_t* var_34_4 = eax_7
            sub_6b4d5b()
            fsbase->NtTib.ExceptionList = ExceptionList
            return result
        
        if (eax_7 != 0)
            int32_t* var_34_3 = eax_7
            sub_6b4d5b()

fsbase->NtTib.ExceptionList = ExceptionList
return 0
