// 函数: sub_4f2a60
// 地址: 0x4f2a60
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t eax = *(arg1 + 0x2c)

if (eax != 0)
    int32_t var_8_1 = eax
    sub_6b4d5b()

*(arg1 + 0x2c) = 0
*(arg1 + 0x30) = 0
*(arg1 + 0x34) = 0
int32_t result = *(arg1 + 4)

if (result != 0)
    int32_t result_1 = result
    result = sub_6b4d5b()

*(arg1 + 4) = 0
*(arg1 + 8) = 0
*(arg1 + 0xc) = 0
return result
