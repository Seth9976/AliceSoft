// 函数: sub_604810
// 地址: 0x604810
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t* lpString = arg1 + 8

if (*(arg1 + 0x1c) u>= 0x10)
    lpString = *lpString

SetWindowTextA(arg2, lpString)
int32_t* lpString_1 = arg1 + 0x24

if (*(arg1 + 0x38) u>= 0x10)
    lpString_1 = *lpString_1

SetDlgItemTextA(arg2, 0x9cce, lpString_1)
PSTR lpString_2 = arg1 + 0x40

if (*(arg1 + 0x54) u>= 0x10)
    lpString_2 = *lpString_2

SetDlgItemTextA(arg2, 0x9cd6, lpString_2)
return 1
