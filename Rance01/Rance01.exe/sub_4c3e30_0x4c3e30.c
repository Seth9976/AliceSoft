// 函数: sub_4c3e30
// 地址: 0x4c3e30
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4 = arg1

if (*(arg2 + 0x270) != 0)
    sub_576800(*(arg2 + 0x294))
    *(arg2 + 0x270) = 0

int32_t* esi_2 = *(arg2 + 0x26c)

if (esi_2 != 0)
    sub_4dd8d0(esi_2)
    *(arg2 + 0x26c) = 0

arg1.b = *(arg2 + 0x268)

if (arg1.b != 0)
    sub_576800(*(arg2 + 0x294))
    *(arg2 + 0x268) = 0

int32_t* esi_4 = *(arg2 + 0x264)

if (esi_4 != 0)
    sub_4cb6a0(esi_4)
    *(arg2 + 0x264) = 0

char edx = *(arg2 + 0x160)
*(arg2 + 0x260) = 0

if (edx != 0)
    sub_576800(*(arg2 + 0x294))
    *(arg2 + 0x160) = 0

int32_t* esi_6 = *(arg2 + 0x15c)

if (esi_6 != 0)
    sub_4d0840(esi_6)
    *(arg2 + 0x15c) = 0

if (*(arg2 + 0x168) != 0)
    sub_576800(*(arg2 + 0x294))
    *(arg2 + 0x168) = 0

int32_t* esi_8 = *(arg2 + 0x164)

if (esi_8 != 0)
    sub_4d0840(esi_8)
    *(arg2 + 0x164) = 0

long double x87_r7 = float.t(0)
*(arg2 + 0x12c) = 0
*(arg2 + 0x130) = fconvert.s(x87_r7)
*(arg2 + 0x134) = fconvert.s(x87_r7)
*(arg2 + 0x138) = fconvert.s(x87_r7)
*(arg2 + 0x13c) = fconvert.s(x87_r7)
*(arg2 + 0x140) = fconvert.s(x87_r7)
*(arg2 + 0x148) = fconvert.s(x87_r7)
*(arg2 + 0x144) = 0
*(arg2 + 0x14c) = fconvert.s(x87_r7)
*(arg2 + 0x150) = fconvert.s(x87_r7)
*(arg2 + 0x154) = fconvert.s(x87_r7)
*(arg2 + 0x158) = fconvert.s(x87_r7)
arg1.b = *(arg2 + 0x1d4)

if (arg1.b != 0)
    arg1 = sub_576800(*(arg2 + 0x294))
    *(arg2 + 0x1d4) = 0

int32_t* esi_10 = *(arg2 + 0x1d0)

if (esi_10 != 0)
    arg1 = sub_4f8480(esi_10)
    *(arg2 + 0x1d0) = 0

sub_4efb40(arg1, arg2 + 0x214)
sub_4ac220(arg1, arg2 + 0x1d8)
int32_t* eax_2 = sub_4c87d0(arg2 + 0x1ac, &var_4, *(arg2 + 0x1ac), *(arg2 + 0x1b0))
bool cond:0 = *(arg2 + 0x20) u< 0x10
*(arg2 + 0x1c) = 0

if (cond:0)
    *(arg2 + 0xc) = 0
    *(arg2 + 0xb4) = 1
    return eax_2

char* eax_3 = *(arg2 + 0xc)
*eax_3 = 0
*(arg2 + 0xb4) = 1
return eax_3
