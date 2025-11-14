// 函数: sub_596bf0
// 地址: 0x596bf0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

void var_24
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
char result = sub_596180(&var_20, arg2)

if (var_c u>= 0x10)
    int32_t var_38_1 = var_20.d
    sub_6b4d5b()

sub_6b4885(eax_1 ^ &var_24)
return result
