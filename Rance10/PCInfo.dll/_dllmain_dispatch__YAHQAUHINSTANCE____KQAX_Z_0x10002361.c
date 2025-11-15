// 函数: ?dllmain_dispatch@@YAHQAUHINSTANCE__@@KQAX@Z
// 地址: 0x10002361
// 来自: E:\torrent\AliceSoft\ランス１０\PCInfo.dll

int32_t __saved_ebp_2 = 0xc
int32_t var_8 = 0x10014400
int32_t (* var_10)(int32_t* arg1, void* arg2, int32_t arg3) = __except_handler4
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
uint32_t __security_cookie_1 = __security_cookie
int32_t var_8_3 = 0x10014400 ^ __security_cookie_1
int32_t __saved_ebp
int32_t var_30 = __security_cookie_1 ^ &__saved_ebp
int32_t* var_1c = &var_30
void* const var_34_8 = &data_1000236d
int32_t var_8_4 = 0xfffffffe
int32_t var_c = var_8_3
fsbase->NtTib.ExceptionList = &ExceptionList
uint32_t result

if (arg2 != 0 || data_10016b84 s> arg2)
    int32_t var_8_1 = 0
    uint32_t result_1
    uint32_t ebx_1
    
    if (arg2 == 1 || arg2 == 2)
        ebx_1 = arg3
        result_1 = dllmain_raw(arg1, arg2, ebx_1)
        uint32_t result_2 = result_1
        
        if (result_1 != 0)
            result_1 = dllmain_crt_dispatch(arg1, arg2, ebx_1)
            uint32_t result_3 = result_1
            
            if (result_1 != 0)
                goto label_100023c7
    else
        ebx_1 = arg3
    label_100023c7:
        uint32_t var_34_2 = ebx_1
        int32_t var_38_3 = arg2
        int32_t var_3c_3 = arg1
        result_1 = 1
        int32_t var_20_1 = 1
        
        if (arg2 == 0 || arg2 == 3)
            result_1 = dllmain_crt_dispatch(arg1, arg2, ebx_1)
            uint32_t result_4 = result_1
            
            if (result_1 != 0)
                result_1 = dllmain_raw(arg1, arg2, ebx_1)
                uint32_t result_5 = result_1
    int32_t var_8_2 = 0xfffffffe
    result = result_1
else
    result = 0

fsbase->NtTib.ExceptionList = ExceptionList
void* const __saved_ebp_1 = &data_1000245c
return result
