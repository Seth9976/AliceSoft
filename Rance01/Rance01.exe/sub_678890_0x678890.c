// 函数: sub_678890
// 地址: 0x678890
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_71223b
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t var_20 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
arg1[1] = &guiengine::CEventObserverBase::`vftable'{for `IEventObserver'}
*arg1 = &guiengine::CGUICGBoxView::`vftable'{for `guiengine::CGUIView'}
arg1[1] = &guiengine::CGUICGBoxView::`vftable'{for `guiengine::CEventObserverBase'}
arg1[2] = 1
arg1[3].b = 0
arg1[4] = 0
arg1[5] = 0
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

arg1[6] = eax_3
arg1[7] = 0
arg1[9] = 0
arg1[0xa] = 0
arg1[0xb] = 0
arg1[0xd] = 0
int32_t var_4 = 0
void* ecx_3 = arg1[6]
arg_c = &arg1[1]

if (arg1 != 0xfffffffc)
    int32_t edx_2 = *(ecx_3 + 0x18)
    int32_t* eax_4 = *(ecx_3 + 0x14)
    
    if (eax_4 == edx_2)
        sub_61b5a0(&arg_c, ecx_3 + 0x14)
    else
        while (*eax_4 != &arg1[1])
            eax_4 = &eax_4[1]
            
            if (eax_4 == edx_2)
                break
        
        if (eax_4 == edx_2)
            sub_61b5a0(&arg_c, ecx_3 + 0x14)

void* ebp = arg1[6]
struct guiengine::CGUIModel::guiengine::CGUIPartsModel::VTable** eax_7 = sub_414e30(ebp)
int32_t* ecx_4 = *(ebp + 0x38)

if (ecx_4 != 0 && eax_7[2] == 0)
    eax_7[8] = ecx_4
    eax_7[2] = (**ecx_4)(1)

eax_7[3] = *(ebp + 0x30)
eax_7[4] = ebp
void* edi_3 = eax_7[2]

if (edi_3 != 0)
    *(edi_3 + 1) = 0

fsbase->NtTib.ExceptionList = ExceptionList
return arg1
