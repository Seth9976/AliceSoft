// 函数: sub_414910
// 地址: 0x414910
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_2 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_719cbb
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void* var_10 = arg1
int32_t __saved_edi
int32_t eax_2 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* ecx = *(arg1 + 0x28)

if (ecx != 0 && (*(*ecx + 8))(eax_2) == 4)
    fsbase->NtTib.ExceptionList = ExceptionList
    return *(arg1 + 0x28)

int32_t* ecx_3 = *(arg1 + 0x28)

if (ecx_3 != 0)
    (*(*ecx_3 + 4))(eax_2)
    *(arg1 + 0x28) = 0

struct guiengine::CGUIModel::guiengine::CGUIVScrollbarModel::VTable** eax_7 = operator new(0xdc)
struct guiengine::CGUIModel::guiengine::CGUIVScrollbarModel::VTable** var_10_1 = eax_7
int32_t var_4 = 0
struct guiengine::CGUIModel::guiengine::CGUIVScrollbarModel::VTable** result

if (eax_7 == 0)
    result = nullptr
else
    result = sub_696150(eax_7, *(arg1 + 8))

int32_t var_4_1 = 0xffffffff
*(arg1 + 0x28) = result

if (result != 0)
    (*result)->vFunc_4(*(arg1 + 0x10))

fsbase->NtTib.ExceptionList = ExceptionList
return result
