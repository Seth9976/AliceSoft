// 函数: sub_6313b0
// 地址: 0x6313b0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_71b69b
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
void* eax_3 = data_797dcc

if (eax_3 != 0)
    void var_14
    (*(*(eax_3 + 4) + 4))(data_78c474 ^ &var_14)
    data_797dcc = 0

struct win32only::CWindowCallback::dplogviewer::COutputLog::VTable** eax_5 = operator new(0x268)
struct win32only::CWindowCallback::dplogviewer::COutputLog::VTable** var_10 = eax_5
int32_t var_4 = 0
struct win32only::CWindowCallback::dplogviewer::COutputLog::VTable** result

if (eax_5 == 0)
    result = nullptr
else
    result = sub_62df50(eax_5)

data_797dcc = result
result[0x27] = arg1
result.b = 1
fsbase->NtTib.ExceptionList = ExceptionList
return result
