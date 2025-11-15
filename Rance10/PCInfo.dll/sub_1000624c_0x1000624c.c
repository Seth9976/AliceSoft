// 函数: sub_1000624c
// 地址: 0x1000624c
// 来自: E:\torrent\AliceSoft\ランス１０\PCInfo.dll

int32_t var_4 = 0xc
int32_t var_8 = 0x10014640
int32_t (* var_10)(int32_t* arg1, void* arg2, int32_t arg3) = __except_handler4
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t ebp
var_4 = ebp
uint32_t __security_cookie_1 = __security_cookie
int32_t var_8_3 = 0x10014640 ^ __security_cookie_1
int32_t eax_1 = __security_cookie_1 ^ &var_4
int32_t var_20 = eax_1
int32_t var_30 = eax_1
int32_t* var_1c = &var_30
void* const var_34 = &data_10006258
int32_t var_8_4 = 0xfffffffe
int32_t var_c = var_8_3
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t esi = *(sub_1000682b() + 0xc)

if (esi != 0)
    int32_t var_8_1 = 0
    esi()
    int32_t var_8_2 = 0xfffffffe

_abort()
noreturn
