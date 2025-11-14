// 函数: sub_5182d0
// 地址: 0x5182d0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

void* esi_2 = arg2 i* 0xac + *(arg1 + 8)

if (*(esi_2 + 0x50) == 0)
    return 

long double x87_r7_1 = float.t(0)
float var_70 = fconvert.s(x87_r7_1)
float var_6c_1 = fconvert.s(x87_r7_1)
float var_68_1 = fconvert.s(x87_r7_1)
struct sealengine::CDualQuaternion::VTable* var_64
struct sealengine::CDualQuaternion::VTable** eax
int32_t edx
int32_t edx_1
eax, edx_1 = sub_4b5c50(arg2, edx, &var_64, arg1 + 4)
float var_40[0x10]
float* eax_1 = &var_40
sub_4b9aa0(eax_1, edx_1, eax)
float var_7c
sub_51e1c0(&var_70, &var_7c, eax_1, &var_70)
bool cond:0_1 = *(esi_2 + 0x98) == 0
var_70 = fconvert.s(fconvert.t(var_7c) - fconvert.t(*(esi_2 + 0xa0)))
float var_78
float var_6c_2 = fconvert.s(fconvert.t(var_78) - fconvert.t(*(esi_2 + 0xa4)))
float var_74
float var_68_2 = fconvert.s(fconvert.t(var_74) - fconvert.t(*(esi_2 + 0xa8)))
long double x87_r6_1 = fconvert.t(arg3)
var_7c = fconvert.s(fconvert.t(var_70) / x87_r6_1)
float var_78_1 = fconvert.s(fconvert.t(var_6c_2) / x87_r6_1)
float var_74_1 = fconvert.s(fconvert.t(var_68_2) / x87_r6_1)

if (not(cond:0_1))
    long double x87_r6_5 = fconvert.t(fconvert.s(fconvert.t(*(esi_2 + 0x9c))))
    var_7c = fconvert.s(fconvert.t(var_7c) * x87_r6_5)
    var_78_1 = fconvert.s(fconvert.t(var_78_1) * x87_r6_5)
    var_74_1 = fconvert.s(x87_r6_5 * fconvert.t(var_74_1))

*(esi_2 + 0x8c) = var_7c
*(esi_2 + 0x90) = var_78_1
*(esi_2 + 0x94) = var_74_1
