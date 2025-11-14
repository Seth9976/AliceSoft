// 函数: sub_4c2fd0
// 地址: 0x4c2fd0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_715288
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t var_6c = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
float edx = *arg2
float var_58
int32_t result
int80_t st0
st0, result = sub_529f80(edx i+ 0xc, edx, edx i+ 0x18, &var_58, edx)
long double x87_r7 = float.t(0)
float var_54
long double temp1 = fconvert.t(var_54)
x87_r7 - temp1
result.w = (x87_r7 < temp1 ? 1 : 0) << 8 | (is_unordered.t(x87_r7, temp1) ? 1 : 0) << 0xa
    | (x87_r7 == temp1 ? 1 : 0) << 0xe | 0x3800

if ((result:1.b & 1) != 0)
    float var_1c_1 = fconvert.s(x87_r7)
    float var_18_1 = fconvert.s(x87_r7)
    int32_t result_2 = 0
    float var_14_1 = fconvert.s(x87_r7)
    int32_t var_38_1 = 0
    float var_10_1 = fconvert.s(x87_r7)
    int32_t var_34_1 = 0
    int32_t var_2c = 0
    int32_t var_28_1 = 0
    int32_t var_24_1 = 0
    int32_t var_4 = 0
    sub_4adaf0(&result_2, arg2)
    float* eax_5 = *arg2
    int32_t* edi_1 = &var_2c
    var_58 = fconvert.s(fconvert.t(eax_5[2]) - fconvert.t(eax_5[5]))
    float var_54_1 = fconvert.s(fconvert.t(eax_5[3]) - fconvert.t(*eax_5))
    float var_50_1 = fconvert.s(fconvert.t(eax_5[5]) * fconvert.t(*eax_5)
        - fconvert.t(eax_5[3]) * fconvert.t(eax_5[2]))
    sub_4da9d0(&var_58, edi_1)
    void* eax_7 = *arg2
    var_58 = fconvert.s(fconvert.t(*(eax_7 + 0x14)) - fconvert.t(*(eax_7 + 0x20)))
    float var_54_2 = fconvert.s(fconvert.t(*(eax_7 + 0x18)) - fconvert.t(*(eax_7 + 0xc)))
    float var_50_2 = fconvert.s(fconvert.t(*(eax_7 + 0x20)) * fconvert.t(*(eax_7 + 0xc))
        - fconvert.t(*(eax_7 + 0x18)) * fconvert.t(*(eax_7 + 0x14)))
    sub_4da9d0(&var_58, edi_1)
    float* eax_9 = *arg2
    var_58 = fconvert.s(fconvert.t(eax_9[8]) - fconvert.t(eax_9[2]))
    float var_54_3 = fconvert.s(fconvert.t(*eax_9) - fconvert.t(eax_9[6]))
    float var_50_3 = fconvert.s(fconvert.t(eax_9[6]) * fconvert.t(eax_9[2])
        - fconvert.t(eax_9[8]) * fconvert.t(*eax_9))
    int32_t edx_1 = sub_4da9d0(&var_58, edi_1)
    float* edi_2 = *arg2
    sub_529f80(&edi_2[3], edx_1, &edi_2[6], &var_58, edi_2)
    long double x87_r7_22 = fconvert.t(var_58)
    long double x87_r6_7 = fconvert.t(var_54_3)
    long double x87_r5_1 = fconvert.t(var_50_3)
    float var_1c_2 = fconvert.s(x87_r7_22)
    float var_18_2 = fconvert.s(x87_r6_7)
    float var_14_2 = fconvert.s(x87_r5_1)
    float var_10_2 = fconvert.s(fneg(x87_r7_22) * fconvert.t(*edi_2)
        - x87_r6_7 * fconvert.t(edi_2[1]) - x87_r5_1 * fconvert.t(edi_2[2]))
    sub_4c31e0(&result_2, arg1 + 4)
    int32_t eax_14 = var_2c
    
    if (eax_14 != 0)
        int32_t var_70_3 = eax_14
        sub_6b4d5b()
    
    result = result_2
    
    if (result != 0)
        int32_t result_1 = result
        sub_6b4d5b()

result.b = 1
fsbase->NtTib.ExceptionList = ExceptionList
return result
