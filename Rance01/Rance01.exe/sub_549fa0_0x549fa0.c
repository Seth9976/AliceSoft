// 函数: sub_549fa0
// 地址: 0x549fa0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_c = 0xffffffff
int32_t (* var_10)(void* arg1) = sub_723b36
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_1a4
int32_t eax_2 = data_78c474 ^ &var_1a4
int32_t __saved_edi
int32_t eax_4 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* ecx = *(arg1 + 0x34)
void* var_1a0 = arg1
int128_t* eax_7 = (*(*ecx + 8))(eax_4)
char* ecx_1 = eax_7
int32_t var_184 = 0xf
int32_t var_188 = 0
char var_198 = 0
char i

do
    i = *ecx_1
    ecx_1 = &ecx_1[1]
while (i != 0)
sub_401270(&var_198, ecx_1 - &ecx_1[1], eax_7)
int32_t var_c_1 = 0
int128_t* eax_10 = (*(**(var_1a0 + 0x38) + 0x24))()
char* ecx_4 = eax_10
char i_1

do
    i_1 = *ecx_4
    ecx_4 = &ecx_4[1]
while (i_1 != 0)
sub_402cb0(&var_198, eax_10, ecx_4 - &ecx_4[1])
char* lpFileName = var_198.d

if (var_184 u< 0x10)
    lpFileName = &var_198

WIN32_FIND_DATAA findFileData
HANDLE hFindFile = FindFirstFileA(lpFileName, &findFileData)

if (hFindFile != 0xffffffff)
    FindClose(hFindFile)

if (hFindFile == 0xffffffff || ((findFileData.dwFileAttributes u>> 4).b & 1) == 0)
    char* edx_4 = var_198.d
    
    if (var_184 u< 0x10)
        edx_4 = &var_198
    
    char* eax_12 = edx_4
    int32_t var_168_1 = 0xf
    int32_t var_16c_1 = 0
    char var_17c = 0
    char i_2
    
    do
        i_2 = *eax_12
        eax_12 = &eax_12[1]
    while (i_2 != 0)
    sub_401270(&var_17c, eax_12 - &eax_12[1], edx_4)
    var_c_1.b = 1
    sub_604500(&var_17c)
    var_c_1.b = 0
    
    if (var_168_1 u>= 0x10)
        int32_t var_1b8_6 = var_17c.d
        sub_6b4d5b()

void* esi_5 = var_1a0
int32_t* eax_14
int32_t edx_5
eax_14, edx_5 = sub_552d50(esi_5 + 0x1dc, &var_198, &var_1a0)
void** result

if (eax_14.b != 0)
    **(esi_5 + 0x2b0) = var_1a0
    *(esi_5 + 0x2b0) += 4
    
    if (var_184 u>= 0x10)
        int32_t var_1b8_9 = var_198.d
        sub_6b4d5b()
    
    result.b = 1
else
    char ebx_1 = sub_53d1c0(eax_14, edx_5, esi_5, 0x750788).b
    
    if (var_184 u>= 0x10)
        int32_t var_1b8_8 = var_198.d
        sub_6b4d5b()
    
    result.b = ebx_1

fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &var_1a4)
return result
