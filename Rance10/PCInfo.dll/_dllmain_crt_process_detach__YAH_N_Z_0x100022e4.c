// 函数: ?dllmain_crt_process_detach@@YAH_N@Z
// 地址: 0x100022e4
// 来自: E:\torrent\AliceSoft\ランス１０\PCInfo.dll

int32_t __saved_ebp_3 = 0xc
int32_t var_8 = 0x100143e0
int32_t (* var_10)(int32_t* arg1, void* arg2, int32_t arg3) = __except_handler4
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp_4
int32_t __saved_ebp_1 = __saved_ebp_4
int32_t ebx
int32_t var_24 = ebx
int32_t esi
int32_t var_28 = esi
int32_t edi
int32_t var_2c = edi
uint32_t __security_cookie_1 = __security_cookie
int32_t var_8_3 = 0x100143e0 ^ __security_cookie_1
int32_t __saved_ebp
void* var_30 = __security_cookie_1 ^ &__saved_ebp
int32_t* var_1c = &var_30
void* const var_34 = &data_100022f0
int32_t var_8_4 = 0xfffffffe
int32_t var_c_1 = var_8_3
fsbase->NtTib.ExceptionList = &ExceptionList
void* const* esp_1 = &var_30
int32_t eax = data_10016b84
int32_t result

if (eax s> 0)
    data_10016b84 = eax - 1
    char var_20_1 = ___scrt_acquire_startup_lock()
    int32_t var_8_1 = 0
    
    if (data_10016b88 != 2)
        var_34 = 7
        esp_1 = &var_34
        sub_10002961(var_34)
    
    ___scrt_dllmain_uninitialize_c()
    data_10016b88 = 0
    int32_t var_8_2 = 0xfffffffe
    $LN10(&__saved_ebp)
    *(esp_1 - 4) = 0
    *(esp_1 - 8) = arg1
    int32_t result_1
    result_1.b = ___scrt_uninitialize_crt() != 0
    result = result_1
else
    result = 0

*(esp_1 - 4) = &data_10002351
fsbase->NtTib.ExceptionList = ExceptionList
esp_1[1]
esp_1[2]
esp_1[3]
int32_t __saved_ebp_2 = *(esp_1 - 4)
return result
