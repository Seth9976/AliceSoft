// 函数: sub_618980
// 地址: 0x618980
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t eax_1 = *(arg1 + 0x38)

if (eax_1 != 0)
    int32_t var_8_1 = eax_1
    sub_6b4d5b()

*(arg1 + 0x38) = 0
*(arg1 + 0x3c) = 0
*(arg1 + 0x40) = 0
int32_t result = *(arg1 + 0x28)

if (result != 0)
    int32_t result_1 = result
    result = sub_6b4d5b()

*(arg1 + 0x28) = 0
*(arg1 + 0x2c) = 0
*(arg1 + 0x30) = 0

if (*(arg1 + 0x20) u>= 0x10)
    int32_t var_8_2 = *(arg1 + 0xc)
    result = sub_6b4d5b()

*(arg1 + 0x1c) = 0
*(arg1 + 0x20) = 0xf
*(arg1 + 0xc) = 0
return result
