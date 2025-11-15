// 函数: ___acrt_uninitialize_locale
// 地址: 0x10008736
// 来自: E:\torrent\AliceSoft\ランス１０\PCInfo.dll

int32_t __saved_ebp_1 = 8
int32_t var_8 = 0x10014780
int32_t (* var_10)(int32_t* arg1, void* arg2, int32_t arg3) = __except_handler4
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
uint32_t __security_cookie_1 = __security_cookie
int32_t var_8_3 = 0x10014780 ^ __security_cookie_1
int32_t __saved_ebp
int32_t var_2c = __security_cookie_1 ^ &__saved_ebp
int32_t* var_1c = &var_2c
void* const var_30 = &data_10008742
int32_t var_8_4 = 0xfffffffe
int32_t var_c = var_8_3
struct _EXCEPTION_REGISTRATION_RECORD** result = &ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList

if (data_10017240 != &data_10016578)
    ___acrt_lock(4)
    int32_t var_8_1 = 0
    data_10017240 = __updatetlocinfoEx_nolock(&data_10017240, &data_10016578)
    int32_t var_8_2 = 0xfffffffe
    result = sub_1000877f()

fsbase->NtTib.ExceptionList = ExceptionList
void* const __saved_ebp_2 = &data_1000877e
return result
