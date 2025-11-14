// 函数: sub_61eaf0
// 地址: 0x61eaf0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

arg3[0xc] = arg2
HWND hWnd =
    CreateWindowExA(WS_EX_LEFT, "EDIT", 0x72d7fa, 0x50800080, 0, 0, 1, 1, arg4, 0xc9, arg1, nullptr)
*arg3 = hWnd
ShowWindow(hWnd, SW_SHOW)
arg3[2] = 0xc
sub_401270(&arg3[3], 0xc, 0x734264)
sub_61ea10(&arg3[1])
SendMessageA(*arg3, 0x30, arg3[1], 0)
LRESULT result
result.b = 1
return result
