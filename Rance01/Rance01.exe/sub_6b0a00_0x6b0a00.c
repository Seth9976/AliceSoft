// 函数: sub_6b0a00
// 地址: 0x6b0a00
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t eax = *(arg1 + 0x14)

if (eax != 0)
    int32_t var_8_1 = eax
    sub_6b4d5b()

*(arg1 + 0x14) = 0
*(arg1 + 0x18) = 0
*(arg1 + 0x1c) = 0
int32_t result = *(arg1 + 4)

if (result != 0)
    int32_t result_1 = result
    result = sub_6b4d5b()

*(arg1 + 4) = 0
*(arg1 + 8) = 0
*(arg1 + 0xc) = 0
return result
