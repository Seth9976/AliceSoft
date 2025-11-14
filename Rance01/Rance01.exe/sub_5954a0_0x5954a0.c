// 函数: sub_5954a0
// 地址: 0x5954a0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

if (sub_402680(0x74adfc, arg1) != 0)
    return sub_5956c0

if (sub_402680(0x74ae00, arg1) != 0)
    return sub_5956f0

if (sub_402680(0x74ae04, arg1) != 0)
    return sub_595720

if (sub_402680("Sqrt", arg1) != 0)
    return sub_595750

if (sub_402680("SetSeed", arg1) != 0)
    return sub_595840

if (sub_402680("SetSeedByCurrentTime", arg1) != 0)
    return sub_595850

if (sub_402680("Rand", arg1) != 0)
    return sub_595870

if (sub_402680("RandF", arg1) != 0)
    return sub_5958a0

if (sub_402680(0x74ae40, arg1) != 0)
    return sub_5958f0

if (sub_402680("MinF", arg1) != 0)
    return sub_595900

if (sub_402680(0x74ae4c, arg1) != 0)
    return sub_595930

if (sub_402680("MaxF", arg1) != 0)
    return sub_595940

if (sub_402680("Swap", arg1) != 0)
    return sub_595970

if (sub_402680("SwapF", arg1) != 0)
    return sub_595990

if (sub_402680(0x74ae68, arg1) != 0)
    return sub_595770

if (sub_402680("AbsF", arg1) != 0)
    return sub_595780

if (sub_402680("Asin", arg1) != 0)
    return sub_5957a0

if (sub_402680("Acos", arg1) != 0)
    return sub_5957c0

if (sub_402680("Atan", arg1) != 0)
    return sub_5957e0

if (sub_402680("Atan2", arg1) != 0)
    return sub_595800

if (sub_402680(0x74ae94, arg1) != 0)
    return sub_595820

if (sub_402680(0x74ae98, arg1) != 0)
    return sub_5959b0

if (sub_402680("Log10", arg1) != 0)
    return sub_5959d0

if (sub_402680("Ceil", arg1) != 0)
    return sub_5959f0

uint32_t eax_49 = zx.d(sub_402680("BezierCurve", arg1))
int32_t eax_50 = neg.d(eax_49)
return sbb.d(eax_50, eax_50, eax_49 != 0) & sub_595b30
