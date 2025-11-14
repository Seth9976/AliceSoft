// 函数: sub_4d1470
// 地址: 0x4d1470
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

long double x87_r7_4 = float.t(0)
long double x87_r6 = fconvert.t(arg3)
int32_t ebx = arg2
x87_r6 - x87_r7_4
int32_t eax
eax.w = (x87_r6 < x87_r7_4 ? 1 : 0) << 8 | (is_unordered.t(x87_r6, x87_r7_4) ? 1 : 0) << 0xa
    | (x87_r6 == x87_r7_4 ? 1 : 0) << 0xe | 0x3000
bool p = unimplemented  {test ah, 0x41}

if (not(p))
    long double x87_r7 = x87_r6
    int32_t eax_4 = (*(arg1 + 0x10) - *(arg1 + 0xc)) s/ 0x9c
    
    if ((*(ebx + 4) - *ebx) s>> 5 != eax_4)
        sub_4cfb60(eax_4, ebx)
        x87_r7 = float.t(0)
    
    int32_t edi_2 = *(arg1 + 0xc)
    arg2 = 0
    
    if ((*(arg1 + 0x10) - edi_2) s/ 0x9c s> 0)
        float edx_7 = 0f
        int32_t ebp_1 = 0
        
        while (true)
            void* ecx_8 = *(edi_2 + ebp_1 + 0x28)
            void* eax_10 = *ebx i+ edx_7
            float ecx_14
            
            if (ecx_8 == *(edi_2 + ebp_1 + 0x2c))
                *(eax_10 + 4) = fconvert.s(x87_r7)
                *(eax_10 + 8) = fconvert.s(x87_r7)
                *(eax_10 + 0xc) = fconvert.s(x87_r7)
                *(eax_10 + 0x10) = fconvert.s(float.t(1))
                *(eax_10 + 0x14) = fconvert.s(x87_r7)
                *(eax_10 + 0x18) = fconvert.s(x87_r7)
                ecx_14 = fconvert.s(x87_r7)
            else
                *(eax_10 + 4) = *(ecx_8 + 4)
                *(eax_10 + 8) = *(ecx_8 + 8)
                *(eax_10 + 0xc) = *(ecx_8 + 0xc)
                *(eax_10 + 0x10) = *(ecx_8 + 0x10)
                *(eax_10 + 0x14) = *(ecx_8 + 0x14)
                *(eax_10 + 0x18) = *(ecx_8 + 0x18)
                ecx_14 = *(ecx_8 + 0x1c)
            
            arg2 += 1
            *(eax_10 + 0x1c) = ecx_14
            edi_2 = *(arg1 + 0xc)
            ebp_1 += 0x9c
            
            if (arg2 s>= (*(arg1 + 0x10) - edi_2) s/ 0x9c)
                break
            
            edx_7 += 0x20
    
    return x87_r7

long double x87_r0_4 = x87_r6
int32_t eax_15 = sub_70c710(x87_r7_4)
arg2 = eax_15

if (eax_15 s>= 0)
    int32_t ecx_23 = *(arg1 + 8)
    
    if (eax_15 s>= ecx_23)
        eax_15 = ecx_23 - 1
        arg2 = eax_15
else
    eax_15 = 0
    arg2 = eax_15

int32_t ecx_24 = eax_15 + 1

if (ecx_24 s>= 0)
    int32_t edx_12 = *(arg1 + 8)
    
    if (ecx_24 s>= edx_12)
        ecx_24 = edx_12 - 1
else
    ecx_24 = 0

int32_t var_38_1 = ecx_24
sub_4d18c0(arg1, eax_15, ecx_24, fconvert.s(fconvert.t(fconvert.s(x87_r7_4 - float.t(arg2)))))
int32_t eax_19 = (*(arg1 + 0x10) - *(arg1 + 0xc)) s/ 0x9c

if ((*(ebx + 4) - *ebx) s>> 5 != eax_19)
    x87_r0_4 = sub_4cfb60(eax_19, ebx)

int32_t ecx_31 = *(arg1 + 0x10) - *(arg1 + 0xc)
int32_t eax_20
int32_t edx_16
edx_16:eax_20 = muls.dp.d(0xd20d20d3, ecx_31)
int32_t edx_18 = (edx_16 + ecx_31) s>> 7

if (edx_18 u>> 0x1f == neg.d(edx_18))
    return x87_r0_4

int32_t edi_8 = 0
int32_t edx_19 = 0
arg2 = ecx_31 s/ 0x9c
int32_t i

do
    int32_t eax_24 = *(arg1 + 0xc)
    void* eax_26 = *ebx + edi_8
    *(eax_26 + 4) = *(edx_19 + eax_24 + 0x3c)
    *(eax_26 + 8) = *(edx_19 + eax_24 + 0x40)
    *(eax_26 + 0xc) = *(edx_19 + eax_24 + 0x44)
    *(eax_26 + 0x10) = *(edx_19 + eax_24 + 0x48)
    *(eax_26 + 0x14) = *(edx_19 + eax_24 + 0x4c)
    *(eax_26 + 0x18) = *(edx_19 + eax_24 + 0x50)
    int32_t ecx_33 = *(edx_19 + eax_24 + 0x54)
    edx_19 += 0x9c
    edi_8 += 0x20
    i = arg2
    arg2 -= 1
    *(eax_26 + 0x1c) = ecx_33
while (i != 1)
return x87_r0_4
