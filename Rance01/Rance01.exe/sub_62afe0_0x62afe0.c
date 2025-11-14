// 函数: sub_62afe0
// 地址: 0x62afe0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_7283bb
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
struct IWindow::dpvariable::CWindow::VTable** var_10 = arg3
fsbase->NtTib.ExceptionList = &ExceptionList
void* eax_3 = data_797dc8

if (eax_3 != 0)
    (*(*(eax_3 + 0xb0) + 4))(data_78c474 ^ &var_10)
    data_797dc8 = 0

struct IWindow::dpvariable::CWindow::VTable** eax_5 = operator new(0xcf4)
var_10 = eax_5
int32_t var_4 = 0
struct IWindow::dpvariable::CWindow::VTable** result

if (eax_5 == 0)
    result = nullptr
else
    result = sub_61c180(eax_5)

data_797dc8 = result
result[0x2e] = arg4
result.b = 1
fsbase->NtTib.ExceptionList = ExceptionList
return result
