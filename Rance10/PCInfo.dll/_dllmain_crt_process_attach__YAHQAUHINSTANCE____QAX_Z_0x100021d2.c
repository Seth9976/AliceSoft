// 函数: ?dllmain_crt_process_attach@@YAHQAUHINSTANCE__@@QAX@Z
// 地址: 0x100021d2
// 来自: E:\torrent\AliceSoft\ランス１０\PCInfo.dll

int32_t __saved_ebp_3 = 0x10
int32_t var_8 = 0x100143c0
int32_t (* var_10)(int32_t* arg1, void* arg2, int32_t arg3) = __except_handler4
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp_4
int32_t __saved_ebp_1 = __saved_ebp_4
int32_t ebx
int32_t var_28 = ebx
int32_t esi
int32_t var_2c = esi
int32_t edi
int32_t var_30 = edi
uint32_t __security_cookie_1 = __security_cookie
int32_t var_8_3 = 0x100143c0 ^ __security_cookie_1
int32_t __saved_ebp
void* var_34 = __security_cookie_1 ^ &__saved_ebp
int32_t* var_1c = &var_34
void* const var_38 = &data_100021de
int32_t var_8_4 = 0xfffffffe
int32_t var_c_1 = var_8_3
fsbase->NtTib.ExceptionList = &ExceptionList
var_38 = nullptr
char eax = ___scrt_initialize_crt(var_38)
void* const* esp_1 = &var_34

if (eax != 0)
    char var_21_1 = ___scrt_acquire_startup_lock()
    ebx.b = 1
    char var_1d_1 = 1
    int32_t var_8_1 = 0
    
    if (data_10016b88 != 0)
        var_38 = 7
        esp_1 = &var_38
        sub_10002961(var_38)
    
    data_10016b88 = 1
    
    if (___scrt_dllmain_before_initialize_c() != 0)
        sub_10002a84()
        *(esp_1 - 4) = sub_10002aaf
        _atexit()
        sub_1000291a()
        *(esp_1 - 4) = __scrt_uninitialize_type_info
        _atexit()
        ___scrt_initialize_default_local_stdio_options()
        *(esp_1 - 4) = 0x1000f154
        *(esp_1 - 8) = 0x1000f144
        int32_t eax_3 = __initterm_e()
        *(esp_1 - 4)
        
        if (eax_3 == 0 && ___scrt_dllmain_after_initialize_c() != 0)
            *(esp_1 - 4) = 0x1000f140
            *(esp_1 - 8) = 0x1000f13c
            __initterm()
            *(esp_1 - 4)
            data_10016b88 = 2
            ebx.b = 0
            char var_1d_2 = 0
    
    int32_t var_8_2 = 0xfffffffe
    $LN14(&__saved_ebp)

int32_t result

if (eax == 0 || ebx.b != 0)
    result = 0
else
    if (data_10017274 != 0)
        *(esp_1 - 4) = &data_10017274
        char eax_5 = ___scrt_is_nonwritable_in_current_image()
        *(esp_1 - 4)
        
        if (eax_5 != 0)
            *(esp_1 - 4) = arg2
            *(esp_1 - 8) = 2
            *(esp_1 - 0xc) = arg1
            int32_t esi_1 = data_10017274
            j_sub_10004a52()
            esi_1()
    
    data_10016b84 += 1
    result = 1

*(esp_1 - 4) = &data_100022d6
fsbase->NtTib.ExceptionList = ExceptionList
esp_1[1]
esp_1[2]
esp_1[3]
int32_t __saved_ebp_2 = *(esp_1 - 4)
return result
