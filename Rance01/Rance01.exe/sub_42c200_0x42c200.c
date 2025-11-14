// 函数: sub_42c200
// 地址: 0x42c200
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t* edi = arg3
*edi += 1

if (*edi s>= 0x209)
    arg3 = sub_595240(arg3, edi)
    *edi = 0

int32_t eax = *edi
int32_t ebx = edi[eax + 1]
*edi = eax + 1

if (eax + 1 s>= 0x209)
    sub_595240(arg3, edi)
    *edi = 0

int32_t eax_2 = *edi
long double x87_r7 = float.t(ebx)

if (ebx s< 0)
    x87_r7 = x87_r7 + fconvert.t(4294967296.0)

long double x87_r6 = fconvert.t(4294967295.0)
int32_t ecx = edi[eax_2 + 1]
long double x87_r5 = float.t(edi[eax_2 + 1])

if (ecx s< 0)
    x87_r5 = x87_r5 + fconvert.t(4294967296.0)

*edi = eax_2 + 1

if (eax_2 + 1 s>= 0x209)
    ecx = sub_595240(ecx, edi)
    *edi = 0

int32_t eax_4 = *edi
int32_t ebx_1 = edi[eax_4 + 1]
*edi = eax_4 + 1

if (eax_4 + 1 s>= 0x209)
    ecx = sub_595240(ecx, edi)
    *edi = 0

int32_t eax_6 = *edi
long double x87_r6_4 = float.t(ebx_1)

if (ebx_1 s< 0)
    x87_r6_4 = x87_r6_4 + fconvert.t(4294967296.0)

long double x87_r5_2 = float.t(edi[eax_6 + 1])

if (edi[eax_6 + 1] s< 0)
    x87_r5_2 = x87_r5_2 + fconvert.t(4294967296.0)

*edi = eax_6 + 1

if (eax_6 + 1 s>= 0x209)
    ecx = sub_595240(ecx, edi)
    *edi = 0

int32_t eax_8 = *edi
int32_t ebx_2 = edi[eax_8 + 1]
*edi = eax_8 + 1

if (eax_8 + 1 s>= 0x209)
    sub_595240(ecx, edi)
    *edi = 0

int32_t edi_1 = edi[*edi + 1]
*arg1 = fconvert.s(fconvert.t(fconvert.s(fconvert.t(fconvert.s(x87_r7 / x87_r6))
    - fconvert.t(fconvert.s(x87_r5 / x87_r6)))))
arg1[1] = fconvert.s(fconvert.t(fconvert.s(fconvert.t(fconvert.s(x87_r6_4 / x87_r6))
    - fconvert.t(fconvert.s(x87_r5_2 / x87_r6)))))
long double x87_r6_10 = float.t(ebx_2)

if (ebx_2 s< 0)
    x87_r6_10 = x87_r6_10 + fconvert.t(4294967296.0)

long double x87_r5_4 = float.t(edi_1)

if (edi_1 s< 0)
    x87_r5_4 = x87_r5_4 + fconvert.t(4294967296.0)

arg1[2] = fconvert.s(fconvert.t(fconvert.s(x87_r6_10 / x87_r6))
    - fconvert.t(fconvert.s(x87_r5_4 / x87_r5_4)))
return sub_660160(arg1)
