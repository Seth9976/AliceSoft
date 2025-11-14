// 函数: sub_67bed0
// 地址: 0x67bed0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_c = 0xffffffff
int32_t (* var_10)(void* arg1) = sub_7285e0
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t eax_2 = data_78c474 ^ &__saved_edi
struct _EXCEPTION_REGISTRATION_RECORD** result = &ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList

if (arg1 != 0)
    void* edi_1 = *(arg2 + 0x18)
    struct guiengine::CGUIModel::guiengine::CGUIPartsModel::VTable** eax_5 = sub_414e30(edi_1)
    int32_t* ecx = *(edi_1 + 0x38)
    
    if (ecx != 0 && eax_5[2] == 0)
        eax_5[8] = ecx
        eax_5[2] = (**ecx)(1)
    
    eax_5[3] = *(edi_1 + 0x30)
    eax_5[4] = edi_1
    void* edi_2 = *(arg2 + 0x14)
    struct guiengine::CGUIModel::guiengine::CGUIPartsModel::VTable** eax_10 = sub_414e30(edi_2)
    int32_t* ecx_2 = *(edi_2 + 0x38)
    
    if (ecx_2 != 0 && eax_10[2] == 0)
        eax_10[8] = ecx_2
        eax_10[2] = (**ecx_2)(1)
    
    eax_10[3] = *(edi_2 + 0x30)
    eax_10[4] = edi_2
    
    if (*(arg1 + 0x26) != 0)
        if (sub_699780(arg1 + 0xdc) != 0)
            sub_697d10(eax_10[2]->vFunc_1, arg1 + 0xdc, 0, 1)
        else
            int32_t eax_20 = *(arg1 + 0x1c)
            
            if (eax_20 s> 0)
                int32_t var_40_6 = *(arg1 + 0x20)
                sub_67b2f0(arg2, eax_20)
    else if (sub_699780(arg1 + 0x88) != 0)
        sub_697d10(eax_10[2]->vFunc_1, arg1 + 0x88, 0, 1)
        int32_t eax_17 = sub_699840(arg1 + 0x88)
        
        if (*(arg1 + 0x1c) != eax_17)
            *(arg1 + 0x1c) = eax_17
            *(arg1 + 0x14c) = 1
        
        int32_t eax_18 = sub_699900(arg1 + 0x88)
        
        if (*(arg1 + 0x20) != eax_18)
            *(arg1 + 0x20) = eax_18
            *(arg1 + 0x14c) = 1
    else
        int32_t eax_15 = *(arg1 + 0x1c)
        
        if (eax_15 s> 0)
            int32_t var_40_2 = *(arg1 + 0x20)
            sub_67ab70(arg2, eax_15)
    
    void* edi_5
    
    if (*(arg1 + 0x26) != 0)
        edi_5 = arg1 + 0xf8
        
        if (sub_699780(edi_5) != 0)
            sub_697d10(eax_10[2]->vFunc_1, edi_5, 0, 2)
        else
            int32_t eax_28 = *(arg1 + 0x1c)
            
            if (eax_28 s> 0)
                int32_t var_40_10 = *(arg1 + 0x20)
                sub_67b570(arg2, eax_28)
    else
        edi_5 = arg1 + 0xa4
        
        if (sub_699780(edi_5) != 0)
            sub_697d10(eax_10[2]->vFunc_1, edi_5, 0, 2)
        else
            int32_t eax_24 = *(arg1 + 0x1c)
            
            if (eax_24 s> 0)
                int32_t var_40_8 = *(arg1 + 0x20)
                sub_67adf0(arg2, eax_24)
    void* edi_7
    void* edi_6
    
    if (*(arg1 + 0x26) != 0)
        edi_6 = arg1 + 0x114
        
        if (sub_699780(edi_6) != 0)
            sub_697d10(eax_10[2]->vFunc_1, edi_6, 0, 3)
            edi_7 = arg2
        else
            int32_t eax_34 = *(arg1 + 0x1c)
            
            if (eax_34 s> 0)
                int32_t var_40_14 = *(arg1 + 0x20)
                sub_67b7f0(arg2, eax_34)
            
            edi_7 = arg2
    else
        edi_6 = arg1 + 0xc0
        
        if (sub_699780(edi_6) != 0)
            sub_697d10(eax_10[2]->vFunc_1, edi_6, 0, 3)
            edi_7 = arg2
        else
            int32_t eax_30 = *(arg1 + 0x1c)
            edi_7 = arg2
            
            if (eax_30 s> 0)
                int32_t var_40_12 = *(arg1 + 0x20)
                sub_67b070(edi_7, eax_30)
    int32_t var_2c = 0
    int32_t var_28 = 0
    sub_67c770(&var_2c, &var_28, arg1 + 0x34, arg1 + 0x130)
    int32_t esi_2 = var_2c
    
    if (esi_2 s> 0)
        int32_t ebx_3 = var_28
        
        if (ebx_3 s> 0)
            int32_t var_40_16 = 1
            sub_41b340(eax_5)
            sub_41b390(eax_5, esi_2, ebx_3, 1)
            sub_41b500(eax_5, 0, 0, esi_2, ebx_3, 0, 1)
            sub_6989a0(arg1 + 0x34, eax_5[2]->vFunc_1, 0, 0, arg1 + 0x130, 0, 0, 1)
            void* eax_42 = sub_5f7370(*data_797da0, eax_5[2]->vFunc_1)
            
            if (eax_42 != 0)
                if ((*(**(*(eax_42 + 0xb4) + 4) + 8))(eax_2) != 8)
                    (*(**(*(eax_42 + 0xb4) + 4) + 4))()
                    struct partsengine::CSprite::partsengine::CConstructionSprite::VTable** 
                        eax_46 = operator new(0x4c)
                    struct partsengine::CSprite::partsengine::CConstructionSprite::VTable** eax_47
                    
                    if (eax_46 == 0)
                        eax_47 = nullptr
                    else
                        eax_47 = sub_5e0230(*(eax_42 + 0x3c), *(eax_42 + 0x38), *(eax_42 + 0x34), 
                            *(eax_42 + 0xc) + 0x1b4, eax_46)
                    
                    *(*(eax_42 + 0xb4) + 4) = eax_47
                    *(eax_42 + 0x10) = 1
                
                void* eax_48 = *(*(eax_42 + 0xb4) + 4)
                
                if (eax_48 != 0)
                    sub_5e4050(eax_48)
            
            edi_7 = arg2
    
    void* esi_4 = *(edi_7 + 0x14)
    
    if (*(esi_4 + 0x28) != 0)
        (*(**(esi_4 + 0x28) + 0x20))(eax_2)
    
    sub_413500(esi_4)
    
    if (*(esi_4 + 0x2c) != 0)
        (*(**(esi_4 + 0x2c) + 0xc))(arg3, *(esi_4 + 0x28))
    
    void* esi_5 = *(edi_7 + 0x18)
    
    if (*(esi_5 + 0x28) != 0)
        (*(**(esi_5 + 0x28) + 0x20))(eax_2)
    
    result = sub_413500(esi_5)
    
    if (*(esi_5 + 0x2c) != 0)
        result = (*(**(esi_5 + 0x2c) + 0xc))(arg3, *(esi_5 + 0x28))
    
    if (*(edi_7 + 0xc) == 0)
        for (int32_t* i = *(edi_7 + 0x38); i != *(edi_7 + 0x3c); i = &i[1])
            result = (*(**i + 0x50))(*(edi_7 + 0x48))

fsbase->NtTib.ExceptionList = ExceptionList
return result
