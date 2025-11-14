// 函数: sub_57cdd0
// 地址: 0x57cdd0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

uint32_t edx = zx.d(*(arg1 + 0x3d))
int32_t edx_1 = neg.d(edx)
*(arg1 + 0x34) = arg3
*(arg1 + 0x38) = arg4
char result = sub_586680(arg1 + 4, arg2, (sbb.d(edx_1, edx_1, edx != 0) & 0xfffffffa) + 0xc)

if (result != 0)
    return sub_586680(arg1 + 0x18, arg2, 4) != 0

return result
