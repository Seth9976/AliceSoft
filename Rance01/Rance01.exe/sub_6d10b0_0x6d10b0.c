// 函数: sub_6d10b0
// 地址: 0x6d10b0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

uint32_t eax = zx.d(*(arg2 + 0x5e8))
int32_t esi = *(arg2 + 0x3c8)
int32_t result

if (arg1[0xf] != 0)
    result = sub_6d0080(arg1, eax, esi)
else
    result = sub_6cffa0(arg1, eax, esi)

if (result == 0)
    *arg3 -= 0x10

return result
