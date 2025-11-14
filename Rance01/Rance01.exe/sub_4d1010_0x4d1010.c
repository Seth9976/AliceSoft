// 函数: sub_4d1010
// 地址: 0x4d1010
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

sub_4d3650(*(*(arg2 + 0x80) + 4))
void* eax_1 = *(arg2 + 0x80)
*(eax_1 + 4) = eax_1
int32_t* eax_2 = *(arg2 + 0x80)
*eax_2 = eax_2
void* eax_3 = *(arg2 + 0x80)
*(eax_3 + 8) = eax_3
*(arg2 + 0x84) = 0
sub_4d35c0(*(*(arg2 + 0x70) + 4))
void* eax_5 = *(arg2 + 0x70)
*(eax_5 + 4) = eax_5
int32_t* eax_6 = *(arg2 + 0x70)
*eax_6 = eax_6
void* eax_7 = *(arg2 + 0x70)
*(eax_7 + 8) = eax_7
*(arg2 + 0x74) = 0
sub_4d3530(*(*(arg2 + 0x60) + 4))
void* eax_8 = *(arg2 + 0x60)
*(eax_8 + 4) = eax_8
int32_t* eax_9 = *(arg2 + 0x60)
*eax_9 = eax_9
void* eax_10 = *(arg2 + 0x60)
*(eax_10 + 8) = eax_10
*(arg2 + 0x64) = 0
int32_t edx_2 = sub_4d34a0(*(*(arg2 + 0x50) + 4))
void* eax_12 = *(arg2 + 0x50)
*(eax_12 + 4) = eax_12
int32_t* eax_13 = *(arg2 + 0x50)
*eax_13 = eax_13
void* eax_14 = *(arg2 + 0x50)
*(eax_14 + 8) = eax_14
*(arg2 + 0x54) = 0
int32_t* ecx_7 = *(arg2 + 0x40)
int32_t* eax_15 = *(arg2 + 0x3c)

if (eax_15 != ecx_7)
    void* eax_16 = sub_4eb0d0(eax_15, edx_2, ecx_7, ecx_7)
    int32_t edx_3 = *(arg2 + 0x40)
    void* ecx_8 = eax_16
    
    if (eax_16 != edx_3)
        do
            *(ecx_8 + 8) = &sealengine::CFrameMulAlpha::`vftable'
            ecx_8 += 0x14
        while (ecx_8 != edx_3)
    
    *(arg2 + 0x40) = eax_16

void* eax_17 = *(arg2 + 0x30)
int32_t* ecx_9 = *(arg2 + 0x2c)

if (ecx_9 != eax_17)
    int32_t var_10_4 = arg1
    int32_t* eax_18 = sub_4d6ec0(eax_17, arg1, ecx_9, eax_17)
    int32_t edx_5 = *(arg2 + 0x30)
    int32_t* ecx_10 = eax_18
    
    if (eax_18 != edx_5)
        do
            ecx_10[2] = &sealengine::CFrameAddColor::`vftable'
            ecx_10 = &ecx_10[8]
        while (ecx_10 != edx_5)
    
    *(arg2 + 0x30) = eax_18

void* eax_19 = *(arg2 + 0x20)
int32_t* ecx_11 = *(arg2 + 0x1c)

if (ecx_11 != eax_19)
    int32_t var_10_5 = arg1
    int32_t* eax_20 = sub_4d6ec0(eax_19, arg1, ecx_11, eax_19)
    int32_t edx_7 = *(arg2 + 0x20)
    int32_t* ecx_12 = eax_20
    
    if (eax_20 != edx_7)
        do
            ecx_12[2] = &sealengine::CFrameMulColor::`vftable'
            ecx_12 = &ecx_12[8]
        while (ecx_12 != edx_7)
    
    *(arg2 + 0x20) = eax_20

struct _EXCEPTION_REGISTRATION_RECORD** result = *(arg2 + 0x10)
void* ecx_13 = *(arg2 + 0xc)

if (ecx_13 != result)
    int32_t var_10_6 = arg1
    void* eax_21 = sub_4d6d40(result, result, ecx_13)
    int32_t var_20_1 = arg1
    result = sub_4d6e00(eax_21, *(arg2 + 0x10))
    *(arg2 + 0x10) = eax_21

*(arg2 + 8) = 0
return result
