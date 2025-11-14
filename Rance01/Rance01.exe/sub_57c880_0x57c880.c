// 函数: sub_57c880
// 地址: 0x57c880
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t* ecx_1 = *(arg1 + 4)
float* result

if (ecx_1 != 0)
    result = (*(*ecx_1 + 0x14))()
    
    if (result != 0)
        float var_8 = fconvert.s(float.t(*(arg1 + 0x30)))
        long double x87_r6 = fconvert.t(0.5)
        *result = fconvert.s(float.t(*(arg1 + 0x2c)) - x87_r6)
        result[1] = fconvert.s(fconvert.t(var_8) - x87_r6)
        long double x87_r6_4 = fconvert.t(0.5f)
        result[2] = fconvert.s(x87_r6_4)
        long double x87_r5 = float.t(1)
        result[3] = fconvert.s(x87_r5)
        long double x87_r4 = float.t(0)
        result[4] = 0xffffffff
        result[5] = fconvert.s(x87_r4)
        result[6] = fconvert.s(x87_r4)
        float var_4 = fconvert.s(float.t(*(arg1 + 0x30)))
        result[7] = fconvert.s(
            fconvert.t(fconvert.s(float.t(*(arg1 + 0x34)) + float.t(*(arg1 + 0x2c)))) - x87_r6)
        result[8] = fconvert.s(fconvert.t(var_4) - x87_r6)
        result[9] = fconvert.s(x87_r6_4)
        result[0xa] = fconvert.s(x87_r5)
        result[0xb] = 0xffffffff
        result[0xc] = fconvert.s(x87_r5)
        result[0xd] = fconvert.s(x87_r4)
        float var_4_1 = fconvert.s(float.t(*(arg1 + 0x38)) + float.t(*(arg1 + 0x30)))
        result[0xe] = fconvert.s(float.t(*(arg1 + 0x2c)) - x87_r6)
        result[0xf] = fconvert.s(fconvert.t(var_4_1) - x87_r6)
        result[0x10] = fconvert.s(x87_r6_4)
        result[0x11] = fconvert.s(x87_r5)
        result[0x12] = 0xffffffff
        result[0x13] = fconvert.s(x87_r4)
        result[0x14] = fconvert.s(x87_r5)
        float var_8_2 = fconvert.s(float.t(*(arg1 + 0x38)) + float.t(*(arg1 + 0x30)))
        float var_4_2 = fconvert.s(float.t(*(arg1 + 0x34)) + float.t(*(arg1 + 0x2c)))
        result[0x15] = fconvert.s(fconvert.t(var_4_2) - x87_r6)
        result[0x16] = fconvert.s(fconvert.t(var_8_2) - x87_r6)
        result[0x17] = fconvert.s(x87_r6_4)
        result[0x18] = fconvert.s(x87_r5)
        result[0x19] = 0xffffffff
        result[0x1a] = fconvert.s(x87_r5)
        result[0x1b] = fconvert.s(x87_r5)
        int32_t* ecx = *(arg1 + 4)
        
        if (ecx != 0)
            (*(*ecx + 0x18))(var_8_2, var_4_2)
        
        result.b = 1
        return result

result.b = 0
return result
