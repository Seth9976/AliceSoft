// 函数: sub_621890
// 地址: 0x621890
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

uint32_t cx = zx.d(arg3.w)
uint32_t cy = arg3 u>> 0x10
bool cond:0 = arg1[0x32] != 0
arg1[0x30] = cx
arg1[0x31] = cy

if (not(cond:0))
    HDC eax = GetDC(arg2)
    arg1[0x32] = CreateCompatibleDC(eax)
    ReleaseDC(arg2, eax)
    HGDIOBJ h = arg1[0x2c]
    
    if (h != 0)
        arg1[0x2d] = SelectObject(arg1[0x32], h)

if (arg1[0x2e] != 0)
    SelectObject(arg1[0x32], arg1[0x2f])
    DeleteObject(arg1[0x2e])
    arg1[0x2e] = 0

HDC eax_5 = GetDC(arg2)
arg1[0x2e] = CreateCompatibleBitmap(eax_5, cx, cy)
ReleaseDC(arg2, eax_5)
HGDIOBJ eax_8 = SelectObject(arg1[0x32], arg1[0x2e])
int32_t ecx_3 = arg1[0x33]
arg1[0x2f] = eax_8
int32_t eax_10
int32_t edx_3
edx_3:eax_10 = sx.q(ecx_3)
sub_621e60(arg1, arg2, divs.dp.d(sx.q(cy), ecx_3))
sub_621fb0(arg1, arg2, divs.dp.d(sx.q(cx), (eax_10 - edx_3) s>> 1))
return 0
