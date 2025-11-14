// 函数: sub_5606d0
// 地址: 0x5606d0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_7283bb
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
struct IVM::sys43vm::CJaffaVM::VTable** var_10 = arg3
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* ecx = data_797d50

if (ecx != 0)
    (*(*ecx + 4))(data_78c474 ^ &var_10)
    data_797d50 = 0

struct IVM::sys43vm::CJaffaVM::VTable** eax_4 = operator new(0x1340)
var_10 = eax_4
int32_t var_4 = 0
struct IVM::sys43vm::CJaffaVM::VTable** result

if (eax_4 == 0)
    result = nullptr
else
    result = sub_539e50(eax_4)

data_797d50 = result
result[4] = arg4
result.b = 1
fsbase->NtTib.ExceptionList = ExceptionList
return result
