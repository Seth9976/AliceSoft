// 函数: sub_708bb0
// 地址: 0x708bb0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int64_t* esi = arg1
int16_t (* edi)[0x4] = arg2
int32_t i_1 = 4
int32_t i

do
    int16_t st2[0x4] = esi[2]
    int16_t st3[0x4] = esi[3]
    int16_t temp0_1[0x4] = _m_packuswb(*esi, esi[1])
    int16_t temp0_2[0x4] = _m_packuswb(st2, st3)
    *edi = temp0_1
    *(arg3 + edi) = temp0_2
    esi = &esi[4]
    edi += arg3 * 2
    i = i_1
    i_1 -= 1
while (i != 1)
