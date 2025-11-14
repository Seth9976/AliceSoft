// 函数: sub_68a530
// 地址: 0x68a530
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_712191
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t eax_2 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
*arg1 = &guiengine::CGUIListBoxView::`vftable'{for `guiengine::CGUIView'}
arg1[1] = &guiengine::CGUIListBoxView::`vftable'{for `guiengine::CEventObserverBase'}
int32_t var_4 = 2

for (int32_t* i = arg1[0xa]; i != arg1[0xb]; i = &i[1])
    (*(**i + 4))(eax_2)

int128_t* ecx_2 = arg1[0xb]
int128_t* edi = arg1[0xa]

if (edi != ecx_2)
    int32_t ebx_1 = 0 s>> 2 << 2
    sub_6b49d0(edi, ecx_2, ebx_1, eax_2)
    arg1[0xb] = ebx_1 + edi

(*(arg1[9]->vFunc_0 + 4))(eax_2)
(*(arg1[8]->vFunc_0 + 4))()
(*(arg1[7]->vFunc_0 + 4))()
(*(arg1[6]->vFunc_0 + 4))()
int32_t* ecx_7 = arg1[0x19]

if (ecx_7 != 0)
    (*(*ecx_7 + 4))()
    arg1[0x19] = 0

arg1[3].b = 0
int128_t* ecx_8 = arg1[0x1f]
int128_t* edi_1 = arg1[0x1e]

if (edi_1 != ecx_8)
    int32_t ebp_1 = 0 s>> 2 << 2
    sub_6b49d0(edi_1, ecx_8, ebp_1)
    arg1[0x1f] = ebp_1 + edi_1

int32_t eax_15 = arg1[0x1e]

if (eax_15 != 0)
    int32_t var_24_3 = eax_15
    sub_6b4d5b()

arg1[0x1e] = 0
arg1[0x1f] = 0
arg1[0x20] = 0
int32_t eax_16 = arg1[0x14]

if (eax_16 != 0)
    int32_t var_24_4 = eax_16
    sub_6b4d5b()

arg1[0x14] = 0
arg1[0x15] = 0
arg1[0x16] = 0
int32_t result = arg1[0xa]

if (result != 0)
    int32_t result_1 = result
    result = sub_6b4d5b()

arg1[0xa] = 0
arg1[0xb] = 0
arg1[0xc] = 0
fsbase->NtTib.ExceptionList = ExceptionList
return result
