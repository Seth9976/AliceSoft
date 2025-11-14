// 函数: sub_5f3470
// 地址: 0x5f3470
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_72750b
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
struct partsengine::CSprite::partsengine::CHGaugeSprite::VTable** ebx = arg2

if (ebx u> 3)
    fsbase->NtTib.ExceptionList = ExceptionList
    return 0

int32_t __saved_esi

if ((*(**(*(arg1 + 0xb4) + (ebx << 2)) + 8))(data_78c474 ^ &__saved_esi) != 4)
    (*(**(*(arg1 + 0xb4) + (ebx << 2)) + 4))()
    struct partsengine::CSprite::partsengine::CHGaugeSprite::VTable** eax_8 = operator new(0x54)
    arg2 = eax_8
    int32_t var_4 = 3
    struct partsengine::CSprite::partsengine::CHGaugeSprite::VTable** eax_9
    
    if (eax_8 == 0)
        eax_9 = nullptr
    else
        eax_9 = sub_5e6c70(eax_8, *(arg1 + 0x34), *(arg1 + 0xc) + 0x1b4)
    
    *(*(arg1 + 0xb4) + (ebx << 2)) = eax_9
    *(arg1 + 0x10) = 1

fsbase->NtTib.ExceptionList = ExceptionList
return *(*(arg1 + 0xb4) + (ebx << 2))
