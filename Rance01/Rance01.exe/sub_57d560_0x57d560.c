// 函数: sub_57d560
// 地址: 0x57d560
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_710bdb
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t var_24 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* result = arg2
result[1] = 0
result[2] = 0
result[3] = 0
int32_t var_4 = 0
*result = 0
int32_t* eax_3 = result[1]

if (eax_3 != 0)
    int32_t var_28_1 = *eax_3
    sub_6b53b2()
    int32_t var_2c_1 = result[1]
    sub_6b53b2()
    result[1] = 0
    result[2] = 0
    result[3] = 0

int32_t ecx_2
ecx_2.b = mulu.dp.d(0x100, 4) u>> 0x20 != 0
int32_t var_28_2 = neg.d(ecx_2) | 0x400
int32_t var_2c_2 = 0x10000
result[1] = sub_6b487a()
*result[1] = sub_6b487a()
int32_t* ecx_6 = 0x10

for (int32_t i = 0x400; i s< 0x10300; )
    int32_t* edx_1 = result[1]
    *(ecx_6 + edx_1 - 0xc) = *edx_1 + i - 0x300
    int32_t* edx_2 = result[1]
    *(ecx_6 + edx_2 - 8) = *edx_2 + i - 0x300 + 0x100
    int32_t* edx_3 = result[1]
    *(ecx_6 + edx_3 - 4) = *edx_3 + i - 0x100
    int32_t* edx_4 = result[1]
    *(ecx_6 + edx_4) = *edx_4 + i
    int32_t* edx_5 = result[1]
    *(ecx_6 + edx_5 + 4) = *edx_5 + i + 0x100
    i += 0x500
    ecx_6 = &ecx_6[5]

result[2] = 0x100
result[3] = 0x100

for (int32_t i_1 = 0; i_1 s< 0x100; i_1 += 1)
    int32_t j = 0
    int32_t var_14_1 = 0
    
    do
        int32_t ebx_5 = *(result[1] + (i_1 << 2))
        int16_t x87status_1
        int16_t temp0_1
        temp0_1, x87status_1 = __fnstcw_memmem16(arg1)
        arg2.w = temp0_1
        long double x87_r5_2 = float.t(var_14_1) / fconvert.t(255.0)
        var_14_1 += i_1
        j += 1
        int16_t x87control
        int16_t x87status_2
        x87control, x87status_2 = __fldcw_memmem16(arg2.w | 0xc00)
        int16_t eax_9
        eax_9.b = (int.d(x87_r5_2 + fconvert.t(0.5))).b
        *(j + ebx_5 - 1) = eax_9.b
        int16_t x87status_3
        arg1, x87status_3 = __fldcw_memmem16(arg2.w)
    while (j s< 0x100)

fsbase->NtTib.ExceptionList = ExceptionList
return result
