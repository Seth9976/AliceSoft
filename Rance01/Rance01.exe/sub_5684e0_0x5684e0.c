// 函数: sub_5684e0
// 地址: 0x5684e0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t ecx
int32_t var_4_1 = ecx
SetMenu(*(arg1 + 8), *(arg1 + 0x394))
sub_5685d0(*(arg1 + 0x394), arg1)
DrawMenuBar(*(arg1 + 8))
int32_t dwNewLong = GetWindowLongA(*(arg1 + 8), 0xfffffff0) | 0xc40000
SetWindowLongA(*(arg1 + 8), 0xfffffff0, dwNewLong)
int32_t eax_4 = GetSystemMetrics(SM_CXSCREEN)
int32_t eax_5 = GetSystemMetrics(SM_CYSCREEN)
int32_t eax_6 = GetSystemMetrics(SM_CXDLGFRAME)
int32_t eax_7 = GetSystemMetrics(SM_CYDLGFRAME)
return SetWindowPos(*(arg1 + 8), nullptr, neg.d(eax_6), neg.d(eax_7), eax_4 + (eax_6 << 1), 
    eax_5 + (eax_7 << 1), SWP_SHOWWINDOW)
