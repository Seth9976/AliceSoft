// 函数: sub_6177c0
// 地址: 0x6177c0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

HWND hWnd = CreateWindowExA(WS_EX_CLIENTEDGE, "SysTreeView32", 0x72d816, 0x50300027, 0, 0, 0, 0, 
    arg4, arg1, arg2, nullptr)
*arg3 = hWnd

if (hWnd == 0)
    hWnd.b = 0
    return hWnd

SetWindowLongA(hWnd, 0xffffffeb, arg3)
int32_t eax_1 = GetWindowLongA(*arg3, 0xfffffffc)
struct HWND__* hWnd_1 = *arg3
arg3[3] = eax_1
SetWindowLongA(hWnd_1, 0xfffffffc, sub_617930)
int32_t eax_2
eax_2.b = 1
return eax_2
