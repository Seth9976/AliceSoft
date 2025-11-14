// 函数: sub_688380
// 地址: 0x688380
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_7186c6
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t eax_2 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
*arg1 = &guiengine::CGUILabelView::`vftable'{for `guiengine::CGUIView'}
arg1[1] = &guiengine::CGUILabelView::`vftable'{for `guiengine::CEventObserverBase'}
int32_t var_4 = 1
(*(arg1[4]->vFunc_0 + 4))(eax_2)
int32_t* ecx_1 = arg1[0xc]

if (ecx_1 != 0)
    (*(*ecx_1 + 4))()
    arg1[0xc] = 0

arg1[3].b = 0
int128_t* ecx_2 = arg1[0xe]
int128_t* edi = arg1[0xd]

if (edi != ecx_2)
    int32_t ebp_1 = 0 s>> 2 << 2
    sub_6b49d0(edi, ecx_2, ebp_1)
    arg1[0xe] = ebp_1 + edi

int32_t result = arg1[0xd]

if (result != 0)
    int32_t result_1 = result
    result = sub_6b4d5b()

arg1[0xd] = 0
arg1[0xe] = 0
arg1[0xf] = 0

if (arg1[0xa] u>= 0x10)
    int32_t var_24_2 = arg1[5]
    result = sub_6b4d5b()

arg1[0xa] = 0xf
arg1[9] = 0
arg1[5].b = 0
fsbase->NtTib.ExceptionList = ExceptionList
return result
