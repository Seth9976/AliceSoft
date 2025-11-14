// 函数: sub_51caa0
// 地址: 0x51caa0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t* edx = arg1
void* eax = arg2
int32_t ebx
ebx.b = arg5

for (int32_t* i = *edx; i != edx[1]; i = &i[0x16])
    int32_t esi_1 = *(arg3 + 0x70)
    float* ecx_3 = *i * 0x2c + *(arg3 + 0x60)
    void* eax_1 = eax + 0x18
    *(eax_1 - 0x18) = fconvert.s(fconvert.t(*ecx_3))
    *(eax_1 - 0x14) = fconvert.s(fconvert.t(ecx_3[1]))
    *(eax_1 - 0x10) = fconvert.s(fconvert.t(ecx_3[2]))
    int32_t ecx_5 = i[1] * 3
    void* ecx_6 = esi_1 + (ecx_5 << 3)
    *(eax_1 - 0xc) = fconvert.s(fconvert.t(*(esi_1 + (ecx_5 << 3))))
    *(eax_1 - 8) = fconvert.s(fconvert.t(*(ecx_6 + 4)))
    *(eax_1 - 4) = fconvert.s(fconvert.t(*(ecx_6 + 8)))
    
    if (ebx.b != 0)
        eax_1 += 0xc
        *(eax_1 - 0xc) = fconvert.s(fconvert.t(i[2]))
        *(eax_1 - 8) = fconvert.s(fconvert.t(i[3]))
        *(eax_1 - 4) = fconvert.s(fconvert.t(i[4]))
    
    *eax_1 = i[5]
    int32_t ecx_7
    ecx_7.b = arg6
    void* eax_2 = eax_1 + 4
    
    if (ecx_7.b != 0)
        *eax_2 = zx.d(i[6].b) << 0x18
        eax_2 += 4
    
    eax = eax_2 + 8
    *(eax - 8) = fconvert.s(fconvert.t(i[7]))
    long double x87_r7_11 = fconvert.t(i[8])
    arg2 = eax
    *(eax - 4) = fconvert.s(x87_r7_11)
    
    if (arg4 != 0)
        eax += 8
        *(eax - 8) = fconvert.s(fconvert.t(i[9]))
        arg2 = eax
        *(eax - 4) = fconvert.s(fconvert.t(i[0xa]))
    
    if (ecx_7.b != 0)
        eax += 8
        *(eax - 8) = fconvert.s(fconvert.t(i[0xb]))
        arg2 = eax
        *(eax - 4) = fconvert.s(fconvert.t(i[0xc]))
    
    if (arg7 != 0)
        sub_51cd70(ecx_7, &i[0xe], &arg2, &i[0x12])
        eax = arg2
        edx = arg1
