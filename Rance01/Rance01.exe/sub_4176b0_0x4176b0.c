// 函数: sub_4176b0
// 地址: 0x4176b0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_728640
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t eax_2 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
void* ebp = arg1
struct IInterface::guiengine::CGUIComponent::VTable** eax_3 = operator new(0x3c)
struct IInterface::guiengine::CGUIComponent::VTable** edi

if (eax_3 == 0)
    edi = nullptr
else
    void* edx_1
    
    if (ebp == 0)
        edx_1 = nullptr
    else
        edx_1 = ebp + 4
    
    int32_t ecx_1 = *(ebp + 0xc)
    eax_3[1] = &guiengine::CEventObserverBase::`vftable'{for `IEventObserver'}
    eax_3[2] = ecx_1
    *eax_3 = &guiengine::CGUIComponent::`vftable'{for `IInterface'}
    eax_3[1] = &guiengine::CGUIComponent::`vftable'{for `guiengine::CEventObserverBase'}
    eax_3[3] = 1
    eax_3[4] = 0xffffffff
    eax_3[9] = ecx_1
    eax_3[5] = 0
    eax_3[6] = 0
    eax_3[7] = 0
    eax_3[0xa] = 0
    eax_3[0xb] = 0
    eax_3[0xc] = ebp + 0x10
    eax_3[0xd] = 0
    eax_3[0xe] = edx_1
    edi = eax_3

*(ebp + 0x3c) = edi
struct guiengine::CGUIModel::guiengine::CGUIPartsModel::VTable** eax_5 = sub_414e30(edi)
int32_t* ecx_3 = edi[0xe]

if (ecx_3 != 0 && eax_5[2] == 0)
    eax_5[8] = ecx_3
    eax_5[2] = (**ecx_3)(1)

int32_t* edx_3 = data_797da0
eax_5[3] = edi[0xc]
void* eax_9 = eax_5[2]
eax_5[4] = edi
*(ebp + 0x40) = eax_9
*(eax_9 + 1) = 0
*(ebp + 0x14) = ebp + 8
*(ebp + 0x38) = ebp + 4
void* eax_12 = sub_5f7370(*edx_3, eax_5[2]->vFunc_1)

if (eax_12 != 0)
    void* eax_13 = *(eax_12 + 0xc)
    
    if (*(eax_13 + 0x1c) != 0)
        *(eax_13 + 0x1c) = 0
        *(eax_13 + 0xc) = 1

void* eax_15 = sub_5f7370(*data_797da0, eax_5[2]->vFunc_1)

if (eax_15 != 0)
    *(*(eax_15 + 0xc) + 0x4c) = 1

char* edi_3 = data_797d80
int32_t var_10

if (sub_5cadb0(edi_3) != 0)
    var_10 = (*(**(edi_3 + 0x28) + 0x14))(eax_2)
else
    var_10 = 0

char* edi_4 = data_797d80

if (sub_5cadb0(edi_4) != 0)
    arg1 = (*(**(edi_4 + 0x28) + 0x10))(eax_2)
else
    arg1 = nullptr

void* eax_23 = sub_5f7370(*data_797da0, eax_5[2]->vFunc_1)

if (eax_23 != 0)
    if ((*(**(*(eax_23 + 0xb4) + 4) + 8))(eax_2) != 7)
        (*(**(*(eax_23 + 0xb4) + 4) + 4))()
        struct partsengine::CSprite::partsengine::CRectangleDetectionSprite::VTable** eax_28 =
            operator new(0x2c)
        
        if (eax_28 == 0)
            eax_28 = nullptr
        else
            int32_t ecx_15 = *(eax_23 + 0xc)
            *eax_28 = &partsengine::CRectangleDetectionSprite::`vftable'{for `partsengine::CSprite'}
            eax_28[1] = 1
            eax_28[2] = 0
            eax_28[3] = 0
            eax_28[4] = 0
            eax_28[5] = 0
            eax_28[6] = ecx_15 + 0x1b4
            eax_28[7] = 0
            eax_28[8] = 0
            eax_28[9] = 0
            eax_28[0xa] = 0
        
        *(*(eax_23 + 0xb4) + 4) = eax_28
        *(eax_23 + 0x10) = 1
    
    void* eax_29 = *(*(eax_23 + 0xb4) + 4)
    
    if (eax_29 != 0)
        *(eax_29 + 0x10) = arg1
        *(eax_29 + 0x14) = var_10

void* esi_2 = *(ebp + 0x3c)

if (*(esi_2 + 0x28) != 0)
    (*(**(esi_2 + 0x28) + 0x20))(eax_2)

int32_t result = sub_413500(esi_2)

if (*(esi_2 + 0x2c) != 0)
    result = (*(**(esi_2 + 0x2c) + 0xc))(0, *(esi_2 + 0x28))

void* ebp_1 = *(ebp + 0x3c)

if (*(ebp_1 + 0x2c) != 0)
    result = (*(**(ebp_1 + 0x2c) + 0x14))(eax_2)

fsbase->NtTib.ExceptionList = ExceptionList
return result
