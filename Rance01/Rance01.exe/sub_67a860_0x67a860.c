// 函数: sub_67a860
// 地址: 0x67a860
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_71220b
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t var_20 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
arg2[1] = &guiengine::CEventObserverBase::`vftable'{for `IEventObserver'}
*arg2 = &guiengine::CGUICheckBoxView::`vftable'{for `guiengine::CGUIView'}
arg2[1] = &guiengine::CGUICheckBoxView::`vftable'{for `guiengine::CEventObserverBase'}
arg2[2] = 1
arg2[3].b = 0
arg2[4] = 0xa
struct IInterface::guiengine::CGUIComponent::VTable** eax_3 = operator new(0x3c)
void* arg_8

if (eax_3 == 0)
    eax_3 = nullptr
else
    eax_3[1] = &guiengine::CEventObserverBase::`vftable'{for `IEventObserver'}
    eax_3[2] = 1
    eax_3[3] = 1
    *eax_3 = &guiengine::CGUIComponent::`vftable'{for `IInterface'}
    eax_3[1] = &guiengine::CGUIComponent::`vftable'{for `guiengine::CEventObserverBase'}
    eax_3[4] = 0xffffffff
    eax_3[9] = 1
    void* ecx = arg_8
    eax_3[5] = 0
    eax_3[6] = 0
    eax_3[7] = 0
    eax_3[0xa] = 0
    eax_3[0xb] = 0
    eax_3[0xc] = ecx
    eax_3[0xd] = arg3
    eax_3[0xe] = arg1

arg2[5] = eax_3
struct IInterface::guiengine::CGUIComponent::VTable** eax_4 = operator new(0x3c)

if (eax_4 == 0)
    eax_4 = nullptr
else
    eax_4[1] = &guiengine::CEventObserverBase::`vftable'{for `IEventObserver'}
    eax_4[2] = 2
    *eax_4 = &guiengine::CGUIComponent::`vftable'{for `IInterface'}
    eax_4[1] = &guiengine::CGUIComponent::`vftable'{for `guiengine::CEventObserverBase'}
    eax_4[3] = 1
    eax_4[4] = 0xffffffff
    eax_4[9] = 2
    void* edx_2 = arg_8
    eax_4[5] = 0
    eax_4[6] = 0
    eax_4[7] = 0
    eax_4[0xc] = edx_2
    eax_4[0xa] = 0
    eax_4[0xb] = 0
    eax_4[0xd] = arg3
    eax_4[0xe] = arg1

arg2[6] = eax_4
arg2[7] = 0xffffffff
arg2[8] = 0xffffffff
arg2[9] = 0xffffffff
arg2[0xa].w = 0
arg2[0xb] = 0
arg2[0xd] = arg1
arg2[0xe] = 0
arg2[0xf] = 0
arg2[0x10] = 0
arg2[0x12] = 0
int32_t var_4 = 0
void* ecx_1 = arg2[5]
arg_8 = &arg2[1]

if (arg2 != 0xfffffffc)
    int32_t edx_4 = *(ecx_1 + 0x18)
    int32_t* eax_5 = *(ecx_1 + 0x14)
    
    if (eax_5 == edx_4)
        sub_61b5a0(&arg_8, ecx_1 + 0x14)
    else
        while (*eax_5 != &arg2[1])
            eax_5 = &eax_5[1]
            
            if (eax_5 == edx_4)
                break
        
        if (eax_5 == edx_4)
            sub_61b5a0(&arg_8, ecx_1 + 0x14)

int32_t* edi_4 = &arg2[6]->vFunc_5
arg_8 = &arg2[1]

if (arg2 != 0xfffffffc)
    int32_t ecx_2 = edi_4[1]
    int32_t* eax_7 = *edi_4
    
    if (eax_7 == ecx_2)
        sub_61b5a0(&arg_8, edi_4)
    else
        while (*eax_7 != &arg2[1])
            eax_7 = &eax_7[1]
            
            if (eax_7 == ecx_2)
                break
        
        if (eax_7 == ecx_2)
            sub_61b5a0(&arg_8, edi_4)

void* ebp_1 = arg2[5]
struct guiengine::CGUIModel::guiengine::CGUIPartsModel::VTable** eax_10 = sub_414e30(ebp_1)
int32_t* ecx_3 = *(ebp_1 + 0x38)

if (ecx_3 != 0 && eax_10[2] == 0)
    eax_10[8] = ecx_3
    eax_10[2] = (**ecx_3)(1)

eax_10[3] = *(ebp_1 + 0x30)
eax_10[4] = ebp_1
void* edi_6 = eax_10[2]

if (edi_6 != 0)
    *(edi_6 + 1) = 0

void* ebp_2 = arg2[6]
struct guiengine::CGUIModel::guiengine::CGUIPartsModel::VTable** eax_15 = sub_414e30(ebp_2)
int32_t* ecx_4 = *(ebp_2 + 0x38)

if (ecx_4 != 0 && eax_15[2] == 0)
    eax_15[8] = ecx_4
    eax_15[2] = (**ecx_4)(1)

eax_15[3] = *(ebp_2 + 0x30)
eax_15[4] = ebp_2
void* edi_8 = eax_15[2]

if (edi_8 != 0)
    *(edi_8 + 1) = 0

fsbase->NtTib.ExceptionList = ExceptionList
return arg2
