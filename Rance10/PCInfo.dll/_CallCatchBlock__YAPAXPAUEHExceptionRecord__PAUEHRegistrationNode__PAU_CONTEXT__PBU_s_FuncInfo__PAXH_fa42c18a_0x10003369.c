// 函数: ?CallCatchBlock@@YAPAXPAUEHExceptionRecord@@PAUEHRegistrationNode@@PAU_CONTEXT@@PBU_s_FuncInfo@@PAXHK@Z
// 地址: 0x10003369
// 来自: E:\torrent\AliceSoft\ランス１０\PCInfo.dll

int32_t __saved_ebp_1 = 0x38
int32_t var_8 = 0x100144a0
int32_t (* var_10)(int32_t* arg1, void* arg2, int32_t arg3) = __except_handler4
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
uint32_t __security_cookie_1 = __security_cookie
int32_t var_8_5 = 0x100144a0 ^ __security_cookie_1
int32_t __saved_ebp
int32_t var_5c = __security_cookie_1 ^ &__saved_ebp
int32_t* var_1c = &var_5c
void* const var_60_2 = &data_10003375
int32_t var_8_6 = 0xfffffffe
int32_t var_c = var_8_5
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_20 = arg5
int32_t var_40 = 0
int32_t var_30 = arg2[-1]
void var_4c
int32_t* var_34 = __CreateFrameInfo(&var_4c, arg1[6])
int32_t var_38 = *(sub_10004538() + 0x10)
int32_t var_3c = *(sub_10004538() + 0x14)
*(sub_10004538() + 0x10) = arg1
*(sub_10004538() + 0x14) = arg3
int32_t var_8_1 = 0
int32_t var_44 = 1
int32_t var_8_2 = 1
int32_t var_20_1 = _CallCatchBlock2(arg2, arg4, arg5, arg6, arg7)
int32_t var_8_3 = 0
int32_t var_8_4 = 0xfffffffe
int32_t var_44_1 = 0
sub_100034a4(&__saved_ebp, arg1)
fsbase->NtTib.ExceptionList = ExceptionList
void* const __saved_ebp_2 = &data_1000349d
return arg2
