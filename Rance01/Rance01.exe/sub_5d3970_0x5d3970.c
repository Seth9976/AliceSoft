// 函数: sub_5d3970
// 地址: 0x5d3970
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

EnterCriticalSection(*(arg1 + 0xa4))

if (*(arg1 + 0x1c) == 0)
    LeaveCriticalSection(*(arg1 + 0xa4))
    int32_t eax
    eax.b = 0
    return 

LeaveCriticalSection(*(arg1 + 0xa4))
long double x87_r7 = fconvert.t(arg2)
long double x87_r6_2 = float.t(0)
x87_r6_2 - x87_r7
*(arg1 + 0xc) = sub_70c710(fconvert.t(100.0) * x87_r7)
int32_t eax_1
eax_1.w = (x87_r6_2 < x87_r7 ? 1 : 0) << 8 | (is_unordered.t(x87_r6_2, x87_r7) ? 1 : 0) << 0xa
    | (x87_r6_2 == x87_r7 ? 1 : 0) << 0xe | 0x3800
int32_t edi_1
int32_t mxcsr
int16_t x87control

if ((eax_1:1.b & 1) != 0)
    edi_1 = sub_70c710(sub_70c800(mxcsr, x87control, x87_r7) * fconvert.t(2000.0))

if ((eax_1:1.b & 1) == 0 || edi_1 s< 0xffffd8f0)
    edi_1 = 0xffffd8f0

EnterCriticalSection(*(arg1 + 0xa4))
int32_t* eax_4 = *(arg1 + 0x1c)

if ((*(*eax_4 + 0x3c))(eax_4, edi_1) == 0)
    LeaveCriticalSection(*(arg1 + 0xa4))
    int32_t eax_8
    eax_8.b = 1
    return 

LeaveCriticalSection(*(arg1 + 0xa4))
int32_t eax_7
eax_7.b = 0
