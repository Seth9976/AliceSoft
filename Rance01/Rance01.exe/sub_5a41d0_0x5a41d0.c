// 函数: sub_5a41d0
// 地址: 0x5a41d0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

void var_2c8
int32_t eax_1 = data_78c474 ^ &var_2c8

if (arg1 == 0)
    sub_6b4885(eax_1 ^ &var_2c8)
    return arg1

int32_t ecx_2 = *(arg1 + 0x264)
int128_t* eax_4

if (ecx_2 == 0)
    eax_4 = sub_6b5c43(0xec)
else
    int32_t var_68_1 = *(arg1 + 0x260)
    eax_4 = ecx_2(&var_2c8, 0xec)

if (eax_4 != 0)
    sub_6bc670(eax_4, 0, 0xec)
    sub_6bc670(eax_4, 0, 0xec)

sub_6b4885(eax_1 ^ &var_2c8)
return eax_4
