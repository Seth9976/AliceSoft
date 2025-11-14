// 函数: sub_6147f0
// 地址: 0x6147f0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t nHeight
int32_t eax_1 = data_78c474 ^ &nHeight
RECT rect_4
GetClientRect(arg2, &rect_4)
HWND hWnd = *(arg1 + 0xa4)
int32_t ebx_1 = rect_4.right - rect_4.left
RECT rect_2
__builtin_memset(&rect_2, 0, 0x10)
GetWindowRect(hWnd, &rect_2)
HWND hWnd_4 = *(arg1 + 0xa8)
RECT rect
__builtin_memset(&rect, 0, 0x10)
GetWindowRect(hWnd_4, &rect)
HWND hWnd_3 = *(arg1 + 0xa4)
RECT rect_1
__builtin_memset(&rect_1, 0, 0x10)
GetClientRect(hWnd_3, &rect_1)
HWND hWnd_1 = *(arg1 + 0xa8)
RECT rect_3
__builtin_memset(&rect_3, 0, 0x10)
GetClientRect(hWnd_1, &rect_3)
int32_t nWidth = arg3
int32_t nHeight_1 = rect_2.bottom - rect_2.top

if (nWidth s< 4)
    nWidth = 4

if (nWidth s>= ebx_1 - 6)
    nWidth = ebx_1 - 6

int32_t left = rect_1.left
HWND hWnd_2 = *(arg1 + 0xa4)
nHeight = rect.bottom - rect.top
MoveWindow(hWnd_2, left, rect_1.top, nWidth, nHeight_1, 1)
BOOL result = MoveWindow(*(arg1 + 0xa8), nWidth + 2, rect_3.top, ebx_1 - nWidth - 2, nHeight, 1)
sub_6b4885(eax_1 ^ &nHeight)
return result
