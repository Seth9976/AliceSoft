// 函数: sub_596180
// 地址: 0x596180
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

void var_154
int32_t eax_1 = data_78c474 ^ &var_154
int32_t* lpFileName

if (arg1[5] u< 0x10)
    lpFileName = arg1
else
    lpFileName = *arg1

WIN32_FIND_DATAA findFileData
HANDLE hFindFile = FindFirstFileA(lpFileName, &findFileData)

if (hFindFile != 0xffffffff)
    FindClose(hFindFile)
    
    if ((findFileData.dwFileAttributes.b & 0x10) == 0)
        *arg2 = sub_602130()
        int32_t eax_2
        eax_2.b = 1
        sub_6b4885(eax_1 ^ &var_154)
        return eax_2

*arg2 = 0
hFindFile.b = 0
sub_6b4885(eax_1 ^ &var_154)
return hFindFile
