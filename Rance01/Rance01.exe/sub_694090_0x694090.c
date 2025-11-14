// 函数: sub_694090
// 地址: 0x694090
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_712151
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t eax_2 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
*arg1 = &guiengine::CGUITextBoxView::`vftable'{for `guiengine::CGUIView'}
arg1[1] = &guiengine::CGUITextBoxView::`vftable'{for `guiengine::CEventObserverBase'}
int32_t var_4 = 2
(*(arg1[8]->vFunc_0 + 4))(eax_2)
(*(arg1[7]->vFunc_0 + 4))()
(*(arg1[6]->vFunc_0 + 4))()
(*(arg1[5]->vFunc_0 + 4))()
int32_t* ecx_4 = arg1[0x1c]

if (ecx_4 != 0)
    (*(*ecx_4 + 4))()
    arg1[0x1c] = 0

arg1[4].b = 0
int128_t* ecx_5 = arg1[0x1f]
int128_t* edi = arg1[0x1e]

if (edi != ecx_5)
    int32_t ebp_1 = 0 s>> 2 << 2
    sub_6b49d0(edi, ecx_5, ebp_1)
    arg1[0x1f] = ebp_1 + edi

int32_t result = arg1[0x1e]

if (result != 0)
    int32_t result_1 = result
    result = sub_6b4d5b()

arg1[0x1e] = 0
arg1[0x1f] = 0
arg1[0x20] = 0

if (arg1[0x19] u>= 0x10)
    int32_t var_24_2 = arg1[0x14]
    result = sub_6b4d5b()

arg1[0x19] = 0xf
arg1[0x18] = 0
arg1[0x14].b = 0

if (arg1[0x12] u>= 0x10)
    int32_t var_24_3 = arg1[0xd]
    result = sub_6b4d5b()

arg1[0x12] = 0xf
arg1[0x11] = 0
arg1[0xd].b = 0
fsbase->NtTib.ExceptionList = ExceptionList
return result
