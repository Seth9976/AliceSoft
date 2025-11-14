// 函数: sub_4bd300
// 地址: 0x4bd300
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

long double x87_r7 = float.t(0)
float ebx = arg4
float var_54 = fconvert.s(x87_r7)
float var_48 = fconvert.s(x87_r7)
float ebp = arg3
float var_44 = fconvert.s(x87_r7)
float var_40 = fconvert.s(x87_r7)
float var_3c = fconvert.s(x87_r7)
float var_38 = fconvert.s(x87_r7)
arg3 = fconvert.s(x87_r7)
struct sealengine::CEmitterPos::VTable* const var_4c = &sealengine::CEmitterPos::`vftable'
float var_58 = fconvert.s(float.t(1))
struct sealengine::CEmitterPos::VTable* const var_1c = &sealengine::CEmitterPos::`vftable'
int32_t ecx
int32_t var_7c = ecx
float var_18 = fconvert.s(x87_r7)
float var_14 = fconvert.s(x87_r7)
float var_10 = fconvert.s(x87_r7)
float var_c = fconvert.s(x87_r7)
float var_8 = fconvert.s(x87_r7)
float var_60 = fconvert.s(x87_r7)
int32_t var_7c_2 = sub_4bd8c0(&var_4c, arg2, ebp, ebx, fconvert.s(x87_r7), &arg3)
sub_4bd8c0(&var_1c, arg2, ebp, ebx, fconvert.s(float.t(1)), &var_60)
int32_t i_1 = 8
float var_2c_1
long double x87_r7_2
int32_t i

do
    float var_5c
    float* var_7c_4 = &var_5c
    struct sealengine::CEmitterPos::VTable* const var_34 = &sealengine::CEmitterPos::`vftable'
    arg4 = fconvert.s((fconvert.t(var_58) + fconvert.t(var_54)) * fconvert.t(0.5))
    long double x87_r7_6 = float.t(0)
    float var_30_1 = fconvert.s(x87_r7_6)
    var_2c_1 = fconvert.s(x87_r7_6)
    float var_28_1 = fconvert.s(x87_r7_6)
    float var_24_1 = fconvert.s(x87_r7_6)
    float var_20_1 = fconvert.s(x87_r7_6)
    var_5c = fconvert.s(x87_r7_6)
    sub_4bd8c0(&var_34, arg2, ebp, ebx, fconvert.s(fconvert.t(arg4)), &var_5c)
    x87_r7_2 = fconvert.t(arg5)
    long double x87_r6_1 = fconvert.t(var_5c)
    x87_r6_1 - x87_r7_2
    long double x87_r5_1 = fconvert.t(arg4)
    
    if ((((x87_r6_1 < x87_r7_2 ? 1 : 0) << 8 | (is_unordered.t(x87_r6_1, x87_r7_2) ? 1 : 0) << 0xa
            | (x87_r6_1 == x87_r7_2 ? 1 : 0) << 0xe | 0x3000):1.b & 0x41) != 0)
        var_54 = fconvert.s(x87_r5_1)
        var_48 = var_30_1
        var_44 = var_2c_1
        var_3c = fconvert.s(fconvert.t(var_24_1))
        var_40 = var_28_1
        var_38 = fconvert.s(fconvert.t(var_20_1))
        arg3 = fconvert.s(x87_r6_1)
    else
        var_58 = fconvert.s(x87_r5_1)
        float var_18_1 = var_30_1
        float var_14_1 = var_2c_1
        float var_c_1 = fconvert.s(fconvert.t(var_24_1))
        float var_10_1 = var_28_1
        float var_8_1 = fconvert.s(fconvert.t(var_20_1))
        var_60 = fconvert.s(x87_r6_1)
    
    i = i_1
    i_1 -= 1
while (i != 1)
long double x87_r6_2 = fconvert.t(arg3)
long double x87_r4 = fconvert.t(var_60)
x87_r4 - x87_r6_2
float eax_2
eax_2.w = (x87_r4 < x87_r6_2 ? 1 : 0) << 8 | (is_unordered.t(x87_r4, x87_r6_2) ? 1 : 0) << 0xa
    | (x87_r4 == x87_r6_2 ? 1 : 0) << 0xe | 0x2000
bool p = unimplemented  {test ah, 0x44}

if (p)
    float var_78_3 = var_2c_1
    sub_4bde70(1, arg1, &var_4c, &var_1c, 
        fconvert.s(fconvert.t(fconvert.s((x87_r7_2 - x87_r4) / (x87_r6_2 - x87_r4)))))
    return 

arg1[1] = var_48
arg1[4] = fconvert.s(fconvert.t(var_3c))
arg1[2] = var_44
*arg1 = &sealengine::CEmitterPos::`vftable'
arg1[5] = fconvert.s(fconvert.t(var_38))
arg1[3] = var_40
