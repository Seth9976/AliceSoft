// 函数: ?_CallCatchBlock2@@YAPAXPAUEHRegistrationNode@@PBU_s_FuncInfo@@PAXHK@Z
// 地址: 0x6bb6ac
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t eax = data_78c474
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = nullptr
int32_t var_14 = eax ^ &ExceptionList
int32_t var_10 = arg2
int32_t (* var_18)(int32_t* arg1, int32_t* arg2, int32_t arg3) = sub_6bb3eb
int32_t* var_c = arg1
int32_t var_8 = arg4 + 1
TEB* fsbase
ExceptionList = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t result = __CallSettingFrame@12(arg1, arg3, arg1, arg5)
fsbase->NtTib.ExceptionList = ExceptionList
return result
