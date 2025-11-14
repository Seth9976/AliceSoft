// 函数: sub_5b2820
// 地址: 0x5b2820
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

char var_20
int32_t var_4 = data_78c474 ^ &var_20
int32_t var_c = 0xf
int32_t var_10 = 0
var_20 = 0

if (arg1 == 0)
    sub_6b77db(&var_20, 0x77157c)
    noreturn

char* eax_2 = arg1
char i

do
    i = *eax_2
    eax_2 = &eax_2[1]
while (i != 0)
sub_401270(&var_20, eax_2 - &eax_2[1], arg1)
sub_6b77db(&var_20, 0x77157c)
noreturn
