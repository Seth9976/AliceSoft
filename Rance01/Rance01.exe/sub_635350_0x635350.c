// 函数: sub_635350
// 地址: 0x635350
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

HGDIOBJ ho = *(arg1 + 4)

if (ho != 0)
    DeleteObject(ho)
    *(arg1 + 4) = 0

*(arg1 + 8) = arg2
*(arg1 + 0xc) = arg3
*(arg1 + 0x10) = arg4
HBRUSH result = CreateSolidBrush((zx.d(arg4.b) << 8 | zx.d(arg3.b)) << 8 | zx.d(*(arg1 + 8)))
*(arg1 + 4) = result
result.b = result != 0
return result
