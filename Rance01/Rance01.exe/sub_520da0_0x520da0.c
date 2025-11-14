// 函数: sub_520da0
// 地址: 0x520da0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_724b3b
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t var_20 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
struct IDXPlugin::sealengine::CApp::VTable** eax_3 = data_797d4c

if (eax_3 != 0)
    sub_520e60(eax_3)
    data_797d4c = 0

struct IDXPlugin::sealengine::CApp::VTable** esi = operator new(0x54)
struct IDXPlugin::sealengine::CApp::VTable** var_10 = esi
int32_t var_4 = 0

if (esi == 0)
    esi = nullptr
else
    esi[1] = &IMarmotModel::`vftable'
    *esi = &sealengine::CApp::`vftable'{for `IDXPlugin'}
    esi[1] = &sealengine::CApp::`vftable'{for `IMarmotModel'}
    esi[2] = 1
    esi[3] = 0
    esi[4] = 0
    esi[5] = 0
    sub_576280(&esi[6])
    esi[0xf] = 0
    esi[0x10] = 0
    esi[0x11] = 0
    esi[0x12] = 0
    esi[0x14] = 0

data_797d4c = esi
esi[3] = arg1
struct thread::CWorkerThreadManager::VTable** result
result.b = 1
fsbase->NtTib.ExceptionList = ExceptionList
return result
