// 函数: sub_586f50
// 地址: 0x586f50
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

char pszPath
int32_t eax_1 = data_78c474 ^ &pszPath
pszPath = 0
int128_t var_10b[0x10]
sub_6bc670(&var_10b, 0, 0x104)

if (SHGetFolderPathA(nullptr, 0x801a, nullptr, 0, &pszPath) != 0)
    sub_401180(arg1, 0xffffffff, &data_79341c, 0)
    char* eax_6 = sub_587150(arg1)
    sub_6b4885(eax_1 ^ &pszPath)
    return eax_6

char* eax_3 = &pszPath
char i

do
    i = *eax_3
    eax_3 = &eax_3[1]
while (i != 0)
sub_401270(arg1, eax_3 - &var_10b, &pszPath)
char* eax_5 = sub_587150(arg1)
sub_6b4885(eax_1 ^ &pszPath)
return eax_5
