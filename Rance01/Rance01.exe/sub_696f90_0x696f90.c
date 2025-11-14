// 函数: sub_696f90
// 地址: 0x696f90
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_71210c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t eax_2 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
*arg1 = &guiengine::CGUIVScrollbarView::`vftable'{for `guiengine::CGUIView'}
arg1[1] = &guiengine::CGUIVScrollbarView::`vftable'{for `guiengine::CEventObserverBase'}
int32_t var_4 = 8
(*(arg1[8]->EnterCriticalRegionHelper + 4))(eax_2)
(*(arg1[7]->EnterCriticalRegionHelper + 4))()
(*(arg1[6]->EnterCriticalRegionHelper + 4))()
(*(arg1[5]->EnterCriticalRegionHelper + 4))()
int32_t* ecx_4 = arg1[0x10]

if (ecx_4 != 0)
    (*(*ecx_4 + 4))()
    arg1[0x10] = 0

arg1[4].b = 0
int128_t* ecx_5 = arg1[0x2b]
int128_t* edi = arg1[0x2a]

if (edi != ecx_5)
    int32_t ebp_1 = 0 s>> 2 << 2
    sub_6b49d0(edi, ecx_5, ebp_1)
    arg1[0x2b] = ebp_1 + edi

int32_t eax_11 = arg1[0x2a]

if (eax_11 != 0)
    int32_t var_24_2 = eax_11
    sub_6b4d5b()

arg1[0x2a] = 0
arg1[0x2b] = 0
arg1[0x2c] = 0
arg1[0x27] = &guiengine::CGUIPlainCG::`vftable'{for `guiengine::IAddConstructionPartsProcess'}
arg1[0x24] = &guiengine::CGUIPlainCG::`vftable'{for `guiengine::IAddConstructionPartsProcess'}
arg1[0x21] = &guiengine::CGUIPlainCG::`vftable'{for `guiengine::IAddConstructionPartsProcess'}
arg1[0x1e] = &guiengine::CGUIPlainCG::`vftable'{for `guiengine::IAddConstructionPartsProcess'}
arg1[0x1b] = &guiengine::CGUIPlainCG::`vftable'{for `guiengine::IAddConstructionPartsProcess'}
arg1[0x18] = &guiengine::CGUIPlainCG::`vftable'{for `guiengine::IAddConstructionPartsProcess'}
arg1[0x15] = &guiengine::CGUIPlainCG::`vftable'{for `guiengine::IAddConstructionPartsProcess'}
arg1[0x12] = &guiengine::CGUIPlainCG::`vftable'{for `guiengine::IAddConstructionPartsProcess'}
fsbase->NtTib.ExceptionList = ExceptionList
return &guiengine::CGUIPlainCG::`vftable'{for `guiengine::IAddConstructionPartsProcess'}
