// 函数: sub_5dbb70
// 地址: 0x5dbb70
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_71decc
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_810
int32_t eax_2 = data_78c474 ^ &var_810
int32_t __saved_edi
int32_t var_824 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
void var_7fc
sub_6b5a28(arg2, &var_7fc, arg1, &var_7fc)
void var_798
int32_t eax_6
int32_t ecx
eax_6, ecx = sub_6b57a0(&var_798, &var_7fc)
void var_804
sub_6b5a28(eax_6, &var_804, ecx, &var_804)
int32_t* var_7f4
sub_6b57a0(&var_7f4, &var_804)
int32_t* var_840 = var_7f4
int32_t var_7f0
int32_t var_844 = var_7f0
int32_t var_7ec
int32_t var_848 = var_7ec
int32_t var_78c
int32_t var_84c = var_78c
int32_t var_788
int32_t var_850 = var_788 + 1
int32_t var_784
int32_t var_854 = var_784 + 0x76c
sub_4104a0("Log%04d")
int32_t var_4 = 0
void param0
sub_65f4c0(&param0)
int32_t var_7bc = 0xf
int32_t var_7c0 = 0
char var_7d0 = 0
sub_401270(&var_7d0, 5, "*.txt")
var_4.b = 1
int32_t var_7e0 = 0xf
int32_t var_7e4 = 0
var_7f4.b = 0
sub_401270(&var_7f4, 0x10, 0x7362c4)
sub_65f540(&param0, &var_7d0, &var_7f4)

if (var_7e0 u>= 0x10)
    int32_t* var_828_2 = var_7f4
    sub_6b4d5b()

var_4.b = 0
int32_t var_7e0_1 = 0xf
int32_t var_7e4_1 = 0
var_7f4.b = 0

if (var_7bc u>= 0x10)
    int32_t var_828_3 = var_7d0.d
    sub_6b4d5b()

int32_t var_7bc_1 = 0xf
int32_t var_7c0_1 = 0
var_7d0 = 0
sub_401270(&var_7d0, 3, 0x736334)
var_4.b = 2
int32_t var_7e0_2 = 0xf
int32_t var_7e4_2 = 0
var_7f4.b = 0
sub_401270(&var_7f4, 0x12, 0x736394)
sub_65f540(&param0, &var_7d0, &var_7f4)

if (var_7e0_2 u>= 0x10)
    int32_t* var_828_5 = var_7f4
    sub_6b4d5b()

var_4.b = 0
int32_t var_7e0_3 = 0xf
int32_t var_7e4_3 = 0
var_7f4.b = 0

if (var_7bc_1 u>= 0x10)
    int32_t var_828_6 = var_7d0.d
    sub_6b4d5b()

HWND var_770 = arg1
void* edx_6

if (*(arg2 + 0x144) u< 0x10)
    edx_6 = arg2 + 0x130
else
    edx_6 = *(arg2 + 0x130)

void* eax_10 = edx_6
int32_t var_7e0_4 = 0xf
int32_t var_7e4_4 = 0
var_7f4.b = 0
void* esi_9 = eax_10 + 1
char i

do
    i = *eax_10
    eax_10 += 1
while (i != 0)
sub_401270(&var_7f4, eax_10 - esi_9, edx_6)
int32_t* eax_12 = var_7f4

if (var_7e0_4 u< 0x10)
    eax_12 = &var_7f4

char var_51c[0x105]
sub_6b5353(&var_51c, 0x104, eax_12)
char (* var_748)[0x105] = &var_51c

if (var_7e0_4 u>= 0x10)
    int32_t* var_828_9 = var_7f4
    sub_6b4d5b()

int32_t* var_7b4
int32_t* edx_7 = var_7b4
int32_t var_7a0

if (var_7a0 u< 0x10)
    edx_7 = &var_7b4

int32_t* eax_14 = edx_7
int32_t var_7e0_5 = 0xf
int32_t var_7e4_5 = 0
var_7f4.b = 0
void* esi_11 = eax_14 + 1
char i_1

do
    i_1 = *eax_14
    eax_14 += 1
while (i_1 != 0)
sub_401270(&var_7f4, eax_14 - esi_11, edx_7)
int32_t** eax_16 = var_7f4

if (var_7e0_5 u< 0x10)
    eax_16 = &var_7f4

void var_71c
sub_6b5353(&var_71c, 0x200, eax_16)

if (var_7e0_5 u>= 0x10)
    int32_t* var_828_12 = var_7f4
    sub_6b4d5b()

char var_417[0x403]
int32_t var_14
var_417[var_14] = 0
BOOL result = GetSaveFileNameA(&param0)

if (result != 0)
    result = arg2
    
    if (*(result + 0x10c) != 0)
        void* eax_18 = &var_71c
        int32_t var_7bc_2 = 0xf
        int32_t var_7c0_2 = 0
        var_7d0 = 0
        char i_2
        
        do
            i_2 = *eax_18
            eax_18 += 1
        while (i_2 != 0)
        void var_71b
        sub_401270(&var_7d0, eax_18 - &var_71b, &var_71c)
        var_4.b = 3
        char eax_20 = sub_5dae20(&var_7d0, *(arg2 + 0x10c))
        var_4.b = 0
        
        if (var_7bc_2 u>= 0x10)
            int32_t var_828_17 = var_7d0.d
            sub_6b4d5b()
        
        void* var_828_18 = &var_71c
        int32_t var_82c_1
        
        var_82c_1 = eax_20 == 0 ? 0x73653c : 0x736524
        
        PSTR lpText = sub_4104a0(var_82c_1)
        PSTR lpCaption = arg2 + 0x114
        
        if (*(lpCaption + 0x14) u>= 0x10)
            lpCaption = *lpCaption
        
        if (*(lpText + 0x14) u>= 0x10)
            lpText = *lpText
        
        result = MessageBoxA(arg1, lpText, lpCaption, MB_OK)
        
        if (var_7bc_2 u>= 0x10)
            int32_t var_828_19 = var_7d0.d
            result = sub_6b4d5b()
    
    if (var_7a0 u>= 0x10)
        int32_t* var_828_20 = var_7b4
        result = sub_6b4d5b()
else if (var_7a0 u>= 0x10)
    int32_t* var_828_14 = var_7b4
    result = sub_6b4d5b()

fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &var_810)
return result
