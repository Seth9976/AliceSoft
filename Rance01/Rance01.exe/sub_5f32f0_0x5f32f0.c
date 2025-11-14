// 函数: sub_5f32f0
// 地址: 0x5f32f0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_72756b
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
struct partsengine::CSprite::partsengine::CLoopCGSprite::VTable** var_10 = arg1
fsbase->NtTib.ExceptionList = &ExceptionList

if (arg3 u> 3)
    fsbase->NtTib.ExceptionList = ExceptionList
    return 0

if ((*(**(*(arg2 + 0xb4) + (arg3 << 2)) + 8))(data_78c474 ^ &var_10) != 2)
    (*(**(*(arg2 + 0xb4) + (arg3 << 2)) + 4))()
    struct partsengine::CSprite::partsengine::CLoopCGSprite::VTable** eax_8 = operator new(0x70)
    var_10 = eax_8
    int32_t var_4 = 1
    struct partsengine::CSprite::partsengine::CLoopCGSprite::VTable** eax_9
    
    if (eax_8 == 0)
        eax_9 = nullptr
    else
        eax_9 = sub_5e9e30(eax_8, *(arg2 + 0x34), *(arg2 + 0xc) + 0x1b4)
    
    *(*(arg2 + 0xb4) + (arg3 << 2)) = eax_9
    *(arg2 + 0x10) = 1

fsbase->NtTib.ExceptionList = ExceptionList
return *(*(arg2 + 0xb4) + (arg3 << 2))
