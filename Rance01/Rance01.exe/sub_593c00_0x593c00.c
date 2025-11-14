// 函数: sub_593c00
// 地址: 0x593c00
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t eax = (*(*(arg1 + 0x64) + 0x14))()
*(arg1 + 0x10) = eax
uint32_t eax_1 = eax u>> 1
int32_t result = *(arg1 + 0x60)

if (result != 0)
    int32_t result_1 = result
    sub_6b53b2()
    *(arg1 + 0x60) = 0

if (eax_1 != 0)
    uint32_t var_8_1 = eax_1
    *(arg1 + 0x60) = sub_6b487a()

result.b = 1
return result
