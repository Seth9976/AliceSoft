// 函数: sub_68f230
// 地址: 0x68f230
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_7185e4
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t eax_2 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
*arg1 = &guiengine::CGUIMultiTextBoxView::`vftable'{for `guiengine::CGUIView'}
arg1[1] = &guiengine::CGUIMultiTextBoxView::`vftable'{for `guiengine::CEventObserverBase'}
int32_t var_4 = 2
(*(arg1[9]->vFunc_0 + 4))(eax_2)
(*(arg1[8]->vFunc_0 + 4))()
(*(arg1[7]->vFunc_0 + 4))()
(*(arg1[6]->vFunc_0 + 4))()
(*(arg1[5]->vFunc_0 + 4))()
(*(arg1[4]->vFunc_0 + 4))()
int32_t* ecx_6 = arg1[0x26]

if (ecx_6 != 0)
    (*(*ecx_6 + 4))()
    arg1[0x26] = 0

arg1[3].b = 0
int128_t* ecx_7 = arg1[0x29]
int128_t* edi = arg1[0x28]

if (edi != ecx_7)
    int32_t ebp_1 = 0 s>> 2 << 2
    sub_6b49d0(edi, ecx_7, ebp_1)
    arg1[0x29] = ebp_1 + edi

int32_t result = arg1[0x28]

if (result != 0)
    int32_t result_1 = result
    result = sub_6b4d5b()

arg1[0x28] = 0
arg1[0x29] = 0
arg1[0x2a] = 0

if (arg1[0x24] u>= 0x10)
    int32_t var_24_2 = arg1[0x1f]
    result = sub_6b4d5b()

arg1[0x24] = 0xf
arg1[0x23] = 0
arg1[0x1f].b = 0

if (arg1[0x1d] u>= 0x10)
    int32_t var_24_3 = arg1[0x18]
    result = sub_6b4d5b()

arg1[0x1d] = 0xf
arg1[0x1c] = 0
arg1[0x18].b = 0
fsbase->NtTib.ExceptionList = ExceptionList
return result
