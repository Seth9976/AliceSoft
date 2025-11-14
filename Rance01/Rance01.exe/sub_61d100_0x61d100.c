// 函数: sub_61d100
// 地址: 0x61d100
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

void var_4c
int32_t eax_1 = data_78c474 ^ &var_4c
uint32_t edi = zx.d(arg2.w)
SendMessageA(*(arg1 + 0xbf8), 5, 0, 0)
RECT rect
GetWindowRect(*(arg1 + 0xb28), &rect)
SendMessageA(*(arg1 + 0xb28), 5, 0, zx.d((rect.bottom).w - (rect.top).w - 1) << 0x10 | zx.d(edi.w))
GetWindowRect(*(arg1 + 0xb28), &rect)
int32_t edi_3 = rect.bottom - rect.top - 1
RECT rect_1
GetWindowRect(*(arg1 + 0xb28), &rect_1)
MoveWindow((**(arg1 + 0xb30))(0, rect_1.bottom - rect_1.top - 1, edi, edi_3, 1))
int32_t hWnd = *(arg1 + 0xbf8)
int32_t hWnd_1

if (hWnd != 0)
    GetWindowRect(hWnd, &rect_1)
    hWnd_1 = rect_1.bottom - rect_1.top
else
    hWnd_1 = hWnd

GetWindowRect(*(arg1 + 0xb28), &rect)
int32_t edi_5 = rect.bottom - rect.top
RECT rect_2
GetWindowRect(*(arg1 + 0xb28), &rect_2)
MoveWindow((**(arg1 + 0xd8))(0, (rect_2.bottom - rect_2.top - 1) * 2, edi, 
    (arg2 u>> 0x10) - (edi_5 * 2 - 2) - hWnd_1, 1))
sub_6b4885(eax_1 ^ &var_4c)
return 0
