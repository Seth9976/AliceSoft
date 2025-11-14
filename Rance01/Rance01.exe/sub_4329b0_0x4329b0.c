// 函数: sub_4329b0
// 地址: 0x4329b0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t eax_1 = *(arg1 + 0x5c)

if (eax_1 != 0)
    int32_t var_8_1 = eax_1
    sub_6b4d5b()

*(arg1 + 0x5c) = 0
*(arg1 + 0x60) = 0
*(arg1 + 0x64) = 0
int32_t result = *(arg1 + 0x4c)

if (result != 0)
    int32_t result_1 = result
    result = sub_6b4d5b()

*(arg1 + 0x4c) = 0
*(arg1 + 0x50) = 0
*(arg1 + 0x54) = 0

if (*(arg1 + 0x40) u>= 0x10)
    int32_t var_8_2 = *(arg1 + 0x2c)
    result = sub_6b4d5b()

*(arg1 + 0x40) = 0xf
*(arg1 + 0x3c) = 0
*(arg1 + 0x2c) = 0

if (*(arg1 + 0x24) u>= 0x10)
    int32_t var_8_3 = *(arg1 + 0x10)
    result = sub_6b4d5b()

*(arg1 + 0x20) = 0
*(arg1 + 0x24) = 0xf
*(arg1 + 0x10) = 0
return result
