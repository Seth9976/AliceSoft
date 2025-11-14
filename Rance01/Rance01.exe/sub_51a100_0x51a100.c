// 函数: sub_51a100
// 地址: 0x51a100
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t* ecx_1 = *arg2
float* result

if (ecx_1 != 0)
    result = (*(*ecx_1 + 0x14))()
    
    if (result != 0)
        long double x87_r7 = fconvert.t(arg3)
        long double x87_r5 = fconvert.t(0.5)
        long double x87_r5_2 = fconvert.t(fconvert.s(x87_r7 - x87_r5))
        *result = fconvert.s(x87_r5_2)
        long double x87_r4 = fconvert.t(arg4)
        arg3 = fconvert.s(x87_r4 - x87_r5)
        result[1] = fconvert.s(fconvert.t(arg3))
        long double x87_r3_3 = fconvert.t(0.5f)
        result[2] = fconvert.s(x87_r3_3)
        long double x87_r2 = float.t(1)
        result[3] = fconvert.s(x87_r2)
        long double x87_r1 = float.t(0)
        result[4] = arg1
        result[5] = fconvert.s(x87_r1)
        result[6] = fconvert.s(x87_r1)
        long double x87_r1_4 =
            fconvert.t(fconvert.s(fconvert.t(fconvert.s(x87_r7 + fconvert.t(arg5))) - x87_r5))
        result[7] = fconvert.s(x87_r1_4)
        result[8] = fconvert.s(fconvert.t(arg3))
        result[9] = fconvert.s(x87_r3_3)
        result[0xa] = fconvert.s(x87_r2)
        result[0xb] = arg1
        result[0xc] = fconvert.s(fconvert.t(arg7))
        result[0xd] = fconvert.s(x87_r1)
        result[0xe] = fconvert.s(x87_r5_2)
        long double x87_r3_6 =
            fconvert.t(fconvert.s(fconvert.t(fconvert.s(x87_r4 + fconvert.t(arg6))) - x87_r5))
        result[0xf] = fconvert.s(x87_r3_6)
        result[0x10] = fconvert.s(x87_r3_3)
        result[0x11] = fconvert.s(x87_r2)
        result[0x12] = arg1
        result[0x13] = fconvert.s(x87_r1)
        long double x87_r3_10 = fconvert.t(arg8)
        result[0x14] = fconvert.s(x87_r3_10)
        result[0x15] = fconvert.s(x87_r1_4)
        result[0x16] = fconvert.s(x87_r3_6)
        result[0x17] = fconvert.s(x87_r3_3)
        result[0x18] = fconvert.s(x87_r2)
        result[0x19] = arg1
        result[0x1a] = fconvert.s(fconvert.t(arg7))
        result[0x1b] = fconvert.s(x87_r3_10)
        return (*(**arg2 + 0x18))() != 0

result.b = 0
return result
