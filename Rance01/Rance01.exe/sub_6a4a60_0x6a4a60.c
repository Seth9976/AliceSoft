// 函数: sub_6a4a60
// 地址: 0x6a4a60
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

*arg2 = IsDlgButtonChecked(*(arg1 + 0x1c), *(arg1 + 0x20)) == 1
arg2[1] = IsDlgButtonChecked(*(arg1 + 0x34), *(arg1 + 0x38)) == 1
arg2[2] = IsDlgButtonChecked(*(arg1 + 0x4c), *(arg1 + 0x50)) == 1
arg2[3] = IsDlgButtonChecked(*(arg1 + 0x64), *(arg1 + 0x68)) == 1
arg2[4] = IsDlgButtonChecked(*(arg1 + 0x7c), *(arg1 + 0x80)) == 1
arg2[5] = IsDlgButtonChecked(*(arg1 + 0x94), *(arg1 + 0x98)) == 1
uint32_t result = IsDlgButtonChecked(*(arg1 + 0xac), *(arg1 + 0xb0))
arg2[6] = result == 1
return result
