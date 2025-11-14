// 函数: sub_5fc390
// 地址: 0x5fc390
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_725c31
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t var_18 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
struct partsengine::CSprite::partsengine::CTextSprite::VTable** edi = arg1
*edi = &partsengine::CTextSprite::`vftable'{for `partsengine::CSprite'}
int32_t var_4 = 2
sub_5fc4a0(edi)
sub_5fc500(edi)
int32_t edx = edi[0x14]
int32_t* eax_3 = edi[0x13]

if (eax_3 != edx)
    int32_t* var_1c_1 = arg1
    int32_t var_20_1 = edx
    edi[0x14] = sub_4febf0(eax_3, edx, arg1)

*(edi + 0x95) = 1
int32_t eax_5 = edi[0x1b]

if (eax_5 != 0)
    int32_t var_1c_2 = eax_5
    sub_6b4d5b()

edi[0x1b] = 0
edi[0x1c] = 0
edi[0x1d] = 0
int32_t eax_6 = edi[0x13]

if (eax_6 != 0)
    int32_t var_1c_3 = eax_6
    sub_6b4d5b()

edi[0x13] = 0
edi[0x14] = 0
edi[0x15] = 0
int32_t* ecx_2 = edi[0x10]
int32_t* i_1 = *ecx_2
*ecx_2 = ecx_2
void* ecx_3 = edi[0x10]
*(ecx_3 + 4) = ecx_3
edi[0x11] = 0

if (i_1 != edi[0x10])
    int32_t* i
    
    do
        i = *i_1
        int32_t* i_2 = i_1
        sub_6b4d5b()
        i_1 = i
    while (i != edi[0x10])

int32_t var_1c_4 = edi[0x10]
int32_t result = sub_6b4d5b()
fsbase->NtTib.ExceptionList = ExceptionList
return result
