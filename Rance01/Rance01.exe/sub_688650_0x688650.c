// 函数: sub_688650
// 地址: 0x688650
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_2 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_72858b
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t eax_2 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
void* result = arg3

if (result != 0)
    void* esi_1 = *(arg1 + 0x10)
    int32_t ebx_1 = *(result + 0x1c)
    void* edi_1 = *(result + 0x20)
    struct guiengine::CGUIModel::guiengine::CGUIPartsModel::VTable** eax_4 = sub_414e30(esi_1)
    int32_t* ecx_2 = *(esi_1 + 0x38)
    
    if (ecx_2 != 0 && eax_4[2] == 0)
        eax_4[8] = ecx_2
        int32_t eax_6
        eax_6, ecx_2 = (**ecx_2)(1)
        eax_4[2] = eax_6
    
    int32_t eax_7 = *(esi_1 + 0x30)
    eax_4[4] = esi_1
    void* esi_2 = arg3
    eax_4[3] = eax_7
    eax_7.b = *(esi_2 + 0x2a)
    
    if (eax_7.b == 0)
        sub_41b0f0(ecx_2, esi_2 + 0x48, eax_4, 1)
        sub_698020(eax_4[2]->vFunc_1, result + 0x2c, 1)
        void* eax_12 = sub_5f7370(*data_797da0, eax_4[2]->vFunc_1)
        ebx_1 = 0
        
        if (eax_12 != 0)
            if ((*(**(*(eax_12 + 0xb4) + 4) + 8))(eax_2) != 3)
                (*(**(*(eax_12 + 0xb4) + 4) + 4))()
                struct partsengine::CSprite::partsengine::CTextSprite::VTable** eax_16 =
                    operator new(0x98)
                struct partsengine::CSprite::partsengine::CTextSprite::VTable** var_20_1 = eax_16
                int32_t var_4 = 2
                struct partsengine::CSprite::partsengine::CTextSprite::VTable** eax_17
                
                if (eax_16 == 0)
                    eax_17 = nullptr
                else
                    eax_17 = sub_5fc2d0(eax_16, *(eax_12 + 0x34), *(eax_12 + 0x3c))
                
                int32_t var_4_1 = 0xffffffff
                *(*(eax_12 + 0xb4) + 4) = eax_17
                *(eax_12 + 0x10) = 1
            
            void* edx_8 = *(eax_12 + 0xb4)
            void* esi_4 = *(edx_8 + 4)
            
            if (esi_4 != 0)
                int32_t var_1c = 0
                int32_t var_18_1 = 0
                int32_t var_14_1 = 0
                int32_t var_10_1 = 0
                
                if (sub_5f7e00(&var_1c, edx_8, esi_4 + 0x84) == 0)
                    *(esi_4 + 0x84) = 0
                    *(esi_4 + 0x88) = 0
                    *(esi_4 + 0x8c) = 0
                    *(esi_4 + 0x90) = 0
                    *(esi_4 + 0x95) = 1
        
        void* eax_21 = sub_5f7370(*data_797da0, eax_4[2]->vFunc_1)
        
        if (eax_21 != 0)
            int32_t eax_24
            
            if ((*(**(*(eax_21 + 0xb4) + 4) + 0x34))(eax_2) != 0)
                eax_24 = (*(**(*(eax_21 + 0xb4) + 4) + 0x4c))()
            else
                eax_24 = 0
            
            ebx_1 = eax_24
        
        void* eax_27 = sub_5f7370(*data_797da0, eax_4[2]->vFunc_1)
        
        if (eax_27 != 0)
            if ((*(**(*(eax_27 + 0xb4) + 4) + 0x34))(eax_2) != 0)
                eax_27 = (*(**(*(eax_27 + 0xb4) + 4) + 0x50))()
            else
                eax_27 = nullptr
        
        esi_2 = arg3
        edi_1 = eax_27
    
    if (ebx_1 == 0 || edi_1 == 0)
        void* eax_46 = sub_5f7370(*data_797da0, eax_4[2]->vFunc_1)
        
        if (eax_46 != 0)
            void* eax_47 = *(eax_46 + 0xc)
            
            if (*(eax_47 + 0x24) != 0)
                *(eax_47 + 0x24) = 0
                *(eax_47 + 0xc) = 1
    else
        int32_t var_3c_2 = 1
        sub_41b340(eax_4)
        sub_41b390(eax_4, ebx_1, edi_1, 1)
        sub_41b500(eax_4, 0, 0, ebx_1, edi_1, 0, 1)
        sub_6989a0(esi_2 + 0x48, eax_4[2]->vFunc_1, 0, 0, result + 0x2c, 0, 0, 1)
        void* eax_37 = sub_5f7370(*data_797da0, eax_4[2]->vFunc_1)
        
        if (eax_37 != 0)
            if ((*(**(*(eax_37 + 0xb4) + 4) + 8))(eax_2) != 8)
                (*(**(*(eax_37 + 0xb4) + 4) + 4))()
                struct partsengine::CSprite::partsengine::CConstructionSprite::VTable** eax_42 =
                    operator new(0x4c)
                struct partsengine::CSprite::partsengine::CConstructionSprite::VTable** eax_43
                
                if (eax_42 == 0)
                    eax_43 = nullptr
                else
                    eax_43 = sub_5e0230(*(eax_37 + 0x3c), *(eax_37 + 0x38), *(eax_37 + 0x34), 
                        *(eax_37 + 0xc) + 0x1b4, eax_42)
                
                *(*(eax_37 + 0xb4) + 4) = eax_43
                *(eax_37 + 0x10) = 1
            
            void* eax_44 = *(*(eax_37 + 0xb4) + 4)
            
            if (eax_44 != 0)
                sub_5e4050(eax_44)
    
    if (sub_405d70(result + 0x2c, arg1 + 0x14) == 0)
        sub_401180(arg1 + 0x14, 0xffffffff, result + 0x2c, 0)
    
    void* esi_7 = *(arg1 + 0x10)
    
    if (*(esi_7 + 0x28) != 0)
        (*(**(esi_7 + 0x28) + 0x20))(eax_2)
    
    result = sub_413500(esi_7)
    
    if (*(esi_7 + 0x2c) != 0)
        result = (*(**(esi_7 + 0x2c) + 0xc))(arg2, *(esi_7 + 0x28))
    
    if (*(arg1 + 0xc) == 0)
        for (int32_t* i = *(arg1 + 0x34); i != *(arg1 + 0x38); i = &i[1])
            result = (*(**i + 0x50))(*(arg1 + 0x44))

fsbase->NtTib.ExceptionList = ExceptionList
return result
