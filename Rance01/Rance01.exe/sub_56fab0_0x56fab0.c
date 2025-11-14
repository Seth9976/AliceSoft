// 函数: sub_56fab0
// 地址: 0x56fab0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

void var_170
int32_t eax_1 = data_78c474 ^ &var_170
int32_t* lpFileName_2
sub_426250(&lpFileName_2, arg1, arg2 + 0x20)
int32_t* lpFileName = lpFileName_2
int32_t var_158

if (var_158 u< 0x10)
    lpFileName = &lpFileName_2

WIN32_FIND_DATAA findFileData
HANDLE hFindFile = FindFirstFileA(lpFileName, &findFileData)

if (hFindFile != 0xffffffff)
    FindClose(hFindFile)
    
    if ((findFileData.dwFileAttributes.b & 0x10) == 0)
        int32_t* lpFileName_1 = lpFileName_2
        
        if (var_158 u< 0x10)
            lpFileName_1 = &lpFileName_2
        
        int32_t ebx
        ebx.b = DeleteFileA(lpFileName_1) != 0
        
        if (var_158 u>= 0x10)
            int32_t* lpFileName_4 = lpFileName_2
            sub_6b4d5b()
        
        BOOL eax_4
        eax_4.b = ebx.b
        sub_6b4885(eax_1 ^ &var_170)
        return eax_4

if (var_158 u>= 0x10)
    int32_t* lpFileName_3 = lpFileName_2
    sub_6b4d5b()

hFindFile.b = 1
sub_6b4885(eax_1 ^ &var_170)
return hFindFile
