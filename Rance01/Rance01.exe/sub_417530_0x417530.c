// 函数: sub_417530
// 地址: 0x417530
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_728678
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t var_10 = arg1
int32_t __saved_esi
int32_t var_1c = data_78c474 ^ &__saved_esi
fsbase->NtTib.ExceptionList = &ExceptionList
arg2[1] = &guiengine::IPartsControllerMaker::`vftable'
arg2[2] = &guiengine::IMakeGUIComponent::`vftable'
arg2[3] = arg3
*arg2 = &guiengine::CGUIController::`vftable'{for `guiengine::CEventObserverBase'}
arg2[1] = &guiengine::CGUIController::`vftable'{for `guiengine::IPartsControllerMaker'}
arg2[2] = &guiengine::CGUIController::`vftable'{for `guiengine::IMakeGUIComponent'}
arg2[4] = arg1
arg2[5] = 0
arg2[8] = 0
int32_t* eax_4 = sub_4ecfc0(1)
arg2[7] = eax_4
*eax_4 = eax_4
void* eax_5 = arg2[7]
*(eax_5 + 4) = eax_5
void* eax_6 = arg2[7]
*(eax_6 + 8) = eax_6
arg2[7]->__offset(0x14).d.b = 1
*(&arg2[7]->__offset(0x14).d + 1) = 1
arg2[0xa] = 0
arg2[0xb] = 0
arg2[0xc] = 0
arg2[0xe] = 0
int32_t var_4 = 0
arg2[0xf] = 0
arg2[0x11] = 0
arg2[0x12] = 0
arg2[0x13] = 0
arg2[0x14].w = 0
arg2[0x15] = 0
arg2[0x16] = 0
arg2[0x17].b = 0
arg2[0x18] = arg4
arg2[0x19] = 0x12c
arg2[0x1a] = 0
arg2[0x1c] = 0
arg2[0x1d] = 0
arg2[0x1e] = 0
var_4.b = 1
arg2[0x20] = arg5
sub_4176b0(arg2)
fsbase->NtTib.ExceptionList = ExceptionList
return arg2
