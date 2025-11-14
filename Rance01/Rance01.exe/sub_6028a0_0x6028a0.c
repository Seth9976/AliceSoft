// 函数: sub_6028a0
// 地址: 0x6028a0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

WIN32_FIND_DATAA findFileData
int32_t eax_1 = data_78c474 ^ &findFileData
void** lpFileName = arg1

if (lpFileName[5] u>= 0x10)
    lpFileName = *lpFileName

HANDLE hFindFile = FindFirstFileA(lpFileName, &findFileData)

if (hFindFile == 0xffffffff)
    hFindFile.b = 0
    sub_6b4885(eax_1 ^ &findFileData)
    return hFindFile

FindClose(hFindFile)
int32_t eax_4 = findFileData.dwFileAttributes u>> 4 & 1
sub_6b4885(eax_1 ^ &findFileData)
return eax_4
