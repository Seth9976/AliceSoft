// 函数: sub_50d0f0
// 地址: 0x50d0f0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_16c
int32_t eax_1 = data_78c474 ^ &var_16c

if (*arg2 == 0)
    void* eax_2
    eax_2.b = 0
    sub_6b4885(eax_1 ^ &var_16c)
    return eax_2

int32_t* lpFileName = sub_426250(&var_16c, arg2 + 4, arg1)

if (lpFileName[5] u>= 0x10)
    lpFileName = *lpFileName

WIN32_FIND_DATAA findFileData
HANDLE hFindFile = FindFirstFileA(lpFileName, &findFileData)
int32_t ebx

if (hFindFile != 0xffffffff)
    FindClose(hFindFile)
    ebx.b = findFileData.dwFileAttributes.b
    ebx.b u>>= 4
    ebx.b = not.b(ebx.b)
    ebx.b &= 1
else
    ebx.b = 0

int32_t var_158

if (var_158 u>= 0x10)
    int32_t var_174_3 = var_16c
    sub_6b4d5b()

hFindFile.b = ebx.b
sub_6b4885(eax_1 ^ &var_16c)
return hFindFile
