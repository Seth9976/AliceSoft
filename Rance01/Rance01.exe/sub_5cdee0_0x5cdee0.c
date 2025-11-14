// 函数: sub_5cdee0
// 地址: 0x5cdee0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

if (sub_402680("SetFileName", arg1) != 0)
    return sub_5cdf90

if (sub_402680("RegistNumber", arg1) != 0)
    return sub_5ce060

if (sub_402680("RegistText", arg1) != 0)
    return sub_5ce090

if (sub_402680("UnregistNumber", arg1) != 0)
    return sub_5ce150

if (sub_402680("UnregistText", arg1) != 0)
    return sub_5ce180

if (sub_402680("UnregistAll", arg1) != 0)
    return sub_5ce240

if (sub_402680("ExistNumber", arg1) != 0)
    return sub_5ce260

uint32_t eax_15 = zx.d(sub_402680("ExistText", arg1))
int32_t eax_16 = neg.d(eax_15)
return sbb.d(eax_16, eax_16, eax_15 != 0) & sub_5ce290
