// 函数: sub_688220
// 地址: 0x688220
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_7186c6
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t var_20 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
arg1[1] = &guiengine::CEventObserverBase::`vftable'{for `IEventObserver'}
*arg1 = &guiengine::CGUILabelView::`vftable'{for `guiengine::CGUIView'}
arg1[1] = &guiengine::CGUILabelView::`vftable'{for `guiengine::CEventObserverBase'}
arg1[2] = 1
arg1[3].b = 0
struct IInterface::guiengine::CGUIComponent::VTable** eax_3 = operator new(0x3c)
void* arg_c

if (eax_3 == 0)
    eax_3 = nullptr
else
    void* ecx_1 = arg_c
    eax_3[1] = &guiengine::CEventObserverBase::`vftable'{for `IEventObserver'}
    *eax_3 = &guiengine::CGUIComponent::`vftable'{for `IInterface'}
    eax_3[1] = &guiengine::CGUIComponent::`vftable'{for `guiengine::CEventObserverBase'}
    eax_3[2] = 1
    eax_3[3] = 1
    eax_3[4] = 0xffffffff
    eax_3[5] = 0
    eax_3[6] = 0
    eax_3[7] = 0
    eax_3[9] = 1
    eax_3[0xc] = ecx_1
    eax_3[0xa] = 0
    eax_3[0xb] = 0
    eax_3[0xd] = arg3
    eax_3[0xe] = arg2

arg1[4] = eax_3
arg1[0xa] = 0xf
arg1[9] = 0
arg1[5].b = 0
sub_401270(&arg1[5], nullptr, 0x72d05a)
int32_t var_4 = 0
arg1[0xc] = 0
arg1[0xd] = 0
arg1[0xe] = 0
arg1[0xf] = 0
arg1[0x11] = 0
var_4.b = 1
int32_t* edi_1 = &arg1[4]->vFunc_5
arg_c = &arg1[1]

if (arg1 != 0xfffffffc)
    int32_t edx_2 = edi_1[1]
    int32_t* eax_4 = *edi_1
    
    if (eax_4 == edx_2)
        sub_61b5a0(&arg_c, edi_1)
    else
        while (*eax_4 != &arg1[1])
            eax_4 = &eax_4[1]
            
            if (eax_4 == edx_2)
                break
        
        if (eax_4 == edx_2)
            sub_61b5a0(&arg_c, edi_1)

void* edi_2 = arg1[4]
struct guiengine::CGUIModel::guiengine::CGUIPartsModel::VTable** eax_7 = sub_414e30(edi_2)
int32_t* ecx_4 = *(edi_2 + 0x38)

if (ecx_4 != 0 && eax_7[2] == 0)
    eax_7[8] = ecx_4
    eax_7[2] = (**ecx_4)(1)

eax_7[3] = *(edi_2 + 0x30)
eax_7[4] = edi_2
void* esi_2 = eax_7[2]

if (esi_2 != 0)
    *(esi_2 + 1) = 0

fsbase->NtTib.ExceptionList = ExceptionList
return arg1
