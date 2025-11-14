// 函数: sub_5fff60
// 地址: 0x5fff60
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

if (arg5 s> 0x400)
    long double x87_r7 = float.t(0)
    *arg1 = fconvert.s(x87_r7)
    arg1[1] = fconvert.s(x87_r7)
    arg1[2] = fconvert.s(x87_r7)
    return arg1

float var_10 = 0f
int32_t var_c = 0
int32_t var_8 = 0
float* ecx = arg4
sub_5ffc20(&var_10, sub_6001f0(&var_10), ecx, arg3, arg2, &var_10)
float* ebp = var_10
float var_34 = fconvert.s(float.t(0))
long double x87_r7_2 = float.t(0)
void* esi_2 = ebp
int32_t i_1 = 0x3ff
double var_28 = fconvert.d(x87_r7_2 * x87_r7_2)
int32_t i

do
    float* var_4c_1 = ecx
    var_10 = fconvert.s(fconvert.t(*(esi_2 + 0xc)) - fconvert.t(*esi_2))
    long double x87_r7_8 = fconvert.t(var_10)
    long double x87_r6_1 =
        fconvert.t(fconvert.s(fconvert.t(*(esi_2 + 0x10)) - fconvert.t(*(esi_2 + 4))))
    long double st0_1
    st0_1, ecx = sub_4d9250(fconvert.s(fconvert.t(fconvert.s(x87_r7_8 * x87_r7_8
        + x87_r6_1 * x87_r6_1 + fconvert.t(var_28)))))
    esi_2 += 0xc
    i = i_1
    i_1 -= 1
    var_34 = fconvert.s(st0_1 + fconvert.t(var_34))
while (i != 1)
int32_t eax_2 = i_1 + 1
float* esi_3 = ebp
float var_30_2 = fconvert.s(fconvert.t(var_34) * fconvert.t(0.0009765625))
long double x87_r7_19 = float.t(0)
float var_34_1 = fconvert.s(x87_r7_19)

while (true)
    var_10 = fconvert.s(x87_r7_19)
    float var_c_2 = fconvert.s(x87_r7_19)
    float var_8_1 = fconvert.s(x87_r7_19)
    
    if (eax_2 + 1 s< 0x400)
        ecx = *esi_3
        float edx_1 = esi_3[1]
        float eax_3 = esi_3[2]
        var_10 = ecx
        var_c_2 = edx_1
        var_8_1 = eax_3
    
    float* var_4c_3 = ecx
    long double x87_r7_24 = fconvert.t(fconvert.s(fconvert.t(esi_3[4]) - fconvert.t(esi_3[1])))
    long double x87_r6_3 = fconvert.t(fconvert.s(fconvert.t(esi_3[3]) - fconvert.t(*esi_3)))
    long double st0_2
    st0_2, ecx = sub_4d9250(fconvert.s(fconvert.t(fconvert.s(x87_r7_24 * x87_r7_24
        + x87_r6_3 * x87_r6_3 + fconvert.t(var_28)))))
    var_34_1 = fconvert.s(st0_2 + fconvert.t(var_34_1))
    long double x87_r6_5 = fconvert.t(fconvert.s(float.t(arg5) * fconvert.t(var_30_2)))
    long double x87_r5_3 = fconvert.t(var_34_1)
    x87_r5_3 - x87_r6_5
    bool p_1 = unimplemented  {test ah, 0x44}
    
    if (p_1)
        x87_r6_5 - x87_r5_3
        
        if ((((x87_r6_5 < x87_r5_3 ? 1 : 0) << 8
                | (is_unordered.t(x87_r6_5, x87_r5_3) ? 1 : 0) << 0xa
                | (x87_r6_5 == x87_r5_3 ? 1 : 0) << 0xe | 0x3000):1.b & 0x41) != 0)
            eax_2 += 1
            esi_3 = &esi_3[3]
            long double x87_r7_34
            
            if (eax_2 s< 0x400)
                x87_r7_19 = float.t(0)
                continue
            else
                x87_r7_34 = float.t(0)
                *arg1 = fconvert.s(x87_r7_34)
                arg1[1] = fconvert.s(x87_r7_34)
            
            arg1[2] = fconvert.s(x87_r7_34)
            break
        
        long double x87_r5_4 = fconvert.t(var_10)
        float.t(0) - x87_r5_4
        long double x87_r3_2 = fconvert.t(var_8_1)
        long double x87_r2_2 = fconvert.t(var_c_2)
        bool p_2 = unimplemented  {test ah, 0x44}
        bool p_3
        
        if (not(p_2))
            x87_r5_4 - x87_r2_2
            p_3 = unimplemented  {test ah, 0x44}
        
        long double x87_r5_6
        
        if (p_2 || p_3)
            x87_r5_6 = x87_r2_2
        label_600162:
            var_10 = fconvert.s(x87_r5_6 - fconvert.t(esi_3[3]))
            float var_1c_2 = var_10
            long double x87_r6_6 = fconvert.t(fconvert.s(fconvert.t(fconvert.s(x87_r5_3 - x87_r6_5))
                / fconvert.t(var_30_2)))
            float var_18_3 =
                fconvert.s(fconvert.t(fconvert.s(x87_r5_4 - fconvert.t(esi_3[4]))) * x87_r6_6)
            float var_14_2 =
                fconvert.s(x87_r6_6 * fconvert.t(fconvert.s(x87_r3_2 - fconvert.t(esi_3[5]))))
            *arg1 = fconvert.s(fconvert.t(esi_3[3])
                + fconvert.t(fconvert.s(fconvert.t(var_10) * x87_r6_6)))
            arg1[1] = fconvert.s(fconvert.t(var_18_3) + fconvert.t(esi_3[4]))
            arg1[2] = fconvert.s(fconvert.t(var_14_2) + fconvert.t(esi_3[5]))
            break
        
        x87_r3_2 - x87_r5_4
        x87_r5_6 = x87_r2_2
        bool p_4 = unimplemented  {test ah, 0x44}
        
        if (p_4)
            goto label_600162
    
    int32_t edx_2 = esi_3[4]
    int32_t eax_6 = esi_3[5]
    *arg1 = esi_3[3]
    arg1[1] = edx_2
    arg1[2] = eax_6
    break

if (ebp != 0)
    float* var_4c_5 = ebp
    sub_6b4d5b()

return arg1
