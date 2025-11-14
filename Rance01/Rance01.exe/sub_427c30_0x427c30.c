// 函数: sub_427c30
// 地址: 0x427c30
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

if (sub_402680("Create", arg1) != 0)
    return sub_427cc0

if (sub_402680("Output", arg1) != 0)
    return sub_427cf0

if (sub_402680("Clear", arg1) != 0)
    return sub_427d40

if (sub_402680("Save", arg1) != 0)
    return sub_427d80

if (sub_402680("EnableAutoSave", arg1) != 0)
    return sub_427de0

uint32_t eax_11 = zx.d(sub_402680("DisableAutoSave", arg1))
int32_t eax_12 = neg.d(eax_11)
return sbb.d(eax_12, eax_12, eax_11 != 0) & sub_427e10
