// 函数: sub_66fff0
// 地址: 0x66fff0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

*(arg1 + 0x2c) += 1
int32_t edx = *(arg1 + 0x1c)
int32_t eax = *(arg1 + 0x20)
int32_t esi = *(arg1 + 0x2c)

if (edx != eax && (eax - edx) s/ 0x24 s> esi)
    return *(arg1 + 0x1c) + esi * 0x24

return 0
