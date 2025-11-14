// 函数: sub_518120
// 地址: 0x518120
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

sub_5181d0(arg1, arg2)

if (*(arg1 + 0x28) == 0)
    return 

void* ecx = *(arg1 + 8)
int32_t edx_1 = *(arg1 + 0xc)

if (ecx != edx_1)
    long double x87_r7_1 = float.t(0)
    void* eax = ecx + 0x74
    
    do
        *(eax - 8) = fconvert.s(x87_r7_1)
        ecx += 0xac
        *(eax - 4) = fconvert.s(x87_r7_1)
        eax += 0xac
        *(eax - 0xac) = fconvert.s(x87_r7_1)
    while (ecx != edx_1)

sub_4b5d00(arg1 + 4)
sub_4b5d90(arg1 + 4)
void* i

for (i = *(arg1 + 8); i != *(arg1 + 0xc); i += 0xac)
    sub_4b4800(i)

void* i_1 = i
int32_t ecx_1
int80_t st0_2
st0_2, ecx_1 = sub_4b5e20(arg1 + 4, fconvert.s(fconvert.t(arg3)))
int32_t var_c_2 = ecx_1
sub_5183e0(arg1, fconvert.s(fconvert.t(arg3)))
int32_t ecx_2
int80_t st0_4
st0_4, ecx_2 = sub_518480(arg1)
int32_t var_c_4 = ecx_2
sub_518270(arg1, fconvert.s(fconvert.t(arg3)))
sub_518070(arg1)
