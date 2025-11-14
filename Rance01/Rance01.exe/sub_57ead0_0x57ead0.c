// 函数: sub_57ead0
// 地址: 0x57ead0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_6c
int32_t eax_1 = data_78c474 ^ &var_6c
char eax_3 = sub_5867b0(arg1, arg3, arg2)

if (eax_3 == 0)
    sub_6b4885(eax_1 ^ &var_6c)
    return eax_3

int32_t* eax_4 = arg1[3]

if (eax_4 != 0)
    int32_t var_7c_1 = *eax_4
    sub_6b53b2()
    int32_t var_7c_2 = arg1[3]
    sub_6b53b2()
    arg1[3] = 0
    arg1[4] = 0
    arg1[5] = 0

int32_t ecx_4
ecx_4.b = mulu.dp.d(0x100, 4) u>> 0x20 != 0
int32_t var_7c_3 = neg.d(ecx_4) | 0x400
int32_t var_7c_4 = 0x10000
arg1[3] = sub_6b487a()
*arg1[3] = sub_6b487a()
int32_t* ecx_8 = 0x10

for (int32_t i = 0x400; i s< 0x10300; )
    int32_t* edx_2 = arg1[3]
    *(ecx_8 + edx_2 - 0xc) = *edx_2 + i - 0x300
    int32_t* edx_3 = arg1[3]
    *(ecx_8 + edx_3 - 8) = i - 0x300 + *edx_3 + 0x100
    int32_t* edx_4 = arg1[3]
    *(ecx_8 + edx_4 - 4) = i + *edx_4 - 0x100
    int32_t* edx_5 = arg1[3]
    *(ecx_8 + edx_5) = *edx_5 + i
    int32_t* edx_6 = arg1[3]
    *(ecx_8 + edx_6 + 4) = i + *edx_6 + 0x100
    i += 0x500
    ecx_8 = &ecx_8[5]

arg1[4] = 0x100
arg1[5] = 0x100
int32_t edi_4 = 0
int32_t var_54 = 0
int32_t var_58 = 1
int32_t i_2 = 1
char* j
int32_t i_1

do
    int32_t var_68_1 = 1
    int32_t i_3 = i_2
    j = nullptr
    int32_t var_64_1 = edi_4 + 1
    var_6c = var_58
    
    do
        j[*(arg1[3] + edi_4)] = (var_68_1 s/ 0x1fe).b
        j[*(arg1[3] + edi_4) + 1] = (var_6c s/ 0x1fe).b
        j[*(arg1[3] + edi_4) + 2] = (var_64_1 s/ 0x1fe).b
        j[*(arg1[3] + edi_4) + 3] = (i_3 s/ 0x1fe).b
        var_68_1 += var_54
        var_6c += var_54
        var_64_1 += var_54
        j = &j[4]
        i_3 += var_54
    while (j s< 0x100)
    
    var_54 += 8
    var_58 += 2
    i_1 = i_2 + 6
    edi_4 += 4
    i_2 = i_1
while (i_1 s< 0x601)
long double x87_r7 = float.t(0)
char* j_1 = j
arg1[0x1d] = fconvert.s(x87_r7)
arg1[0x1e] = fconvert.s(x87_r7)
arg1[0x1f] = fconvert.s(x87_r7)
arg1[0x20] = fconvert.s(x87_r7)
arg1[0x22] = fconvert.s(float.t(1))
arg1[0x23] = fconvert.s(x87_r7)
arg1[0x24] = fconvert.s(x87_r7)
arg1[0x25] = fconvert.s(x87_r7)
arg1[0x26] = fconvert.s(x87_r7)
int32_t edx_21
int80_t st0
st0, edx_21 = sub_51a3f0(fconvert.s(fconvert.t(0.392699093f)))
long double x87_r6_1 = float.t(1)
arg1[0x27] = fconvert.s(x87_r6_1 / x87_r6_1)
long double x87_r7_4 = float.t(0)
arg1[0x28] = fconvert.s(x87_r7_4)
arg1[0x29] = fconvert.s(x87_r7_4)
arg1[0x2a] = fconvert.s(x87_r7_4)
arg1[0x2b] = fconvert.s(x87_r7_4)
arg1[0x2c] = fconvert.s(fconvert.t(1.001001f))
arg1[0x2d] = fconvert.s(float.t(1))
arg1[0x2e] = fconvert.s(x87_r7_4)
arg1[0x2f] = fconvert.s(x87_r7_4)
arg1[0x30] = fconvert.s(fconvert.t(-1.001001f))
arg1[0x31] = fconvert.s(x87_r7_4)
float var_50[0x11]
sub_6603e0(&var_50, edx_21, &arg1[0x22])
__builtin_memcpy(&arg1[0x32], &var_50, 0x40)
sub_580730(&arg1[0xc])
arg1[6] = arg2
arg1[7] = arg3
int32_t eax_28
eax_28.b = 1
sub_6b4885(eax_1 ^ &var_6c)
return eax_28
