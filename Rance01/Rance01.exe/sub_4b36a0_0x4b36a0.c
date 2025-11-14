// 函数: sub_4b36a0
// 地址: 0x4b36a0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

float* ebx = arg3

if (*(arg1 + 0x40) != 0 && (*(**(arg1 + 0x40) + 0x10))() != 0)
    float var_c = fconvert.s(fconvert.t(ebx[1]) * fconvert.t(arg2[2])
        - fconvert.t(ebx[2]) * fconvert.t(arg2[1]))
    float var_8 =
        fconvert.s(fconvert.t(ebx[2]) * fconvert.t(*arg2) - fconvert.t(*ebx) * fconvert.t(arg2[2]))
    float var_4 =
        fconvert.s(fconvert.t(*ebx) * fconvert.t(arg2[1]) - fconvert.t(*arg2) * fconvert.t(ebx[1]))
    float* result = (*(**(arg1 + 0x40) + 0x14))()
    
    if (result == 0)
        result.b = 0
        return result
    
    float* ecx_3 = *(arg1 + 0x1c)
    long double x87_r6_6 = fconvert.t(fconvert.s(fconvert.t(ecx_3[1])))
    long double x87_r6_10 = fconvert.t(fconvert.s(fconvert.t(*ecx_3)))
    float var_2c_1 = fconvert.s(fconvert.t(fconvert.s(
        fconvert.t(fconvert.s(fconvert.t(arg2[1]) * x87_r6_10)) + fconvert.t(*(arg1 + 0x14))))
        + fconvert.t(fconvert.s(x87_r6_6 * fconvert.t(ebx[1]))))
    float var_28_1 = fconvert.s(fconvert.t(fconvert.s(
        fconvert.t(fconvert.s(x87_r6_10 * fconvert.t(arg2[2]))) + fconvert.t(*(arg1 + 0x18))))
        + fconvert.t(fconvert.s(x87_r6_6 * fconvert.t(ebx[2]))))
    *result = fconvert.s(fconvert.t(fconvert.s(fconvert.t(fconvert.s(
        fconvert.t(fconvert.s(fconvert.t(*arg2) * x87_r6_10)) + fconvert.t(*(arg1 + 0x10))))
        + fconvert.t(fconvert.s(fconvert.t(*ebx) * x87_r6_6)))))
    result[1] = fconvert.s(fconvert.t(var_2c_1))
    result[2] = fconvert.s(fconvert.t(var_28_1))
    long double x87_r7_34 = fconvert.t(var_c)
    result[3] = fconvert.s(x87_r7_34)
    long double x87_r6_14 = fconvert.t(var_8)
    result[4] = fconvert.s(x87_r6_14)
    long double x87_r5_2 = fconvert.t(var_4)
    result[5] = fconvert.s(x87_r5_2)
    result[6] = 0xffffffff
    float* ecx_4 = *(arg1 + 0x2c)
    arg3 = fconvert.s(fconvert.t(ecx_4[1]))
    result[7] = fconvert.s(fconvert.t(*ecx_4))
    result[8] = fconvert.s(fconvert.t(arg3))
    result[9] = fconvert.s(fconvert.t(*(*(arg1 + 0x1c) + 8)))
    long double x87_r4_4 = float.t(0)
    result[0xa] = fconvert.s(x87_r4_4)
    void* ecx_6 = *(arg1 + 0x1c)
    long double x87_r2 = fconvert.t(fconvert.s(fconvert.t(*(ecx_6 + 0x10))))
    long double x87_r2_4 = fconvert.t(fconvert.s(fconvert.t(*(ecx_6 + 0xc))))
    float var_8_2 = fconvert.s(fconvert.t(fconvert.s(
        fconvert.t(fconvert.s(fconvert.t(arg2[1]) * x87_r2_4)) + fconvert.t(*(arg1 + 0x14))))
        + fconvert.t(fconvert.s(x87_r2 * fconvert.t(ebx[1]))))
    float var_4_2 = fconvert.s(fconvert.t(fconvert.s(
        fconvert.t(fconvert.s(x87_r2_4 * fconvert.t(arg2[2]))) + fconvert.t(*(arg1 + 0x18))))
        + fconvert.t(fconvert.s(x87_r2 * fconvert.t(ebx[2]))))
    result[0xb] = fconvert.s(fconvert.t(fconvert.s(fconvert.t(fconvert.s(
        fconvert.t(fconvert.s(fconvert.t(*arg2) * x87_r2_4)) + fconvert.t(*(arg1 + 0x10))))
        + fconvert.t(fconvert.s(fconvert.t(*ebx) * x87_r2)))))
    result[0xc] = fconvert.s(fconvert.t(var_8_2))
    result[0xd] = fconvert.s(fconvert.t(var_4_2))
    result[0xe] = fconvert.s(x87_r7_34)
    result[0xf] = fconvert.s(x87_r6_14)
    result[0x10] = fconvert.s(x87_r5_2)
    result[0x11] = 0xffffffff
    void* ecx_7 = *(arg1 + 0x2c)
    arg3 = fconvert.s(fconvert.t(*(ecx_7 + 0xc)))
    result[0x12] = fconvert.s(fconvert.t(*(ecx_7 + 8)))
    result[0x13] = fconvert.s(fconvert.t(arg3))
    result[0x14] = fconvert.s(fconvert.t(*(*(arg1 + 0x1c) + 0x14)))
    result[0x15] = fconvert.s(x87_r4_4)
    void* ecx_8 = *(arg1 + 0x1c)
    long double x87_r2_8 = fconvert.t(fconvert.s(fconvert.t(*(ecx_8 + 0x1c))))
    long double x87_r3_35 = fconvert.t(fconvert.s(fconvert.t(*(ecx_8 + 0x18))))
    float var_8_4 = fconvert.s(fconvert.t(fconvert.s(
        fconvert.t(fconvert.s(x87_r3_35 * fconvert.t(arg2[1]))) + fconvert.t(*(arg1 + 0x14))))
        + fconvert.t(fconvert.s(x87_r2_8 * fconvert.t(ebx[1]))))
    float var_4_4 = fconvert.s(fconvert.t(fconvert.s(
        fconvert.t(fconvert.s(x87_r3_35 * fconvert.t(arg2[2]))) + fconvert.t(*(arg1 + 0x18))))
        + fconvert.t(fconvert.s(x87_r2_8 * fconvert.t(ebx[2]))))
    result[0x16] = fconvert.s(fconvert.t(fconvert.s(fconvert.t(fconvert.s(
        fconvert.t(fconvert.s(x87_r3_35 * fconvert.t(*arg2))) + fconvert.t(*(arg1 + 0x10))))
        + fconvert.t(fconvert.s(fconvert.t(*ebx) * x87_r2_8)))))
    result[0x17] = fconvert.s(fconvert.t(var_8_4))
    result[0x18] = fconvert.s(fconvert.t(var_4_4))
    result[0x19] = fconvert.s(x87_r7_34)
    result[0x1a] = fconvert.s(x87_r6_14)
    result[0x1b] = fconvert.s(x87_r5_2)
    result[0x1c] = 0xffffffff
    void* ecx_9 = *(arg1 + 0x2c)
    arg3 = fconvert.s(fconvert.t(*(ecx_9 + 0x14)))
    result[0x1d] = fconvert.s(fconvert.t(*(ecx_9 + 0x10)))
    result[0x1e] = fconvert.s(fconvert.t(arg3))
    result[0x1f] = fconvert.s(fconvert.t(*(*(arg1 + 0x1c) + 0x20)))
    result[0x20] = fconvert.s(x87_r4_4)
    void* ecx_11 = *(arg1 + 0x1c)
    long double x87_r2_16 = fconvert.t(fconvert.s(fconvert.t(*(ecx_11 + 0x28))))
    long double x87_r3_62 = fconvert.t(fconvert.s(fconvert.t(*(ecx_11 + 0x24))))
    float var_8_6 = fconvert.s(fconvert.t(fconvert.s(
        fconvert.t(fconvert.s(x87_r3_62 * fconvert.t(arg2[1]))) + fconvert.t(*(arg1 + 0x14))))
        + fconvert.t(fconvert.s(x87_r2_16 * fconvert.t(ebx[1]))))
    float var_4_6 = fconvert.s(fconvert.t(fconvert.s(
        fconvert.t(fconvert.s(x87_r3_62 * fconvert.t(arg2[2]))) + fconvert.t(*(arg1 + 0x18))))
        + fconvert.t(fconvert.s(x87_r2_16 * fconvert.t(ebx[2]))))
    result[0x21] = fconvert.s(fconvert.t(fconvert.s(fconvert.t(fconvert.s(
        fconvert.t(fconvert.s(x87_r3_62 * fconvert.t(*arg2))) + fconvert.t(*(arg1 + 0x10))))
        + fconvert.t(fconvert.s(fconvert.t(*ebx) * x87_r2_16)))))
    result[0x22] = fconvert.s(fconvert.t(var_8_6))
    result[0x23] = fconvert.s(fconvert.t(var_4_6))
    result[0x24] = fconvert.s(x87_r7_34)
    result[0x25] = fconvert.s(x87_r6_14)
    result[0x26] = fconvert.s(x87_r5_2)
    result[0x27] = 0xffffffff
    void* ecx_12 = *(arg1 + 0x2c)
    arg3 = fconvert.s(fconvert.t(*(ecx_12 + 0x1c)))
    result[0x28] = fconvert.s(fconvert.t(*(ecx_12 + 0x18)))
    result[0x29] = fconvert.s(fconvert.t(arg3))
    result[0x2a] = fconvert.s(fconvert.t(*(*(arg1 + 0x1c) + 0x2c)))
    result[0x2b] = fconvert.s(x87_r4_4)
    return (*(**(arg1 + 0x40) + 0x18))() != 0

return 1
