// 函数: sub_57ede0
// 地址: 0x57ede0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

void var_224
int32_t eax_1 = data_78c474 ^ &var_224
float var_1d0 = 0f
int32_t var_1cc
__builtin_memset(&var_1cc, 0, 0x17c)
long double x87_r7 = float.t(1)
float var_210 = fconvert.s(x87_r7)
long double x87_r6 = float.t(0)
float var_20c = fconvert.s(x87_r6)
float var_208 = fconvert.s(x87_r6)
float var_204 = fconvert.s(x87_r6)
float var_200 = fconvert.s(x87_r6)
float var_1f8 = fconvert.s(x87_r6)
float var_1f4 = fconvert.s(x87_r6)
float var_1f0 = fconvert.s(x87_r6)
float var_1ec = fconvert.s(x87_r6)
float var_1e4 = fconvert.s(x87_r6)
float var_1e0 = fconvert.s(x87_r6)
float var_1dc = fconvert.s(x87_r6)
float var_1d8 = fconvert.s(x87_r6)
float var_1fc = fconvert.s(x87_r7)
float var_1e8 = fconvert.s(x87_r7)
float var_1d4 = fconvert.s(x87_r7)
var_1d0 = fconvert.s(x87_r7)
float var_1bc = fconvert.s(x87_r7)
float var_1a8 = fconvert.s(x87_r7)
float var_1cc_1 = fconvert.s(x87_r6)
float var_1c8 = fconvert.s(x87_r6)
float var_1c4 = fconvert.s(x87_r6)
float var_1c0 = fconvert.s(x87_r6)
float var_1b8 = fconvert.s(x87_r6)
float var_1b4 = fconvert.s(x87_r6)
float var_1b0 = fconvert.s(x87_r6)
float var_1ac = fconvert.s(x87_r6)
float var_1a4 = fconvert.s(x87_r6)
float var_50[0x11]
int32_t var_234 = __builtin_memcpy(&var_50, &var_210, 0x40)
float var_1a0 = fconvert.s(fconvert.t(*(arg1 + 0x60)))
float var_19c = fconvert.s(fconvert.t(*(arg1 + 0x64)))
float var_198 = fconvert.s(fconvert.t(*(arg1 + 0x68)))
float var_194 = fconvert.s(x87_r7)
float var_150
int32_t var_234_2 = sub_660260(&var_150, fconvert.s(fconvert.t(*(arg1 + 0x6c))))
float var_d0
int32_t ecx_2 = sub_529c30(&var_d0, fconvert.s(fconvert.t(*(arg1 + 0x70))))
long double x87_r7_5 = float.t(1)
float var_190 = fconvert.s(x87_r7_5)
long double x87_r6_6 = float.t(0)
float var_18c = fconvert.s(x87_r6_6)
float var_188 = fconvert.s(x87_r6_6)
float var_184 = fconvert.s(x87_r6_6)
float var_180 = fconvert.s(x87_r6_6)
float var_178 = fconvert.s(x87_r6_6)
float var_174 = fconvert.s(x87_r6_6)
int32_t var_234_4 = ecx_2
float var_170 = fconvert.s(x87_r6_6)
float var_16c = fconvert.s(x87_r6_6)
float var_164 = fconvert.s(x87_r6_6)
float var_17c = fconvert.s(x87_r7_5)
float var_168 = fconvert.s(x87_r7_5)
float var_160 = fconvert.s(fneg(fconvert.t(*(arg1 + 0x74))))
float var_15c = fconvert.s(fneg(fconvert.t(*(arg1 + 0x78))))
float var_158 = fconvert.s(fneg(fconvert.t(*(arg1 + 0x7c))))
float var_154 = fconvert.s(x87_r7_5)
float var_90
int32_t var_234_6 = sub_660260(&var_90, fconvert.s(fconvert.t(*(arg1 + 0x80))))
float var_110
sub_529c30(&var_110, fconvert.s(fconvert.t(*(arg1 + 0x84))))
sub_42e150(&var_50, &var_150)
sub_42e150(&var_50, &var_d0)
sub_42e150(&var_50, &var_1d0)
sub_42e150(&var_50, &var_90)
sub_42e150(&var_50, &var_110)
sub_42e150(&var_50, &var_190)
int32_t esi_4 = *(arg1 + 0x20)
int32_t eax_8
int32_t edx_6
edx_6:eax_8 = muls.dp.d(0x51eb851f, *(arg1 + 0x24) - esi_4)
int32_t edx_7 = edx_6 s>> 5
int32_t result = (edx_7 u>> 0x1f) + edx_7
int32_t i = 0

if (result s> 0)
    int32_t var_220_1 = 0
    int32_t edx_10
    
    do
        void* edx_8 = esi_4 + var_220_1 + 0x10
        int32_t j_1 = 3
        int32_t j
        
        do
            float ecx_7 = *(edx_8 - 0xc)
            float var_21c = *(edx_8 - 0x10)
            float eax_12 = *(edx_8 - 8)
            sub_51e0e0(&var_50, edx_8, &var_21c)
            *(edx_8 - 4) = fconvert.s(fconvert.t(var_21c))
            edx_8 += 0x20
            j = j_1
            j_1 -= 1
            *(edx_8 - 0x20) = fconvert.s(fconvert.t(ecx_7))
            *(edx_8 - 0x1c) = fconvert.s(fconvert.t(eax_12))
        while (j != 1)
        esi_4 = *(arg1 + 0x20)
        var_220_1 += 0x64
        int32_t edx_9
        edx_9:result = muls.dp.d(0x51eb851f, *(arg1 + 0x24) - esi_4)
        edx_10 = edx_9 s>> 5
        i += 1
    while (i s< (edx_10 u>> 0x1f) + edx_10)

sub_6b4885(eax_1 ^ &var_224)
return result
