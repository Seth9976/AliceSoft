// 函数: sub_418a00
// 地址: 0x418a00
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_2 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_71b69b
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t ecx
int32_t var_10 = ecx
int32_t __saved_edi
int32_t var_18 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* result = (*(arg1 + 0x14) - *(arg1 + 0x10)) s>> 2

if (*(arg1 + 0xc) s> result)
    struct guiengine::CEventObserverBase::guiengine::CGUIController::VTable** eax_5 =
        operator new(0x84)
    struct guiengine::CEventObserverBase::guiengine::CGUIController::VTable** var_10_1 = eax_5
    int32_t var_4 = 0
    struct guiengine::CEventObserverBase::guiengine::CGUIController::VTable** arg_4
    struct guiengine::CEventObserverBase::guiengine::CGUIController::VTable** eax_6
    
    if (eax_5 == 0)
        eax_6 = nullptr
    else
        eax_6 =
            sub_417530(*(arg1 + 0x20), eax_5, arg_4, (*(arg1 + 0x14) - *(arg1 + 0x10)) s>> 2, arg1)
    
    int32_t var_4_1 = 0xffffffff
    arg_4 = eax_6
    result = sub_61b5a0(&arg_4, arg1 + 0x10)

fsbase->NtTib.ExceptionList = ExceptionList
return result
