// 函数: sub_4caa00
// 地址: 0x4caa00
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_c = 0xffffffff
int32_t (* var_10)(void* arg1) = sub_726eeb
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t var_2c = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList

if (*(arg1 + 0x50) == 0)
    struct sealengine::CDrawInstance::sealengine::CParticleEffectView::VTable** eax_3 =
        operator new(0x70)
    struct sealengine::CDrawInstance::sealengine::CParticleEffectView::VTable** var_1c_1 = eax_3
    int32_t var_c_1 = 0
    struct sealengine::CDrawInstance::sealengine::CParticleEffectView::VTable** esi_2
    
    if (eax_3 == 0)
        esi_2 = nullptr
    else
        esi_2 = sub_4eb4d0(eax_3)
    
    int32_t var_c_2 = 0xffffffff
    esi_2[0x1a] = *(arg1 + 0x74)
    esi_2[0x1b] = *(arg1 + 0x70)
    *(arg1 + 0x60)
    
    if (sub_4eb6e0(esi_2, *(arg1 + 0x58), *(arg1 + 0x78)) != 0)
        *(arg1 + 0x50) = esi_2
        *(arg1 + 0x54) = 0
        fsbase->NtTib.ExceptionList = ExceptionList
        return 1
    
    void** edi_2 = *(arg1 + 0x58) + 0x1c
    
    if (edi_2[5] u>= 0x10)
        edi_2 = *edi_2
    
    void** var_30_2 = edi_2
    sub_51ddc0(0x756054)
    sub_4eb640(esi_2)

struct _EXCEPTION_REGISTRATION_RECORD** result
result.b = 0
fsbase->NtTib.ExceptionList = ExceptionList
return result
