// 函数: sub_586e00
// 地址: 0x586e00
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

char filename
int32_t eax_1 = data_78c474 ^ &filename
filename = 0
int128_t var_10b[0x10]
sub_6bc670(&var_10b, 0, 0x104)
GetModuleFileNameA(nullptr, &filename, 0x104)
char* eax_2 = &filename
char i

do
    i = *eax_2
    eax_2 = &eax_2[1]
while (i != 0)
sub_401270(arg1, eax_2 - &var_10b, &filename)
char* result = sub_587150(arg1)
sub_6b4885(eax_1 ^ &filename)
return result
