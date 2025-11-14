// 函数: sub_4ad750
// 地址: 0x4ad750
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_713528
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
float var_7c
int32_t eax_2 = data_78c474 ^ &var_7c
int32_t __saved_edi
int32_t var_90 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
float edx = *arg2
int32_t result
int80_t st0
st0, result = sub_529f80(edx i+ 0xc, edx, edx i+ 0x18, &var_7c, edx)
long double x87_r7 = float.t(0)
float var_78
long double temp1 = fconvert.t(var_78)
x87_r7 - temp1
result.w = (x87_r7 < temp1 ? 1 : 0) << 8 | (is_unordered.t(x87_r7, temp1) ? 1 : 0) << 0xa
    | (x87_r7 == temp1 ? 1 : 0) << 0xe | 0x3800

if ((result:1.b & 1) != 0)
    float var_24_1 = fconvert.s(x87_r7)
    float var_20_1 = fconvert.s(x87_r7)
    int32_t result_2 = 0
    float var_1c_1 = fconvert.s(x87_r7)
    int32_t var_58_1 = 0
    float var_18_1 = fconvert.s(x87_r7)
    int32_t var_54_1 = 0
    int32_t var_4c_1
    __builtin_memset(&var_4c_1, 0, 0x24)
    int32_t var_4 = 0
    sub_4adaf0(&result_2, arg2)
    int32_t* eax_8 = *arg3
    int32_t var_4c_2 = *eax_8
    float* eax_9 = *arg2
    int32_t var_34
    int32_t* edi_1 = &var_34
    int32_t var_48_1 = eax_8[1]
    int32_t var_44_1 = eax_8[2]
    var_7c = fconvert.s(fconvert.t(eax_9[2]) - fconvert.t(eax_9[5]))
    float var_78_1 = fconvert.s(fconvert.t(eax_9[3]) - fconvert.t(*eax_9))
    float var_74_1 = fconvert.s(fconvert.t(*eax_9) * fconvert.t(eax_9[5])
        - fconvert.t(eax_9[3]) * fconvert.t(eax_9[2]))
    sub_4da9d0(&var_7c, edi_1)
    void* eax_11 = *arg2
    var_7c = fconvert.s(fconvert.t(*(eax_11 + 0x14)) - fconvert.t(*(eax_11 + 0x20)))
    float var_78_2 = fconvert.s(fconvert.t(*(eax_11 + 0x18)) - fconvert.t(*(eax_11 + 0xc)))
    float var_74_2 = fconvert.s(fconvert.t(*(eax_11 + 0xc)) * fconvert.t(*(eax_11 + 0x20))
        - fconvert.t(*(eax_11 + 0x18)) * fconvert.t(*(eax_11 + 0x14)))
    sub_4da9d0(&var_7c, edi_1)
    float* eax_13 = *arg2
    var_7c = fconvert.s(fconvert.t(eax_13[8]) - fconvert.t(eax_13[2]))
    float var_78_3 = fconvert.s(fconvert.t(*eax_13) - fconvert.t(eax_13[6]))
    float var_74_3 = fconvert.s(fconvert.t(eax_13[6]) * fconvert.t(eax_13[2])
        - fconvert.t(eax_13[8]) * fconvert.t(*eax_13))
    int32_t edx_3 = sub_4da9d0(&var_7c, edi_1)
    float* edi_2 = *arg2
    sub_529f80(&edi_2[3], edx_3, &edi_2[6], &var_7c, edi_2)
    long double x87_r7_22 = fconvert.t(var_7c)
    long double x87_r6_7 = fconvert.t(var_78_3)
    long double x87_r5_1 = fconvert.t(var_74_3)
    float var_20_2 = fconvert.s(x87_r6_7)
    float var_24_2 = fconvert.s(x87_r7_22)
    float var_1c_2 = fconvert.s(x87_r5_1)
    float var_18_2 = fconvert.s(fneg(x87_r7_22) * fconvert.t(*edi_2)
        - x87_r6_7 * fconvert.t(edi_2[1]) - x87_r5_1 * fconvert.t(edi_2[2]))
    sub_4adc50(&result_2, arg1 + 4)
    int32_t eax_18 = var_34
    
    if (eax_18 != 0)
        int32_t var_94_4 = eax_18
        sub_6b4d5b()
    
    result = result_2
    
    if (result != 0)
        int32_t result_1 = result
        sub_6b4d5b()

result.b = 1
fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &var_7c)
return result
