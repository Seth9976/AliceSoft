// 函数: sub_61ab00
// 地址: 0x61ab00
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_71b69b
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* ecx = data_797da8

if (ecx != 0)
    void var_14
    (*(*ecx + 4))(data_78c474 ^ &var_14)
    data_797da8 = 0

struct IInterface::IJaffaDebugPlugin::VTable** eax_4 = operator new(0xba8)
struct IInterface::IJaffaDebugPlugin::VTable** var_10 = eax_4
int32_t var_4 = 0
struct IInterface::IJaffaDebugPlugin::VTable** result

if (eax_4 == 0)
    result = nullptr
else
    result = sub_605030(eax_4)

data_797da8 = result
result[0x2a] = arg1
result.b = 1
fsbase->NtTib.ExceptionList = ExceptionList
return result
