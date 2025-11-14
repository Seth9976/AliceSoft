// 函数: sub_596a50
// 地址: 0x596a50
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t* var_34
int32_t eax_1 = data_78c474 ^ &var_34
var_34 = arg4
int128_t* eax_6 = (**arg1)()
int32_t var_10 = 0
char var_20 = 0
char* ecx_1 = eax_6
int32_t var_c = 0xf
char i

do
    i = *ecx_1
    ecx_1 = &ecx_1[1]
while (i != 0)
sub_401270(&var_20, ecx_1 - &ecx_1[1], eax_6)
int32_t* ebx
ebx.b = sub_596350(arg6, arg7, arg2, arg3, &var_20, var_34, arg5, arg8)

if (var_c u>= 0x10)
    int32_t var_48_2 = var_20.d
    sub_6b4d5b()

sub_6b4885(eax_1 ^ &var_34)
return ebx.b
