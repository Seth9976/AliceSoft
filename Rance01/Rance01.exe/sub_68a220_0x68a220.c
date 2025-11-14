// 函数: sub_68a220
// 地址: 0x68a220
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_712191
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t var_20 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
arg1[1] = &guiengine::CEventObserverBase::`vftable'{for `IEventObserver'}
*arg1 = &guiengine::CGUIListBoxView::`vftable'{for `guiengine::CGUIView'}
arg1[1] = &guiengine::CGUIListBoxView::`vftable'{for `guiengine::CEventObserverBase'}
arg1[2] = 1
arg1[3].b = 0
arg1[4] = 0xffffffff
arg1[5] = 0xffffffff
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
    eax_3[5] = 0
    eax_3[6] = 0
    eax_3[7] = 0
    eax_3[0xc] = arg2
    void* ecx_2 = arg_8
    eax_3[0xa] = 0
    eax_3[0xb] = 0
    eax_3[0xd] = arg3
    eax_3[0xe] = ecx_2

arg1[6] = eax_3
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
    eax_4[5] = 0
    eax_4[6] = 0
    eax_4[7] = 0
    eax_4[0xc] = arg2
    void* edx_3 = arg_8
    eax_4[0xa] = 0
    eax_4[0xb] = 0
    eax_4[0xd] = arg3
    eax_4[0xe] = edx_3

arg1[7] = eax_4
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
    eax_5[5] = 0
    eax_5[6] = 0
    eax_5[7] = 0
    eax_5[0xc] = arg2
    void* ecx_5 = arg_8
    eax_5[0xa] = 0
    eax_5[0xb] = 0
    eax_5[0xd] = arg3
    eax_5[0xe] = ecx_5

arg1[8] = eax_5
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
    eax_6[5] = 0
    eax_6[6] = 0
    eax_6[7] = 0
    eax_6[0xc] = arg2
    void* edx_6 = arg_8
    eax_6[0xa] = 0
    eax_6[0xb] = 0
    eax_6[0xd] = arg3
    eax_6[0xe] = edx_6

arg1[9] = eax_6
arg1[0xa] = 0
arg1[0xb] = 0
arg1[0xc] = 0
int32_t var_4 = 0
arg1[0xe] = 5
__builtin_memset(&arg1[0xf], 0xff, 0x14)
arg1[0x14] = 0
arg1[0x15] = 0
arg1[0x16] = 0
void* eax_7 = arg_8
arg1[0x18].b = 0
arg1[0x19] = 0
arg1[0x1b] = eax_7
arg1[0x1c] = arg2
arg1[0x1d] = arg3
arg1[0x1e] = 0
arg1[0x1f] = 0
arg1[0x20] = 0
arg1[0x22] = 0
var_4.b = 2
int32_t* edi_1 = &arg1[6]->vFunc_5
arg_8 = &arg1[1]

if (arg1 != 0xfffffffc)
    int32_t ecx_8 = edi_1[1]
    int32_t* eax_8 = *edi_1
    
    if (eax_8 == ecx_8)
        sub_61b5a0(&arg_8, edi_1)
    else
        while (*eax_8 != &arg1[1])
            eax_8 = &eax_8[1]
            
            if (eax_8 == ecx_8)
                break
        
        if (eax_8 == ecx_8)
            sub_61b5a0(&arg_8, edi_1)

int32_t* edi_3 = &arg1[7]->vFunc_5
arg_8 = &arg1[1]

if (arg1 != 0xfffffffc)
    int32_t ecx_10 = edi_3[1]
    int32_t* eax_10 = *edi_3
    
    if (eax_10 == ecx_10)
        sub_61b5a0(&arg_8, edi_3)
    else
        while (*eax_10 != &arg1[1])
            eax_10 = &eax_10[1]
            
            if (eax_10 == ecx_10)
                break
        
        if (eax_10 == ecx_10)
            sub_61b5a0(&arg_8, edi_3)

int32_t* edi_5 = &arg1[8]->vFunc_5
arg_8 = &arg1[1]

if (arg1 != 0xfffffffc)
    int32_t ecx_11 = edi_5[1]
    int32_t* eax_12 = *edi_5
    
    if (eax_12 == ecx_11)
        sub_61b5a0(&arg_8, edi_5)
    else
        while (*eax_12 != &arg1[1])
            eax_12 = &eax_12[1]
            
            if (eax_12 == ecx_11)
                break
        
        if (eax_12 == ecx_11)
            sub_61b5a0(&arg_8, edi_5)

int32_t* edi_7 = &arg1[9]->vFunc_5
arg_8 = &arg1[1]

if (arg1 != 0xfffffffc)
    int32_t ecx_12 = edi_7[1]
    int32_t* eax_14 = *edi_7
    
    if (eax_14 == ecx_12)
        sub_61b5a0(&arg_8, edi_7)
    else
        while (*eax_14 != &arg1[1])
            eax_14 = &eax_14[1]
            
            if (eax_14 == ecx_12)
                break
        
        if (eax_14 == ecx_12)
            sub_61b5a0(&arg_8, edi_7)

fsbase->NtTib.ExceptionList = ExceptionList
return arg1
