// 函数: sub_6e9af0
// 地址: 0x6e9af0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t esi = *(arg1 + 0x3c)
void* ebp = *(arg1 + 0x4834)
int32_t ebx = *(arg1 + 0x37f0)
int32_t var_74 = data_79b998
int32_t var_70 = data_79b99c
int32_t var_6c = data_79b9a0
int32_t var_68 = data_79b9a4
void var_64
int32_t eax_6 = sub_6e0940(arg1 + 4, 0x10, 8, arg2, arg3, *(arg1 + 0x30), esi, *(arg1 + 0x20), 
    *(arg1 + 0x24), *(arg1 + 0x28), arg1 + 0x3814, &var_64)

if (eax_6 != 0)
    return eax_6

int32_t edi_1 = *(arg1 + 0x3814)

if (zx.d(sub_6e0c40(&var_64, &var_74)) != 0)
    return (*(ebx + 0xb8))(ebp, ebp + 0x100, ebp + 0x180, edi_1, esi)

int32_t var_54
sub_6e0b10(&var_54, &var_64, 0x79b938)
int32_t var_44 = var_54
int32_t var_50
int32_t var_40 = var_50
int32_t var_4c
int32_t var_3c = var_4c
int32_t var_48
int32_t var_38 = var_48

if (zx.d(sub_6e0c70(&var_44, &data_79b8e0)) != 0)
    sub_6e9200(ebp, ebp + 0x100, ebp + 0x180, edi_1, &var_44, esi)

void var_34
sub_6e0b10(&var_34, &var_64, 0x79b928)
int32_t var_24
sub_6e0ca0(&var_24, &var_34, 0x79b920)
var_44 = var_24
int32_t var_20
int32_t var_40_1 = var_20
int32_t var_1c
int32_t var_3c_1 = var_1c
int32_t var_18
int32_t var_38_1 = var_18
int32_t eax_17 = zx.d(sub_6e0c70(&var_44, &data_79b8e0))

if (eax_17 == 0)
    return eax_17

return sub_6e9200(ebp + 0x80, ebp + 0x108, ebp + 0x188, edi_1 + 0x18, &var_44, esi)
