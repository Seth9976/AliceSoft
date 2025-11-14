// 函数: sub_4fae90
// 地址: 0x4fae90
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

float ebx = arg1
int32_t* ecx = *(ebx i+ 0xa4)
int32_t* edx = *(ebx i+ 0xa8)
void* edi = ebx i+ 0xa4

if (ecx != edx)
    int32_t* eax_1 = edx
    
    if (edx != edx)
        do
            *ecx = *eax_1
            ecx[1] = eax_1[1]
            ecx[2] = eax_1[2]
            eax_1 = &eax_1[3]
            ecx = &ecx[3]
        while (eax_1 != edx)
    
    edi = ebx i+ 0xa4
    *(edi + 4) = ecx

long double x87_r7 = float.t(0)
int32_t* esi_4 = *(edi + 4)
int32_t ebp = *edi
float var_14 = fconvert.s(x87_r7)
float var_10 = fconvert.s(x87_r7)
int32_t ecx_3 = *(ebx i+ 0x64) - *(ebx i+ 0x60)
float var_c = fconvert.s(x87_r7)
int32_t ecx_6 = ecx_3 s/ 0x2c
int32_t eax_7 = (esi_4 - ebp) s/ 0xc
int32_t* var_1c

if (ecx_6 u> eax_7)
    sub_4fcb70(ecx_6 - eax_7, edi, esi_4, &var_c)
else if (ecx_6 u< eax_7)
    sub_4adee0(&var_1c, edi, ebp + ecx_6 * 0xc, esi_4)

int32_t* ecx_8 = *(ebx i+ 0x50)
int32_t* edx_8 = *(ebx i+ 0x54)
int32_t* var_24 = ecx_8
var_1c = edx_8

while (ecx_8 != edx_8)
    void* eax_11 = *ecx_8
    void* esi_5 = *(eax_11 + 0x28)
    int32_t eax_12 = *(eax_11 + 0x2c)
    
    if (esi_5 != eax_12)
        int32_t edi_2 = *(ebx i+ 0x60)
        int32_t ebp_1 = *(ebx i+ 0xa4)
        
        do
            int32_t ebx_1 = *(esi_5 + 4)
            sub_4fb100(*(esi_5 + 0x7c) * 0x2c + edi_2, *(esi_5 + 0x40) * 0x2c + edi_2, &var_c, 
                ebx_1 * 0x2c + edi_2, fconvert.s(fconvert.t(*(esi_5 + 0x24))), 
                fconvert.s(fconvert.t(*(esi_5 + 0x60))), fconvert.s(fconvert.t(*(esi_5 + 0x9c))))
            int32_t ecx_13 = ebx_1 * 3
            float* eax_16 = ebp_1 + (ecx_13 << 2)
            long double x87_r6_1 = fconvert.t(var_c)
            esi_5 += 0xb4
            *eax_16 = fconvert.s(fconvert.t(*(ebp_1 + (ecx_13 << 2))) + x87_r6_1)
            long double x87_r6_3 = fconvert.t(var_14)
            eax_16[1] = fconvert.s(x87_r6_3 + fconvert.t(eax_16[1]))
            long double x87_r5_4 = fconvert.t(var_10)
            eax_16[2] = fconvert.s(x87_r5_4 + fconvert.t(eax_16[2]))
            int32_t edx_12 = *(esi_5 - 0x74) * 3
            float* eax_18 = ebp_1 + (edx_12 << 2)
            *eax_18 = fconvert.s(fconvert.t(*(ebp_1 + (edx_12 << 2))) + x87_r6_1)
            eax_18[1] = fconvert.s(fconvert.t(eax_18[1]) + x87_r6_3)
            eax_18[2] = fconvert.s(x87_r5_4 + fconvert.t(eax_18[2]))
            int32_t eax_20 = *(esi_5 - 0x38) * 3
            float* eax_21 = ebp_1 + (eax_20 << 2)
            *eax_21 = fconvert.s(x87_r6_1 + fconvert.t(*(ebp_1 + (eax_20 << 2))))
            eax_21[1] = fconvert.s(x87_r6_3 + fconvert.t(eax_21[1]))
            eax_21[2] = fconvert.s(x87_r5_4 + fconvert.t(eax_21[2]))
        while (esi_5 != eax_12)
        
        edx_8 = var_1c
        ebx = arg1
        ecx_8 = var_24
    
    ecx_8 = &ecx_8[1]
    var_24 = ecx_8

void* i = *(ebx i+ 0xa4)

for (int32_t ebx_2 = *(ebx i+ 0xa8); i != ebx_2; i += 0xc)
    long double x87_r7_10 = fconvert.t(*(i + 4))
    int32_t* var_3c_4 = ecx_8
    long double x87_r6_5 = fconvert.t(*i)
    long double x87_r7_12 = fconvert.t(*(i + 8))
    int32_t eax_22
    long double st0_1
    st0_1, eax_22, ecx_8 = sub_4d9250(fconvert.s(fconvert.t(fconvert.s(x87_r7_12 * x87_r7_12
        + x87_r6_5 * x87_r6_5 + x87_r7_10 * x87_r7_10))))
    long double x87_r7_17 = fconvert.t(fconvert.s(st0_1))
    long double x87_r5_9 = float.t(0)
    x87_r5_9 - x87_r7_17
    eax_22.w = (x87_r5_9 < x87_r7_17 ? 1 : 0) << 8
        | (is_unordered.t(x87_r5_9, x87_r7_17) ? 1 : 0) << 0xa
        | (x87_r5_9 == x87_r7_17 ? 1 : 0) << 0xe | 0x3800
    bool p_1 = unimplemented  {test ah, 0x44}
    
    if (p_1)
        long double x87_r6_9 = float.t(1)
        long double x87_r6_10 = fconvert.t(fconvert.s(x87_r6_9 / x87_r6_9))
        *i = fconvert.s(fconvert.t(*i) * x87_r6_10)
        *(i + 4) = fconvert.s(fconvert.t(*(i + 4)) * x87_r6_10)
        *(i + 8) = fconvert.s(x87_r6_10 * fconvert.t(*(i + 8)))
