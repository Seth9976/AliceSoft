// 函数: sub_5c5bb0
// 地址: 0x5c5bb0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t eax_1 = sub_5c5900(arg1, arg6, arg2, arg3, arg4, arg5, arg6)

if (eax_1 != 0)
    return eax_1

if (*(arg1 + 0x58) != 1)
    return 0xffffff7d

bool cond:0_1 = *(arg1 + 4) == 0
*(arg1 + 0x58) = 2

if (cond:0_1)
    *(arg1 + 0x58) = 3
    return 0

int32_t eax_3 = sub_5c5380(arg1)

if (eax_3 != 0)
    *arg1 = 0
    sub_5c5a90(arg1)

return eax_3
