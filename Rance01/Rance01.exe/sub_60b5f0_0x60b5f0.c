// 函数: sub_60b5f0
// 地址: 0x60b5f0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t eax_1 = *(arg1 + 0x7c)

if (eax_1 != 0)
    int32_t var_c_1 = eax_1
    sub_6b4d5b()

*(arg1 + 0x7c) = 0
*(arg1 + 0x80) = 0
*(arg1 + 0x84) = 0
int32_t* result = *(arg1 + 0x68)

if (result != 0)
    sub_405780(result, *(arg1 + 0x6c))
    int32_t var_c_2 = *(arg1 + 0x68)
    result = sub_6b4d5b()

*(arg1 + 0x68) = 0
*(arg1 + 0x6c) = 0
*(arg1 + 0x70) = 0

if (*(arg1 + 0x60) u>= 0x10)
    int32_t var_c_3 = *(arg1 + 0x4c)
    result = sub_6b4d5b()

*(arg1 + 0x60) = 0xf
*(arg1 + 0x5c) = 0
*(arg1 + 0x4c) = 0

if (*(arg1 + 0x44) u>= 0x10)
    int32_t var_c_4 = *(arg1 + 0x30)
    result = sub_6b4d5b()

*(arg1 + 0x44) = 0xf
*(arg1 + 0x40) = 0
*(arg1 + 0x30) = 0
return result
