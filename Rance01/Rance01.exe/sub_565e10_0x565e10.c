// 函数: sub_565e10
// 地址: 0x565e10
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_c = 0xffffffff
int32_t (* var_10)(void* arg1) = sub_723987
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_894
int32_t eax_2 = data_78c474 ^ &var_894
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t __saved_edi
int128_t* esi = (*(*(arg1 + 0x14) + 0x24))(data_78c474 ^ &__saved_edi)
char* ecx_1 = esi
int32_t var_864 = 0xf
int32_t var_868 = 0
char var_878 = 0
int128_t* eax_7

do
    eax_7.b = *ecx_1
    ecx_1 = &ecx_1[1]
while (eax_7.b != 0)
int32_t var_c_1 = 0
var_c_1.b = 1
char var_824
int128_t* eax_10
int32_t* ecx_6
eax_10, ecx_6 = (*(*(arg1 + 0x4fc) + 8))(sub_401800(sub_401270(&var_878, ecx_1 - &ecx_1[1], esi), 
    &var_878, &var_824))
void* var_7e4
sub_567130(&var_7e4, eax_10, ecx_6)
int32_t var_810

if (var_810 u>= 0x10)
    int32_t var_8a8_2 = var_824.d
    sub_6b4d5b()

int32_t var_810_1 = 0xf
int32_t var_814 = 0
var_824 = 0

if (var_864 u>= 0x10)
    int32_t var_8a8_3 = var_878.d
    sub_6b4d5b()

struct sys40::CScreenshotFolderPath::VTable* var_7c8 = &sys40::CScreenshotFolderPath::`vftable'
int32_t var_7b0 = 0xf
int32_t var_7b4 = 0
char var_7c4 = 0
var_c_1.b = 5
int32_t var_794 = 0xf
int32_t var_798 = 0
char var_7a8 = 0
sub_401270(&var_7a8, 0x18, "ScreenshotFolderPath.sav")
var_c_1.b = 6
int32_t edx_4 = sub_56bc00(&var_7c8, &var_7e4)
char* lpFileName_1
int32_t var_7f4
int32_t edx_5

if (var_7b4 != 0)
    char* lpFileName = &lpFileName_1
    sub_401d60(lpFileName, edx_4, &var_7c4)
    
    if (var_7f4 u>= 0x10)
        lpFileName = lpFileName_1
    
    WIN32_FIND_DATAA findFileData
    HANDLE hFindFile
    hFindFile, edx_5 = FindFirstFileA(lpFileName, &findFileData)
    
    if (hFindFile != 0xffffffff)
        edx_5 = FindClose(hFindFile)
        hFindFile.b = (findFileData.dwFileAttributes u>> 4).b & 1
    else
        hFindFile.b = 0
    
    bool var_88d_1 = hFindFile.b == 0
    
    if (var_7f4 u>= 0x10)
        char* lpFileName_3 = lpFileName_1
        edx_5 = sub_6b4d5b()
    
    if (var_88d_1 != 0)
        edx_5 = sub_401180(&var_7c4, 0xffffffff, arg1 + 0x554, 0)
else
    edx_5 = sub_401180(&var_7c4, 0xffffffff, arg1 + 0x554, 0)

sub_401d60(&lpFileName_1, edx_5, &var_7c4)
var_c_1.b = 7
sub_604500(&lpFileName_1)
var_c_1.b = 6

if (var_7f4 u>= 0x10)
    char* lpFileName_4 = lpFileName_1
    sub_6b4d5b()

int32_t var_864_1 = 0xf
int32_t var_868_1 = 0
var_878 = 0
sub_401270(&var_878, 0x16, "ScreenshotSaveType.sav")
var_c_1.b = 8
uint32_t var_888 = 0
uint32_t eax_17 = zx.d(sub_56bda0(&var_7e4, &var_878, &var_888))
int32_t eax_18 = neg.d(eax_17)
var_888 &= sbb.d(eax_18, eax_18, eax_17 != 0)

if (var_864_1 u>= 0x10)
    int32_t var_8a8_9 = var_878.d
    sub_6b4d5b()

void param0
void* esi_4 = &param0
sub_6b3440(esi_4)
sub_6b34e0(esi_4, "*.bmp", 0x74bda0)
sub_6b34e0(esi_4, "*.jpg", "JPEG")
int32_t var_848 = 0xf
int32_t var_84c = 0
char var_85c = 0
var_c_1.b = 9
int128_t* var_8a8_10
int32_t var_6a8

if (var_888 != 0)
    var_6a8 = 2
    var_8a8_10 = &data_74bdd8
else
    var_6a8 = 1
    var_8a8_10 = &data_74bdd4

int32_t ecx_17
int32_t edx_8
ecx_17, edx_8 = sub_401270(&var_85c, 3, var_8a8_10)
sub_6b5a28(&var_888, edx_8, ecx_17, &var_888)
char var_78c
int32_t ecx_18
int32_t edx_9
ecx_18, edx_9 = sub_6b57a0(&var_78c, &var_888)
void var_880
sub_6b5a28(&var_880, edx_9, ecx_18, &var_880)
sub_6b57a0(&lpFileName_1, &var_880)
char* lpFileName_2 = lpFileName_1
int32_t var_804
int32_t var_8b4 = var_804
int32_t var_800
int32_t var_8b8 = var_800
int32_t var_780
int32_t var_8bc = var_780
int32_t var_77c
int32_t var_8c0 = var_77c + 1
int32_t var_778
int32_t var_8c4 = var_778 + 0x76c
var_888 = sub_4104a0("_%4d%02d%02d_%02d%02d%02d")
var_c_1.b = 0xa
int128_t* esi_8 = (*(*(arg1 + 0x14) + 0xc))()
int32_t var_810_2 = 0xf
int32_t var_814_1 = 0
var_824 = 0
char* ecx_23 = esi_8
int128_t* eax_27

do
    eax_27.b = *ecx_23
    ecx_23 = &ecx_23[1]
while (eax_27.b != 0)
var_c_1.b = 0xb
char var_730
int32_t* eax_28
int32_t edx_13
eax_28, edx_13 = sub_401800(sub_401270(&var_824, ecx_23 - (esi_8 + 1), esi_8), &var_7c4, &var_730)
var_c_1.b = 0xc
var_c_1.b = 0xd
char var_74c
char var_714
int32_t* var_8a8_17 =
    sub_4b3c20(sub_4b3c20(eax_28, edx_13, &var_824, &var_714), &var_74c, var_888, &var_74c)
var_c_1.b = 0xe
var_c_1.b = 0xf
char* var_840
char var_6f8
sub_4c1d70(&var_85c, sub_402c60(&var_6f8, 0x74bddc, nullptr), &var_6f8, &var_840)
int32_t var_6e4

if (var_6e4 u>= 0x10)
    int32_t var_8a8_19 = var_6f8.d
    sub_6b4d5b()

int32_t var_6e4_1 = 0xf
int32_t var_6e8 = 0
var_6f8 = 0
int32_t var_738

if (var_738 u>= 0x10)
    int32_t var_8a8_20 = var_74c.d
    sub_6b4d5b()

int32_t var_738_1 = 0xf
int32_t var_73c = 0
var_74c = 0
int32_t var_700

if (var_700 u>= 0x10)
    int32_t var_8a8_21 = var_714.d
    sub_6b4d5b()

int32_t var_700_1 = 0xf
int32_t var_704 = 0
var_714 = 0
int32_t var_71c

if (var_71c u>= 0x10)
    int32_t var_8a8_22 = var_730.d
    sub_6b4d5b()

int32_t var_71c_1 = 0xf
int32_t var_720 = 0
var_730 = 0

if (var_810_2 u>= 0x10)
    int32_t var_8a8_23 = var_824.d
    sub_6b4d5b()

int32_t var_810_3 = 0xf
int32_t var_814_2 = 0
var_824 = 0
var_c_1.b = 0x16
int32_t var_6c8

if (var_6c8 u>= 0x10)
    char var_6dc
    int32_t var_8a8_24 = var_6dc.d
    sub_6b4d5b()

int32_t var_6c8_1 = 0xf
int32_t var_6cc = 0
char var_6dc_1 = 0
int32_t var_82c
void var_668

if (var_82c u< 0x10)
    sub_6b5353(&var_668, 0x104, &var_840)
else
    char* eax_35 = var_840
    
    if (eax_35 != 0)
        sub_6b5353(&var_668, 0x104, eax_35)

char* edx_18 = var_7c4.d

if (var_7b0 u< 0x10)
    edx_18 = &var_7c4

char* eax_36 = edx_18
int32_t var_864_2 = 0xf
int32_t var_868_2 = 0
var_878 = 0
char i

do
    i = *eax_36
    eax_36 = &eax_36[1]
while (i != 0)
sub_401270(&var_878, eax_36 - &eax_36[1], edx_18)
char var_564[0x400]
int32_t var_164
var_564[var_164] = 0
int32_t var_6bc = arg2

if (var_848 u< 0x10)
    char* var_684_1 = &var_85c
else
    int32_t var_684 = var_85c.d

if (var_864_2 u< 0x10)
    char* var_694_1 = &var_878
else
    int32_t var_694 = var_878.d

BOOL eax_40
eax_40.b = GetSaveFileNameA(&param0) != 0
bool var_88d_2 = eax_40.b == 0

if (var_864_2 u>= 0x10)
    int32_t var_8a8_28 = var_878.d
    sub_6b4d5b()

int32_t result
int32_t var_7d0

if (var_88d_2 == 0)
    void* eax_43 = &var_668
    int32_t var_864_3 = 0xf
    int32_t var_868_3 = 0
    var_878 = 0
    char i_1
    
    do
        i_1 = *eax_43
        eax_43 += 1
    while (i_1 != 0)
    void var_667
    sub_401270(&var_878, eax_43 - &var_667, &var_668)
    var_c_1.b = 0x17
    char eax_45 = sub_567c00(arg1 + 0x110, &var_878, var_6a8)
    var_c_1.b = 0x16
    
    if (var_864_3 u>= 0x10)
        int32_t var_8a8_34 = var_878.d
        sub_6b4d5b()
    
    if (eax_45 == 0)
        sub_604e10(0x74be28)
        
        if (var_82c u>= 0x10)
            char* var_8a8_44 = var_840
            sub_6b4d5b()
    else
        void* var_8a8_35 = &var_668
        sub_401d60(&lpFileName_1, sub_604e10(0x74bdfc), &var_7e4)
        var_c_1.b = 0x18
        sub_604500(&lpFileName_1)
        var_c_1.b = 0x16
        
        if (var_7f4 u>= 0x10)
            char* lpFileName_5 = lpFileName_1
            sub_6b4d5b()
        
        int32_t var_864_4 = 0xf
        int32_t var_868_4 = 0
        var_878 = 0
        sub_401270(&var_878, 0x16, "ScreenshotSaveType.sav")
        var_c_1.b = 0x19
        sub_56bf50(&var_7e4, &var_878, var_6a8 - 1)
        var_c_1.b = 0x16
        
        if (var_864_4 u>= 0x10)
            int32_t var_8a8_37 = var_878.d
            sub_6b4d5b()
        
        void* eax_47 = &var_668
        int32_t var_754_1 = 0xf
        int32_t var_758_1 = 0
        char var_768 = 0
        char i_2
        
        do
            i_2 = *eax_47
            eax_47 += 1
        while (i_2 != 0)
        var_c_1.b = 0x1a
        char* eax_50
        int32_t edx_27
        eax_50, edx_27 = sub_4018a0(&lpFileName_1, 
            sub_401270(&var_768, eax_47 - &var_667, &var_668), &var_768, &lpFileName_1)
        var_c_1.b = 0x1b
        sub_401d60(&var_78c, edx_27, eax_50)
        var_c_1.b = 0x1c
        sub_401180(&var_7c4, 0xffffffff, &var_78c, 0)
        
        if (var_778 u>= 0x10)
            int32_t var_8a8_40 = var_78c.d
            sub_6b4d5b()
        
        int32_t var_778_1 = 0xf
        int32_t var_77c_1 = 0
        var_78c = 0
        
        if (var_7f4 u>= 0x10)
            char* lpFileName_6 = lpFileName_1
            sub_6b4d5b()
        
        var_c_1.b = 0x16
        int32_t var_7f4_1 = 0xf
        int32_t var_7f8_1 = 0
        lpFileName_1.b = 0
        
        if (var_754_1 u>= 0x10)
            int32_t var_8a8_41 = var_768.d
            sub_6b4d5b()
        
        sub_56ba10(&var_7c8, &var_7e4)
        
        if (var_82c u>= 0x10)
            char* var_8a8_43 = var_840
            sub_6b4d5b()
    
    var_840.b = 0
    int32_t var_830_1 = 0
    int32_t var_82c_2 = 0xf
    
    if (var_848 u>= 0x10)
        int32_t var_8a8_45 = var_85c.d
        sub_6b4d5b()
    
    int32_t var_848_2 = 0xf
    int32_t var_84c_2 = 0
    var_85c = 0
    result = sub_56b9c0(&var_7c8)
    
    if (var_7d0 u>= 0x10)
        void* var_8a8_46 = var_7e4
        result = sub_6b4d5b()
else
    if (var_82c u>= 0x10)
        char* var_8a8_29 = var_840
        sub_6b4d5b()
    
    int32_t var_82c_1 = 0xf
    int32_t var_830 = 0
    var_840.b = 0
    
    if (var_848 u>= 0x10)
        int32_t var_8a8_30 = var_85c.d
        sub_6b4d5b()
    
    int32_t var_848_1 = 0xf
    int32_t var_84c_1 = 0
    var_85c = 0
    result = sub_56b9c0(&var_7c8)
    
    if (var_7d0 u>= 0x10)
        void* var_8a8_31 = var_7e4
        result = sub_6b4d5b()
fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &var_894)
return result
