// 函数: sub_630880
// 地址: 0x630880
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_71ce98
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_44
int32_t eax_2 = data_78c474 ^ &var_44
int32_t __saved_edi
int32_t var_58 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
sub_62b300(arg1 + 0xdc)
HWND hWnd = *(arg1 + 4)

if (hWnd != 0 && DestroyWindow(hWnd) != 0)
    *(arg1 + 4) = 0

if (*(arg1 + 0x30) != 0 && UnregisterClassA(*(arg1 + 0x2c), *(arg1 + 0x6c)) != 0)
    *(arg1 + 0x30) = 0

int32_t var_2c = 0xf
int32_t var_30 = 0
char var_40 = 0
sub_401270(&var_40, 0x18, "DPLogViewer_TextChildWnd")
int32_t var_4 = 0
int32_t eax_8 = data_797e54
int32_t var_5c_3 = eax_8
data_797e54 = eax_8 + 1
void var_24
_swprintf(&var_24, 0x10, 0x733b0c)
void* eax_10 = &var_24
char i

do
    i = *eax_10
    eax_10 += 1
while (i != 0)
void var_23
sub_402cb0(&var_40, &var_24, eax_10 - &var_23)
*(arg1 + 8) = 0xb
sub_401180(arg1 + 0x34, 0xffffffff, &var_40, 0)
*(arg1 + 0x6c) = arg3
*(arg1 + 0x70) = 0x200
*(arg1 + 0x74) = 0x40000000
*(arg1 + 0x88) = arg2
*(arg1 + 0x78) = 0
*(arg1 + 0x7c) = 0
*(arg1 + 0x80) = 0x258
*(arg1 + 0x84) = 0x190
*(arg1 + 0x90) = arg1
char result

if (sub_6b3860(arg1 + 4) != 0)
    if (var_2c u>= 0x10)
        int32_t var_5c_6 = var_40.d
        sub_6b4d5b()
    
    result = 1
else
    if (var_2c u>= 0x10)
        int32_t var_5c_5 = var_40.d
        sub_6b4d5b()
    
    result = 0

fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &var_44)
return result
