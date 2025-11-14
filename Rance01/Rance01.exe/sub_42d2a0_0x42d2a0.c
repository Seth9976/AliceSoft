// 函数: sub_42d2a0
// 地址: 0x42d2a0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_c = 0xffffffff
int32_t (* var_10)(void* arg1) = sub_722aac
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_1bc
int32_t eax_2 = data_78c474 ^ &var_1bc
int32_t __saved_edi
int32_t var_1cc = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* ebx = arg2
int32_t var_198
int32_t edx
sub_401940(&var_198, edx, ebx)
int32_t var_c_1 = 0
var_c_1.b = 1
int32_t* lpFileName_1
sub_401ef0(&var_198, sub_401c00(&lpFileName_1, &var_198))
var_c_1.b = 0
int32_t var_1a0

if (var_1a0 u>= 0x10)
    int32_t* lpFileName_2 = lpFileName_1
    sub_6b4d5b()

int32_t* hFindFile
int32_t var_184

if (arg1[1].b == 0)
label_42d446:
    int32_t* ecx_3 = *arg1
    
    if (ecx_3 != 0)
        hFindFile = (*(*ecx_3 + 0x10))(3)
    
    if (ecx_3 != 0 && hFindFile != 0)
        if (ebx[5] u>= 0x10)
            ebx = *ebx
        
        if ((*(*hFindFile + 0xc))(ebx).b == 0)
            if (var_184 u< 0x10)
                hFindFile.b = 0
            else
                int32_t var_1d0_9 = var_198
                sub_6b4d5b()
                hFindFile.b = 0
        else if (var_184 u< 0x10)
            hFindFile.b = 1
        else
            int32_t var_1d0_8 = var_198
            sub_6b4d5b()
            hFindFile.b = 1
    else if (var_184 u< 0x10)
        hFindFile.b = 0
    else
        int32_t var_1d0_6 = var_198
        sub_6b4d5b()
        hFindFile.b = 0
else
    sub_42cb80(&lpFileName_1)
    var_c_1.b = 2
    int32_t var_17c
    int32_t* eax_9 = sub_405c90(&var_17c, &var_198, ".flat")
    var_c_1.b = 3
    sub_5870d0(&lpFileName_1)
    sub_402000(&lpFileName_1, eax_9, 0, 0xffffffff)
    var_c_1.b = 2
    int32_t var_168
    
    if (var_168 u>= 0x10)
        int32_t var_1d0_2 = var_17c
        sub_6b4d5b()
    
    int32_t* lpFileName = lpFileName_1
    
    if (var_1a0 u< 0x10)
        lpFileName = &lpFileName_1
    
    WIN32_FIND_DATAA findFileData
    hFindFile = FindFirstFileA(lpFileName, &findFileData)
    
    if (hFindFile != 0xffffffff)
        FindClose(hFindFile)
    
    if (hFindFile == 0xffffffff || (findFileData.dwFileAttributes.b & 0x10) != 0)
        var_c_1.b = 0
        
        if (var_1a0 u>= 0x10)
            int32_t* lpFileName_4 = lpFileName_1
            sub_6b4d5b()
        
        goto label_42d446
    
    if (var_1a0 u>= 0x10)
        int32_t* lpFileName_3 = lpFileName_1
        sub_6b4d5b()
    
    int32_t var_1a0_1 = 0xf
    int32_t var_1a4_1 = 0
    lpFileName_1.b = 0
    
    if (var_184 u>= 0x10)
        int32_t var_1d0_5 = var_198
        sub_6b4d5b()
    
    hFindFile.b = 1
fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &var_1bc)
return hFindFile
