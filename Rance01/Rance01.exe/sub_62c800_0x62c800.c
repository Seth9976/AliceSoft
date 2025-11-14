// 函数: sub_62c800
// 地址: 0x62c800
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

if (arg1[0x72].b != 0)
    POINT point
    GetCursorPos(&point)
    ScreenToClient(arg2, &point)
    int32_t x = point.x
    int32_t ecx
    ecx.b = x s< 0
    int32_t y = point.y
    int32_t edx_2
    edx_2.b = y s< 0
    arg1[0x70] = (ecx - 1) & x
    void* eax_1 = *arg1
    arg1[0x71] = (edx_2 - 1) & y
    (*(eax_1 + 0x3c))()

return 0
