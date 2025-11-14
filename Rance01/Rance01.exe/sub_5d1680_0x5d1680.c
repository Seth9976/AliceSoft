// 函数: sub_5d1680
// 地址: 0x5d1680
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

if (sub_402680("SetFont", arg1) != 0)
    return sub_5d1760

if (sub_402680("SetPos", arg1) != 0)
    return sub_5d1780

if (sub_402680("Begin", arg1) != 0)
    return j_sub_5d1480

if (sub_402680(0x7372c4, arg1) != 0)
    return sub_697c60

if (sub_402680("OpenIME", arg1) != 0)
    return j_sub_5d14d0

if (sub_402680("CloseIME", arg1) != 0)
    return j_sub_5d1530

if (sub_402680("GetResultString", arg1) != 0)
    return j_sub_5d1590

if (sub_402680("ClearResultString", arg1) != 0)
    return sub_5d1810

if (sub_402680("Inputs", arg1) != 0)
    return sub_5d1860

uint32_t eax_19 = zx.d(sub_402680("Converts", arg1))
int32_t eax_20 = neg.d(eax_19)
return sbb.d(eax_20, eax_20, eax_19 != 0) & sub_5d18a0
