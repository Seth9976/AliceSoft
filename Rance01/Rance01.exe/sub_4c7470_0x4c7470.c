// 函数: sub_4c7470
// 地址: 0x4c7470
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_2 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_7130f8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t i_1
int32_t eax_2 = data_78c474 ^ &i_1
int32_t __saved_edi
int32_t var_80 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
sub_4c8880(arg1 + 0x274, &i_1, *(arg1 + 0x274), *(arg1 + 0x278))
int32_t ecx_1 = *(arg2 + 0x250)
int32_t eax_7
int32_t edx_3
edx_3:eax_7 = muls.dp.d(0x2aaaaaab, *(arg2 + 0x254) - ecx_1)
int32_t edx_4 = edx_3 s>> 1
int32_t* esi = nullptr
i_1 = 0

if (edx_4 + (edx_4 u>> 0x1f) - 1 s> 0)
    int32_t edx_14
    int32_t i
    
    do
        int32_t edx_6 = *(esi + ecx_1 + 0x10)
        int32_t edi_1 = *(esi + ecx_1 + 0xc)
        int32_t edx_7 = *(esi + ecx_1 + 0x14)
        struct sealengine::CPoint::VTable* const var_50_1 = &sealengine::CPoint::`vftable'
        int32_t var_4c_1 = edi_1
        int32_t var_40_1 = 0xffffffff
        int32_t var_4 = 0
        int32_t edx_8 = *(esi + ecx_1 + 4)
        struct sealengine::CPoint::VTable* const var_64_1 = &sealengine::CPoint::`vftable'
        int32_t eax_9 = *(esi + ecx_1)
        int32_t eax_10 = *(esi + ecx_1 + 8)
        int32_t var_54_1 = 0xffffffff
        int32_t (__fastcall* var_84_1)(struct sealengine::CPoint::VTable** arg1) = sub_4f2b90
        var_4.b = 1
        struct sealengine::CLine::VTable* const var_3c = &sealengine::CLine::`vftable'
        void var_38
        sub_6b5516(&var_38, 0x14, 2, sub_4f2b70)
        int32_t var_34_1 = eax_9
        int32_t var_30_1 = edx_8
        int32_t var_2c_1 = eax_10
        int32_t var_28_1 = 0xffffffff
        int32_t var_20_1 = edi_1
        int32_t var_1c_1 = edx_6
        int32_t var_18_1 = edx_7
        int32_t var_14_1 = 0xffffffff
        var_4.b = 2
        sub_4bc940(&var_3c, arg1 + 0x274)
        var_4.b = 1
        var_3c = &sealengine::CLine::`vftable'
        sub_6b54b3(&var_38, 0x14, 2, sub_4f2b90)
        int32_t var_4_1 = 0xffffffff
        ecx_1 = *(arg2 + 0x250)
        int32_t eax_14
        int32_t edx_13
        edx_13:eax_14 = muls.dp.d(0x2aaaaaab, *(arg2 + 0x254) - ecx_1)
        edx_14 = edx_13 s>> 1
        i = i_1 + 1
        esi = &esi[3]
        i_1 = i
    while (i s< edx_14 + (edx_14 u>> 0x1f) - 1)

uint32_t result
result.b = 1
fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &i_1)
return result
