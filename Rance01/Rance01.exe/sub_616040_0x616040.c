// 函数: sub_616040
// 地址: 0x616040
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

uint32_t var_ac
int32_t eax_1 = data_78c474 ^ &var_ac
int32_t versionInformation
sub_6bc670(&versionInformation, 0, 0x94)
versionInformation = 0x94
GetVersionExA(&versionInformation)
int16_t var_8c
int32_t var_88

if (var_88 != 1 || var_8c u> 0x3e8)
    *(arg1 + 0x98) = 0
else
    LRESULT var_a8
    uint32_t var_a4
    uint32_t var_a0
    LRESULT var_9c
    sub_615d00(&var_ac, &var_a0, &var_a4, &var_a8, &var_9c)
    *(arg1 + 0x98) = var_ac

sub_6b4885(eax_1 ^ &var_ac)
return 1
