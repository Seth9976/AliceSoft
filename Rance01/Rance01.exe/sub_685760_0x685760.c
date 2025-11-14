// 函数: sub_685760
// 地址: 0x685760
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

long double x87_r7 = float.t(1)
float arg_4
int32_t* ecx = &arg_4
float var_8 = fconvert.s(x87_r7)
float var_4 = fconvert.s(float.t(0))
long double temp1 = fconvert.t(arg_4)
x87_r7 - temp1

if ((((x87_r7 < temp1 ? 1 : 0) << 8 | (is_unordered.t(x87_r7, temp1) ? 1 : 0) << 0xa
        | (x87_r7 == temp1 ? 1 : 0) << 0xe):1.b & 0x41) != 0)
    ecx = &var_8

long double x87_r7_1 = fconvert.t(*ecx)
long double temp2 = fconvert.t(0.0)
x87_r7_1 - temp2
int32_t* eax_1 = ecx

if ((((x87_r7_1 < temp2 ? 1 : 0) << 8 | (is_unordered.t(x87_r7_1, temp2) ? 1 : 0) << 0xa
        | (x87_r7_1 == temp2 ? 1 : 0) << 0xe):1.b & 0x41) != 0)
    eax_1 = &var_4

arg_4 = fconvert.s(fconvert.t(*eax_1))
long double x87_r7_3 = fconvert.t(*(arg1 + 0x44))
long double x87_r6_1 = fconvert.t(arg_4)
x87_r6_1 - x87_r7_3
eax_1.w = (x87_r6_1 < x87_r7_3 ? 1 : 0) << 8 | (is_unordered.t(x87_r6_1, x87_r7_3) ? 1 : 0) << 0xa
    | (x87_r6_1 == x87_r7_3 ? 1 : 0) << 0xe | 0x3000
bool p = unimplemented  {test ah, 0x44}

if (not(p))
    return eax_1

int32_t eax_2 = *(arg1 + 0x38)
*(arg1 + 0x44) = fconvert.s(x87_r7_3)
float eax_3 = eax_2 - *(arg1 + 0x3c)
var_4 = 0f
arg_4 = eax_3
float* eax_4 = &arg_4

if (eax_3 s<= 0)
    eax_4 = &var_4

float esi = *eax_4
arg_4 = esi
int32_t eax_5 = sub_70c710(x87_r7_3 * float.t(arg_4))
var_4 = eax_5
var_8 = 0f
float* eax_6 = &var_4

if (eax_5 s>= esi)
    eax_6 = &arg_4

if (*eax_6 s<= 0)
    eax_6 = &var_8

float eax_7 = *eax_6
*(arg1 + 0x40) = eax_7
*(arg1 + 0xd8) = 1
return eax_7
