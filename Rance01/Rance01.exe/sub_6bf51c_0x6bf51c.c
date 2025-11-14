// 函数: sub_6bf51c
// 地址: 0x6bf51c
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t __saved_ebp_1 = 0xc
int32_t var_8 = 0x7712c8
int32_t (* var_10)(int32_t* arg1, void* arg2, int32_t arg3) = sub_6b83f0
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t eax_3 = data_78c474
int32_t var_8_3 = 0x7712c8 ^ eax_3
int32_t __saved_ebp
int32_t var_30 = eax_3 ^ &__saved_ebp
int32_t* var_1c = &var_30
void* const var_34_2 = &data_6bf528
int32_t var_8_4 = 0xfffffffe
int32_t var_c = var_8_3
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t result_1 = 1

if (data_797930 == 0)
    __FF_MSGBANNER()
    sub_6b7b48(0x1e)
    __endthreadex(0xff)
    noreturn

int32_t result

if (*((arg1 << 3) + &data_78d008) == 0)
    CRITICAL_SECTION* lpCriticalSection = sub_6b8223(0x18)
    
    if (lpCriticalSection != 0)
        sub_6bf5de(0xa)
        int32_t var_8_1 = 0
        
        if (*((arg1 << 3) + &data_78d008) != 0)
            __free_base(lpCriticalSection)
        else if (InitializeCriticalSectionAndSpinCount(lpCriticalSection, 0xfa0) != 0)
            *((arg1 << 3) + &data_78d008) = lpCriticalSection
        else
            __free_base(lpCriticalSection)
            *__errno() = 0xc
            result_1 = 0
        
        int32_t var_8_2 = 0xfffffffe
        sub_6bf5d5()
        result = result_1
    else
        *__errno() = 0xc
        result = 0
else
    result = 1

fsbase->NtTib.ExceptionList = ExceptionList
void* const __saved_ebp_2 = &data_6bf5d4
return result
