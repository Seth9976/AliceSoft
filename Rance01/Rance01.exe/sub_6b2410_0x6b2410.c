// 函数: sub_6b2410
// 地址: 0x6b2410
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_7283bb
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
struct IJaffaDebugPlugin::dpsound::CDPSoundSystem::VTable** var_10 = arg3
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* ecx = data_797de0

if (ecx != 0)
    (*(*ecx + 4))(data_78c474 ^ &var_10)
    data_797de0 = 0

struct IJaffaDebugPlugin::dpsound::CDPSoundSystem::VTable** eax_4 = operator new(0x58)
var_10 = eax_4
int32_t var_4 = 0
struct IJaffaDebugPlugin::dpsound::CDPSoundSystem::VTable** result

if (eax_4 == 0)
    result = nullptr
else
    result = sub_6a4c90(eax_4)

data_797de0 = result
result[0x15] = arg4
result.b = 1
fsbase->NtTib.ExceptionList = ExceptionList
return result
