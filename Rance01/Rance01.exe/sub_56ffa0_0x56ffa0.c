// 函数: sub_56ffa0
// 地址: 0x56ffa0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_5 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_726136
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t var_120
int32_t eax_2 = data_78c474 ^ &var_120
int32_t __saved_edi
int32_t var_134 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
void** lpParameters = arg1
var_120 = 0
int32_t* eax_5 = data_797d54
HWND var_118 = nullptr

if (eax_5 != 0)
    sub_568430(eax_5)
    var_118 = *(data_797d54 + 8)

int32_t var_e4 = 0xf
int32_t var_e8 = 0
char var_f8 = 0
int32_t var_4 = 0
int32_t var_100 = 0xf
int32_t var_104 = 0
char var_114 = 0
var_4.b = 1
char var_dc
int32_t var_2c
char eax_9

if (lpParameters[4] u>= 7)
    char* eax_7 = sub_401ec0(lpParameters, &var_2c, 0, 7)
    var_4.b = 2
    var_120 = 1
    int32_t* eax_8 = sub_401c00(&var_dc, eax_7)
    int32_t var_4_1 = 3
    var_120 = 3
    eax_9 = sub_402680("http://", eax_8)

char var_c0
char var_a4
char eax_12

if ((lpParameters[4] u< 7 || eax_9 == 0) && lpParameters[4] u>= 8)
    char* eax_10 = sub_401ec0(lpParameters, &var_a4, 0, 8)
    int32_t var_4_2 = 4
    var_120 |= 4
    int32_t* eax_11 = sub_401c00(&var_c0, eax_10)
    int32_t var_4_3 = 5
    var_120 |= 8
    eax_12 = sub_402680("https://", eax_11)

char var_119

if ((lpParameters[4] u< 7 || eax_9 == 0) && (lpParameters[4] u< 8 || eax_12 == 0))
    var_119 = 0
else
    var_119 = 1

if ((var_120.b & 8) != 0)
    var_120 &= 0xfffffff7
    int32_t var_ac
    
    if (var_ac u>= 0x10)
        int32_t var_138_3 = var_c0.d
        sub_6b4d5b()
    
    int32_t var_ac_1 = 0xf
    int32_t var_b0_1 = 0
    var_c0 = 0

if ((var_120.b & 4) != 0)
    var_120 &= 0xfffffffb
    int32_t var_90
    
    if (var_90 u>= 0x10)
        int32_t var_138_4 = var_a4.d
        sub_6b4d5b()
    
    int32_t var_90_1 = 0xf
    int32_t var_94_1 = 0
    var_a4 = 0

if ((var_120.b & 2) != 0)
    var_120 &= 0xfffffffd
    int32_t var_c8
    
    if (var_c8 u>= 0x10)
        int32_t var_138_5 = var_dc.d
        sub_6b4d5b()
    
    int32_t var_c8_1 = 0xf
    int32_t var_cc_1 = 0
    var_dc = 0

int32_t var_4_4 = 1
int32_t var_18

if ((var_120.b & 1) != 0 && var_18 u>= 0x10)
    int32_t var_138_6 = var_2c
    sub_6b4d5b()

char* esi_3 = &var_f8
void* const var_138_7
void* edi_3

if (var_119 == 0)
    sub_401270(esi_3, 0x13, 0x74b434)
    var_138_7 = &data_74b448
    edi_3 = 0x27
else
    sub_401270(esi_3, 0x16, 0x74b3ec)
    var_138_7 = &data_74b404
    edi_3 = 0x2c

sub_401270(&var_114, edi_3, var_138_7)
int32_t var_84 = 0
struct usernotice::CDialog::usernotice::COpenWebDlg::VTable* dwInitParam =
    &usernotice::COpenWebDlg::`vftable'{for `usernotice::CDialog'}
int32_t var_6c = 0xf
int32_t var_70 = 0
char var_80 = 0
int32_t var_50 = 0xf
int32_t var_54 = 0
char var_64 = 0
int32_t var_34 = 0xf
int32_t var_38 = 0
char var_48 = 0
var_4_4.b = 6
sub_401180(&var_80, 0xffffffff, &var_f8, 0)
sub_401180(&var_64, 0xffffffff, lpParameters, 0)
sub_401180(&var_48, 0xffffffff, &var_114, 0)
int32_t eax_15 =
    DialogBoxParamA(GetWindowLongA(var_118, 0xfffffffa), 0x9ccc, var_118, sub_6046a0, &dwInitParam)
int32_t var_84_1 = eax_15

if (eax_15 == 1)
    if (lpParameters[5] u>= 0x10)
        lpParameters = *lpParameters
    
    ShellExecuteA(var_118, "open", "IExplore", lpParameters, nullptr, SW_SHOWNORMAL)

int32_t result = sub_604790(&dwInitParam)

if (var_100 u>= 0x10)
    int32_t var_138_9 = var_114.d
    result = sub_6b4d5b()

int32_t var_100_1 = 0xf
int32_t var_104_1 = 0
var_114 = 0

if (var_e4 u>= 0x10)
    int32_t var_138_10 = var_f8.d
    result = sub_6b4d5b()

fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &var_120)
return result
