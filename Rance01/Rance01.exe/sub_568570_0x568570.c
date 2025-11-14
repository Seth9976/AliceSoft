// 函数: sub_568570
// 地址: 0x568570
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

SetMenu(*(arg1 + 8), nullptr)
int32_t eax_1 = GetWindowLongA(*(arg1 + 8), 0xfffffff0)
SetWindowLongA(*(arg1 + 8), 0xfffffff0, eax_1 & 0xff3bffff)
int32_t cx = GetSystemMetrics(SM_CXSCREEN)
int32_t cy = GetSystemMetrics(SM_CYSCREEN)
return SetWindowPos(*(arg1 + 8), nullptr, 0, 0, cx, cy, SWP_SHOWWINDOW)
