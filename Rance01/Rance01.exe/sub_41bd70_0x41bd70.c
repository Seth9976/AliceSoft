// 函数: sub_41bd70
// 地址: 0x41bd70
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_71226b
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t eax_2 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
*arg1 = &guiengine::CGUIPartsView::`vftable'{for `guiengine::CGUIView'}
arg1[1] = &guiengine::CGUIPartsView::`vftable'{for `guiengine::CEventObserverBase'}
int32_t var_4 = 0
int32_t* ecx = arg1[4]

if (ecx != 0)
    (*(*ecx + 4))(eax_2)
    arg1[4] = 0

arg1[3].b = 0
int128_t* ecx_1 = arg1[8]
int128_t* edi = arg1[7]

if (edi != ecx_1)
    int32_t ebp_1 = 0 s>> 2 << 2
    sub_6b49d0(edi, ecx_1, ebp_1, eax_2)
    arg1[8] = ebp_1 + edi

int32_t result = arg1[7]

if (result != 0)
    int32_t result_1 = result
    result = sub_6b4d5b()

arg1[7] = 0
arg1[8] = 0
arg1[9] = 0
fsbase->NtTib.ExceptionList = ExceptionList
return result
