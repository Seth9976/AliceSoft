// 函数: sub_61fb20
// 地址: 0x61fb20
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_71d3e0
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
char var_48
int32_t eax_2 = data_78c474 ^ &var_48
int32_t __saved_edi
int32_t var_5c = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_34 = 0xf
int32_t var_38 = 0
var_48 = 0
int32_t var_4 = 0
int32_t eax_6
int32_t edx
edx:eax_6 = sx.q(*(arg1 + 0x28))
int32_t var_60 = (eax_6 + (edx & 0x3ff)) s>> 0xa
var_4.b = 1
sub_401ef0(&var_48, sub_4104a0(0x73415c))
var_4.b = 0
int32_t var_2c
int32_t var_18

if (var_18 u>= 0x10)
    int32_t var_60_1 = var_2c
    sub_6b4d5b()

if (*(arg1 + 0x3c) == 0)
    sub_402cb0(&var_48, 0x73417c, 0x10)
else
    void* eax_11 = arg1 + 0x2c
    
    if (*(arg1 + 0x40) u>= 0x10)
        eax_11 = *eax_11
    
    void* var_60_2 = eax_11
    var_4.b = 2
    sub_402000(&var_48, sub_4104a0(0x73416c), 0, 0xffffffff)
    var_4.b = 0
    
    if (var_18 u>= 0x10)
        int32_t var_60_3 = var_2c
        sub_6b4d5b()

if (*(arg1 + 0x58) != 0)
    var_4.b = 3
    sub_402000(&var_48, sub_61fce0(&var_2c, 0x734190, arg1 + 0x48), 0, 0xffffffff)
    var_4.b = 0
    
    if (var_18 u>= 0x10)
        int32_t var_60_5 = var_2c
        sub_6b4d5b()

int128_t* lParam = var_48.d

if (var_34 u< 0x10)
    lParam = &var_48

int128_t* lParam_1 = lParam
void* edx_3 = lParam_1 + 1
char i

do
    i = *lParam_1
    lParam_1 += 1
while (i != 0)
sub_401270(arg1 + 8, lParam_1 - edx_3, lParam)
HWND hWnd = *(arg1 + 4)
*(arg1 + 0x24) = 0
LRESULT result = SendMessageA(hWnd, 0x401, 0x100, lParam)

if (var_34 u>= 0x10)
    int32_t var_60_8 = var_48.d
    result = sub_6b4d5b()

fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &var_48)
return result
