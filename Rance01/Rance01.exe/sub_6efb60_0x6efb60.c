// 函数: sub_6efb60
// 地址: 0x6efb60
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t esi = *(arg1 + 0x3c)
int32_t ebp = *(arg1 + 0x4834)
int32_t ebx = *(arg1 + 0x37f0)
int32_t var_b4 = data_79ba38
int32_t var_b0 = data_79ba3c
int32_t var_ac = data_79ba40
int32_t var_a8 = data_79ba44
void var_a4
int32_t eax_6 = sub_6e0940(arg1 + 4, 0x10, 0x10, arg2, arg3, *(arg1 + 0x30), esi, *(arg1 + 0x20), 
    *(arg1 + 0x24), *(arg1 + 0x28), arg1 + 0x3814, &var_a4)

if (eax_6 != 0)
    return eax_6

int32_t edi_1 = *(arg1 + 0x3814)

if (zx.d(sub_6e0c40(&var_a4, &var_b4)) != 0)
    return (*(ebx + 0xd4))(ebp, ebp + 0x200, ebp + 0x280, edi_1, esi)

int32_t var_94
sub_6e0b10(&var_94, &var_a4, 0x79b938)
int32_t var_84 = var_94
int32_t var_90
int32_t var_80 = var_90
int32_t var_8c
int32_t var_7c = var_8c
int32_t var_88
int32_t var_78 = var_88

if (zx.d(sub_6e0c70(&var_84, &data_79b8e0)) != 0)
    sub_6ef810(ebp, ebp + 0x200, ebp + 0x280, edi_1, &var_84, esi)

void var_74
sub_6e0b10(&var_74, &var_a4, 0x79b928)
int32_t var_64
sub_6e0ca0(&var_64, &var_74, 0x79b920)
var_84 = var_64
int32_t var_60
int32_t var_80_1 = var_60
int32_t var_5c
int32_t var_7c_1 = var_5c
int32_t var_58
int32_t var_78_1 = var_58

if (zx.d(sub_6e0c70(&var_84, &data_79b8e0)) != 0)
    sub_6ef810(ebp + 0x80, ebp + 0x208, ebp + 0x288, edi_1 + 0x18, &var_84, esi)

void var_54
sub_6e0b10(&var_54, &var_a4, 0x79b910)
int32_t var_44
sub_6e0ca0(&var_44, &var_54, 0x79b908)
var_84 = var_44
int32_t var_40
int32_t var_80_2 = var_40
int32_t var_3c
int32_t var_7c_2 = var_3c
int32_t var_38
int32_t var_78_2 = var_38

if (zx.d(sub_6e0c70(&var_84, &data_79b8e0)) != 0)
    sub_6ef810(ebp + 0x100, ebp + 0x240, ebp + 0x2c0, edi_1 + (esi << 3), &var_84, esi)

void var_34
sub_6e0b10(&var_34, &var_a4, 0x79b8f8)
int32_t var_24
sub_6e0ca0(&var_24, &var_34, 0x79b8f0)
var_84 = var_24
int32_t var_20
int32_t var_80_3 = var_20
int32_t var_1c
int32_t var_7c_3 = var_1c
int32_t var_18
int32_t var_78_3 = var_18
uint32_t eax_25 = zx.d(sub_6e0c70(&var_84, &data_79b8e0))

if (eax_25 == 0)
    return eax_25

return sub_6ef810(ebp + 0x180, ebp + 0x248, ebp + 0x2c8, edi_1 + (esi << 3) + 0x18, &var_84, esi)
