// 函数: sub_67dbe0
// 地址: 0x67dbe0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_7121dc
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t var_20 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
arg2[1] = &guiengine::CEventObserverBase::`vftable'{for `IEventObserver'}
*arg2 = &guiengine::CGUIComboBoxView::`vftable'{for `guiengine::CGUIView'}
arg2[1] = &guiengine::CGUIComboBoxView::`vftable'{for `guiengine::CEventObserverBase'}
arg2[2] = 1
arg2[3].b = 0
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

arg2[4] = eax_3
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
    void* ecx_1 = arg_8
    eax_4[5] = 0
    eax_4[6] = 0
    eax_4[7] = 0
    eax_4[0xa] = 0
    eax_4[0xb] = 0
    eax_4[0xc] = ecx_1
    eax_4[0xd] = arg3
    eax_4[0xe] = arg1

arg2[5] = eax_4
struct IInterface::guiengine::CGUIComponent::VTable** eax_5 = operator new(0x3c)

if (eax_5 == 0)
    eax_5 = nullptr
else
    eax_5[1] = &guiengine::CEventObserverBase::`vftable'{for `IEventObserver'}
    eax_5[2] = 3
    *eax_5 = &guiengine::CGUIComponent::`vftable'{for `IInterface'}
    eax_5[1] = &guiengine::CGUIComponent::`vftable'{for `guiengine::CEventObserverBase'}
    eax_5[3] = 1
    eax_5[4] = 0xffffffff
    eax_5[9] = 3
    void* edx_3 = arg_8
    eax_5[5] = 0
    eax_5[6] = 0
    eax_5[7] = 0
    eax_5[0xc] = edx_3
    eax_5[0xd] = arg3
    eax_5[0xa] = 0
    eax_5[0xb] = 0
    eax_5[0xe] = arg1

arg2[6] = eax_5
arg2[7] = 0xffffffff
arg2[8] = 0xffffffff
arg2[9] = 0xffffffff
arg2[0xa] = 0xffffffff
arg2[0xb].b = 0
arg2[0xc] = 0
arg2[0xe] = &guiengine::CGUIPlainCG::`vftable'{for `guiengine::IAddConstructionPartsProcess'}
*(arg2 + 0x3d) = 0
arg2[0x10] = 0
int32_t var_4 = 0
arg2[0x11] = &guiengine::CGUIPlainCG::`vftable'{for `guiengine::IAddConstructionPartsProcess'}
*(arg2 + 0x49) = 0
arg2[0x13] = 0
arg2[0x14] = &guiengine::CGUIPlainCG::`vftable'{for `guiengine::IAddConstructionPartsProcess'}
*(arg2 + 0x55) = 0
arg2[0x16] = 0
arg2[0x17] = arg1
arg2[0x18] = 0
arg2[0x19] = 0
arg2[0x1a] = 0
arg2[0x1c] = 0
var_4.b = 3

if (arg2[0x10] != sub_41c340)
    *(arg2 + 0x3d) = 1
    arg2[0x10] = sub_41c340

if (arg2[0x13] != sub_41c3e0)
    *(arg2 + 0x49) = 1
    arg2[0x13] = sub_41c3e0

if (arg2[0x16] != sub_41c480)
    *(arg2 + 0x55) = 1
    arg2[0x16] = sub_41c480

int32_t* edi_2 = &arg2[4]->vFunc_5
arg_8 = &arg2[1]

if (arg2 != 0xfffffffc)
    int32_t ecx_2 = edi_2[1]
    int32_t* eax_6 = *edi_2
    
    if (eax_6 == ecx_2)
        sub_61b5a0(&arg_8, edi_2)
    else
        while (*eax_6 != &arg2[1])
            eax_6 = &eax_6[1]
            
            if (eax_6 == ecx_2)
                break
        
        if (eax_6 == ecx_2)
            sub_61b5a0(&arg_8, edi_2)

int32_t* edi_4 = &arg2[5]->vFunc_5
arg_8 = &arg2[1]

if (arg2 != 0xfffffffc)
    int32_t ecx_3 = edi_4[1]
    int32_t* eax_8 = *edi_4
    
    if (eax_8 == ecx_3)
        sub_61b5a0(&arg_8, edi_4)
    else
        while (*eax_8 != &arg2[1])
            eax_8 = &eax_8[1]
            
            if (eax_8 == ecx_3)
                break
        
        if (eax_8 == ecx_3)
            sub_61b5a0(&arg_8, edi_4)

int32_t* edi_6 = &arg2[6]->vFunc_5
arg_8 = &arg2[1]

if (arg2 != 0xfffffffc)
    int32_t ecx_4 = edi_6[1]
    int32_t* eax_10 = *edi_6
    
    if (eax_10 == ecx_4)
        sub_61b5a0(&arg_8, edi_6)
    else
        while (*eax_10 != &arg2[1])
            eax_10 = &eax_10[1]
            
            if (eax_10 == ecx_4)
                break
        
        if (eax_10 == ecx_4)
            sub_61b5a0(&arg_8, edi_6)

fsbase->NtTib.ExceptionList = ExceptionList
return arg2
