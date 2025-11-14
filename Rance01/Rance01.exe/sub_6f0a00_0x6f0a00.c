// 函数: sub_6f0a00
// 地址: 0x6f0a00
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t esi = *(arg1 + 0x3c)
int32_t ebp = *(arg1 + 0x4834)
int32_t ebx = *(arg1 + 0x37f0)
int32_t var_54 = data_79ba68
int32_t var_50 = data_79ba6c
int32_t var_4c = data_79ba70
int32_t var_48 = data_79ba74
void var_44
int32_t eax_6 = sub_6e0940(arg1 + 4, 8, 8, arg2, arg3, *(arg1 + 0x30), esi, *(arg1 + 0x20), 
    *(arg1 + 0x24), *(arg1 + 0x28), arg1 + 0x3814, &var_44)

if (eax_6 != 0)
    return eax_6

int32_t edi_1 = *(arg1 + 0x3814)

if (zx.d(sub_6e0c40(&var_44, &var_54)) != 0)
    return (*(ebx + 0xa4))(ebp, edi_1, esi)

int32_t var_34
sub_6e0b10(&var_34, &var_44, 0x79b938)
int32_t var_24 = var_34
int32_t var_30
int32_t var_20 = var_30
int32_t var_2c
int32_t var_1c = var_2c
int32_t var_28
int32_t var_18 = var_28
uint32_t eax_12 = zx.d(sub_6e0c70(&var_24, &data_79b8e0))

if (eax_12 == 0)
    return eax_12

return sub_6f0840(ebp, edi_1, &var_24, esi)
