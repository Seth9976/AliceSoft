// 函数: sub_66bfc0
// 地址: 0x66bfc0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_c = 0xffffffff
int32_t (* var_10)(void* arg1) = sub_724311
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_1b4
int32_t eax_2 = data_78c474 ^ &var_1b4
int32_t __saved_edi
int32_t var_1c4 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
sub_669750(arg1 + 8)
char* eax_5 = arg2
char i

do
    i = *eax_5
    eax_5 = &eax_5[1]
while (i != 0)
sub_401270(arg1 + 0x1c, eax_5 - &eax_5[1], arg2)
sub_401270(arg1 + 0x38, nullptr, 0x72d3d5)
sub_401270(arg1 + 0x54, nullptr, 0x72d3d6)
int128_t* eax_7 = arg2
int32_t var_184 = 0xf
int32_t var_188 = 0
char var_198 = 0
void* edx_1 = eax_7 + 1
char i_1

do
    i_1 = *eax_7
    eax_7 += 1
while (i_1 != 0)
sub_401270(&var_198, eax_7 - edx_1, arg2)
char* lpFileName = var_198.d

if (var_184 u< 0x10)
    lpFileName = &var_198

WIN32_FIND_DATAA findFileData
HANDLE hFindFile = FindFirstFileA(lpFileName, &findFileData)
char var_1ae

if (hFindFile != 0xffffffff)
    FindClose(hFindFile)
    hFindFile.b = findFileData.dwFileAttributes.b
    hFindFile.b u>>= 4
    hFindFile.b = not.b(hFindFile.b)
    hFindFile.b &= 1
    var_1ae = hFindFile.b
else
    var_1ae = 0

if (var_184 u>= 0x10)
    int32_t var_1c8_4 = var_198.d
    sub_6b4d5b()

if (var_1ae == 0)
    hFindFile.b = 1
else
    var_198.d = 0
    int32_t var_194_1 = 0
    int32_t var_190_1 = 0
    int32_t var_c_1 = 0
    int32_t var_16c_1 = 0
    char var_17c = 0
    int128_t* eax_9 = arg2
    int32_t var_168_1 = 0xf
    void* edx_3 = eax_9 + 1
    char i_2
    
    do
        i_2 = *eax_9
        eax_9 += 1
    while (i_2 != 0)
    sub_401270(&var_17c, eax_9 - edx_3, arg2)
    int32_t var_1a4_1 = 0xffffffff
    int32_t var_1a0_1 = 0
    int32_t var_19c_1 = 0
    char* var_1c8_6 = &var_198
    var_c_1.b = 2
    bool var_1ae_1 = sub_601f80(&var_17c) == 0
    var_c_1.b = 0
    
    if (var_168_1 u>= 0x10)
        int32_t var_1c8_7 = var_17c.d
        sub_6b4d5b()
    
    void var_1ad
    
    if (var_1ae_1 == 0)
        if (sub_660b60(&var_198, &var_1ad, arg1 + 8) != 0)
            hFindFile = var_198.d
            
            if (hFindFile != 0)
                HANDLE hFindFile_3 = hFindFile
                sub_6b4d5b()
            
            hFindFile.b = 1
        else
            int128_t* var_1c8_10 = arg2
            sub_604c90(0x730520)
            hFindFile = var_198.d
            
            if (hFindFile == 0)
                hFindFile.b = 0
            else
                HANDLE hFindFile_2 = hFindFile
                sub_6b4d5b()
                hFindFile.b = 0
    else
        int128_t* var_1c8_8 = arg2
        sub_604c90(0x7304ec)
        hFindFile = var_198.d
        
        if (hFindFile != 0)
            HANDLE hFindFile_1 = hFindFile
            sub_6b4d5b()
        
        hFindFile.b = 0

fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &var_1b4)
return hFindFile
