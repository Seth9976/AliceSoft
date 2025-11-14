// 函数: sub_5f2f00
// 地址: 0x5f2f00
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_9 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_726df3
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t var_10 = arg1
fsbase->NtTib.ExceptionList = &ExceptionList
struct partsengine::CSprite::partsengine::CCGDetectionSprite::VTable** ebx = arg3
int32_t result
int32_t __saved_edi

if (ebx u> 3)
    result = 0
else if ((*(**(*(arg2 + 0xb4) + (ebx << 2)) + 8))(data_78c474 ^ &__saved_edi) == arg1)
    result = *(*(arg2 + 0xb4) + (ebx << 2))
else
    (*(**(*(arg2 + 0xb4) + (ebx << 2)) + 4))()
    
    if (arg1 - 1 u> 0xa)
        struct partsengine::CSprite::partsengine::CCGDetectionSprite::VTable** eax_22 =
            operator new(0x94)
        arg3 = eax_22
        int32_t var_4_8 = 8
        
        if (eax_22 == 0)
            *(*(arg2 + 0xb4) + (ebx << 2)) = 0
            result = 0
        else
            *(*(arg2 + 0xb4) + (ebx << 2)) = sub_5dec10(eax_22, *(arg2 + 0x34), *(arg2 + 0x38), 
                *(arg2 + 0x3c), *(arg2 + 0xc) + 0x1b4)
            result = 0
    else
        switch (arg1)
            case 1
                struct partsengine::CSprite::partsengine::CCGDetectionSprite::VTable** eax_8 =
                    operator new(0x94)
                arg3 = eax_8
                int32_t var_4 = 0
                
                if (eax_8 == 0)
                    *(*(arg2 + 0xb4) + (ebx << 2)) = 0
                else
                    *(*(arg2 + 0xb4) + (ebx << 2)) = sub_5dec10(eax_8, *(arg2 + 0x34), 
                        *(arg2 + 0x38), *(arg2 + 0x3c), *(arg2 + 0xc) + 0x1b4)
            case 2
                struct partsengine::CSprite::partsengine::CCGDetectionSprite::VTable** eax_10 =
                    operator new(0x70)
                arg3 = eax_10
                int32_t var_4_1 = 1
                
                if (eax_10 == 0)
                    *(*(arg2 + 0xb4) + (ebx << 2)) = 0
                else
                    *(*(arg2 + 0xb4) + (ebx << 2)) =
                        sub_5e9e30(eax_10, *(arg2 + 0x34), *(arg2 + 0xc) + 0x1b4)
            case 3
                struct partsengine::CSprite::partsengine::CCGDetectionSprite::VTable** eax_12 =
                    operator new(0x98)
                arg3 = eax_12
                int32_t var_4_2 = 2
                
                if (eax_12 == 0)
                    *(*(arg2 + 0xb4) + (ebx << 2)) = nullptr
                else
                    *(*(arg2 + 0xb4) + (ebx << 2)) =
                        sub_5fc2d0(eax_12, *(arg2 + 0x34), *(arg2 + 0x3c))
            case 4
                struct partsengine::CSprite::partsengine::CCGDetectionSprite::VTable** eax_14 =
                    operator new(0x54)
                arg3 = eax_14
                int32_t var_4_3 = 3
                
                if (eax_14 == 0)
                    *(*(arg2 + 0xb4) + (ebx << 2)) = nullptr
                else
                    *(*(arg2 + 0xb4) + (ebx << 2)) =
                        sub_5e6c70(eax_14, *(arg2 + 0x34), *(arg2 + 0xc) + 0x1b4)
            case 5
                struct partsengine::CSprite::partsengine::CCGDetectionSprite::VTable** eax_15 =
                    operator new(0x54)
                arg3 = eax_15
                int32_t var_4_4 = 4
                
                if (eax_15 == 0)
                    *(*(arg2 + 0xb4) + (ebx << 2)) = nullptr
                else
                    *(*(arg2 + 0xb4) + (ebx << 2)) =
                        sub_5ff2e0(eax_15, *(arg2 + 0x34), *(arg2 + 0xc) + 0x1b4)
            case 6
                struct partsengine::CSprite::partsengine::CCGDetectionSprite::VTable** eax_16 =
                    operator new(0x354)
                arg3 = eax_16
                int32_t var_4_5 = 5
                
                if (eax_16 == 0)
                    *(*(arg2 + 0xb4) + (ebx << 2)) = nullptr
                else
                    *(*(arg2 + 0xb4) + (ebx << 2)) = sub_5efef0(eax_16, *(arg2 + 0x34))
            case 7
                struct partsengine::CSprite::partsengine::CRectangleDetectionSprite::VTable** 
                    eax_17 = operator new(0x2c)
                
                if (eax_17 == 0)
                    *(*(arg2 + 0xb4) + (ebx << 2)) = 0
                else
                    int32_t ecx_15 = *(arg2 + 0xc)
                    *eax_17 = &partsengine::CRectangleDetectionSprite::`vftable'{for `partsengine::CSprite'}
                    eax_17[1] = 1
                    eax_17[2] = 0
                    eax_17[3] = 0
                    eax_17[4] = 0
                    eax_17[5] = 0
                    eax_17[6] = ecx_15 + 0x1b4
                    eax_17[7] = 0
                    eax_17[8] = 0
                    eax_17[9] = 0
                    eax_17[0xa] = 0
                    *(*(arg2 + 0xb4) + (ebx << 2)) = eax_17
            case 8
                struct partsengine::CSprite::partsengine::CConstructionSprite::VTable** eax_18 =
                    operator new(0x4c)
                
                if (eax_18 == 0)
                    *(*(arg2 + 0xb4) + (ebx << 2)) = nullptr
                else
                    *(*(arg2 + 0xb4) + (ebx << 2)) = sub_5e0230(*(arg2 + 0x3c), *(arg2 + 0x38), 
                        *(arg2 + 0x34), *(arg2 + 0xc) + 0x1b4, eax_18)
            case 9
                struct partsengine::CSprite::partsengine::CCGDetectionSprite::VTable** eax_19 =
                    operator new(0x60)
                arg3 = eax_19
                int32_t var_4_6 = 6
                
                if (eax_19 == 0)
                    *(*(arg2 + 0xb4) + (ebx << 2)) = nullptr
                else
                    *(*(arg2 + 0xb4) + (ebx << 2)) = sub_5dd070(eax_19, *(arg2 + 0x34), 
                        *(arg2 + 0x38), *(arg2 + 0x3c), *(arg2 + 0xc) + 0x1b4)
            case 0xa
                struct partsengine::CSprite::partsengine::CCGDetectionSprite::VTable** eax_20 =
                    operator new(0x44)
                arg3 = eax_20
                int32_t var_4_7 = 7
                
                if (eax_20 == 0)
                    *(*(arg2 + 0xb4) + (ebx << 2)) = 0
                else
                    *(*(arg2 + 0xb4) + (ebx << 2)) = sub_430eb0(*(arg2 + 0x34), eax_20, 
                        *(arg2 + 0x38), *(arg2 + 0x3c), *(arg2 + 0x28), *(arg2 + 0x44))
            case 0xb
                struct partsengine::CSprite::partsengine::C3DLayerSprite::VTable** eax_13 =
                    operator new(0x20)
                
                if (eax_13 == 0)
                    *(*(arg2 + 0xb4) + (ebx << 2)) = nullptr
                else
                    int32_t ecx_24 = *(arg2 + 0x3c)
                    int32_t edx_18 = *(arg2 + 0x38)
                    int32_t esi_5 = *(arg2 + 0x34)
                    *eax_13 = &partsengine::C3DLayerSprite::`vftable'{for `partsengine::CSprite'}
                    eax_13[1] = 1
                    eax_13[2] = 0xffffffff
                    eax_13[3] = esi_5
                    eax_13[4] = edx_18
                    eax_13[5] = ecx_24
                    eax_13[6].b = 1
                    eax_13[7] = 0xffffffff
                    *(*(arg2 + 0xb4) + (ebx << 2)) = eax_13
        
        *(arg2 + 0x10) = 1
        result = *(*(arg2 + 0xb4) + (ebx << 2))
fsbase->NtTib.ExceptionList = ExceptionList
return result
