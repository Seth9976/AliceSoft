// 函数: sub_62b7b0
// 地址: 0x62b7b0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

HDC hdc = *(arg1 + 0x34)
void** lpString = arg3
HGDIOBJ h = SelectObject(hdc, *(arg1 + 0x44))
SetTextColor(hdc, 0xffffff)
SetBkColor(hdc, 0)
int32_t c = lpString[4]

if (lpString[5] u>= 0x10)
    lpString = *lpString

TextOutA(hdc, 0, 0, lpString, c)
SelectObject(hdc, h)
HGDIOBJ result
result.b = 1
return result
