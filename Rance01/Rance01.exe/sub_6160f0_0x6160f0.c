// 函数: sub_6160f0
// 地址: 0x6160f0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

uint32_t cx = zx.d(arg3.w)
uint32_t cy = arg3 u>> 0x10

if (arg1[0x29] == 0)
    HDC eax = GetDC(arg2)
    arg1[0x29] = CreateCompatibleDC(eax)
    ReleaseDC(arg2, eax)
    HGDIOBJ h = arg1[0x27]
    
    if (h != 0)
        arg1[0x28] = SelectObject(arg1[0x29], h)

if (arg1[0x2a] != 0)
    SelectObject(arg1[0x29], arg1[0x2b])
    DeleteObject(arg1[0x2a])
    arg1[0x2a] = 0

HDC eax_5 = GetDC(arg2)
arg1[0x2a] = CreateCompatibleBitmap(eax_5, cx, cy)
ReleaseDC(arg2, eax_5)
HGDIOBJ eax_8 = SelectObject(arg1[0x29], arg1[0x2a])
int32_t ecx_2 = arg1[0x2d]
arg1[0x2b] = eax_8
int32_t eax_10
int32_t edx_3
edx_3:eax_10 = sx.q(ecx_2)
sub_616770(arg1, arg2, divs.dp.d(sx.q(cy), arg1[0x2e] + ecx_2))
sub_6168b0(arg1, arg2, divs.dp.d(sx.q(cx), (eax_10 - edx_3) s>> 1))
return 0
