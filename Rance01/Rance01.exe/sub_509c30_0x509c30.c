// 函数: sub_509c30
// 地址: 0x509c30
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_2 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_712c06
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t var_1c = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_4 = 1
void* esi = *(arg1 + 0xe8)

if (esi != 0)
    sub_50dd80(esi)
    void* var_20_2 = esi
    sub_6b4d5b()
    *(arg1 + 0xe8) = 0

*(arg1 + 0xdc) = &sealengine::CRenderConfig::`vftable'
int32_t var_4_1 = 2
int32_t* esi_1 = *(arg1 + 0xcc)

if (esi_1 != 0)
    sub_4cb6a0(esi_1)
    *(arg1 + 0xcc) = 0

int32_t result = *(arg1 + 0x98)

if (result != 0)
    int32_t result_1 = result
    result = sub_6b4d5b()

*(arg1 + 0x98) = 0
*(arg1 + 0x9c) = 0
*(arg1 + 0xa0) = 0
fsbase->NtTib.ExceptionList = ExceptionList
return result
