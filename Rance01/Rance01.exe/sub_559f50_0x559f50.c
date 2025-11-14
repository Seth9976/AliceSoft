// 函数: sub_559f50
// 地址: 0x559f50
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_c = 0xffffffff
int32_t (* var_10)(void* arg1) = sub_71a546
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_1a4
int32_t eax_2 = data_78c474 ^ &var_1a4
int32_t __saved_edi
int32_t var_1b4 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
void** var_1a0 = arg2
int32_t var_c_1 = 0
int32_t var_17c
char eax_9
int32_t ecx_1
eax_9, ecx_1 = sub_405d70(arg1, sub_401ec0(arg3, &var_17c, 0, arg1[4]))
int32_t var_c_2 = 0xffffffff
int32_t var_168

if (var_168 u>= 0x10)
    int32_t var_1b8_1 = var_17c
    ecx_1 = sub_6b4d5b()

void** hFindFile

if (eax_9 == 0)
    int32_t var_c_3 = 1
    PSTR lpFileName_2
    sub_4c1d70(arg3, &lpFileName_2, sub_401800(ecx_1, var_1a0, &var_17c), &lpFileName_2)
    
    if (var_168 u>= 0x10)
        int32_t var_1b8_5 = var_17c
        sub_6b4d5b()
    
    PSTR* lpFileName = lpFileName_2
    int32_t var_184
    
    if (var_184 u< 0x10)
        lpFileName = &lpFileName_2
    
    WIN32_FIND_DATAA findFileData
    hFindFile = FindFirstFileA(lpFileName, &findFileData)
    
    if (hFindFile == 0xffffffff)
    label_55a0d7:
        
        if (var_184 u< 0x10)
            hFindFile.b = 1
        else
            PSTR lpFileName_4 = lpFileName_2
            sub_6b4d5b()
            hFindFile.b = 1
    else
        FindClose(hFindFile)
        
        if ((findFileData.dwFileAttributes.b & 0x10) != 0)
            goto label_55a0d7
        
        PSTR lpFileName_1 = lpFileName_2
        
        if (var_184 u< 0x10)
            lpFileName_1 = &lpFileName_2
        
        if (DeleteFileA(lpFileName_1) != 0)
            goto label_55a0d7
        
        if (var_184 u>= 0x10)
            PSTR lpFileName_3 = lpFileName_2
            sub_6b4d5b()
        
        hFindFile.b = 0
else
    void** eax_11 = sub_4d3aa0(&arg1[7], arg3)
    void** var_19c = eax_11
    char eax_13
    
    if (eax_11 != arg1[8])
        eax_13 = sub_405dd0(&eax_11[3], arg3)
    
    void*** eax_14
    
    if (eax_11 == arg1[8] || eax_13 != 0)
        var_1a0 = arg1[8]
        eax_14 = &var_1a0
    else
        eax_14 = &var_19c
    
    hFindFile = *eax_14
    
    if (hFindFile != arg1[8])
        sub_55a460(&arg1[7], &var_1a0, hFindFile)
    
    hFindFile.b = 1

fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &var_1a4)
return hFindFile
