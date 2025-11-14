// 函数: sub_5f36c0
// 地址: 0x5f36c0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_727480
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t eax_1 = data_78c474
int32_t var_10 = arg1
fsbase->NtTib.ExceptionList = &ExceptionList

if (arg3 u> 3)
    fsbase->NtTib.ExceptionList = ExceptionList
    return 0

if ((*(**(*(arg2 + 0xb4) + (arg3 << 2)) + 8))(eax_1 ^ &var_10) != 7)
    (*(**(*(arg2 + 0xb4) + (arg3 << 2)) + 4))()
    struct partsengine::CSprite::partsengine::CRectangleDetectionSprite::VTable** eax_8 =
        operator new(0x2c)
    
    if (eax_8 == 0)
        eax_8 = nullptr
    else
        int32_t ecx_5 = *(arg2 + 0xc)
        *eax_8 = &partsengine::CRectangleDetectionSprite::`vftable'{for `partsengine::CSprite'}
        eax_8[1] = 1
        eax_8[2] = 0
        eax_8[3] = 0
        eax_8[4] = 0
        eax_8[5] = 0
        eax_8[6] = ecx_5 + 0x1b4
        eax_8[7] = 0
        eax_8[8] = 0
        eax_8[9] = 0
        eax_8[0xa] = 0
    
    *(*(arg2 + 0xb4) + (arg3 << 2)) = eax_8
    *(arg2 + 0x10) = 1

fsbase->NtTib.ExceptionList = ExceptionList
return *(*(arg2 + 0xb4) + (arg3 << 2))
