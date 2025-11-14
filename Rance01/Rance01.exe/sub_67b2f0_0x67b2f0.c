// 函数: sub_67b2f0
// 地址: 0x67b2f0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_7282e8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t eax_2 = data_78c474 ^ &__saved_edi
struct _EXCEPTION_REGISTRATION_RECORD** Handler = &ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList

if (arg2 s> 0)
    void* arg_4
    void* esi_1 = *(arg_4 + 0x14)
    struct guiengine::CGUIModel::guiengine::CGUIPartsModel::VTable** eax_5 = sub_414e30(esi_1)
    int32_t* ecx_1 = *(esi_1 + 0x38)
    
    if (ecx_1 != 0 && eax_5[2] == 0)
        eax_5[8] = ecx_1
        eax_5[2] = (**ecx_1)(1)
    
    void* ecx_2 = eax_5[2]
    int32_t* edx_2 = data_797da0
    eax_5[3] = *(esi_1 + 0x30)
    eax_5[4] = esi_1
    void* eax_9 = sub_5f7370(*edx_2, *(ecx_2 + 4))
    
    if (eax_9 != 0)
        if ((*(**(*(eax_9 + 0xb4) + 4) + 8))(eax_2) != 8)
            (*(**(*(eax_9 + 0xb4) + 4) + 4))()
            struct partsengine::CSprite::partsengine::CConstructionSprite::VTable** eax_14 =
                operator new(0x4c)
            struct partsengine::CSprite::partsengine::CConstructionSprite::VTable** eax_15
            
            if (eax_14 == 0)
                eax_15 = nullptr
            else
                eax_15 = sub_5e0230(*(eax_9 + 0x3c), *(eax_9 + 0x38), *(eax_9 + 0x34), 
                    *(eax_9 + 0xc) + 0x1b4, eax_14)
            
            *(*(eax_9 + 0xb4) + 4) = eax_15
            *(eax_9 + 0x10) = 1
        
        void* eax_16 = *(*(eax_9 + 0xb4) + 4)
        
        if (eax_16 != 0)
            sub_5e6030(eax_16 + 0x28, &arg_4, *(eax_16 + 0x28), *(eax_16 + 0x2c))
    
    void* eax_19 = sub_5f7370(*data_797da0, eax_5[2]->vFunc_1)
    
    if (eax_19 != 0)
        if ((*(**(*(eax_19 + 0xb4) + 4) + 8))(eax_2) != 8)
            (*(**(*(eax_19 + 0xb4) + 4) + 4))()
            struct partsengine::CSprite::partsengine::CConstructionSprite::VTable** eax_23 =
                operator new(0x4c)
            struct partsengine::CSprite::partsengine::CConstructionSprite::VTable** eax_24
            
            if (eax_23 == 0)
                eax_24 = nullptr
            else
                eax_24 = sub_5e0230(*(eax_19 + 0x3c), *(eax_19 + 0x38), *(eax_19 + 0x34), 
                    *(eax_19 + 0xc) + 0x1b4, eax_23)
            
            *(*(eax_19 + 0xb4) + 4) = eax_24
            *(eax_19 + 0x10) = 1
        
        void* eax_25 = *(*(eax_19 + 0xb4) + 4)
        
        if (eax_25 != 0)
            sub_5e2de0(eax_25, arg1, arg2)
    
    struct guiengine::IAddConstructionPartsProcess::guiengine::CGUIPlainCG::VTable* const 
        var_18_1 = &guiengine::CGUIPlainCG::`vftable'{for `guiengine::IAddConstructionPartsProcess'}
    char var_13_1 = 0
    int32_t var_10_1 = 0
    int32_t var_4 = 0x12
    char var_13_2 = 1
    int32_t (__stdcall* var_10_2)(int32_t arg1, int32_t arg2, int32_t arg3, int32_t arg4) =
        sub_41cb20
    sub_41c040(eax_5[2]->vFunc_1, arg1, arg2, 1)
    Handler = sub_5f7370(*data_797da0, eax_5[2]->vFunc_1)
    
    if (Handler != 0)
        if ((*(*Handler[0x2d]->Handler + 8))(eax_2) != 8)
            (*(*Handler[0x2d]->Handler + 4))()
            struct partsengine::CSprite::partsengine::CConstructionSprite::VTable** eax_31 =
                operator new(0x4c)
            struct partsengine::CSprite::partsengine::CConstructionSprite::VTable** eax_32
            
            if (eax_31 == 0)
                eax_32 = nullptr
            else
                eax_32 =
                    sub_5e0230(Handler[0xf], Handler[0xe], Handler[0xd], Handler[3] + 0x1b4, eax_31)
            
            Handler[0x2d]->Handler = eax_32
            Handler[4].b = 1
        
        Handler = Handler[0x2d]->Handler
        
        if (Handler != 0)
            Handler = sub_5e4050(Handler)

fsbase->NtTib.ExceptionList = ExceptionList
return Handler
