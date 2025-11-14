// 函数: sub_4c97e0
// 地址: 0x4c97e0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_2 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_719cbb
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void* var_10 = arg1
int32_t __saved_edi
int32_t var_1c = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList

if (*(arg1 + 8) == 0 && *(arg1 + 0x10) != 0)
    struct sealengine::CDrawInstance::sealengine::CPolyObject::VTable** eax_3 = operator new(0x16c)
    struct sealengine::CDrawInstance::sealengine::CPolyObject::VTable** var_10_1 = eax_3
    int32_t var_4 = 0
    struct sealengine::CDrawInstance::sealengine::CPolyObject::VTable** edi_1
    
    if (eax_3 == 0)
        edi_1 = nullptr
    else
        edi_1 = sub_502540(eax_3)
    
    int32_t var_4_1 = 0xffffffff
    edi_1[0x5a] = *(arg1 + 0x70)
    
    if (sub_502990(edi_1, *(arg1 + 0x10), 1, *(arg1 + 0x78)) != 0)
        *(arg1 + 8) = edi_1
        *(arg1 + 0xc) = 0
        fsbase->NtTib.ExceptionList = ExceptionList
        return 1
    
    void** esi_2 = *(arg1 + 0x10) + 8
    
    if (esi_2[5] u>= 0x10)
        esi_2 = *esi_2
    
    void** var_20_3 = esi_2
    sub_51ddc0(0x755f8c)
    sub_502800(edi_1)
    struct sealengine::CDrawInstance::sealengine::CPolyObject::VTable** var_20_5 = edi_1
    sub_6b4d5b()

struct _EXCEPTION_REGISTRATION_RECORD** result
result.b = 0
fsbase->NtTib.ExceptionList = ExceptionList
return result
