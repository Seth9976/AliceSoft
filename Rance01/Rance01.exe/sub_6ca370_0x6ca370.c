// 函数: sub_6ca370
// 地址: 0x6ca370
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t eax = *(arg1 + 0xc)

if (eax == 0 || *(arg1 + 0x10) == 0 || *(arg1 + 0x14) == 0)
    return 0xffffffff

char (* esi_1)[0x29] = data_78d5a0
int32_t var_1c = 4
int32_t var_18 = 4
int32_t var_14 = 0
int32_t result = 0xffffffff

if (eax(0x80000002, esi_1, 0, 1, &var_14) == 0)
    (*(arg1 + 0x10))(var_14, data_78d5a4, 0, &var_1c, &result, &var_18)

int32_t eax_2 = var_14

if (eax_2 == 0)
    return result

(*(arg1 + 0x14))(eax_2)
return result
