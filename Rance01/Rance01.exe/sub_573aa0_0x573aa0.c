// 函数: sub_573aa0
// 地址: 0x573aa0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

void** lpString = arg1
SetTextColor(*(arg2 + 0x2c), 0xffffff)
SetBkColor(*(arg2 + 0x2c), 0)
SetBkMode(*(arg2 + 0x2c), 1)
HGDIOBJ h = SelectObject(*(arg2 + 0x2c), *(arg2 + 0xe0))
int32_t c = lpString[4]

if (lpString[5] u>= 0x10)
    lpString = *lpString

TextOutA(*(arg2 + 0x2c), 0, 0, lpString, c)
SelectObject(*(arg2 + 0x2c), h)
HGDIOBJ result
result.b = 1
return result
