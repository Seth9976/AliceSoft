// 函数: sub_57c510
// 地址: 0x57c510
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

if (*(arg1 + 4) != 0)
    arg2 = fconvert.s(float.t(1) - fconvert.t(arg2))

long double x87_r7_4 = fconvert.t(fconvert.s(float.t(*(arg1 + 0x30))))
float var_8_1 = fconvert.s(x87_r7_4)
float var_4 = fconvert.s(float.t(*(arg1 + 0x34)))
int32_t result = sub_70c710(x87_r7_4 * fconvert.t(arg2))
int32_t* ecx = *(arg1 + 0x1c)
arg2 = fconvert.s(float.t(result))

if (ecx != 0)
    result = (*(*ecx + 0x14))(var_8_1, var_4)
    
    if (result != 0)
        long double x87_r6_3 = fconvert.t(0.5)
        long double x87_r6_5 = fconvert.t(fconvert.s(fconvert.t(arg2) - x87_r6_3))
        *result = fconvert.s(x87_r6_5)
        long double x87_r5_2 = fconvert.t(fconvert.s(float.t(0) - x87_r6_3))
        *(result + 4) = fconvert.s(x87_r5_2)
        long double x87_r4 = fconvert.t(0.5f)
        *(result + 8) = fconvert.s(x87_r4)
        long double x87_r3 = float.t(1)
        *(result + 0xc) = fconvert.s(x87_r3)
        long double x87_r2 = float.t(0)
        *(result + 0x10) = 0xffffffff
        *(result + 0x14) = fconvert.s(x87_r2)
        *(result + 0x18) = fconvert.s(x87_r2)
        long double x87_r1_2 = fconvert.t(fconvert.s(fconvert.t(var_8_1) - x87_r6_3))
        *(result + 0x1c) = fconvert.s(x87_r1_2)
        *(result + 0x20) = fconvert.s(x87_r5_2)
        int80_t x87_r4_1 = x87_r2
        *(result + 0x24) = fconvert.s(x87_r4)
        *(result + 0x28) = fconvert.s(x87_r3)
        *(result + 0x2c) = 0xffffffff
        *(result + 0x30) = fconvert.s(x87_r3)
        int80_t x87_r4_2 = x87_r3
        *(result + 0x34) = fconvert.s(x87_r4_1)
        *(result + 0x38) = fconvert.s(x87_r6_5)
        int80_t x87_r7_11 = x87_r4
        long double x87_r3_3 = fconvert.t(fconvert.s(fconvert.t(var_4) - x87_r6_3))
        *(result + 0x3c) = fconvert.s(x87_r3_3)
        *(result + 0x40) = fconvert.s(x87_r7_11)
        *(result + 0x44) = fconvert.s(x87_r4_2)
        *(result + 0x48) = 0xffffffff
        *(result + 0x4c) = fconvert.s(x87_r4_1)
        *(result + 0x50) = fconvert.s(x87_r4_2)
        *(result + 0x54) = fconvert.s(x87_r1_2)
        *(result + 0x58) = fconvert.s(x87_r3_3)
        *(result + 0x5c) = fconvert.s(x87_r7_11)
        *(result + 0x60) = fconvert.s(x87_r4_2)
        *(result + 0x64) = 0xffffffff
        *(result + 0x68) = fconvert.s(x87_r4_2)
        *(result + 0x6c) = fconvert.s(x87_r4_2)
        int32_t* ecx_1 = *(arg1 + 0x1c)
        
        if (ecx_1 != 0)
            (*(*ecx_1 + 0x18))()
        
        result.b = 1
        return result

result.b = 0
return result
