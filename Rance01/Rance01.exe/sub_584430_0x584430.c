// 函数: sub_584430
// 地址: 0x584430
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t* eax_5 = *(arg1 + 0x38)

if (eax_5 != 0)
    int32_t var_18_1 = *eax_5
    sub_6b53b2()
    int32_t var_1c_1 = *(arg1 + 0x38)
    sub_6b53b2()
    *(arg1 + 0x38) = 0
    *(arg1 + 0x3c) = 0
    *(arg1 + 0x40) = 0

int32_t ecx_2
ecx_2.b = mulu.dp.d(0x100, 4) u>> 0x20 != 0
int32_t var_18_2 = neg.d(ecx_2) | 0x400
int32_t var_1c_2 = 0x10000
*(arg1 + 0x38) = sub_6b487a()
**(arg1 + 0x38) = sub_6b487a()
int32_t* ecx_6 = 0x10

for (int32_t i = 0x400; i s< 0x10300; )
    int32_t* edx_1 = *(arg1 + 0x38)
    *(ecx_6 + edx_1 - 0xc) = *edx_1 + i - 0x300
    int32_t* edx_2 = *(arg1 + 0x38)
    *(ecx_6 + edx_2 - 8) = *edx_2 + i - 0x300 + 0x100
    int32_t* edx_3 = *(arg1 + 0x38)
    *(ecx_6 + edx_3 - 4) = *edx_3 + i - 0x100
    int32_t* edx_4 = *(arg1 + 0x38)
    *(ecx_6 + edx_4) = *edx_4 + i
    int32_t* edx_5 = *(arg1 + 0x38)
    *(ecx_6 + edx_5 + 4) = *edx_5 + i + 0x100
    i += 0x500
    ecx_6 = &ecx_6[5]

*(arg1 + 0x3c) = 0x100
*(arg1 + 0x40) = 0x100
int16_t result

for (int32_t i_1 = 0; i_1 s< 0x100; i_1 += 1)
    int32_t j = 0
    int32_t var_8_1 = 0
    
    do
        int32_t ebx_5 = *(*(arg1 + 0x38) + (i_1 << 2))
        int16_t x87status_1
        int16_t temp0_1
        temp0_1, x87status_1 = __fnstcw_memmem16(arg2)
        long double x87_r5_2 = float.t(var_8_1) / fconvert.t(255.0)
        var_8_1 += i_1
        j += 1
        int16_t x87control
        int16_t x87status_2
        x87control, x87status_2 = __fldcw_memmem16(temp0_1 | 0xc00)
        result.b = (int.d(x87_r5_2 + fconvert.t(0.5))).b
        *(j + ebx_5 - 1) = result.b
        int16_t x87status_3
        arg2, x87status_3 = __fldcw_memmem16(temp0_1)
    while (j s< 0x100)

result.b = 1
return result
