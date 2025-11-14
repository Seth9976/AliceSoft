// 函数: sub_4efc10
// 地址: 0x4efc10
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t* ecx_1 = *(arg1 + 0x18)
int32_t* eax = *(arg1 + 0x14)
float var_4

if (eax != ecx_1)
    float edx_1 = var_4
    float var_20_1 = edx_1
    int32_t* eax_1 = sub_4f2850(eax, edx_1, ecx_1, ecx_1)
    sub_663180(eax_1, *(arg1 + 0x18))
    *(arg1 + 0x18) = eax_1

float var_10
float var_c
float var_8
sub_4efd10(arg1, &var_4, &var_10, &var_c, &var_8)
long double x87_r7 = float.t(0)
long double x87_r6 = fconvert.t(var_10)
x87_r6 - x87_r7
float* eax_5
eax_5.w = (x87_r6 < x87_r7 ? 1 : 0) << 8 | (is_unordered.t(x87_r6, x87_r7) ? 1 : 0) << 0xa
    | (x87_r6 == x87_r7 ? 1 : 0) << 0xe | 0x3000
bool p = unimplemented  {test ah, 0x5}
int32_t eax_7

if (p)
    eax_7 = sub_70c710(x87_r6)
    var_10 = eax_7
else
    eax_7 = sub_70c710(x87_r6) - 1
    var_10 = eax_7

long double x87_r6_1 = fconvert.t(var_c)
*(arg1 + 0x24) = eax_7
x87_r6_1 - x87_r7
eax_7.w = (x87_r6_1 < x87_r7 ? 1 : 0) << 8 | (is_unordered.t(x87_r6_1, x87_r7) ? 1 : 0) << 0xa
    | (x87_r6_1 == x87_r7 ? 1 : 0) << 0xe | 0x3000
bool p_1 = unimplemented  {test ah, 0x5}
int32_t edi_3

if (p_1)
    edi_3 = sub_70c710(x87_r6_1)
else
    edi_3 = sub_70c710(x87_r6_1) - 1

long double x87_r6_2 = fconvert.t(var_8)
*(arg1 + 0x28) = edi_3
x87_r6_2 - x87_r7
int32_t eax_8
eax_8.w = (x87_r6_2 < x87_r7 ? 1 : 0) << 8 | (is_unordered.t(x87_r6_2, x87_r7) ? 1 : 0) << 0xa
    | (x87_r6_2 == x87_r7 ? 1 : 0) << 0xe | 0x3000
bool p_2 = unimplemented  {test ah, 0x5}
int32_t ebp

if (p_2)
    ebp = sub_70c710(x87_r6_2)
else
    ebp = sub_70c710(x87_r6_2) - 1

long double x87_r6_3 = fconvert.t(var_4)
*(arg1 + 0x2c) = ebp
x87_r6_3 - x87_r7
int32_t eax_9
eax_9.w = (x87_r6_3 < x87_r7 ? 1 : 0) << 8 | (is_unordered.t(x87_r6_3, x87_r7) ? 1 : 0) << 0xa
    | (x87_r6_3 == x87_r7 ? 1 : 0) << 0xe | 0x3000
bool p_3 = unimplemented  {test ah, 0x5}
int32_t eax_11

if (p_3)
    eax_11 = sub_70c710(x87_r7)
else
    eax_11 = sub_70c710(x87_r7) - 1

int32_t edi_4 = edi_3 i- var_10
*(arg1 + 0x30) = eax_11
*(arg1 + 0x38) = eax_11 - ebp + 1
*(arg1 + 0x34) = edi_4 + 1
sub_4c32d0((eax_11 - ebp + 1) * (edi_4 + 1), arg1 + 0x14)
int32_t eax_15
int80_t result
result, eax_15 = sub_4efdc0(arg1)
eax_15.b = 1
return result
