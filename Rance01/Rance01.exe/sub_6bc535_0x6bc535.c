// 函数: sub_6bc535
// 地址: 0x6bc535
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t __saved_ebp_1 = 8
int32_t var_8 = 0x771168
int32_t (* var_10)(int32_t* arg1, void* arg2, int32_t arg3) = sub_6b83f0
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t eax = data_78c474
int32_t var_8_3 = 0x771168 ^ eax
int32_t __saved_ebp
int32_t var_2c = eax ^ &__saved_ebp
int32_t* var_1c = &var_2c
void* const var_30 = &data_6bc541
int32_t var_8_4 = 0xfffffffe
int32_t var_c = var_8_3
struct _EXCEPTION_REGISTRATION_RECORD** result = &ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList

if (data_79792c == 0)
    sub_6bf5de(6)
    int32_t var_8_1 = 0
    
    if (data_79792c == 0)
        sub_6bbe54()
        data_79792c += 1
    
    int32_t var_8_2 = 0xfffffffe
    result = sub_6bc57b()

fsbase->NtTib.ExceptionList = ExceptionList
void* const __saved_ebp_2 = &data_6bc57a
return result
