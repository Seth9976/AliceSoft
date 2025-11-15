// 函数: sub_10008a78
// 地址: 0x10008a78
// 来自: E:\torrent\AliceSoft\ランス１０\PCInfo.dll

int32_t __saved_ebp_1 = 0xc
int32_t var_8 = 0x100147a0
int32_t (* var_10)(int32_t* arg1, void* arg2, int32_t arg3) = __except_handler4
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
uint32_t __security_cookie_1 = __security_cookie
int32_t var_8_3 = 0x100147a0 ^ __security_cookie_1
int32_t __saved_ebp
int32_t var_30 = __security_cookie_1 ^ &__saved_ebp
int32_t* var_1c = &var_30
void* const var_34_1 = &data_10008a84
int32_t var_8_4 = 0xfffffffe
int32_t var_c = var_8_3
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_20 = 0
void* eax = sub_1000682b()
void* result

if ((*(eax + 0x350) & data_100166f0) != 0)
    result = *(eax + 0x4c)

if ((*(eax + 0x350) & data_100166f0) == 0 || result == 0)
    ___acrt_lock(4)
    int32_t var_8_1 = 0
    result = __updatetlocinfoEx_nolock(eax + 0x4c, data_10017240)
    void* result_1 = result
    int32_t var_8_2 = 0xfffffffe
    sub_10008ade()
    
    if (result == 0)
        _abort()
        noreturn

fsbase->NtTib.ExceptionList = ExceptionList
void* const __saved_ebp_2 = &data_10008aee
return result
