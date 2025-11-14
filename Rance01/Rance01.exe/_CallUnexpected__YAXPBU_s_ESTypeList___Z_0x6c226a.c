// 函数: ?CallUnexpected@@YAXPBU_s_ESTypeList@@@Z
// 地址: 0x6c226a
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4 = 4
int32_t (* var_c)(void* arg1) = __ehhandler$??_U@YAPAXIW4align_val_t@std@@ABUnothrow_t@1@@Z
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t ebp
var_4 = ebp
int32_t var_24 = data_78c474 ^ &var_4
int32_t* var_14 = &var_24
void* const var_28 = &data_6c2276
int32_t var_8_1 = 0xffffffff
fsbase->NtTib.ExceptionList = &ExceptionList

if (__getptd()[0x25] != 0)
    _inconsistency()
    noreturn

int32_t var_8 = 0
unexpected()
noreturn
