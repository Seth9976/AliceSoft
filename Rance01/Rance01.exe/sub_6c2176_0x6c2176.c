// 函数: sub_6c2176
// 地址: 0x6c2176
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t __saved_ebp_1 = 8
int32_t var_8 = 0x771390
int32_t (* var_10)(int32_t* arg1, void* arg2, int32_t arg3) = sub_6b83f0
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t eax = data_78c474
int32_t var_8_3 = 0x771390 ^ eax
int32_t __saved_ebp
int32_t var_2c = eax ^ &__saved_ebp
int32_t* var_1c = &var_2c
void* const var_30_1 = &data_6c2182
int32_t var_8_4 = 0xfffffffe
int32_t var_c = var_8_3
struct _EXCEPTION_REGISTRATION_RECORD** result = &ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList

if (arg1 != 0 && *arg1 == 0xe06d7363)
    result = arg1[7]
    
    if (result != 0)
        result = result[1]
        
        if (result != 0)
            int32_t var_8_1 = 0
            result = sub_6bb35a(arg1[6], result)
            int32_t var_8_2 = 0xfffffffe

fsbase->NtTib.ExceptionList = ExceptionList
void* const __saved_ebp_2 = &data_6c21b8
return result
