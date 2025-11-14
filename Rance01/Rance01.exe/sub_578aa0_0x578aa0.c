// 函数: sub_578aa0
// 地址: 0x578aa0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t eax = sub_70c710(fconvert.t(arg2) * fconvert.t(255.0))

if (eax s< 0)
    eax = 0
else if (eax s> 0xff)
    eax = 0xff

int32_t eax_2 = eax << 0x18 | 0xffffff
float* eax_4 = (*(**(arg1 + 4) + 0x14))()

if (eax_4 == 0)
    eax_4.b = 0
    return eax_4

arg2 = fconvert.s(float.t(*(arg1 + 0x10)))
long double x87_r6 = fconvert.t(0.5)
*eax_4 = fconvert.s(float.t(*(arg1 + 0xc)) - x87_r6)
eax_4[1] = fconvert.s(fconvert.t(arg2) - x87_r6)
long double x87_r6_4 = fconvert.t(0.5f)
eax_4[2] = fconvert.s(x87_r6_4)
long double x87_r5 = float.t(1)
eax_4[3] = fconvert.s(x87_r5)
long double x87_r4 = float.t(0)
eax_4[4] = eax_2
eax_4[5] = fconvert.s(x87_r4)
eax_4[6] = fconvert.s(x87_r4)
float __saved_ecx = fconvert.s(float.t(*(arg1 + 0x10)))
eax_4[7] =
    fconvert.s(fconvert.t(fconvert.s(float.t(*(arg1 + 0x14)) + float.t(*(arg1 + 0xc)))) - x87_r6)
eax_4[8] = fconvert.s(fconvert.t(__saved_ecx) - x87_r6)
eax_4[9] = fconvert.s(x87_r6_4)
eax_4[0xa] = fconvert.s(x87_r5)
eax_4[0xb] = eax_2
eax_4[0xc] = fconvert.s(x87_r5)
eax_4[0xd] = fconvert.s(x87_r4)
arg2 = fconvert.s(float.t(*(arg1 + 0x18)) + float.t(*(arg1 + 0x10)))
eax_4[0xe] = fconvert.s(float.t(*(arg1 + 0xc)) - x87_r6)
eax_4[0xf] = fconvert.s(fconvert.t(arg2) - x87_r6)
eax_4[0x10] = fconvert.s(x87_r6_4)
eax_4[0x11] = fconvert.s(x87_r5)
eax_4[0x12] = eax_2
eax_4[0x13] = fconvert.s(x87_r4)
eax_4[0x14] = fconvert.s(x87_r5)
float __saved_ecx_1 = fconvert.s(float.t(*(arg1 + 0x18)) + float.t(*(arg1 + 0x10)))
eax_4[0x15] =
    fconvert.s(fconvert.t(fconvert.s(float.t(*(arg1 + 0x14)) + float.t(*(arg1 + 0xc)))) - x87_r6)
eax_4[0x16] = fconvert.s(fconvert.t(__saved_ecx_1) - x87_r6)
eax_4[0x17] = fconvert.s(x87_r6_4)
eax_4[0x18] = fconvert.s(x87_r5)
eax_4[0x19] = eax_2
eax_4[0x1a] = fconvert.s(x87_r5)
eax_4[0x1b] = fconvert.s(x87_r5)
(*(**(arg1 + 4) + 0x18))()
int32_t eax_6
eax_6.b = 1
return eax_6
