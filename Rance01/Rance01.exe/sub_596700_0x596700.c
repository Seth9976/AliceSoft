// 函数: sub_596700
// 地址: 0x596700
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

char var_16c
int32_t eax_1 = data_78c474 ^ &var_16c
int128_t* eax_3 = (**arg1)()
uint8_t ebx = 0
int32_t var_158 = 0xf
int32_t var_15c = 0
var_16c = 0
char* ecx_2 = eax_3
char i

do
    i = *ecx_2
    ecx_2 = &ecx_2[1]
while (i != 0)
sub_401270(&var_16c, ecx_2 - (eax_3 + 1), eax_3)
char* lpFileName = var_16c.d

if (var_158 u< 0x10)
    lpFileName = &var_16c

WIN32_FIND_DATAA findFileData
HANDLE hFindFile = FindFirstFileA(lpFileName, &findFileData)

if (hFindFile != 0xffffffff)
    FindClose(hFindFile)
    ebx = not.b(findFileData.dwFileAttributes.b u>> 4) & 1

if (var_158 u>= 0x10)
    int32_t var_17c_3 = var_16c.d
    sub_6b4d5b()

hFindFile.b = ebx
sub_6b4885(eax_1 ^ &var_16c)
return hFindFile
