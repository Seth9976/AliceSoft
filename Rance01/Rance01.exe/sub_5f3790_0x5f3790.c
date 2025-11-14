// 函数: sub_5f3790
// 地址: 0x5f3790
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_727460
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t ecx
int32_t var_10 = ecx
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t result

if (arg2 u<= 3)
    int32_t __saved_edi
    
    if ((*(**(*(arg1 + 0xb4) + (arg2 << 2)) + 8))(data_78c474 ^ &__saved_edi) != 8)
        (*(**(*(arg1 + 0xb4) + (arg2 << 2)) + 4))()
        struct partsengine::CSprite::partsengine::CConstructionSprite::VTable** eax_7 =
            operator new(0x4c)
        struct partsengine::CSprite::partsengine::CConstructionSprite::VTable** eax_8
        
        if (eax_7 == 0)
            eax_8 = nullptr
        else
            eax_8 = sub_5e0230(*(arg1 + 0x3c), *(arg1 + 0x38), *(arg1 + 0x34), 
                *(arg1 + 0xc) + 0x1b4, eax_7)
        
        *(*(arg1 + 0xb4) + (arg2 << 2)) = eax_8
        *(arg1 + 0x10) = 1
    
    result = *(*(arg1 + 0xb4) + (arg2 << 2))
else
    result = 0

fsbase->NtTib.ExceptionList = ExceptionList
return result
