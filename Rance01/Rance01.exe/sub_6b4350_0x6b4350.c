// 函数: sub_6b4350
// 地址: 0x6b4350
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_884
int32_t eax_1 = data_78c474 ^ &var_884
bool cond:0 = data_797db5 != 0
var_884 = arg3

if (not(cond:0))
    if (CoInitializeEx(nullptr, 0) s< 0)
        sub_604c90(0x72cc60)
    else
        data_797db5 = 1

uint8_t var_7e8 = 0
int128_t var_7e7[0x13]
sub_6bc670(&var_7e7, 0, 0x104)
GetCurrentDirectoryA(0x104, &var_7e8)
char* eax_4 = &var_7e8
int32_t var_864 = 0xf
int32_t var_868 = 0
char var_878 = 0
char i

do
    i = *eax_4
    eax_4 = &eax_4[1]
while (i != 0)
sub_401270(&var_878, eax_4 - &var_7e7, &var_7e8)
sub_401180(&data_79341c, 0xffffffff, &var_878, 0)

if (var_864 u>= 0x10)
    int32_t var_894_2 = var_878.d
    sub_6b4d5b()

int32_t var_828 = 0xf
int32_t var_82c = 0
char var_83c = 0
sub_401180(&var_83c, 0xffffffff, &data_79341c, 0)
sub_587150(&var_83c)
int32_t var_868_1 = 0
int32_t var_864_1 = 0xf
var_878 = 0
sub_401270(&var_878, 0xe, "AliceStart.ini")
sub_5870d0(&var_83c)
sub_402000(&var_83c, &var_878, 0, 0xffffffff)

if (var_864_1 u>= 0x10)
    int32_t var_894_3 = var_878.d
    sub_6b4d5b()

char* lpFileName = var_83c.d

if (var_828 u< 0x10)
    lpFileName = &var_83c

HANDLE hFindFile = FindFirstFileA(lpFileName, &var_7e8)

if (hFindFile != 0xffffffff)
    FindClose(hFindFile)

if (hFindFile == 0xffffffff || (var_7e8 & 0x10) != 0)
    int32_t var_864_2 = 0xf
    int32_t var_868_2 = 0
    var_878 = 0
    sub_586e00(&var_878)
    int32_t var_820
    char* eax_8
    int32_t* ecx_5
    eax_8, ecx_5 = sub_587010(&var_820, &var_878)
    char* var_894_7 = eax_8
    int32_t* lpFileName_4
    int32_t* lpFileName_1 = &lpFileName_4
    sub_402c60(lpFileName_1, "\AliceStart.ini", ecx_5)
    int32_t var_7f0
    
    if (var_7f0 u>= 0x10)
        lpFileName_1 = lpFileName_4
    
    HANDLE hFindFile_1 = FindFirstFileA(lpFileName_1, &var_7e8)
    uint8_t ebx_1
    
    if (hFindFile_1 != 0xffffffff)
        FindClose(hFindFile_1)
        ebx_1 = not.b(var_7e8 u>> 4) & 1
    else
        ebx_1 = 0
    
    if (var_7f0 u>= 0x10)
        int32_t* lpFileName_5 = lpFileName_4
        sub_6b4d5b()
    
    int32_t var_7f0_1 = 0xf
    int32_t var_7f4_1 = 0
    lpFileName_4.b = 0
    int32_t var_80c
    
    if (var_80c u>= 0x10)
        int32_t var_894_10 = var_820
        sub_6b4d5b()
    
    if (ebx_1 != 0)
        char* lpPathName = sub_587010(&var_820, &var_878)
        
        if (*(lpPathName + 0x14) u>= 0x10)
            lpPathName = *lpPathName
        
        SetCurrentDirectoryA(lpPathName)
        
        if (var_80c u>= 0x10)
            int32_t var_894_13 = var_820
            sub_6b4d5b()
        
        sub_401180(&data_79341c, 0xffffffff, sub_587010(&var_820, &var_878), 0)
        
        if (var_80c u>= 0x10)
            int32_t var_894_15 = var_820
            sub_6b4d5b()
    
    if (var_864_2 u>= 0x10)
        int32_t var_894_16 = var_878.d
        sub_6b4d5b()

if (var_828 u>= 0x10)
    int32_t var_894_17 = var_83c.d
    sub_6b4d5b()

struct win32only::CAliceRunPatch::VTable* var_85c
sub_6b2490(&var_85c)
int32_t* lpFileName_3
int32_t* lpFileName_2 = lpFileName_3
int32_t var_844

if (var_844 u< 0x10)
    lpFileName_2 = &lpFileName_3

HANDLE hFindFile_2 = FindFirstFileA(lpFileName_2, &var_7e8)

if (hFindFile_2 != 0xffffffff)
    FindClose(hFindFile_2)

HMODULE result

if (hFindFile_2 == 0xffffffff || (var_7e8 & 0x10) != 0)
    void var_6a8
    sub_564550(&var_6a8)
    
    if (sub_564a30(&var_6a8, arg1) == 0)
        sub_565940(&var_6a8)
        sub_5647c0(&var_6a8)
        var_85c = &win32only::CAliceRunPatch::`vftable'
        
        if (var_844 u>= 0x10)
            int32_t* lpFileName_7 = lpFileName_3
            sub_6b4d5b()
        
        sub_6b4885(eax_1 ^ &var_884)
        return 0
    
    result = sub_565a10(&var_6a8)
    
    if (data_797db5 != 0)
        CoUninitialize()
        data_797db5 = 0
    
    sub_5647c0(&var_6a8)
    var_85c = &win32only::CAliceRunPatch::`vftable'
    
    if (var_844 u>= 0x10)
        int32_t* lpFileName_8 = lpFileName_3
        sub_6b4d5b()
else
    result = sub_6b2600(&var_85c, arg1, arg2, var_884, arg4)
    var_85c = &win32only::CAliceRunPatch::`vftable'
    
    if (var_844 u>= 0x10)
        int32_t* lpFileName_6 = lpFileName_3
        sub_6b4d5b()

sub_6b4885(eax_1 ^ &var_884)
return result
