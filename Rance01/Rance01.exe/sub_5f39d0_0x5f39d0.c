// 函数: sub_5f39d0
// 地址: 0x5f39d0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_7273e0
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList

if (arg2 u> 3)
    fsbase->NtTib.ExceptionList = ExceptionList
    return 0

int32_t __saved_edi

if ((*(**(*(arg1 + 0xb4) + (arg2 << 2)) + 8))(data_78c474 ^ &__saved_edi) != 0xb)
    (*(**(*(arg1 + 0xb4) + (arg2 << 2)) + 4))()
    struct partsengine::CSprite::partsengine::C3DLayerSprite::VTable** eax_8 = operator new(0x20)
    
    if (eax_8 == 0)
        eax_8 = nullptr
    else
        int32_t ecx_5 = *(arg1 + 0x3c)
        int32_t edx_2 = *(arg1 + 0x38)
        int32_t edi_1 = *(arg1 + 0x34)
        *eax_8 = &partsengine::C3DLayerSprite::`vftable'{for `partsengine::CSprite'}
        eax_8[1] = 1
        eax_8[2] = 0xffffffff
        eax_8[3] = edi_1
        eax_8[4] = edx_2
        eax_8[5] = ecx_5
        eax_8[6].b = 1
        eax_8[7] = 0xffffffff
    
    *(*(arg1 + 0xb4) + (arg2 << 2)) = eax_8
    *(arg1 + 0x10) = 1

fsbase->NtTib.ExceptionList = ExceptionList
return *(*(arg1 + 0xb4) + (arg2 << 2))
