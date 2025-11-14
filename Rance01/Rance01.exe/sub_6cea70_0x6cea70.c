// 函数: sub_6cea70
// 地址: 0x6cea70
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t edi
int32_t var_c = edi
int32_t esi
int32_t var_10 = esi
int32_t i = 0
long double x87_r7 = fconvert.t(data_79b550)
long double x87_r6 = fconvert.t(data_79b548)
long double x87_r5 = fconvert.t(data_79b540)
void var_c0

do
    double var_28_1 = fconvert.d(
        float.t(sx.d(*(arg1 + (i << 1)))) * fconvert.t(*((i << 3) + &data_79b340)) * x87_r6 * x87_r5
        + x87_r7)
    int32_t ebp_1 = var_28_1:4.d
    int32_t ecx_4 = ebp_1 u>> 0x14 & 0x7ff
    uint32_t esi_5
    
    if (ecx_4 s<= 0x3fe)
        esi_5 = 0
    else
        esi_5 =
            (ebp_1 << 0xb | var_28_1.d u>> 0xffffffeb | 0x80000000) u>> ((neg.d(ecx_4)).b + 0x1e)
        
        if (ebp_1 s< 0)
            esi_5 = neg.d(esi_5)
    
    uint32_t var_40_1 = esi_5
    *(&var_c0 + (*((i << 2) + &data_79aee0) << 1)) = esi_5.w
    double var_28_2 = fconvert.d(float.t(sx.d(*(arg1 + (i << 1) + 2)))
        * fconvert.t(*((i << 3) + &data_79b348)) * x87_r6 * x87_r5 + x87_r7)
    int32_t ebp_2 = var_28_2:4.d
    int32_t ecx_10 = ebp_2 u>> 0x14 & 0x7ff
    uint32_t esi_10
    
    if (ecx_10 s<= 0x3fe)
        esi_10 = 0
    else
        esi_10 =
            (ebp_2 << 0xb | var_28_2.d u>> 0xffffffeb | 0x80000000) u>> ((neg.d(ecx_10)).b + 0x1e)
        
        if (ebp_2 s< 0)
            esi_10 = neg.d(esi_10)
    
    uint32_t var_40_2 = esi_10
    *(&var_c0 + (*((i << 2) + &data_79aee4) << 1)) = esi_10.w
    double var_28_3 = fconvert.d(float.t(sx.d(*(arg1 + (i << 1) + 4)))
        * fconvert.t(*((i << 3) + &data_79b350)) * x87_r6 * x87_r5 + x87_r7)
    int32_t ebp_3 = var_28_3:4.d
    int32_t ecx_16 = ebp_3 u>> 0x14 & 0x7ff
    uint32_t esi_15
    
    if (ecx_16 s<= 0x3fe)
        esi_15 = 0
    else
        esi_15 =
            (ebp_3 << 0xb | var_28_3.d u>> 0xffffffeb | 0x80000000) u>> ((neg.d(ecx_16)).b + 0x1e)
        
        if (ebp_3 s< 0)
            esi_15 = neg.d(esi_15)
    
    uint32_t var_40_3 = esi_15
    *(&var_c0 + (*((i << 2) + &data_79aee8) << 1)) = esi_15.w
    double var_28_4 = fconvert.d(
        float.t(sx.d(*(arg1 + (i << 1) + 6))) * fconvert.t(*((i << 3) + "+0du")) * x87_r6 * x87_r5
        + x87_r7)
    int32_t ebp_4 = var_28_4:4.d
    int32_t ecx_22 = ebp_4 u>> 0x14 & 0x7ff
    uint32_t esi_20
    
    if (ecx_22 s<= 0x3fe)
        esi_20 = 0
    else
        esi_20 =
            (ebp_4 << 0xb | var_28_4.d u>> 0xffffffeb | 0x80000000) u>> ((neg.d(ecx_22)).b + 0x1e)
        
        if (ebp_4 s< 0)
            esi_20 = neg.d(esi_20)
    
    uint32_t var_40_4 = esi_20
    int32_t ecx_25 = *((i << 2) + &data_79aeec)
    i += 4
    *(&var_c0 + (ecx_25 << 1)) = esi_20.w
while (i s< 0x40)

for (int32_t i_1 = 0; i_1 s< 0x40; i_1 += 4)
    *(arg1 + (i_1 << 1)) = *(&var_c0 + (i_1 << 1))
    void var_be
    *(arg1 + (i_1 << 1) + 2) = *(&var_be + (i_1 << 1))
    void var_bc
    *(arg1 + (i_1 << 1) + 4) = *(&var_bc + (i_1 << 1))
    int16_t var_ba[0x3d]
    *(arg1 + (i_1 << 1) + 6) = var_ba[i_1]

__builtin_memset(arg1 + 0x80, 0, 0x20)
return 0
