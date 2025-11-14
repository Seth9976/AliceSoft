// 函数: sub_56aaa0
// 地址: 0x56aaa0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int16_t* eax = sub_4265e0()
*(arg1 + 0x1ec) = eax
*(arg1 + 0x28c) = eax
*(arg1 + 0x294) = eax

if (eax != 0)
    sub_425f10(eax, arg1 + 0x3bc)

if (*(arg1 + 0x1ec) != 0)
    *(*(arg1 + 0x1ec) + 0x3c) = (***(arg1 + 0x3b8))(0x74b750)

void* result = *(arg1 + 0x284)

if (result != 0)
    *(result + 0x24) = *(arg1 + 0x1ec)

result.b = 1
return result
