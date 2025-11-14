// 函数: sub_431bf0
// 地址: 0x431bf0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

long double x87_r7 = float.t(1)
int32_t* ecx = *(arg1 + 0x70)
*(arg1 + 0x98) = fconvert.s(x87_r7)
*(arg1 + 0x9c) = fconvert.s(x87_r7)
long double x87_r7_1 = float.t(0)
*(arg1 + 0xb0) = fconvert.s(x87_r7_1)
*(arg1 + 0xf4) = 1
*(arg1 + 0x94) = 1
*(arg1 + 0xb4) = fconvert.s(x87_r7_1)
int32_t result = 0xff
*(arg1 + 0xb8) = fconvert.s(x87_r7_1)
*(arg1 + 0xf5) = 0
*(arg1 + 0x88) = 0
*(arg1 + 0x8c) = 0
*(arg1 + 0x90) = 0
*(arg1 + 0xa0) = 0
*(arg1 + 0xa4) = 0
*(arg1 + 0xa8) = 0
*(arg1 + 0xac) = 0
*(arg1 + 0xbc) = 0
*(arg1 + 0xc0) = 0
*(arg1 + 0xc4) = 0
*(arg1 + 0xc8) = 0xff
*(arg1 + 0xcc) = 0xff
*(arg1 + 0xd0) = 0xff
*(arg1 + 0xd4) = 0
*(arg1 + 0xd8) = 0
*(arg1 + 0xdc) = 0
*(arg1 + 0xe0) = 0
*(arg1 + 0xe4) = 0xff
*(arg1 + 0xe8) = 0
*(arg1 + 0xec) = 0
*(arg1 + 0xf0) = 0

if (ecx != 0)
    result = (*(*ecx + 4))()
    *(arg1 + 0x70) = 0

int32_t* ecx_1 = *(arg1 + 8)

if (ecx_1 != 0)
    result = (*(*ecx_1 + 4))()
    *(arg1 + 8) = 0

return result
