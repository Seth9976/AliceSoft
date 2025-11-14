// 函数: sub_6bdee1
// 地址: 0x6bdee1
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t __saved_ebp_1 = 0xc
int32_t var_8 = 0x771228
int32_t (* var_10)(int32_t* arg1, void* arg2, int32_t arg3) = sub_6b83f0
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t eax_5 = data_78c474
int32_t var_8_3 = 0x771228 ^ eax_5
int32_t __saved_ebp
int32_t var_30 = eax_5 ^ &__saved_ebp
int32_t* var_1c = &var_30
void* const var_34_3 = &data_6bdeed
int32_t var_8_4 = 0xfffffffe
int32_t var_c = var_8_3
fsbase->NtTib.ExceptionList = &ExceptionList
uint32_t* eax = __getptd()
int32_t result

if ((eax[0x1c] & data_78cbc0) == 0 || eax[0x1b] == 0)
    sub_6bf5de(0xd)
    int32_t var_8_1 = 0
    result = eax[0x1a]
    int32_t result_1 = result
    
    if (result != data_78cac8)
        if (result != 0 && InterlockedDecrement(result) == 0 && result != 0x78c6a0)
            __free_base(result)
        
        eax[0x1a] = data_78cac8
        result = data_78cac8
        int32_t result_2 = result
        InterlockedIncrement(result)
    
    int32_t var_8_2 = 0xfffffffe
    sub_6bdf7c()
else
    result = eax[0x1a]

if (result == 0)
    __amsg_exit(0x20)
    noreturn

fsbase->NtTib.ExceptionList = ExceptionList
void* const __saved_ebp_2 = &data_6bdf1a
return result
