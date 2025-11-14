// 函数: sub_61eba0
// 地址: 0x61eba0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t* lpString = arg1 + 8

if (*(arg1 + 0x1c) u>= 0x10)
    lpString = *lpString

SetWindowTextA(GetDlgItem(arg2, 0x9cce), lpString)
int32_t nHeight = *(arg1 + 0x30)
MoveWindow(arg2, *(arg1 + 0x24), *(arg1 + 0x28), *(arg1 + 0x2c), nHeight, 0)
MoveWindow(GetDlgItem(arg2, 0x9cce), 2, 2, *(arg1 + 0x2c) - (nHeight - 4) - 4, *(arg1 + 0x30) - 4, 
    0)
MoveWindow(GetDlgItem(arg2, 0x9cd0), *(arg1 + 0x2c) - (nHeight - 4) - 2, 2, nHeight - 4, 
    *(arg1 + 0x30) - 4, 0)
return 0
