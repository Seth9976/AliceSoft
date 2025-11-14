// 函数: sub_4f1e60
// 地址: 0x4f1e60
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_714de8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
float var_9c
int32_t eax_2 = data_78c474 ^ &var_9c
int32_t __saved_edi
int32_t var_b0 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
float edx = *arg2
int32_t result
int80_t st0
st0, result = sub_529f80(edx i+ 0xc, edx, edx i+ 0x18, &var_9c, edx)
long double x87_r7 = float.t(0)
float var_98
long double temp1 = fconvert.t(var_98)
x87_r7 - temp1
result.w = (x87_r7 < temp1 ? 1 : 0) << 8 | (is_unordered.t(x87_r7, temp1) ? 1 : 0) << 0xa
    | (x87_r7 == temp1 ? 1 : 0) << 0xe

if ((result:1.b & 1) != 0)
    int32_t var_7c
    sub_4efa30(&var_7c)
    int32_t var_4 = 0
    int32_t result_2
    sub_4adaf0(&result_2, arg2)
    int32_t* eax_9 = *arg3
    int32_t var_68_1 = *eax_9
    float* eax_10 = *arg2
    int32_t var_50
    int32_t* edi_1 = &var_50
    int32_t var_64_1 = eax_9[1]
    int32_t var_60_1 = eax_9[2]
    var_9c = fconvert.s(fconvert.t(eax_10[2]) - fconvert.t(eax_10[5]))
    float var_98_1 = fconvert.s(fconvert.t(eax_10[3]) - fconvert.t(*eax_10))
    float var_94_1 = fconvert.s(fconvert.t(eax_10[5]) * fconvert.t(*eax_10)
        - fconvert.t(eax_10[3]) * fconvert.t(eax_10[2]))
    sub_4da9d0(&var_9c, edi_1)
    void* eax_12 = *arg2
    var_9c = fconvert.s(fconvert.t(*(eax_12 + 0x14)) - fconvert.t(*(eax_12 + 0x20)))
    float var_98_2 = fconvert.s(fconvert.t(*(eax_12 + 0x18)) - fconvert.t(*(eax_12 + 0xc)))
    float var_94_2 = fconvert.s(fconvert.t(*(eax_12 + 0xc)) * fconvert.t(*(eax_12 + 0x20))
        - fconvert.t(*(eax_12 + 0x18)) * fconvert.t(*(eax_12 + 0x14)))
    sub_4da9d0(&var_9c, edi_1)
    float* eax_14 = *arg2
    var_9c = fconvert.s(fconvert.t(eax_14[8]) - fconvert.t(eax_14[2]))
    float var_98_3 = fconvert.s(fconvert.t(*eax_14) - fconvert.t(eax_14[6]))
    float var_94_3 = fconvert.s(fconvert.t(eax_14[6]) * fconvert.t(eax_14[2])
        - fconvert.t(*eax_14) * fconvert.t(eax_14[8]))
    int32_t edx_3 = sub_4da9d0(&var_9c, edi_1)
    float edi_2 = *arg2
    sub_529f80(edi_2 i+ 0xc, edx_3, edi_2 i+ 0x18, &var_9c, edi_2)
    long double x87_r7_22 = fconvert.t(var_9c)
    long double x87_r6_7 = fconvert.t(var_98_3)
    long double x87_r5_1 = fconvert.t(var_94_3)
    float var_3c_1 = fconvert.s(x87_r6_7)
    float var_40_1 = fconvert.s(x87_r7_22)
    float var_38_1 = fconvert.s(x87_r5_1)
    float var_34_1 = fconvert.s(fneg(x87_r7_22) * fconvert.t(*edi_2)
        - x87_r6_7 * fconvert.t(*(edi_2 i+ 4)) - x87_r5_1 * fconvert.t(*(edi_2 i+ 8)))
    float var_8c_2 = fconvert.s(fconvert.t(*(edi_2 i+ 0x10)) + fconvert.t(*(edi_2 i+ 4)))
    float var_88_2 = fconvert.s(fconvert.t(*(edi_2 i+ 0x14)) + fconvert.t(*(edi_2 i+ 8)))
    var_9c = fconvert.s(fconvert.t(*(edi_2 i+ 0x18))
        + fconvert.t(fconvert.s(fconvert.t(*(edi_2 i+ 0xc)) + fconvert.t(*edi_2))))
    long double x87_r6_10 = fconvert.t(3.0)
    float var_30_1 = fconvert.s(fconvert.t(var_9c) / x87_r6_10)
    float var_2c_1 = fconvert.s(
        fconvert.t(fconvert.s(fconvert.t(*(edi_2 i+ 0x1c)) + fconvert.t(var_8c_2))) / x87_r6_10)
    float var_28_1 = fconvert.s(
        fconvert.t(fconvert.s(fconvert.t(*(edi_2 i+ 0x20)) + fconvert.t(var_88_2))) / x87_r6_10)
    int32_t eax_20
    int32_t edx_8
    edx_8:eax_20 = muls.dp.d(0x4ec4ec4f, *(arg1 + 8) - *(arg1 + 4))
    int32_t edx_9 = edx_8 s>> 5
    var_7c = (edx_9 u>> 0x1f) + edx_9
    sub_4f2480(&var_7c, arg1 + 4)
    int32_t eax_24 = var_50
    
    if (eax_24 != 0)
        int32_t var_b4_4 = eax_24
        sub_6b4d5b()
    
    result = result_2
    
    if (result != 0)
        int32_t result_1 = result
        sub_6b4d5b()

result.b = 1
fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &var_9c)
return result
