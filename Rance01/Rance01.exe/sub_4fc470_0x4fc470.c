// 函数: sub_4fc470
// 地址: 0x4fc470
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_2 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_7134fa
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t var_1c = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t ecx = arg2[1]
int32_t eax_3

if (arg1 u< ecx)
    eax_3 = *arg2

int32_t result

if (arg1 u>= ecx || eax_3 u> arg1)
    if (ecx == arg2[2])
        sub_4fcb00(arg2)
    
    struct sealengine::CPolyTexture::VTable** edi_1 = arg2[1]
    result = 0
    int32_t var_4_1 = 1
    
    if (edi_1 != 0)
        *edi_1 = &sealengine::CPolyTexture::`vftable'
        edi_1[5] = 0
        edi_1[6] = 0xf
        edi_1[1].b = 0
        sub_401180(&edi_1[1], 0xffffffff, arg1 + 4, 0)
        result = *(arg1 + 0x20)
        edi_1[8] = result
        edi_1[9] = *(arg1 + 0x24)
        edi_1[0xa] = *(arg1 + 0x28)
else
    if (ecx == arg2[2])
        sub_4fcb00(arg2)
    
    struct sealengine::CPolyTexture::VTable** edi = arg2[1]
    void* esi_6 = (arg1 - eax_3) s/ 0x2c * 0x2c + *arg2
    result = 0
    int32_t var_4 = 0
    
    if (edi != 0)
        *edi = &sealengine::CPolyTexture::`vftable'
        edi[5] = 0
        edi[6] = 0xf
        edi[1].b = 0
        sub_401180(&edi[1], 0xffffffff, esi_6 + 4, 0)
        edi[8] = *(esi_6 + 0x20)
        edi[9] = *(esi_6 + 0x24)
        result = *(esi_6 + 0x28)
        edi[0xa] = result

arg2[1] += 0x2c
fsbase->NtTib.ExceptionList = ExceptionList
return result
