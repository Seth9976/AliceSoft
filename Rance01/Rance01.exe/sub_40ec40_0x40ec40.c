// 函数: sub_40ec40
// 地址: 0x40ec40
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

if (sub_402680("BlendAMap", arg1) != 0)
    return sub_40ece0

if (sub_402680("Fill", arg1) != 0)
    return sub_40ed10

if (sub_402680("FillAlphaColor", arg1) != 0)
    return sub_40ed40

if (sub_402680("FillAMap", arg1) != 0)
    return sub_40ed80

if (sub_402680("CopyReduce", arg1) != 0)
    return sub_40edb0

if (sub_402680("DrawLine", arg1) != 0)
    return sub_40edf0

uint32_t eax_13 = zx.d(sub_402680("FillWithAlpha", arg1))
int32_t eax_14 = neg.d(eax_13)
return sbb.d(eax_14, eax_14, eax_13 != 0) & sub_40ee20
