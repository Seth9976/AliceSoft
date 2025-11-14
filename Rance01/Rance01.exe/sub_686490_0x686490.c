// 函数: sub_686490
// 地址: 0x686490
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_71210c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t var_20 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
arg2[1] = &guiengine::CEventObserverBase::`vftable'{for `IEventObserver'}
*arg2 = &guiengine::CGUIHScrollbarView::`vftable'{for `guiengine::CGUIView'}
arg2[1] = &guiengine::CGUIHScrollbarView::`vftable'{for `guiengine::CEventObserverBase'}
arg2[2] = 0
arg2[3] = 1
arg2[4].w = 0
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
    eax_3[0xc] = arg3
    eax_3[0xd] = arg1
    eax_3[0xe] = ecx

arg2[5] = eax_3
struct IInterface::guiengine::CGUIComponent::VTable** eax_4 = operator new(0x3c)

if (eax_4 == 0)
    eax_4 = nullptr
else
    void* edx_1 = arg_8
    eax_4[1] = &guiengine::CEventObserverBase::`vftable'{for `IEventObserver'}
    *eax_4 = &guiengine::CGUIComponent::`vftable'{for `IInterface'}
    eax_4[1] = &guiengine::CGUIComponent::`vftable'{for `guiengine::CEventObserverBase'}
    eax_4[2] = 2
    eax_4[3] = 1
    eax_4[4] = 0xffffffff
    eax_4[5] = 0
    eax_4[6] = 0
    eax_4[7] = 0
    eax_4[9] = 2
    eax_4[0xa] = 0
    eax_4[0xb] = 0
    eax_4[0xc] = arg3
    eax_4[0xd] = arg1
    eax_4[0xe] = edx_1

arg2[6] = eax_4
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
    void* ecx_1 = arg_8
    eax_5[5] = 0
    eax_5[6] = 0
    eax_5[7] = 0
    eax_5[0xa] = 0
    eax_5[0xb] = 0
    eax_5[0xc] = arg3
    eax_5[0xd] = arg1
    eax_5[0xe] = ecx_1

arg2[7] = eax_5
struct IInterface::guiengine::CGUIComponent::VTable** eax_6 = operator new(0x3c)

if (eax_6 == 0)
    eax_6 = nullptr
else
    eax_6[1] = &guiengine::CEventObserverBase::`vftable'{for `IEventObserver'}
    eax_6[2] = 4
    *eax_6 = &guiengine::CGUIComponent::`vftable'{for `IInterface'}
    eax_6[1] = &guiengine::CGUIComponent::`vftable'{for `guiengine::CEventObserverBase'}
    eax_6[3] = 1
    eax_6[4] = 0xffffffff
    eax_6[9] = 4
    void* edx_2 = arg_8
    eax_6[5] = 0
    eax_6[6] = 0
    eax_6[7] = 0
    eax_6[0xa] = 0
    eax_6[0xb] = 0
    eax_6[0xc] = arg3
    eax_6[0xd] = arg1
    eax_6[0xe] = edx_2

arg2[8] = eax_6
arg2[9] = 0x10
__builtin_memset(&arg2[0xa], 0xff, 0x14)
arg2[0xf] = 0
arg2[0x10] = 0
arg2[0x12] = &guiengine::CGUIPlainCG::`vftable'{for `guiengine::IAddConstructionPartsProcess'}
*(arg2 + 0x4d) = 0
arg2[0x14] = 0
int32_t var_4 = 0
arg2[0x15] = &guiengine::CGUIPlainCG::`vftable'{for `guiengine::IAddConstructionPartsProcess'}
*(arg2 + 0x59) = 0
arg2[0x17] = 0
arg2[0x18] = &guiengine::CGUIPlainCG::`vftable'{for `guiengine::IAddConstructionPartsProcess'}
*(arg2 + 0x65) = 0
arg2[0x1a] = 0
arg2[0x1b] = &guiengine::CGUIPlainCG::`vftable'{for `guiengine::IAddConstructionPartsProcess'}
*(arg2 + 0x71) = 0
arg2[0x1d] = 0
arg2[0x1e] = &guiengine::CGUIPlainCG::`vftable'{for `guiengine::IAddConstructionPartsProcess'}
*(arg2 + 0x7d) = 0
arg2[0x20] = 0
arg2[0x21] = &guiengine::CGUIPlainCG::`vftable'{for `guiengine::IAddConstructionPartsProcess'}
*(arg2 + 0x89) = 0
arg2[0x23] = 0
arg2[0x24] = &guiengine::CGUIPlainCG::`vftable'{for `guiengine::IAddConstructionPartsProcess'}
*(arg2 + 0x95) = 0
arg2[0x26] = 0
arg2[0x27] = &guiengine::CGUIPlainCG::`vftable'{for `guiengine::IAddConstructionPartsProcess'}
*(arg2 + 0xa1) = 0
arg2[0x29] = 0
arg2[0x2a] = 0
arg2[0x2b] = 0
arg2[0x2c] = 0
arg2[0x2e] = 0
var_4.b = 8

if (arg2[0x14] != sub_41c5c0)
    *(arg2 + 0x4d) = 1
    arg2[0x14] = sub_41c5c0

if (arg2[0x17] != sub_41c660)
    *(arg2 + 0x59) = 1
    arg2[0x17] = sub_41c660

if (arg2[0x1a] != sub_41c700)
    *(arg2 + 0x65) = 1
    arg2[0x1a] = sub_41c700

if (arg2[0x1d] != sub_41c7a0)
    *(arg2 + 0x71) = 1
    arg2[0x1d] = sub_41c7a0

if (arg2[0x20] != sub_41c840)
    *(arg2 + 0x7d) = 1
    arg2[0x20] = sub_41c840

if (arg2[0x23] != sub_41c8e0)
    *(arg2 + 0x89) = 1
    arg2[0x23] = sub_41c8e0

if (arg2[0x26] != sub_41c980)
    *(arg2 + 0x95) = 1
    arg2[0x26] = sub_41c980

if (arg2[0x29] != sub_41ca20)
    *(arg2 + 0xa1) = 1
    arg2[0x29] = sub_41ca20

int32_t* edi_2 = &arg2[5]->vFunc_5
arg_8 = &arg2[1]

if (arg2 != 0xfffffffc)
    int32_t ecx_2 = edi_2[1]
    int32_t* eax_7 = *edi_2
    
    if (eax_7 == ecx_2)
        sub_61b5a0(&arg_8, edi_2)
    else
        while (*eax_7 != &arg2[1])
            eax_7 = &eax_7[1]
            
            if (eax_7 == ecx_2)
                break
        
        if (eax_7 == ecx_2)
            sub_61b5a0(&arg_8, edi_2)

int32_t* edi_4 = &arg2[6]->vFunc_5
arg_8 = &arg2[1]

if (arg2 != 0xfffffffc)
    int32_t ecx_3 = edi_4[1]
    int32_t* eax_9 = *edi_4
    
    if (eax_9 == ecx_3)
        sub_61b5a0(&arg_8, edi_4)
    else
        while (*eax_9 != &arg2[1])
            eax_9 = &eax_9[1]
            
            if (eax_9 == ecx_3)
                break
        
        if (eax_9 == ecx_3)
            sub_61b5a0(&arg_8, edi_4)

int32_t* edi_6 = &arg2[7]->vFunc_5
arg_8 = &arg2[1]

if (arg2 != 0xfffffffc)
    int32_t ecx_4 = edi_6[1]
    int32_t* eax_11 = *edi_6
    
    if (eax_11 == ecx_4)
        sub_61b5a0(&arg_8, edi_6)
    else
        while (*eax_11 != &arg2[1])
            eax_11 = &eax_11[1]
            
            if (eax_11 == ecx_4)
                break
        
        if (eax_11 == ecx_4)
            sub_61b5a0(&arg_8, edi_6)

int32_t* edi_8 = &arg2[8]->vFunc_5
arg_8 = &arg2[1]

if (arg2 != 0xfffffffc)
    int32_t ecx_5 = edi_8[1]
    int32_t* eax_13 = *edi_8
    
    if (eax_13 == ecx_5)
        sub_61b5a0(&arg_8, edi_8)
    else
        while (*eax_13 != &arg2[1])
            eax_13 = &eax_13[1]
            
            if (eax_13 == ecx_5)
                break
        
        if (eax_13 == ecx_5)
            sub_61b5a0(&arg_8, edi_8)

fsbase->NtTib.ExceptionList = ExceptionList
return arg2
