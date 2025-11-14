// 函数: sub_510000
// 地址: 0x510000
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_c = 0xffffffff
int32_t (* var_10)(void* arg1) = sub_71f8a1
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_19c
int32_t eax_2 = data_78c474 ^ &var_19c
int32_t __saved_edi
int32_t eax_4 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int128_t* eax_5 = *(arg1 + 0x30)
int128_t* edi = *(arg1 + 0x2c)

if (edi != eax_5)
    void* esi_2 = 0
    sub_6b49d0(edi, eax_5, esi_2, eax_4)
    *(arg1 + 0x30) = esi_2 + edi

void* eax_6 = arg1 + 0x10
bool cond:0 = *(eax_6 + 0x14) u< 0x10
*(eax_6 + 0x10) = 0

if (not(cond:0))
    eax_6 = *eax_6

*eax_6 = 0
sub_58f670(arg1 + 0x3c)
int32_t* ecx = *(arg1 + 0x4c)

if (ecx != 0)
    (*(*ecx + 4))(eax_4)
    *(arg1 + 0x4c) = 0

*(arg1 + 0xc) = 0
int32_t var_184 = 0xf
int32_t var_188 = 0
char var_198 = 0
int32_t var_c_1 = 0
sub_401180(&var_198, 0xffffffff, &data_79341c, 0)
sub_587150(&var_198)
int32_t var_168 = 0xf
int32_t var_16c = 0
char var_17c = 0
sub_401270(&var_17c, 4, "Data")
var_c_1.b = 1
sub_5870d0(&var_198)
sub_402000(&var_198, &var_17c, 0, 0xffffffff)
var_c_1.b = 0

if (var_168 u>= 0x10)
    int32_t var_1b0_2 = var_17c.d
    sub_6b4d5b()

int32_t var_168_1 = 0xf
int32_t var_16c_1 = 0
var_17c = 0
sub_401270(&var_17c, 0xa, "Shader.slk")
var_c_1.b = 2
sub_5870d0(&var_198)
sub_402000(&var_198, &var_17c, 0, 0xffffffff)
var_c_1.b = 0

if (var_168_1 u>= 0x10)
    int32_t var_1b0_3 = var_17c.d
    sub_6b4d5b()

char* lpFileName = var_198.d

if (var_184 u< 0x10)
    lpFileName = &var_198

WIN32_FIND_DATAA findFileData
BOOL hFindFile = FindFirstFileA(lpFileName, &findFileData)

if (hFindFile == 0xffffffff)
label_5101e4:
    
    if (var_184 u>= 0x10)
        int32_t var_1b0_8 = var_198.d
        sub_6b4d5b()
    
    hFindFile.b = 1
else
    FindClose(hFindFile)
    
    if ((findFileData.dwFileAttributes.b & 0x10) != 0)
        goto label_5101e4
    
    char* var_1b0_6 = &var_198
    
    if (sub_58ec70(arg1 + 8).b != 0)
        goto label_5101e4
    
    if (var_184 u>= 0x10)
        int32_t var_1b0_7 = var_198.d
        sub_6b4d5b()
    
    hFindFile.b = 0

fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &var_19c)
return hFindFile
