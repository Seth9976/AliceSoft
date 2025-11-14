// 函数: sub_5caa40
// 地址: 0x5caa40
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

if (sub_402680("OpenForWrite", arg1) != 0)
    return sub_5cab30

if (sub_402680("OpenForRead", arg1) != 0)
    return sub_5cab40

if (sub_402680("Close", arg1) != 0)
    return sub_5cab50

if (sub_402680("WriteByte", arg1) != 0)
    return sub_5cab60

if (sub_402680("WriteInt", arg1) != 0)
    return sub_5cabb0

if (sub_402680("WriteFloat", arg1) != 0)
    return sub_5cabf0

if (sub_402680("WriteString", arg1) != 0)
    return sub_5cac30

if (sub_402680("ReadByte", arg1) != 0)
    return sub_5cac40

if (sub_402680("ReadInt", arg1) != 0)
    return sub_5cac90

if (sub_402680("ReadFloat", arg1) != 0)
    return sub_5cacd0

uint32_t eax_21 = zx.d(sub_402680("ReadString", arg1))
int32_t eax_22 = neg.d(eax_21)
return sbb.d(eax_22, eax_22, eax_21 != 0) & sub_5cad10
