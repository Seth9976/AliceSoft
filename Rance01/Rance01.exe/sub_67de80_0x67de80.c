// 函数: sub_67de80
// 地址: 0x67de80
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_7121dc
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t eax_2 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
*arg1 = &guiengine::CGUIComboBoxView::`vftable'{for `guiengine::CGUIView'}
arg1[1] = &guiengine::CGUIComboBoxView::`vftable'{for `guiengine::CEventObserverBase'}
int32_t var_4 = 3
(*(arg1[6]->vFunc_0 + 4))(eax_2)
(*(arg1[5]->vFunc_0 + 4))()
(*(arg1[4]->vFunc_0 + 4))()
int32_t* ecx_3 = arg1[0xc]

if (ecx_3 != 0)
    (*(*ecx_3 + 4))()
    arg1[0xc] = 0

arg1[3].b = 0
int128_t* ecx_4 = arg1[0x19]
int128_t* edi = arg1[0x18]

if (edi != ecx_4)
    int32_t ebp_1 = 0 s>> 2 << 2
    sub_6b49d0(edi, ecx_4, ebp_1)
    arg1[0x19] = ebp_1 + edi

int32_t eax_10 = arg1[0x18]

if (eax_10 != 0)
    int32_t var_24_2 = eax_10
    sub_6b4d5b()

arg1[0x18] = 0
arg1[0x19] = 0
arg1[0x1a] = 0
arg1[0x14] = &guiengine::CGUIPlainCG::`vftable'{for `guiengine::IAddConstructionPartsProcess'}
arg1[0x11] = &guiengine::CGUIPlainCG::`vftable'{for `guiengine::IAddConstructionPartsProcess'}
arg1[0xe] = &guiengine::CGUIPlainCG::`vftable'{for `guiengine::IAddConstructionPartsProcess'}
fsbase->NtTib.ExceptionList = ExceptionList
return &guiengine::CGUIPlainCG::`vftable'{for `guiengine::IAddConstructionPartsProcess'}
