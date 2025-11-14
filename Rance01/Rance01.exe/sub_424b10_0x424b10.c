// 函数: sub_424b10
// 地址: 0x424b10
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

if (sub_402680(0x756eb8, arg1) != 0)
    return sub_424bf0

if (sub_402680("Post", arg1) != 0)
    return sub_424c10

if (sub_402680("IsRun", arg1) != 0)
    return sub_424ce0

if (sub_402680("Stop", arg1) != 0)
    return sub_424d10

if (sub_402680("GetReadSize", arg1) != 0)
    return sub_424d20

if (sub_402680("ReadString", arg1) != 0)
    return sub_424d60

if (sub_402680("UTF8ToSJIS", arg1) != 0)
    return sub_424d70

if (sub_402680("SJISToUTF8", arg1) != 0)
    return sub_424d80

if (sub_402680("EncodeString", arg1) != 0)
    return sub_424d90

uint32_t eax_19 = zx.d(sub_402680("DecodeString", arg1))
int32_t eax_20 = neg.d(eax_19)
return sbb.d(eax_20, eax_20, eax_19 != 0) & sub_424da0
