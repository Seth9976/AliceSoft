// 函数: sub_59a220
// 地址: 0x59a220
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t eax = *(arg1 + 0x54)

if (eax != 0)
    int32_t var_c_1 = eax
    sub_6b4d5b()

*(arg1 + 0x54) = 0
*(arg1 + 0x58) = 0
*(arg1 + 0x5c) = 0
int32_t eax_1 = *(arg1 + 0x44)

if (eax_1 != 0)
    int32_t var_c_2 = eax_1
    sub_6b4d5b()

*(arg1 + 0x44) = 0
*(arg1 + 0x48) = 0
*(arg1 + 0x4c) = 0
int32_t* result = *(arg1 + 0x20)

if (result != 0)
    int32_t edx_1 = *(arg1 + 0x24)
    int32_t ecx
    int32_t var_c_3 = ecx
    int32_t var_10_1 = edx_1
    sub_59af20(result, edx_1)
    int32_t var_14_1 = *(arg1 + 0x20)
    result = sub_6b4d5b()

*(arg1 + 0x20) = 0
*(arg1 + 0x24) = 0
*(arg1 + 0x28) = 0

if (*(arg1 + 0x18) u>= 0x10)
    int32_t var_c_4 = *(arg1 + 4)
    result = sub_6b4d5b()

*(arg1 + 0x14) = 0
*(arg1 + 0x18) = 0xf
*(arg1 + 4) = 0
return result
