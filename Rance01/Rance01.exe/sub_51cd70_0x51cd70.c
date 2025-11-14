// 函数: sub_51cd70
// 地址: 0x51cd70
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t eax = *arg2
int32_t i = 0
char* edi = *arg3

if (((arg2[1] - eax) & 0xfffffffc) s<= 0)
    sub_6bc670(edi, 0, 4 - i)
else
    do
        eax.b = *(eax + (i << 2))
        *edi = eax.b
        eax = *arg2
        i += 1
        edi = &edi[1]
    while (i s< (arg2[1] - eax) s>> 2)
    
    if (i s< 4)
        sub_6bc670(edi, 0, 4 - i)

*arg3 += 4
int32_t edi_1 = arg4[1]
int32_t ecx = *arg4
void* edx_1 = *arg3

if (ecx == edi_1)
    *edx_1 = fconvert.s(float.t(1))
    long double x87_r7_2 = float.t(0)
    *(edx_1 + 4) = fconvert.s(x87_r7_2)
    *(edx_1 + 8) = fconvert.s(x87_r7_2)
    *(edx_1 + 0xc) = fconvert.s(x87_r7_2)
    *arg3 = edx_1 + 0x10
    return 

int32_t i_1 = 0

if (((edi_1 - ecx) & 0xfffffffc) s> 0)
    do
        edx_1 += 4
        *(edx_1 - 4) = fconvert.s(fconvert.t(*(ecx + (i_1 << 2))))
        *arg3 = edx_1
        ecx = *arg4
        i_1 += 1
    while (i_1 s< (arg4[1] - ecx) s>> 2)
    
    if (i_1 s< 4)
        goto label_51ce17
    
    return 

label_51ce17:
long double x87_r7_4 = float.t(0)

if (4 - i_1 s>= 4)
    void* edi_6 = *arg3
    int32_t i_5 = (neg.d(i_1) u>> 2) + 1
    i_1 += i_5 << 2
    int32_t i_2
    
    do
        i_2 = i_5
        i_5 -= 1
        float* ecx_2 = edi_6
        *ecx_2 = fconvert.s(x87_r7_4)
        edi_6 = &ecx_2[4]
        ecx_2[1] = fconvert.s(x87_r7_4)
        ecx_2[2] = fconvert.s(x87_r7_4)
        ecx_2[3] = fconvert.s(x87_r7_4)
    while (i_2 != 1)
    *arg3 = edi_6

if (i_1 s>= 4)
    return 

void* edx_6 = *arg3
int32_t i_4 = 4 - i_1
int32_t i_3

do
    i_3 = i_4
    i_4 -= 1
    float* eax_3 = edx_6
    *eax_3 = fconvert.s(x87_r7_4)
    edx_6 = &eax_3[1]
while (i_3 != 1)
*arg3 = edx_6
