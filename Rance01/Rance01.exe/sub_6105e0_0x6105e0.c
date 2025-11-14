// 函数: sub_6105e0
// 地址: 0x6105e0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

POINT point
GetCursorPos(&point)
TrackPopupMenu(*arg1, TPM_RIGHTBUTTON, point.x, point.y, 0, arg1[1], nullptr)
BOOL result = DestroyMenu(*arg1)
*arg1 = 0
return result
