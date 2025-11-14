// 函数: sub_4133e0
// 地址: 0x4133e0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_711f7b
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t eax_2 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
*arg1 = &guiengine::CGUIComponent::`vftable'{for `IInterface'}
arg1[1] = &guiengine::CGUIComponent::`vftable'{for `guiengine::CEventObserverBase'}
int32_t var_4 = 0
int32_t* ecx = arg1[0xb]

if (ecx != 0)
    (*(*ecx + 4))(eax_2)
    arg1[0xb] = 0

int32_t* ecx_1 = arg1[0xa]

if (ecx_1 != 0)
    (*(*ecx_1 + 4))(eax_2)
    arg1[0xa] = 0

arg1[4] = 0xffffffff
int128_t* ecx_2 = arg1[6]
int128_t* edi = arg1[5]

if (edi != ecx_2)
    int32_t ebx_1 = 0 s>> 2 << 2
    sub_6b49d0(edi, ecx_2, ebx_1, eax_2)
    arg1[6] = ebx_1 + edi

int32_t result = arg1[5]

if (result != 0)
    int32_t result_1 = result
    result = sub_6b4d5b()

arg1[5] = 0
arg1[6] = 0
arg1[7] = 0
fsbase->NtTib.ExceptionList = ExceptionList
return result
