// 函数: sub_559da0
// 地址: 0x559da0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_c = 0xffffffff
int32_t (* var_10)(void* arg1) = sub_71a596
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_1c4
int32_t eax_2 = data_78c474 ^ &var_1c4
int32_t __saved_edi
int32_t var_1d4 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_c_1 = 0
int32_t var_17c
char eax_9
int32_t ecx_1
eax_9, ecx_1 = sub_405d70(arg1, sub_401ec0(arg3, &var_17c, 0, arg1[4]))
int32_t var_c_2 = 0xffffffff
int32_t var_168

if (var_168 u>= 0x10)
    int32_t var_1d8_1 = var_17c
    ecx_1 = sub_6b4d5b()

void** hFindFile

if (eax_9 == 0)
    int32_t var_c_3 = 1
    char var_1b4
    int32_t var_198
    PSTR lpFileName = sub_4c1d70(arg3, &var_1b4, sub_401800(ecx_1, arg2, &var_198), &var_1b4)
    
    if (*(lpFileName + 0x14) u>= 0x10)
        lpFileName = *lpFileName
    
    WIN32_FIND_DATAA findFileData
    hFindFile = FindFirstFileA(lpFileName, &findFileData)
    int32_t* ebx
    
    if (hFindFile != 0xffffffff)
        FindClose(hFindFile)
        ebx.b = findFileData.dwFileAttributes.b
        ebx.b u>>= 4
        ebx.b = not.b(ebx.b)
        ebx.b &= 1
    else
        ebx.b = 0
    
    int32_t var_1a0
    
    if (var_1a0 u>= 0x10)
        int32_t var_1d8_6 = var_1b4.d
        sub_6b4d5b()
    
    int32_t var_1a0_1 = 0xf
    int32_t var_1a4_1 = 0
    var_1b4 = 0
    int32_t var_184
    
    if (var_184 u>= 0x10)
        int32_t var_1d8_7 = var_198
        sub_6b4d5b()
    
    hFindFile.b = ebx.b
else
    int32_t esi_1 = arg1[8]
    void** eax_11 = sub_4d3aa0(&arg1[7], arg3)
    char eax_13
    
    if (eax_11 != arg1[8])
        eax_13 = sub_405dd0(&eax_11[3], arg3)
    
    if (eax_11 == arg1[8] || eax_13 != 0)
        hFindFile.b = arg1[8] != esi_1
    else
        hFindFile.b = eax_11 != esi_1

fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &var_1c4)
return hFindFile
