// 函数: sub_57be90
// 地址: 0x57be90
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

long double x87_r7

if (*(arg1 + 5) == 0)
    x87_r7 = float.t(1)
else
    x87_r7 = fconvert.t(-1f)

long double x87_r7_1 = fconvert.t(arg2)
float var_2c = fconvert.s(fconvert.t(360.0) * x87_r7_1 * fconvert.t(fconvert.s(x87_r7)))

if (*(arg1 + 4) != 0)
    x87_r7_1 = float.t(1) - x87_r7_1

float var_30_1 = fconvert.s(fconvert.t(var_2c) * fconvert.t(3.1415927410125732) / fconvert.t(180.0))
int32_t mxcsr
int16_t x87control
int16_t x87control_1
long double st0
st0, x87control_1 = sub_70ca80(mxcsr, x87control, fconvert.t(var_30_1))
float var_2c_3 =
    fconvert.s(fconvert.t(fconvert.s(sub_70c950(mxcsr, x87control_1, fconvert.t(var_30_1)))))
int32_t eax_1
int32_t edx
edx:eax_1 = sx.q(*(arg1 + 0x38))
int32_t eax_5
int32_t edx_1
edx_1:eax_5 = sx.q(*(arg1 + 0x3c))
long double x87_r7_13 = fconvert.t(fconvert.s(float.t((eax_1 - edx) s>> 1)))
long double x87_r5 = fconvert.t(fconvert.s(fconvert.t(fconvert.s(st0))))
long double x87_r6_6 = fneg(x87_r7_13) * x87_r5
long double x87_r4_1 = fconvert.t(fconvert.s(float.t((eax_5 - edx_1) s>> 1)))
float var_30_5 = fconvert.s(fneg(x87_r4_1))
long double x87_r2 = fconvert.t(var_2c_3)
long double x87_r3_3 = fconvert.t(var_30_5) * x87_r2
long double x87_r1_1 = fconvert.t(fconvert.s(x87_r7_1))
float var_20_1 = fconvert.s((x87_r6_6 - x87_r3_3) * x87_r1_1 + x87_r7_13)
long double x87_r3_5 = x87_r2 * x87_r7_13
float var_24_1 = fconvert.s((fconvert.t(var_30_5) * x87_r5 - x87_r3_5) * x87_r1_1 + x87_r4_1)
long double x87_r1_10 = x87_r7_13 * x87_r5
float var_28_1 = fconvert.s((x87_r1_10 - fconvert.t(fconvert.d(x87_r3_3))) * x87_r1_1 + x87_r7_13)
long double x87_r5_1 = x87_r5 * x87_r4_1
float var_30_6 = fconvert.s((x87_r3_5 - x87_r5_1) * x87_r1_1 + x87_r4_1)
long double x87_r1_20 = x87_r4_1 * fconvert.t(var_2c_3)
int32_t* ecx = *(arg1 + 0x1c)
float var_2c_4 = fconvert.s((x87_r6_6 - x87_r1_20) * x87_r1_1 + x87_r7_13)
float var_1c = fconvert.s((x87_r5_1 - x87_r3_5) * x87_r1_1 + x87_r4_1)
double var_18
var_18.d = fconvert.s(x87_r7_13 + (fconvert.t(fconvert.d(x87_r1_10)) - x87_r1_20) * x87_r1_1)
double var_10
var_10.d = fconvert.s(x87_r4_1 + x87_r1_1 * (x87_r3_5 + x87_r5_1))
int32_t result

if (ecx != 0)
    result =
        (*(*ecx + 0x14))(var_30_6, var_2c_4, var_28_1, var_24_1, var_20_1, var_1c, var_18, var_10)
    
    if (result != 0)
        long double x87_r6_15 = fconvert.t(0.5)
        *result = fconvert.s(fconvert.t(var_20_1) - x87_r6_15)
        *(result + 4) = fconvert.s(fconvert.t(var_24_1) - x87_r6_15)
        long double x87_r6_19 = fconvert.t(0.5f)
        *(result + 8) = fconvert.s(x87_r6_19)
        long double x87_r5_4 = float.t(1)
        *(result + 0xc) = fconvert.s(x87_r5_4)
        long double x87_r4_3 = float.t(0)
        *(result + 0x10) = 0xffffffff
        *(result + 0x14) = fconvert.s(x87_r4_3)
        *(result + 0x18) = fconvert.s(x87_r4_3)
        *(result + 0x1c) = fconvert.s(fconvert.t(var_28_1) - x87_r6_15)
        *(result + 0x20) = fconvert.s(fconvert.t(var_30_6) - x87_r6_15)
        *(result + 0x24) = fconvert.s(x87_r6_19)
        *(result + 0x28) = fconvert.s(x87_r5_4)
        *(result + 0x2c) = 0xffffffff
        *(result + 0x30) = fconvert.s(x87_r5_4)
        *(result + 0x34) = fconvert.s(x87_r4_3)
        *(result + 0x38) = fconvert.s(fconvert.t(var_2c_4) - x87_r6_15)
        *(result + 0x3c) = fconvert.s(fconvert.t(var_1c) - x87_r6_15)
        *(result + 0x40) = fconvert.s(x87_r6_19)
        *(result + 0x44) = fconvert.s(x87_r5_4)
        *(result + 0x48) = 0xffffffff
        *(result + 0x4c) = fconvert.s(x87_r4_3)
        *(result + 0x50) = fconvert.s(x87_r5_4)
        *(result + 0x54) = fconvert.s(fconvert.t(var_18.d) - x87_r6_15)
        *(result + 0x58) = fconvert.s(fconvert.t(var_10.d) - x87_r6_15)
        *(result + 0x5c) = fconvert.s(x87_r6_19)
        *(result + 0x60) = fconvert.s(x87_r5_4)
        *(result + 0x64) = 0xffffffff
        *(result + 0x68) = fconvert.s(x87_r5_4)
        *(result + 0x6c) = fconvert.s(x87_r5_4)
        int32_t* ecx_1 = *(arg1 + 0x1c)
        
        if (ecx_1 != 0 && (*(*ecx_1 + 0x18))().b != 0)
            result.b = 1
            return result

result.b = 0
return result
