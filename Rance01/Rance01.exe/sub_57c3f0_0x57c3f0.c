// 函数: sub_57c3f0
// 地址: 0x57c3f0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

if (*(arg1 + 4) != 0)
    arg2 = fconvert.s(float.t(1) - fconvert.t(arg2))

int32_t result = sub_70c710(float.t(*(arg1 + 0x30)) * fconvert.t(arg2))
int32_t* ecx = *(arg1 + 8)
float var_8 = fconvert.s(float.t(result))
float var_4 = fconvert.s(float.t(*(arg1 + 0x34)))

if (ecx != 0)
    result = (*(*ecx + 0x14))(var_8, var_4)
    
    if (result != 0)
        long double x87_r6_2 = fconvert.t(0.5)
        long double x87_r6_4 = fconvert.t(fconvert.s(float.t(0) - x87_r6_2))
        *result = fconvert.s(x87_r6_4)
        *(result + 4) = fconvert.s(x87_r6_4)
        long double x87_r5 = fconvert.t(0.5f)
        *(result + 8) = fconvert.s(x87_r5)
        long double x87_r4 = float.t(1)
        *(result + 0xc) = fconvert.s(x87_r4)
        long double x87_r3 = float.t(0)
        *(result + 0x10) = 0xffffffff
        *(result + 0x14) = fconvert.s(x87_r3)
        *(result + 0x18) = fconvert.s(x87_r3)
        long double x87_r2_2 = fconvert.t(fconvert.s(fconvert.t(var_8) - x87_r6_2))
        *(result + 0x1c) = fconvert.s(x87_r2_2)
        *(result + 0x20) = fconvert.s(x87_r6_4)
        *(result + 0x24) = fconvert.s(x87_r5)
        int80_t x87_r4_1 = x87_r5
        *(result + 0x28) = fconvert.s(x87_r4)
        *(result + 0x2c) = 0xffffffff
        *(result + 0x30) = fconvert.s(x87_r4)
        *(result + 0x34) = fconvert.s(x87_r3)
        *(result + 0x38) = fconvert.s(x87_r6_4)
        int80_t x87_r7_11 = x87_r4
        long double x87_r3_3 = fconvert.t(fconvert.s(fconvert.t(var_4) - x87_r6_2))
        *(result + 0x3c) = fconvert.s(x87_r3_3)
        *(result + 0x40) = fconvert.s(x87_r4_1)
        *(result + 0x44) = fconvert.s(x87_r7_11)
        *(result + 0x48) = 0xffffffff
        *(result + 0x4c) = fconvert.s(x87_r3)
        *(result + 0x50) = fconvert.s(x87_r7_11)
        *(result + 0x54) = fconvert.s(x87_r2_2)
        *(result + 0x58) = fconvert.s(x87_r3_3)
        *(result + 0x5c) = fconvert.s(x87_r4_1)
        *(result + 0x60) = fconvert.s(x87_r7_11)
        *(result + 0x64) = 0xffffffff
        *(result + 0x68) = fconvert.s(x87_r7_11)
        *(result + 0x6c) = fconvert.s(x87_r7_11)
        int32_t* ecx_1 = *(arg1 + 8)
        
        if (ecx_1 != 0)
            (*(*ecx_1 + 0x18))()
        
        result.b = 1
        return result

result.b = 0
return result
