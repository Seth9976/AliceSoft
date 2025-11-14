// 函数: sub_5cb150
// 地址: 0x5cb150
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t* lpFileName_1
int32_t eax_1 = data_78c474 ^ &lpFileName_1
sub_5cb210(&lpFileName_1, arg1)
int32_t var_15c
int32_t var_158

if (var_15c == 0)
    if (var_158 u>= 0x10)
        int32_t* lpFileName_2 = lpFileName_1
        sub_6b4d5b()
    
    char* eax_3
    eax_3.b = 0
    sub_6b4885(eax_1 ^ &lpFileName_1)
    return eax_3

int32_t* lpFileName = lpFileName_1

if (var_158 u< 0x10)
    lpFileName = &lpFileName_1

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

if (var_158 u>= 0x10)
    int32_t* lpFileName_3 = lpFileName_1
    sub_6b4d5b()

hFindFile.b = ebx.b
sub_6b4885(eax_1 ^ &lpFileName_1)
return hFindFile
