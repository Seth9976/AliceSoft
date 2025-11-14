// 函数: sub_5497e0
// 地址: 0x5497e0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_c = 0xffffffff
int32_t (* var_10)(void* arg1) = sub_72644b
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_180
int32_t eax_2 = data_78c474 ^ &var_180
int32_t var_184 = data_78c474 ^ &var_180
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_168 = 0xf
int32_t var_16c = 0
char var_17c = 0
int32_t var_c_1 = 0
int32_t __saved_ebp
HANDLE hFindFile
int32_t edi

if (sub_54d120(&__saved_ebp, arg1, edi, arg1, &var_17c, "system.ExistFile").b != 0)
    char* lpFileName = var_17c.d
    
    if (var_168 u< 0x10)
        lpFileName = &var_17c
    
    WIN32_FIND_DATAA findFileData
    hFindFile = FindFirstFileA(lpFileName, &findFileData)
    
    if (hFindFile != 0xffffffff)
        FindClose(hFindFile)
        hFindFile.b = findFileData.dwFileAttributes.b
        hFindFile.b u>>= 4
        hFindFile.b = not.b(hFindFile.b)
        hFindFile.b &= 1
    else
        hFindFile.b = 0
    
    int32_t ecx_2
    ecx_2.b = hFindFile.b != 0
    **(arg1 + 0x2b0) = ecx_2
    *(arg1 + 0x2b0) += 4
    
    if (var_168 u>= 0x10)
        int32_t var_188_4 = var_17c.d
        sub_6b4d5b()
    
    hFindFile.b = 1
else
    if (var_168 u>= 0x10)
        int32_t var_188_1 = var_17c.d
        sub_6b4d5b()
    
    hFindFile.b = 0

fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &var_180)
return hFindFile
