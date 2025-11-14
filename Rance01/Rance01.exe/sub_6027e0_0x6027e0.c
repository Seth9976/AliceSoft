// 函数: sub_6027e0
// 地址: 0x6027e0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t* esi = *arg1
BOOL hFindFile = *esi

if (hFindFile != 0xffffffff)
    hFindFile = FindClose(hFindFile)
    
    if (hFindFile != 0)
        *esi = 0xffffffff

int32_t* esi_1 = *arg1

if (esi_1 == 0)
    return hFindFile

HANDLE hFindFile_1 = *esi_1

if (hFindFile_1 != 0xffffffff && FindClose(hFindFile_1) != 0)
    *esi_1 = 0xffffffff

int32_t* var_c_3 = esi_1
return sub_6b4d5b()
