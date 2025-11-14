// 函数: sub_583590
// 地址: 0x583590
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

long double x87_r7 = fconvert.t(arg5)
int32_t ebx
int32_t var_40 = ebx
int32_t esi
int32_t var_44 = esi
int32_t edi
int32_t var_48 = edi
void* edi_1 = arg1
void* var_14 = edi_1
int32_t eax = sub_70c710(fconvert.t(255.0) * x87_r7)
long double x87_r6_2 = fconvert.t(0.5f)
x87_r6_2 - x87_r7
int32_t ecx_1 = *(*(edi_1 + 4) + 4)
int32_t var_28 = *(ecx_1 + (eax << 2))
int32_t edx_1 = 0xff - eax
eax.w = (x87_r6_2 < x87_r7 ? 1 : 0) << 8 | (is_unordered.t(x87_r6_2, x87_r7) ? 1 : 0) << 0xa
    | (x87_r6_2 == x87_r7 ? 1 : 0) << 0xe | 0x3800
void* ebx_1 = *(ecx_1 + (edx_1 << 2))
int32_t eax_1 = *(edi_1 + 0x2c)
int32_t var_38 = eax_1
void* var_24 = ebx_1
int32_t eax_2
int32_t edx_2
edx_2:eax_2 = sx.q(eax_1)
int32_t eax_5
long double x87_r6_9
long double x87_r7_2

if ((eax:1.b & 0x41) != 0)
    x87_r6_9 = float.t(1)
    long double x87_r7_3 = x87_r6_9 - x87_r7
    long double x87_r4_1 = fconvert.t(2.0)
    eax_5 = sub_70c710(float.t((eax_2 + (edx_2 & 0xf)) s>> 4) * x87_r7_3 * x87_r4_1)
    x87_r7_2 = x87_r4_1 * x87_r7_3 * fconvert.t(16.0)
else
    long double x87_r5 = fconvert.t(2.0)
    eax_5 = sub_70c710(float.t((eax_2 + (edx_2 & 0xf)) s>> 4) * x87_r7 * x87_r5)
    x87_r7_2 = x87_r5 * x87_r7 * fconvert.t(16.0)
    x87_r6_9 = float.t(1)

int32_t esi_1 = 0
float var_30 = fconvert.s(x87_r7_2 + x87_r6_9)
float var_2c_2 = fconvert.s(x87_r6_9 / float.t(var_38))

if (var_38 s> 0)
    int32_t eax_13
    
    do
        int32_t eax_9
        int32_t edx_5
        edx_5:eax_9 = sx.q(var_38)
        int32_t mxcsr
        int16_t x87control
        long double st0_1
        st0_1, x87control = sub_70c950(mxcsr, x87control, 
            float.t((esi_1 - ((eax_9 - edx_5) s>> 1)) * 0x168) * fconvert.t(var_30)
                * fconvert.t(var_2c_2) * fconvert.t(3.1415927410125732) / fconvert.t(180.0))
        *(*(edi_1 + 0xc) + (esi_1 << 2)) =
            sub_70c710(st0_1 * fconvert.t(fconvert.d(float.t(eax_5))))
        eax_13 = *(edi_1 + 0x2c)
        esi_1 += 1
        var_38 = eax_13
    while (esi_1 s< eax_13)

int32_t eax_18 = *(edi_1 + 0x30)
int32_t esi_2 = 0

if (eax_18 s> 0)
    var_38 = fconvert.s(float.t(eax_5))
    
    do
        int32_t eax_14
        int32_t edx_7
        edx_7:eax_14 = sx.q(eax_18)
        int32_t ecx_7 = (esi_2 - ((eax_14 - edx_7) s>> 1)) * 0x168
        int32_t var_4c_1 = ecx_7
        *(*(edi_1 + 0x1c) + (esi_2 << 2)) = sub_70c710(sub_4ed890(fconvert.s(fconvert.t(fconvert.s(
            float.t(ecx_7) * fconvert.t(var_30) * fconvert.t(var_2c_2)
            * fconvert.t(3.1415927410125732) / fconvert.t(180.0))))) * fconvert.t(var_38))
        eax_18 = *(edi_1 + 0x30)
        esi_2 += 1
    while (esi_2 s< eax_18)

void* eax_20 = (*(*arg2 + 8))(0, 0)
int32_t var_28_1 = (*(*arg3 + 8))(0, 0)
int32_t eax_24 = (*(*arg4 + 8))(0, 0)
int32_t eax_26 = (*(*arg2 + 0x1c))()
int32_t ecx_13 = *(edi_1 + 0x2c) * 2
int32_t eax_29 = (*(*arg3 + 0x1c))()
char* var_3c
char* esi_4 = var_3c
int32_t var_2c_3 = (*(*arg4 + 0x1c))()
int32_t i_1 = 0
int32_t i

if (*(edi_1 + 0x30) s> 0)
    do
        int32_t j = 0
        int32_t j_1 = 0
        
        if (*(edi_1 + 0x2c) s> 0)
            do
                int32_t edx_18 = *(*(edi_1 + 0xc) + (j << 2)) + i_1
                int32_t eax_33 = *(*(edi_1 + 0x1c) + (i_1 << 2)) + j
                
                if (eax_33 u< *(edi_1 + 0x2c) && edx_18 u< *(edi_1 + 0x30))
                    int32_t eax_35 = eax_33 * 4
                    char* edx_21 = edx_18 * var_2c_3 + eax_35 + eax_24
                    void* ecx_20 = edx_18 * eax_29 + eax_35 i+ var_30
                    *esi_4 = *(zx.d(*edx_21) + ebx_1) + *(zx.d(*ecx_20) + var_38)
                    ebx_1 = eax_20
                    esi_4[1] = *(zx.d(edx_21[1]) + eax_20) + *(zx.d(*(ecx_20 + 1)) + var_38)
                    char* eax_40 = zx.d(*(ecx_20 + 2))
                    ecx_20.b = *(zx.d(edx_21[2]) + ebx_1)
                    ecx_20.b += eax_40[var_38]
                    edi_1 = var_24
                    esi_4[2] = ecx_20.b
                
                j = j_1 + 1
                esi_4 = &esi_4[4]
                j_1 = j
            while (j s< *(edi_1 + 0x2c))
        
        esi_4 = &esi_4[eax_26 - ecx_13 * 2]
        i = i_1 + 1
        i_1 = i
    while (i s< *(edi_1 + 0x30))

i.b = 1
return i
