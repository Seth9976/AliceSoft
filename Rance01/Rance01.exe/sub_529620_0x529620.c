// 函数: sub_529620
// 地址: 0x529620
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

float var_24
int32_t eax_1 = data_78c474 ^ &var_24
int128_t* eax_3 = (**arg1)()
char* ecx_1 = eax_3
int32_t var_c = 0xf
int32_t var_10 = 0
char var_20 = 0
char i

do
    i = *ecx_1
    ecx_1 = &ecx_1[1]
while (i != 0)
sub_401270(&var_20, ecx_1 - &ecx_1[1], eax_3)
char* eax_4 = var_20.d

if (var_c u< 0x10)
    eax_4 = &var_20

int32_t* __saved_edi = &var_24
int32_t eax_5
eax_5.b = sub_6b51b5(eax_4, 0x757594) == 1
int32_t ebx
ebx.b = eax_5.b == 0

if (var_c u>= 0x10)
    int32_t __saved_edi_1 = var_20.d
    sub_6b4d5b()

if (ebx.b != 0)
    sub_6b4885(eax_1 ^ &var_24)
    return float.t(0)

long double result = fconvert.t(var_24)
sub_6b4885(eax_1 ^ &var_24)
return result
