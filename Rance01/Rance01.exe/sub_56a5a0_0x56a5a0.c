// 函数: sub_56a5a0
// 地址: 0x56a5a0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

*(arg1 + 0x29c) += sx.d((arg3 u>> 0x10).w)

while (*(arg1 + 0x29c) s>= 0x78)
    *(arg1 + 0x29c) -= 0x78
    *(arg1 + 0x1f4) += 1

while (*(arg1 + 0x29c) s<= 0xffffff88)
    *(arg1 + 0x29c) += 0x78
    *(arg1 + 0x1f8) += 1

return 0
