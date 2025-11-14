// 函数: sub_6cf750
// 地址: 0x6cf750
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int16_t eax = *arg1
int16_t ecx_4 = (((sx.d(arg1[8]) - sx.d(arg1[0x38])) * 0x14e7b
    + (sx.d(arg1[0x28]) - sx.d(arg1[0x18])) * 0x8a8c + 0x10000) s>> 0x11).w
int32_t edx_4 = sx.d(eax + ecx_4)
int32_t eax_2 = sx.d(eax - ecx_4)
int16_t eax_3 = arg1[1]
int16_t ecx_9 = (((sx.d(arg1[9]) - sx.d(arg1[0x39])) * 0x14e7b
    + (sx.d(arg1[0x29]) - sx.d(arg1[0x19])) * 0x8a8c + 0x10000) s>> 0x11).w
int32_t edx_9 = sx.d(eax_3 + ecx_9)
arg1[1] = edx_9.w
int16_t ecx_10 = arg1[3]
int16_t ebx_8 = (((sx.d(arg1[0xb]) - sx.d(arg1[0x3b])) * 0x14e7b
    + (sx.d(arg1[0x2b]) - sx.d(arg1[0x1b])) * 0x8a8c + 0x10000) s>> 0x11).w
int32_t eax_10 = sx.d(ecx_10 + ebx_8)
arg1[3] = eax_10.w
int32_t ecx_12 = sx.d(ecx_10 - ebx_8)
int16_t esi_2 = arg1[5]
int32_t ebx_9 = sx.d(arg1[0xd])
int32_t edi = sx.d(arg1[0x1d])
arg1[0xb] = ecx_12.w
int16_t ebx_13 = (((ebx_9 - sx.d(arg1[0x3d])) * 0x14e7b + (sx.d(arg1[0x2d]) - edi) * 0x8a8c
    + 0x10000) s>> 0x11).w
int32_t ecx_18 = sx.d(esi_2 + ebx_13)
int32_t ebx_14 = sx.d(arg1[0x3f])
int32_t edi_1 = sx.d(arg1[0x2f])
arg1[5] = ecx_18.w
int32_t ecx_19 = sx.d(esi_2 - ebx_13)
int32_t esi_5 = sx.d(arg1[0xf]) - ebx_14
int32_t ebx_15 = sx.d(arg1[0x1f])
arg1[0xd] = ecx_19.w
int16_t ecx_20 = arg1[7]
int16_t esi_8 = ((esi_5 * 0x14e7b + (edi_1 - ebx_15) * 0x8a8c + 0x10000) s>> 0x11).w
int32_t ebx_18 = sx.d(ecx_20 + esi_8)
arg1[7] = ebx_18.w
arg1[0xf] = ecx_20 - esi_8
int32_t ebx_20 = ((edx_9 - ebx_18) * 0x14e7b + (ecx_18 - eax_10) * 0x8a8c + 0x10000) s>> 0x11
int32_t esi_11 = ((edx_4 + ebx_20 + 8) s>> 4) + 0x80

if (esi_11 s< 0)
    esi_11 = 0
else if (esi_11 s> 0xff)
    esi_11 = 0xff

*arg1 = esi_11.w
int32_t ecx_28 = ((edx_4 - ebx_20 + 8) s>> 4) + 0x80

if (ecx_28 s< 0)
    ecx_28 = 0
else if (ecx_28 s> 0xff)
    ecx_28 = 0xff

arg1[1] = ecx_28.w
int32_t edx_16 = ((sx.d(eax_3 - ecx_9) - sx.d(arg1[0xf])) * 0x14e7b + (ecx_19 - ecx_12) * 0x8a8c
    + 0x10000) s>> 0x11
int32_t ecx_33 = ((eax_2 + edx_16 + 8) s>> 4) + 0x80

if (ecx_33 s< 0)
    ecx_33 = 0
else if (ecx_33 s> 0xff)
    ecx_33 = 0xff

arg1[8] = ecx_33.w
int32_t result = ((eax_2 - edx_16 + 8) s>> 4) + 0x80

if (result s< 0)
    result = 0
else if (result s> 0xff)
    result = 0xff

arg1[9] = result.w
return result
