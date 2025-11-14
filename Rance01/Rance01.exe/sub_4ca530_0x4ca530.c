// 函数: sub_4ca530
// 地址: 0x4ca530
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_2 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_7240ab
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t var_24 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList

if (*(arg1 + 0x28) == 0)
    struct sealengine::CDrawInstance::sealengine::CBillboard::VTable** eax_3 = operator new(0x9c)
    struct sealengine::CDrawInstance::sealengine::CBillboard::VTable** var_10_1 = eax_3
    int32_t var_4 = 0
    struct sealengine::CDrawInstance::sealengine::CBillboard::VTable** edi_1
    
    if (eax_3 == 0)
        edi_1 = nullptr
    else
        edi_1 = sub_4b2930(eax_3)
    
    int32_t var_4_1 = 0xffffffff
    edi_1[0x26] = *(arg1 + 0x74)
    void* ebp_1 = arg1 + 0x30
    
    if (sub_4b2c30(edi_1, ebp_1, *(arg1 + 0x4c)) != 0)
        *(arg1 + 0x28) = edi_1
        *(arg1 + 0x2c) = 0
        fsbase->NtTib.ExceptionList = ExceptionList
        return 1
    
    if (*(ebp_1 + 0x14) u>= 0x10)
        ebp_1 = *ebp_1
    
    void* var_28_3 = ebp_1
    sub_51ddc0(0x756028)
    sub_4b2a60(edi_1)
    struct sealengine::CDrawInstance::sealengine::CBillboard::VTable** var_28_5 = edi_1
    sub_6b4d5b()

struct _EXCEPTION_REGISTRATION_RECORD** result
result.b = 0
fsbase->NtTib.ExceptionList = ExceptionList
return result
