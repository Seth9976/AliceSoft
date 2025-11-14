// 函数: sub_417620
// 地址: 0x417620
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_2 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_724fd8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_esi
int32_t var_14 = data_78c474 ^ &__saved_esi
fsbase->NtTib.ExceptionList = &ExceptionList
*arg1 = &guiengine::CGUIController::`vftable'{for `guiengine::CEventObserverBase'}
arg1[1] = &guiengine::CGUIController::`vftable'{for `guiengine::IPartsControllerMaker'}
arg1[2] = &guiengine::CGUIController::`vftable'{for `guiengine::IMakeGUIComponent'}
int32_t var_4 = 1
int32_t ecx = sub_417b00(arg1)
int32_t eax_3 = arg1[0x1c]

if (eax_3 != 0)
    int32_t var_18_1 = eax_3
    ecx = sub_6b4d5b()

arg1[0x1c] = 0
arg1[0x1d] = 0
arg1[0x1e] = 0
int32_t var_4_1 = 0xffffffff
int32_t result = sub_414ed0(ecx, &arg1[4])
fsbase->NtTib.ExceptionList = ExceptionList
return result
