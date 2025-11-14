// 函数: sub_68ecf0
// 地址: 0x68ecf0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_7185e4
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t var_20 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
arg2[1] = &guiengine::CEventObserverBase::`vftable'{for `IEventObserver'}
*arg2 = &guiengine::CGUIMultiTextBoxView::`vftable'{for `guiengine::CGUIView'}
arg2[1] = &guiengine::CGUIMultiTextBoxView::`vftable'{for `guiengine::CEventObserverBase'}
arg2[2] = 1
arg2[3].w = 0
struct IInterface::guiengine::CGUIComponent::VTable** eax_3 = operator new(0x3c)
void* arg_c

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
    void* ecx = arg_c
    eax_3[5] = 0
    eax_3[6] = 0
    eax_3[7] = 0
    eax_3[0xa] = 0
    eax_3[0xb] = 0
    eax_3[0xc] = ecx
    eax_3[0xd] = arg1
    eax_3[0xe] = arg3

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
    void* ecx_1 = arg_c
    eax_4[5] = 0
    eax_4[6] = 0
    eax_4[7] = 0
    eax_4[0xa] = 0
    eax_4[0xb] = 0
    eax_4[0xc] = ecx_1
    eax_4[0xd] = arg1
    eax_4[0xe] = arg3

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
    void* ecx_2 = arg_c
    eax_5[5] = 0
    eax_5[6] = 0
    eax_5[7] = 0
    eax_5[0xa] = 0
    eax_5[0xb] = 0
    eax_5[0xc] = ecx_2
    eax_5[0xd] = arg1
    eax_5[0xe] = arg3

arg2[6] = eax_5
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
    void* ecx_3 = arg_c
    eax_6[5] = 0
    eax_6[6] = 0
    eax_6[7] = 0
    eax_6[0xa] = 0
    eax_6[0xb] = 0
    eax_6[0xc] = ecx_3
    eax_6[0xd] = arg1
    eax_6[0xe] = arg3

arg2[7] = eax_6
struct IInterface::guiengine::CGUIComponent::VTable** eax_7 = operator new(0x3c)

if (eax_7 == 0)
    eax_7 = nullptr
else
    eax_7[1] = &guiengine::CEventObserverBase::`vftable'{for `IEventObserver'}
    eax_7[2] = 5
    *eax_7 = &guiengine::CGUIComponent::`vftable'{for `IInterface'}
    eax_7[1] = &guiengine::CGUIComponent::`vftable'{for `guiengine::CEventObserverBase'}
    eax_7[3] = 1
    eax_7[4] = 0xffffffff
    eax_7[9] = 5
    void* ecx_4 = arg_c
    eax_7[5] = 0
    eax_7[6] = 0
    eax_7[7] = 0
    eax_7[0xa] = 0
    eax_7[0xb] = 0
    eax_7[0xc] = ecx_4
    eax_7[0xd] = arg1
    eax_7[0xe] = arg3

arg2[8] = eax_7
struct IInterface::guiengine::CGUIComponent::VTable** eax_8 = operator new(0x3c)

if (eax_8 == 0)
    eax_8 = nullptr
else
    eax_8[1] = &guiengine::CEventObserverBase::`vftable'{for `IEventObserver'}
    eax_8[2] = 6
    *eax_8 = &guiengine::CGUIComponent::`vftable'{for `IInterface'}
    eax_8[1] = &guiengine::CGUIComponent::`vftable'{for `guiengine::CEventObserverBase'}
    eax_8[3] = 1
    eax_8[4] = 0xffffffff
    eax_8[9] = 6
    void* ecx_5 = arg_c
    eax_8[5] = 0
    eax_8[6] = 0
    eax_8[7] = 0
    eax_8[0xa] = 0
    eax_8[0xb] = 0
    eax_8[0xc] = ecx_5
    eax_8[0xd] = arg1
    eax_8[0xe] = arg3

__builtin_memset(&arg2[0xa], 0xff, 0x1c)
arg2[0x14] = 0xffffffff
arg2[0x15] = 0xffffffff
arg2[9] = eax_8
arg2[0x11] = 0x10
arg2[0x12] = 3
arg2[0x13].w = 0
*(arg2 + 0x4e) = 0
arg2[0x16] = 0
arg2[0x17] = 0
arg2[0x1d] = 0xf
arg2[0x1c] = 0
arg2[0x18].b = 0
sub_401270(&arg2[0x18], nullptr, 0x72cf39)
int32_t var_4 = 0
arg2[0x24] = 0xf
arg2[0x23] = 0
arg2[0x1f].b = 0
sub_401270(&arg2[0x1f], nullptr, 0x72cf3a)
arg2[0x26] = 0
arg2[0x28] = 0
arg2[0x29] = 0
arg2[0x2a] = 0
arg2[0x2c] = 0
var_4.b = 2
int32_t* edi_2 = &arg2[4]->vFunc_5
arg_c = &arg2[1]

if (arg2 != 0xfffffffc)
    int32_t ecx_6 = edi_2[1]
    int32_t* eax_9 = *edi_2
    
    if (eax_9 == ecx_6)
        sub_61b5a0(&arg_c, edi_2)
    else
        while (*eax_9 != &arg2[1])
            eax_9 = &eax_9[1]
            
            if (eax_9 == ecx_6)
                break
        
        if (eax_9 == ecx_6)
            sub_61b5a0(&arg_c, edi_2)

int32_t* edi_4 = &arg2[5]->vFunc_5
arg_c = &arg2[1]

if (arg2 != 0xfffffffc)
    int32_t ecx_7 = edi_4[1]
    int32_t* eax_11 = *edi_4
    
    if (eax_11 == ecx_7)
        sub_61b5a0(&arg_c, edi_4)
    else
        while (*eax_11 != &arg2[1])
            eax_11 = &eax_11[1]
            
            if (eax_11 == ecx_7)
                break
        
        if (eax_11 == ecx_7)
            sub_61b5a0(&arg_c, edi_4)

int32_t* edi_6 = &arg2[6]->vFunc_5
arg_c = &arg2[1]

if (arg2 != 0xfffffffc)
    int32_t ecx_8 = edi_6[1]
    int32_t* eax_13 = *edi_6
    
    if (eax_13 == ecx_8)
        sub_61b5a0(&arg_c, edi_6)
    else
        while (*eax_13 != &arg2[1])
            eax_13 = &eax_13[1]
            
            if (eax_13 == ecx_8)
                break
        
        if (eax_13 == ecx_8)
            sub_61b5a0(&arg_c, edi_6)

int32_t* edi_8 = &arg2[7]->vFunc_5
arg_c = &arg2[1]

if (arg2 != 0xfffffffc)
    int32_t ecx_9 = edi_8[1]
    int32_t* eax_15 = *edi_8
    
    if (eax_15 == ecx_9)
        sub_61b5a0(&arg_c, edi_8)
    else
        while (*eax_15 != &arg2[1])
            eax_15 = &eax_15[1]
            
            if (eax_15 == ecx_9)
                break
        
        if (eax_15 == ecx_9)
            sub_61b5a0(&arg_c, edi_8)

int32_t* edi_10 = &arg2[8]->vFunc_5
arg_c = &arg2[1]

if (arg2 != 0xfffffffc)
    int32_t ecx_10 = edi_10[1]
    int32_t* eax_17 = *edi_10
    
    if (eax_17 == ecx_10)
        sub_61b5a0(&arg_c, edi_10)
    else
        while (*eax_17 != &arg2[1])
            eax_17 = &eax_17[1]
            
            if (eax_17 == ecx_10)
                break
        
        if (eax_17 == ecx_10)
            sub_61b5a0(&arg_c, edi_10)

int32_t* edi_12 = &arg2[9]->vFunc_5
arg_c = &arg2[1]

if (arg2 != 0xfffffffc)
    int32_t ecx_11 = edi_12[1]
    int32_t* eax_19 = *edi_12
    
    if (eax_19 == ecx_11)
        sub_61b5a0(&arg_c, edi_12)
    else
        while (*eax_19 != &arg2[1])
            eax_19 = &eax_19[1]
            
            if (eax_19 == ecx_11)
                break
        
        if (eax_19 == ecx_11)
            sub_61b5a0(&arg_c, edi_12)

void* edi_13 = arg2[4]
struct guiengine::CGUIModel::guiengine::CGUIPartsModel::VTable** eax_22 = sub_414e30(edi_13)
int32_t* ecx_12 = *(edi_13 + 0x38)

if (ecx_12 != 0 && eax_22[2] == 0)
    eax_22[8] = ecx_12
    eax_22[2] = (**ecx_12)(1)

eax_22[3] = *(edi_13 + 0x30)
eax_22[4] = edi_13
void* esi_4 = eax_22[2]

if (esi_4 != 0)
    *(esi_4 + 1) = 0

void* edi_14 = arg2[5]
struct guiengine::CGUIModel::guiengine::CGUIPartsModel::VTable** eax_27 = sub_414e30(edi_14)
int32_t* ecx_13 = *(edi_14 + 0x38)

if (ecx_13 != 0 && eax_27[2] == 0)
    eax_27[8] = ecx_13
    eax_27[2] = (**ecx_13)(1)

eax_27[3] = *(edi_14 + 0x30)
eax_27[4] = edi_14
void* esi_6 = eax_27[2]

if (esi_6 != 0)
    *(esi_6 + 1) = 0

void* edi_15 = arg2[6]
struct guiengine::CGUIModel::guiengine::CGUIPartsModel::VTable** eax_31 = sub_414e30(edi_15)
int32_t* ecx_15 = *(edi_15 + 0x38)

if (ecx_15 != 0 && eax_31[2] == 0)
    eax_31[8] = ecx_15
    eax_31[2] = (**ecx_15)(1)

eax_31[3] = *(edi_15 + 0x30)
eax_31[4] = edi_15
void* esi_8 = eax_31[2]

if (esi_8 != 0)
    *(esi_8 + 1) = 0

void* edi_16 = arg2[7]
struct guiengine::CGUIModel::guiengine::CGUIPartsModel::VTable** eax_35 = sub_414e30(edi_16)
int32_t* ecx_17 = *(edi_16 + 0x38)

if (ecx_17 != 0 && eax_35[2] == 0)
    eax_35[8] = ecx_17
    eax_35[2] = (**ecx_17)(1)

eax_35[3] = *(edi_16 + 0x30)
eax_35[4] = edi_16
void* esi_10 = eax_35[2]

if (esi_10 != 0)
    *(esi_10 + 1) = 0

fsbase->NtTib.ExceptionList = ExceptionList
return arg2
