// 函数: sub_604b20
// 地址: 0x604b20
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

uint32_t eax_9 = zx.d(arg3)

if (eax_9 == 0x9cd2)
    uint32_t eax_5
    eax_5.b = IsDlgButtonChecked(*(arg1 + 0x40), 0x9cdb) == 1
    *(arg1 + 0x44) = eax_5.b
    EndDialog(arg2, 1)
    return 1

if (eax_9 == 2)
    EndDialog(arg2, 0)
    return 1

if (eax_9 == 0x9cd0)
    EndDialog(arg2, eax_9 - 0x9cd0)
    return 1

if (eax_9 == 0x9cd4)
    sub_604bc0(arg1)
    return 1

return 0
