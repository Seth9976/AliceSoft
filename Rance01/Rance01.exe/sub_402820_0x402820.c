// 函数: sub_402820
// 地址: 0x402820
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_c = 0xffffffff
int32_t (* var_10)(void* arg1) = sub_7209fc
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_1d4
int32_t eax_2 = data_78c474 ^ &var_1d4
int32_t __saved_edi
int32_t var_1e4 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
uint8_t ebx = 0
int32_t var_1bc = 0xf
int32_t var_1c0 = 0
char var_1d0 = 0
int32_t var_c_1 = 0
sub_401180(&var_1d0, 0xffffffff, &data_79341c, 0)
sub_587150(&var_1d0)
char* eax_5 = arg1
int32_t var_1a0 = 0xf
int32_t var_1a4 = 0
char var_1b4 = 0
char i

do
    i = *eax_5
    eax_5 = &eax_5[1]
while (i != 0)
var_c_1.b = 1
char var_17c
sub_401940(&var_17c, sub_401270(&var_1b4, eax_5 - &eax_5[1], arg1), &var_1b4)
char* var_1e8_1 = &var_17c
var_c_1.b = 2
char var_198
sub_402c60(&var_198, ".afa", nullptr)
var_c_1.b = 3
sub_5870d0(&var_1d0)
sub_402000(&var_1d0, &var_198, 0, 0xffffffff)
int32_t var_184

if (var_184 u>= 0x10)
    int32_t var_1e8_2 = var_198.d
    sub_6b4d5b()

int32_t var_184_1 = 0xf
int32_t var_188 = 0
var_198 = 0
int32_t var_168

if (var_168 u>= 0x10)
    int32_t var_1e8_3 = var_17c.d
    sub_6b4d5b()

int32_t var_168_1 = 0xf
int32_t var_16c = 0
var_17c = 0

if (var_1a0 u>= 0x10)
    int32_t var_1e8_4 = var_1b4.d
    sub_6b4d5b()

char* lpFileName = var_1d0.d

if (var_1bc u< 0x10)
    lpFileName = &var_1d0

WIN32_FIND_DATAA findFileData
HANDLE hFindFile = FindFirstFileA(lpFileName, &findFileData)

if (hFindFile != 0xffffffff)
    FindClose(hFindFile)
    ebx = not.b(findFileData.dwFileAttributes.b u>> 4) & 1

if (var_1bc u>= 0x10)
    int32_t var_1e8_7 = var_1d0.d
    sub_6b4d5b()

hFindFile.b = ebx
fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &var_1d4)
return hFindFile
