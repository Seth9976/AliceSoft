// 函数: sub_611810
// 地址: 0x611810
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

HGDIOBJ ho = *(arg1 + 0x188)

if (ho != 0)
    DeleteObject(ho)
    *(arg1 + 0x188) = 0

int32_t var_8_2 = arg4
int32_t var_c = arg3
int32_t var_10 = arg2
sub_6166e0(arg1)
return 0
