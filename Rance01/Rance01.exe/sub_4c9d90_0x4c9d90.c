// 函数: sub_4c9d90
// 地址: 0x4c9d90
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_c = 0xffffffff
int32_t (* var_10)(void* arg1) = sub_726eeb
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t var_2c = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList

if (*(arg1 + 0x14) == 0 && *(arg1 + 0x10) != 0)
    struct sealengine::CDrawInstance::sealengine::CMotionObject::VTable** eax_3 =
        operator new(0x158)
    struct sealengine::CDrawInstance::sealengine::CMotionObject::VTable** var_1c_1 = eax_3
    int32_t var_c_1 = 0
    struct sealengine::CDrawInstance::sealengine::CMotionObject::VTable** edi_1
    
    if (eax_3 == 0)
        edi_1 = nullptr
    else
        edi_1 = sub_4d92f0(eax_3)
    
    int32_t var_c_2 = 0xffffffff
    edi_1[0x55] = *(arg1 + 0x70)
    
    if (sub_4d9770(edi_1, *(arg1 + 0x10), *(arg1 + 0x1c), *(arg1 + 0x20), *(arg1 + 0x78)) != 0)
        *(arg1 + 0x14) = edi_1
        *(arg1 + 0x18) = 0
        fsbase->NtTib.ExceptionList = ExceptionList
        return 1
    
    void** esi_2 = *(arg1 + 0x10) + 8
    
    if (esi_2[5] u>= 0x10)
        esi_2 = *esi_2
    
    void** var_30_3 = esi_2
    sub_51ddc0(0x755fc0)
    sub_4d9580(edi_1)
    struct sealengine::CDrawInstance::sealengine::CMotionObject::VTable** var_30_5 = edi_1
    sub_6b4d5b()

struct _EXCEPTION_REGISTRATION_RECORD** result
result.b = 0
fsbase->NtTib.ExceptionList = ExceptionList
return result
