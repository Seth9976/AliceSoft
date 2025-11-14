// 函数: sub_51d010
// 地址: 0x51d010
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t eax = *(arg1 + 0x48)

if (eax != 0)
    int32_t var_8_1 = eax
    sub_6b4d5b()

*(arg1 + 0x48) = 0
*(arg1 + 0x4c) = 0
*(arg1 + 0x50) = 0
int32_t result = *(arg1 + 0x38)

if (result != 0)
    int32_t result_1 = result
    result = sub_6b4d5b()

*(arg1 + 0x38) = 0
*(arg1 + 0x3c) = 0
*(arg1 + 0x40) = 0
return result
