// 函数: sub_678ea0
// 地址: 0x678ea0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_4 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_728616
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t eax_2 = data_78c474 ^ &__saved_edi
struct _EXCEPTION_REGISTRATION_RECORD** result = &ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList

if (arg3 != 0)
    void* edi_1 = arg1
    void* esi_1 = *(edi_1 + 0x18)
    struct guiengine::CGUIModel::guiengine::CGUIPartsModel::VTable** eax_4 = sub_414e30(esi_1)
    int32_t* ecx_1 = *(esi_1 + 0x38)
    
    if (ecx_1 != 0 && eax_4[2] == 0)
        eax_4[8] = ecx_1
        eax_4[2] = (**ecx_1)(1)
    
    int32_t eax_7 = *(esi_1 + 0x30)
    eax_4[4] = esi_1
    eax_4[3] = eax_7
    
    if (sub_699780(&arg3[0xc]) != 0 || arg3[7] s<= 0 || arg3[8] s<= 0)
        sub_697d10(eax_4[2]->vFunc_1, &arg3[0xc], 0, 1)
        int32_t edx_3 = arg3[8]
        struct partsengine::CSprite::partsengine::CCGSprite::VTable** eax_16 = arg3[7]
        void* eax_17 = sub_5f7370(*data_797da0, eax_4[2]->vFunc_1)
        
        if (eax_17 != 0)
            if ((*(**(*(eax_17 + 0xb4) + 4) + 8))(eax_2) != 1)
                (*(**(*(eax_17 + 0xb4) + 4) + 4))()
                struct partsengine::CSprite::partsengine::CCGSprite::VTable** eax_22 =
                    operator new(0x94)
                struct partsengine::CSprite::partsengine::CCGSprite::VTable** var_10_1 = eax_22
                int32_t var_4 = 0
                struct partsengine::CSprite::partsengine::CCGSprite::VTable** eax_23
                
                if (eax_22 == 0)
                    eax_23 = nullptr
                else
                    eax_23 = sub_5dec10(eax_22, *(eax_17 + 0x34), *(eax_17 + 0x38), 
                        *(eax_17 + 0x3c), *(eax_17 + 0xc) + 0x1b4)
                
                int32_t var_4_1 = 0xffffffff
                *(*(eax_17 + 0xb4) + 4) = eax_23
                *(eax_17 + 0x10) = 1
            
            void* eax_25 = *(*(eax_17 + 0xb4) + 4)
            
            if (eax_25 != 0 && eax_16 s>= 0 && edx_3 s>= 0)
                *(eax_25 + 0x80) = 0
                *(eax_25 + 0x84) = 0
                *(eax_25 + 0x88) = eax_16
                *(eax_25 + 0x8c) = edx_3
                *(eax_25 + 0x90) = 1
        
        if (arg3[0xa] != 0)
            void* eax_26 = sub_5f7370(*data_797da0, eax_4[2]->vFunc_1)
            
            if (eax_26 != 0)
                if ((*(**(*(eax_26 + 0xb4) + 4) + 8))(eax_2) != 1)
                    (*(**(*(eax_26 + 0xb4) + 4) + 4))()
                    struct partsengine::CSprite::partsengine::CCGSprite::VTable** eax_31 =
                        operator new(0x94)
                    arg3 = eax_31
                    int32_t var_4_2 = 9
                    struct partsengine::CSprite::partsengine::CCGSprite::VTable** eax_32
                    
                    if (eax_31 == 0)
                        eax_32 = nullptr
                    else
                        eax_32 = sub_5dec10(eax_31, *(eax_26 + 0x34), *(eax_26 + 0x38), 
                            *(eax_26 + 0x3c), *(eax_26 + 0xc) + 0x1b4)
                    
                    int32_t var_4_3 = 0xffffffff
                    *(*(eax_26 + 0xb4) + 4) = eax_32
                    *(eax_26 + 0x10) = 1
                
                void* eax_34 = *(*(eax_26 + 0xb4) + 4)
                
                if (eax_34 != 0)
                    *(eax_34 + 0x80) = 0
                    *(eax_34 + 0x84) = 0
                    *(eax_34 + 0x88) = 0
                    *(eax_34 + 0x8c) = 0
                    *(eax_34 + 0x90) = 1
        
        edi_1 = arg1
    else
        int32_t var_2c_2 = 1
        sub_41b340(eax_4)
        sub_41b3e0(eax_4, arg3[7], arg3[8], 1)
        sub_41b430(eax_4, 0, 0, arg3[7], arg3[8], 0xff, 0xff, 0xff, 1)
        sub_41b7d0(eax_4, 1)
    
    void* esi_5 = *(edi_1 + 0x18)
    
    if (*(esi_5 + 0x28) != 0)
        (*(**(esi_5 + 0x28) + 0x20))(eax_2)
    
    result = sub_413500(esi_5)
    
    if (*(esi_5 + 0x2c) != 0)
        result = (*(**(esi_5 + 0x2c) + 0xc))(arg2, *(esi_5 + 0x28))
    
    if (*(edi_1 + 0xc) == 0)
        for (int32_t* i = *(edi_1 + 0x24); i != *(edi_1 + 0x28); i = &i[1])
            result = (*(**i + 0x50))(*(edi_1 + 0x34))

fsbase->NtTib.ExceptionList = ExceptionList
return result
