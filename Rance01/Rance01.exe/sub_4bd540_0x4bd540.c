// 函数: sub_4bd540
// 地址: 0x4bd540
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

float i_1
int32_t eax_1 = data_78c474 ^ &i_1
long double x87_r7 = float.t(0)
float var_78 = fconvert.s(x87_r7)
float var_68 = fconvert.s(x87_r7)
float var_64 = fconvert.s(x87_r7)
float var_60 = fconvert.s(x87_r7)
float var_a4 = fconvert.s(x87_r7)
float var_70 = fconvert.s(float.t(1))
float* var_c4 = &var_a4
float var_98 = fconvert.s(x87_r7)
float var_94 = fconvert.s(x87_r7)
float var_90 = fconvert.s(x87_r7)
struct sealengine::CEmitterRotate::VTable* const var_6c = &sealengine::CEmitterRotate::`vftable'
float var_a0 = fconvert.s(x87_r7)
struct sealengine::CEmitterRotate::VTable* const var_9c = &sealengine::CEmitterRotate::`vftable'
int32_t var_c4_2 = sub_4bd980(arg1, &var_6c, arg3, arg4, fconvert.s(x87_r7), &var_a4)
int32_t ecx_1 = sub_4bd980(arg1, &var_9c, arg3, arg4, fconvert.s(float.t(1)), &var_a0)
i_1 = 1.12103877e-44f
struct sealengine::CEmitterRotate::VTable* var_8c
long double x87_r7_2
float i

do
    int32_t var_c4_4 = ecx_1
    var_8c = &sealengine::CEmitterRotate::`vftable'
    float var_a8_1 = fconvert.s((fconvert.t(var_70) + fconvert.t(var_78)) * fconvert.t(0.5))
    long double x87_r7_6 = float.t(0)
    float var_88_1 = fconvert.s(x87_r7_6)
    float var_84_1 = fconvert.s(x87_r7_6)
    float var_80_1 = fconvert.s(x87_r7_6)
    float var_74 = fconvert.s(x87_r7_6)
    ecx_1 = sub_4bd980(arg1, &var_8c, arg3, arg4, fconvert.s(fconvert.t(var_a8_1)), &var_74)
    x87_r7_2 = fconvert.t(arg5)
    long double x87_r6_1 = fconvert.t(var_74)
    x87_r6_1 - x87_r7_2
    long double x87_r5_1 = fconvert.t(var_a8_1)
    
    if ((((x87_r6_1 < x87_r7_2 ? 1 : 0) << 8 | (is_unordered.t(x87_r6_1, x87_r7_2) ? 1 : 0) << 0xa
            | (x87_r6_1 == x87_r7_2 ? 1 : 0) << 0xe | 0x3000):1.b & 0x41) != 0)
        var_78 = fconvert.s(x87_r5_1)
        float var_68_1 = fconvert.s(fconvert.t(var_88_1))
        float var_64_1 = fconvert.s(fconvert.t(var_84_1))
        float var_60_1 = fconvert.s(fconvert.t(var_80_1))
        var_a4 = fconvert.s(x87_r6_1)
    else
        var_70 = fconvert.s(x87_r5_1)
        var_98 = fconvert.s(fconvert.t(var_88_1))
        var_94 = fconvert.s(fconvert.t(var_84_1))
        var_90 = fconvert.s(fconvert.t(var_80_1))
        var_a0 = fconvert.s(x87_r6_1)
    
    i = i_1
    i_1 -= 1
    var_8c = &sealengine::CEmitterRotate::`vftable'
while (i != 1)
long double x87_r6_2 = fconvert.t(var_a4)
long double x87_r4 = fconvert.t(var_a0)
x87_r4 - x87_r6_2
bool p = unimplemented  {test ah, 0x44}
float var_4c[0x11]

if (p)
    int32_t var_c4_6 = ecx_1
    i_1 = fconvert.s((x87_r7_2 - x87_r4) / (x87_r6_2 - x87_r4))
    float var_c4_7 = fconvert.s(fconvert.t(i_1))
    sub_4bdf40(&var_6c, &var_8c, &var_9c)
    sub_4bdf70(&var_8c, &var_9c, var_c4_7)
    struct sealengine::CEmitterRotate::VTable* var_5c
    sub_4bdf10(&var_9c, &var_5c, &var_6c)
    sub_529cb0(arg2, sub_4be0b0(&var_5c, &var_4c))
else
    sub_529cb0(&var_9c, sub_4be0b0(&var_6c, &var_4c))
    *arg2 = var_9c
    arg2[1] = var_98
    arg2[2] = var_94
    arg2[3] = var_90
sub_6b4885(eax_1 ^ &i_1)
