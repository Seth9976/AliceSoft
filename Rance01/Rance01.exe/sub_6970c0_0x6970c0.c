// 函数: sub_6970c0
// 地址: 0x6970c0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

float var_4 = arg1

if (arg2 == 0)
    return 

float var_c_1 = arg1
var_4 = fconvert.s(fconvert.t(*(arg2 + 0x44)))
float arg_8
float var_c_2 = fconvert.s(fconvert.t(arg_8))
sub_685760(arg2)
arg_8 = fconvert.s(fconvert.t(*(arg2 + 0x44)))
long double x87_r7_4 = fconvert.t(var_4)
long double x87_r6_1 = fconvert.t(arg_8)
x87_r6_1 - x87_r7_4
int32_t* eax
eax.w = (x87_r6_1 < x87_r7_4 ? 1 : 0) << 8 | (is_unordered.t(x87_r6_1, x87_r7_4) ? 1 : 0) << 0xa
    | (x87_r6_1 == x87_r7_4 ? 1 : 0) << 0xe | 0x3000
bool p_1 = unimplemented  {test ah, 0x44}

if (not(p_1))
    return 

float eax_2 = *(arg2 + 0x38) - *(arg2 + 0x3c)
var_4 = 0f
arg_8 = eax_2
float* eax_3 = &arg_8

if (eax_2 s<= 0)
    eax_3 = &var_4

sub_41d720(arg3 + 0xa8, sub_70c710(x87_r7_4 * float.t(*eax_3)))
