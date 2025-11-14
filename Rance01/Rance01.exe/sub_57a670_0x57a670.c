// 函数: sub_57a670
// 地址: 0x57a670
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

float var_74
int32_t eax_1 = data_78c474 ^ &var_74
(*(*arg1 + 8))()
arg1[1] = arg3
arg1[2] = arg4
arg1[3] = fconvert.s(float.t(1))
long double x87_r7_1 = float.t(0)
int32_t var_84 = arg4
arg1[4] = fconvert.s(x87_r7_1)
arg1[5] = fconvert.s(x87_r7_1)
arg1[6] = fconvert.s(x87_r7_1)
arg1[7] = fconvert.s(x87_r7_1)
int32_t edx_1
int80_t st0
st0, edx_1 = sub_51a3f0(fconvert.s(fconvert.t(0.392699093f)))
long double x87_r6 = float.t(1)
float var_50[0x11]
float (* eax_4)[0x11] = &var_50
arg1[8] = fconvert.s(x87_r6 / x87_r6)
long double x87_r7_5 = float.t(0)
arg1[9] = fconvert.s(x87_r7_5)
arg1[0xa] = fconvert.s(x87_r7_5)
arg1[0xb] = fconvert.s(x87_r7_5)
arg1[0xc] = fconvert.s(x87_r7_5)
arg1[0xd] = fconvert.s(fconvert.t(1.001001f))
long double x87_r6_2 = float.t(1)
arg1[0xe] = fconvert.s(x87_r6_2)
arg1[0xf] = fconvert.s(x87_r7_5)
arg1[0x10] = fconvert.s(x87_r7_5)
arg1[0x11] = fconvert.s(fconvert.t(-1.001001f))
arg1[0x12] = fconvert.s(x87_r7_5)
float var_5c = fconvert.s(fconvert.t(-1f))
float var_58 = fconvert.s(x87_r6_2)
float var_54 = fconvert.s(x87_r6_2)
sub_6603e0(eax_4, edx_1, &arg1[3])
float var_68
sub_51e1c0(&arg1[3], &var_68, eax_4, &var_5c)
float var_60
arg1[0x17] = fconvert.s(fconvert.t(var_60) - fconvert.t(1.0))
var_74 = fconvert.s(fneg(fconvert.t(var_68)))
float var_64
long double x87_r7_11 = fconvert.t(var_64)
float var_6c = fconvert.s(fneg(x87_r7_11))
long double x87_r6_7 = fconvert.t(var_74)
float var_70 = fconvert.s(fneg(x87_r6_7))
long double x87_r5_3 = float.t(1)
long double x87_r4 = float.t(0)
long double x87_r3_1 = fconvert.t(var_70)
sub_57a9e0(&arg1[0x13], fconvert.s(x87_r3_1), fconvert.s(x87_r7_11), fconvert.s(x87_r4), 
    fconvert.s(x87_r4), fconvert.s(x87_r6_7), fconvert.s(x87_r7_11), fconvert.s(x87_r5_3), 
    fconvert.s(x87_r4), fconvert.s(x87_r3_1), fconvert.s(fconvert.t(var_6c)), fconvert.s(x87_r4), 
    fconvert.s(x87_r5_3), 3)
long double x87_r7_13 = float.t(1)
long double x87_r6_9 = float.t(0)
long double x87_r5_5 = fconvert.t(var_6c)
long double x87_r5_8 = fconvert.t(var_74)
sub_57a9e0(&arg1[0x13], fconvert.s(x87_r5_8), fconvert.s(fconvert.t(var_64)), 
    fconvert.s(x87_r7_13), fconvert.s(x87_r6_9), fconvert.s(x87_r5_8), fconvert.s(x87_r5_5), 
    fconvert.s(x87_r7_13), fconvert.s(x87_r7_13), fconvert.s(fconvert.t(var_70)), 
    fconvert.s(x87_r5_5), fconvert.s(x87_r6_9), fconvert.s(x87_r7_13), 3)
float* result = (*(*arg2 + 0x30))()
arg1[0x19] = result

if (result != 0)
    int32_t ecx_5
    result, ecx_5 = sub_57b260(arg1)
    
    if (result.b != 0 && sub_57b3f0(ecx_5, arg1).b != 0)
        result = (*(*arg2 + 0x30))()
        arg1[0x18] = result
        
        if (result != 0)
            int32_t* var_84_4 = arg1
            
            if (sub_57b550().b != 0)
                result.b = 1
                sub_6b4885(eax_1 ^ &var_74)
                return result

result.b = 0
sub_6b4885(eax_1 ^ &var_74)
return result
