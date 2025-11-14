// 函数: sub_65f3c0
// 地址: 0x65f3c0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_7283bb
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
struct IJaffaDebugPlugin::dpparts::DPParts::VTable** var_10 = arg3
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* ecx = data_797dd4

if (ecx != 0)
    (*(*ecx + 4))(data_78c474 ^ &var_10)
    data_797dd4 = 0

struct IJaffaDebugPlugin::dpparts::DPParts::VTable** eax_4 = operator new(0x58)
var_10 = eax_4
int32_t var_4 = 0
struct IJaffaDebugPlugin::dpparts::DPParts::VTable** result

if (eax_4 == 0)
    result = nullptr
else
    result = sub_65f040(eax_4)

data_797dd4 = result
result[0x15] = arg4
result.b = 1
fsbase->NtTib.ExceptionList = ExceptionList
return result
