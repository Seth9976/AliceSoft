// 函数: sub_604a30
// 地址: 0x604a30
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_20
int32_t eax_1 = data_78c474 ^ &var_20
HWND eax_2 = GetDlgItem(arg2, 0x9cd9)
bool cond:0 = *(arg1 + 0x38) != 0
*(arg1 + 0x3c) = eax_2
*(arg1 + 0x40) = arg2

if (not(cond:0))
    EnableWindow(GetDlgItem(arg2, 0x9cd2), 0)

int32_t* lpString = sub_604970()

if (lpString[5] u>= 0x10)
    lpString = *lpString

SetWindowTextA(GetDlgItem(arg2, 0x9cce), lpString)
int32_t var_c

if (var_c u>= 0x10)
    int32_t var_34_1 = var_20
    sub_6b4d5b()

for (int32_t* i = *(arg1 + 0x28); i != *(arg1 + 0x2c); i = &i[7])
    int32_t* lParam
    
    if (i[5] u< 0x10)
        lParam = i
    else
        lParam = *i
    
    SendMessageA(*(arg1 + 0x3c), 0x180, 0, lParam)

SetFocus(GetDlgItem(arg2, 0x9cd0))
sub_6b4885(eax_1 ^ &var_20)
return 1
