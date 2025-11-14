// 函数: sub_607000
// 地址: 0x607000
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

uint32_t uIDEvent = *(arg1 + 0xaa0)

if (uIDEvent != 0)
    KillTimer(arg2, uIDEvent)
    *(arg1 + 0xaa0) = 0

sub_618b00(arg1 + 0xad8)
int32_t var_c_3 = arg4
int32_t var_10_2 = arg3
sub_61bcd0(arg1, arg2)
return 0
