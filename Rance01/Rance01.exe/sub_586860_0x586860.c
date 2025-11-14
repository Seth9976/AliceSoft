// 函数: sub_586860
// 地址: 0x586860
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_71b69b
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t* var_10 = arg1
int32_t __saved_esi
int32_t var_18 = data_78c474 ^ &__saved_esi
fsbase->NtTib.ExceptionList = &ExceptionList

if (sub_4022d0(arg1, 0x74b358) == 0)
    if (sub_4022d0(arg1, 0x74b368) != 0)
        struct IViewTransitionD3D9::viewtrans::CDXTransition::VTable** eax_7 = operator new(0x30)
        
        if (eax_7 != 0)
            *eax_7 = &viewtrans::CDXTransition::`vftable'{for `IViewTransitionD3D9'}
            eax_7[8] = fconvert.s(float.t(0))
            eax_7[1] = 1
            eax_7[2].b = 0
            eax_7[3] = 0
            eax_7[4] = 0
            eax_7[5] = 0
            eax_7[6].b = 0
            eax_7[7] = 0
            eax_7[9] = 0
            eax_7[0xa] = 0
            eax_7[0xb] = 0
            fsbase->NtTib.ExceptionList = ExceptionList
            return eax_7
else
    struct IViewTransition::viewtrans::CTransition::VTable** eax_4 = operator new(0x3c)
    struct IViewTransition::viewtrans::CTransition::VTable** var_10_1 = eax_4
    int32_t var_4 = 0
    
    if (eax_4 != 0)
        struct IViewTransition::viewtrans::CTransition::VTable** eax_5 = sub_581480(eax_4)
        fsbase->NtTib.ExceptionList = ExceptionList
        return eax_5

fsbase->NtTib.ExceptionList = ExceptionList
return 0
