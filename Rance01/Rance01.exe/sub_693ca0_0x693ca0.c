// 函数: sub_693ca0
// 地址: 0x693ca0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_712151
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t var_20 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
arg3[1] = &guiengine::CEventObserverBase::`vftable'{for `IEventObserver'}
*arg3 = &guiengine::CGUITextBoxView::`vftable'{for `guiengine::CGUIView'}
arg3[1] = &guiengine::CGUITextBoxView::`vftable'{for `guiengine::CEventObserverBase'}
arg3[2] = 1
arg3[3] = 6
arg3[4].b = 0
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
    eax_3[0xc] = arg2
    eax_3[0xd] = arg1
    eax_3[0xe] = ecx

arg3[5] = eax_3
struct IInterface::guiengine::CGUIComponent::VTable** eax_4 = operator new(0x3c)

if (eax_4 == 0)
    eax_4 = nullptr
else
    void* edx = arg_8
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
    eax_4[0xc] = arg2
    eax_4[0xd] = arg1
    eax_4[0xe] = edx

arg3[6] = eax_4
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
    eax_5[0xc] = arg2
    eax_5[0xd] = arg1
    eax_5[0xe] = ecx_1

arg3[7] = eax_5
struct IInterface::guiengine::CGUIComponent::VTable** eax_6 = operator new(0x3c)

if (eax_6 == 0)
    eax_6 = nullptr
else
    void* edx_1 = arg_8
    eax_6[1] = &guiengine::CEventObserverBase::`vftable'{for `IEventObserver'}
    *eax_6 = &guiengine::CGUIComponent::`vftable'{for `IInterface'}
    eax_6[1] = &guiengine::CGUIComponent::`vftable'{for `guiengine::CEventObserverBase'}
    eax_6[2] = 4
    eax_6[3] = 1
    eax_6[4] = 0xffffffff
    eax_6[5] = 0
    eax_6[6] = 0
    eax_6[7] = 0
    eax_6[9] = 4
    eax_6[0xa] = 0
    eax_6[0xb] = 0
    eax_6[0xc] = arg2
    eax_6[0xd] = arg1
    eax_6[0xe] = edx_1

arg3[8] = eax_6
arg3[9].w = 0
arg3[0xa] = 0xffffffff
arg3[0xb] = 0
arg3[0xc] = 0
arg3[0x12] = 0xf
arg3[0x11] = 0
arg3[0xd].b = 0
sub_401270(&arg3[0xd], nullptr, 0x72ce1a)
int32_t var_4 = 0
arg3[0x19] = 0xf
arg3[0x18] = 0
arg3[0x14].b = 0
sub_401270(&arg3[0x14], nullptr, 0x72ce1b)
arg3[0x1b] = 0
arg3[0x1c] = 0
arg3[0x1e] = 0
arg3[0x1f] = 0
arg3[0x20] = 0
arg3[0x22] = 0
var_4.b = 2
int32_t* edi_2 = &arg3[5]->vFunc_5
arg_8 = &arg3[1]

if (arg3 != 0xfffffffc)
    int32_t ecx_2 = edi_2[1]
    int32_t* eax_7 = *edi_2
    
    if (eax_7 == ecx_2)
        sub_61b5a0(&arg_8, edi_2)
    else
        while (*eax_7 != &arg3[1])
            eax_7 = &eax_7[1]
            
            if (eax_7 == ecx_2)
                break
        
        if (eax_7 == ecx_2)
            sub_61b5a0(&arg_8, edi_2)

int32_t* edi_4 = &arg3[6]->vFunc_5
arg_8 = &arg3[1]

if (arg3 != 0xfffffffc)
    int32_t ecx_3 = edi_4[1]
    int32_t* eax_9 = *edi_4
    
    if (eax_9 == ecx_3)
        sub_61b5a0(&arg_8, edi_4)
    else
        while (*eax_9 != &arg3[1])
            eax_9 = &eax_9[1]
            
            if (eax_9 == ecx_3)
                break
        
        if (eax_9 == ecx_3)
            sub_61b5a0(&arg_8, edi_4)

int32_t* edi_6 = &arg3[7]->vFunc_5
arg_8 = &arg3[1]

if (arg3 != 0xfffffffc)
    int32_t ecx_4 = edi_6[1]
    int32_t* eax_11 = *edi_6
    
    if (eax_11 == ecx_4)
        sub_61b5a0(&arg_8, edi_6)
    else
        while (*eax_11 != &arg3[1])
            eax_11 = &eax_11[1]
            
            if (eax_11 == ecx_4)
                break
        
        if (eax_11 == ecx_4)
            sub_61b5a0(&arg_8, edi_6)

int32_t* edi_8 = &arg3[8]->vFunc_5
arg_8 = &arg3[1]

if (arg3 != 0xfffffffc)
    int32_t ecx_5 = edi_8[1]
    int32_t* eax_13 = *edi_8
    
    if (eax_13 == ecx_5)
        sub_61b5a0(&arg_8, edi_8)
    else
        while (*eax_13 != &arg3[1])
            eax_13 = &eax_13[1]
            
            if (eax_13 == ecx_5)
                break
        
        if (eax_13 == ecx_5)
            sub_61b5a0(&arg_8, edi_8)

void* edi_9 = arg3[5]
struct guiengine::CGUIModel::guiengine::CGUIPartsModel::VTable** eax_16 = sub_414e30(edi_9)
int32_t* ecx_6 = *(edi_9 + 0x38)

if (ecx_6 != 0 && eax_16[2] == 0)
    eax_16[8] = ecx_6
    eax_16[2] = (**ecx_6)(1)

eax_16[3] = *(edi_9 + 0x30)
eax_16[4] = edi_9
void* esi_5 = eax_16[2]

if (esi_5 != 0)
    *(esi_5 + 1) = 0

void* edi_10 = arg3[6]
struct guiengine::CGUIModel::guiengine::CGUIPartsModel::VTable** eax_21 = sub_414e30(edi_10)
int32_t* ecx_7 = *(edi_10 + 0x38)

if (ecx_7 != 0 && eax_21[2] == 0)
    eax_21[8] = ecx_7
    eax_21[2] = (**ecx_7)(1)

eax_21[3] = *(edi_10 + 0x30)
eax_21[4] = edi_10
void* esi_7 = eax_21[2]

if (esi_7 != 0)
    *(esi_7 + 1) = 0

void* edi_11 = arg3[7]
struct guiengine::CGUIModel::guiengine::CGUIPartsModel::VTable** eax_25 = sub_414e30(edi_11)
int32_t* ecx_9 = *(edi_11 + 0x38)

if (ecx_9 != 0 && eax_25[2] == 0)
    eax_25[8] = ecx_9
    eax_25[2] = (**ecx_9)(1)

eax_25[3] = *(edi_11 + 0x30)
eax_25[4] = edi_11
void* esi_9 = eax_25[2]

if (esi_9 != 0)
    *(esi_9 + 1) = 0

void* edi_12 = arg3[8]
struct guiengine::CGUIModel::guiengine::CGUIPartsModel::VTable** eax_29 = sub_414e30(edi_12)
int32_t* ecx_11 = *(edi_12 + 0x38)

if (ecx_11 != 0 && eax_29[2] == 0)
    eax_29[8] = ecx_11
    eax_29[2] = (**ecx_11)(1)

eax_29[3] = *(edi_12 + 0x30)
eax_29[4] = edi_12
void* esi_11 = eax_29[2]

if (esi_11 != 0)
    *(esi_11 + 1) = 0

fsbase->NtTib.ExceptionList = ExceptionList
return arg3
