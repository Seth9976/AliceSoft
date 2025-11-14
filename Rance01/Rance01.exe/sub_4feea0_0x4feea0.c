// 函数: sub_4feea0
// 地址: 0x4feea0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t eax = *(arg1 + 0x1c)

if (eax != 0)
    int32_t var_8_1 = eax
    sub_6b4d5b()

*(arg1 + 0x1c) = 0
*(arg1 + 0x20) = 0
*(arg1 + 0x24) = 0
int32_t result = *(arg1 + 0xc)

if (result != 0)
    int32_t result_1 = result
    result = sub_6b4d5b()

*(arg1 + 0xc) = 0
*(arg1 + 0x10) = 0
*(arg1 + 0x14) = 0
return result
