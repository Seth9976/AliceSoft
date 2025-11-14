// 函数: sub_520e60
// 地址: 0x520e60
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_2 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_724b11
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t var_18 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
*arg1 = &sealengine::CApp::`vftable'{for `IDXPlugin'}
arg1[1] = &sealengine::CApp::`vftable'{for `IMarmotModel'}
int32_t var_4 = 2
sub_4afa40(arg1)
int32_t eax_3 = arg1[0x10]

if (eax_3 != 0)
    int32_t var_1c_1 = eax_3
    sub_6b4d5b()

arg1[0x10] = 0
arg1[0x11] = 0
arg1[0x12] = 0
arg1[0xf] = 0
int32_t var_4_1 = 0xffffffff
sub_576330(&arg1[6])
struct IDXPlugin::sealengine::CApp::VTable** var_1c_2 = arg1
sub_6b4d5b()
fsbase->NtTib.ExceptionList = ExceptionList
return arg1
