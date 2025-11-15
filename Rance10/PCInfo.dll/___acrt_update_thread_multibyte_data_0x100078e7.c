// 函数: ___acrt_update_thread_multibyte_data
// 地址: 0x100078e7
// 来自: E:\torrent\AliceSoft\ランス１０\PCInfo.dll

int32_t __saved_ebp_1 = 0xc
int32_t var_8 = 0x100146e0
int32_t (* var_10)(int32_t* arg1, void* arg2, int32_t arg3) = __except_handler4
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
uint32_t __security_cookie_1 = __security_cookie
int32_t var_8_3 = 0x100146e0 ^ __security_cookie_1
int32_t __saved_ebp
int32_t var_30 = __security_cookie_1 ^ &__saved_ebp
int32_t* var_1c = &var_30
void* const var_34_1 = &data_100078f3
int32_t var_8_4 = 0xfffffffe
int32_t var_c = var_8_3
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_20 = 0
void* eax = sub_1000682b()
int32_t* result

if ((*(eax + 0x350) & data_100166f0) == 0 || *(eax + 0x4c) == 0)
    ___acrt_lock(5)
    int32_t var_8_1 = 0
    result = *(eax + 0x48)
    int32_t* result_1 = result
    
    if (result != data_10016570)
        if (result != 0)
            bool cond:0_1 = *result != 1
            *result
            *result -= 1
            
            if (not(cond:0_1) && result != &data_10016350)
                __free_base(result)
        
        *(eax + 0x48) = data_10016570
        result = data_10016570
        int32_t* result_2 = result
        *result += 1
    
    int32_t var_8_2 = 0xfffffffe
    $LN13()
else
    result = *(eax + 0x48)

if (result == 0)
    _abort()
    noreturn

fsbase->NtTib.ExceptionList = ExceptionList
void* const __saved_ebp_2 = &data_10007988
return result
