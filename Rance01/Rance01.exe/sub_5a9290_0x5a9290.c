// 函数: sub_5a9290
// 地址: 0x5a9290
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t* ebp = arg4
void* esi = arg3
arg3.b = ebp[2].b
void* edi = arg1
int32_t result = 0

if ((arg3.b & 1) != 0 || (arg3.b & 2) == 0)
    return 0

uint32_t eax_1 = zx.d(*(esi + 0x254))
uint32_t ebx_1 = zx.d(*(esi + 0x256))
int32_t i_6 = *ebp
int32_t edx_1 = 0x8000 - ebx_1 - eax_1
uint32_t var_18_1 = eax_1
int32_t var_20_1 = edx_1
int32_t i_7 = i_6
uint32_t var_14_1 = zx.d(arg3.b) u>> 2 & 1

if (*(ebp + 9) != 8)
    if (*(esi + 0x194) == 0 || *(esi + 0x190) == 0)
        void* ecx_12 = edi
        eax_1 = edi
        
        if (i_6 != 0)
            int32_t i_8 = i_6
            
            while (true)
                uint32_t esi_3 = zx.d(*(ecx_12 + 1)) | zx.d(zx.w(*ecx_12) << 8)
                uint32_t edi_4 = zx.d(*(ecx_12 + 3)) | zx.d(zx.w(*(ecx_12 + 2)) << 8)
                uint16_t ebx_18 = zx.w(*(ecx_12 + 5)) | zx.w(*(ecx_12 + 4)) << 8
                ecx_12 += 6
                uint32_t ebx_19 = zx.d(ebx_18)
                
                if (esi_3.w != edi_4.w || esi_3.w != ebx_19.w)
                    result |= 1
                
                uint32_t edx_31 =
                    zx.d(((ebx_19 * edx_1 + edi_4 * ebx_1 + esi_3 * var_18_1 + 0x4000) u>> 0xf).w)
                *eax_1 = (edx_31 u>> 8).b
                *(eax_1 + 1) = edx_31.b
                eax_1 += 2
                
                if (var_14_1 != 0)
                    *eax_1 = *ecx_12
                    *(eax_1 + 1) = *(ecx_12 + 1)
                    eax_1 += 2
                    ecx_12 += 2
                
                int32_t i_9 = i_8
                i_8 -= 1
                
                if (i_9 == 1)
                    break
                
                edx_1 = var_20_1
            
            i_6 = i_7
            ebp = arg4
    else
        eax_1 = edi
        void* var_c_1 = edi
        
        if (i_6 != 0)
            int32_t i_4 = i_6
            int32_t i
            
            do
                uint32_t ebp_2 = zx.d(zx.w(*eax_1) << 8) | zx.d(*(eax_1 + 1))
                uint32_t edx_11 = zx.d(zx.w(*(eax_1 + 2)) << 8) | zx.d(*(eax_1 + 3))
                uint16_t ecx_7 = zx.w(*(eax_1 + 4)) << 8 | zx.w(*(eax_1 + 5))
                eax_1 += 6
                uint32_t ebx_13 = zx.d(ecx_7)
                uint32_t ecx_9
                
                if (ebp_2.w != edx_11.w || ebp_2.w != ebx_13.w)
                    char ecx_10 = (*(esi + 0x174)).b
                    int32_t edi_1 = *(esi + 0x194)
                    int32_t edx_17 =
                        zx.d(*(*(edi_1 + (zx.d(edx_11.b) u>> ecx_10 << 2)) + (edx_11 u>> 8 << 1)))
                        * ebx_1 +
                        zx.d(*(*(edi_1 + (zx.d(ebx_13.b) u>> ecx_10 << 2)) + (ebx_13 u>> 8 << 1)))
                        * var_20_1
                    edi = var_c_1
                    uint32_t eax_13 = zx.d(((edx_17
                        + zx.d(*(*(edi_1 + (zx.d(ebp_2.b) u>> ecx_10 << 2)) + (ebp_2 u>> 8 << 1)))
                        * var_18_1 + 0x4000) u>> 0xf).w)
                    result |= 1
                    ecx_9 = zx.d(*(*(*(esi + 0x190) + (zx.d(eax_13.b) u>> ecx_10 << 2))
                        + (eax_13 u>> 8 << 1)))
                else
                    int32_t ebx_14 = *(esi + 0x184)
                    
                    if (ebx_14 == 0)
                        ecx_9 = ebp_2
                    else
                        ecx_7.b = *(esi + 0x174)
                        ecx_9 = zx.d(
                            *(*(ebx_14 + (zx.d(ebp_2.b) u>> ecx_7.b << 2)) + (ebp_2 u>> 8 << 1)))
                
                *edi = (ecx_9 u>> 8).b
                *(edi + 1) = ecx_9.b
                edi += 2
                var_c_1 = edi
                
                if (var_14_1 != 0)
                    ecx_9.b = *eax_1
                    *edi = ecx_9.b
                    *(edi + 1) = *(eax_1 + 1)
                    edi += 2
                    var_c_1 = edi
                    eax_1 += 2
                
                i = i_4
                i_4 -= 1
            while (i != 1)
            i_6 = i_7
            ebp = arg4
else
    uint32_t ecx_2
    
    if (*(esi + 0x188) == 0 || *(esi + 0x18c) == 0)
        eax_1 = edi
        char* esi_1 = edi
        
        if (i_6 != 0)
            int32_t i_5 = i_6
            int32_t i_1
            
            do
                char ebx_5 = *(eax_1 + 1)
                ecx_2.b = *eax_1
                char ebx_6 = *(eax_1 + 2)
                eax_1 += 3
                
                if (ecx_2.b != ebx_5 || ecx_2.b != ebx_6)
                    result |= 1
                    int32_t ebx_9 = zx.d(ebx_6) * edx_1 + zx.d(ebx_5) * ebx_1
                    edx_1 = var_20_1
                    *esi_1 = ((ebx_9 + zx.d(ecx_2.b) * var_18_1) u>> 0xf).b
                else
                    *esi_1 = ecx_2.b
                
                esi_1 = &esi_1[1]
                
                if (var_14_1 != 0)
                    ecx_2.b = *eax_1
                    *esi_1 = ecx_2.b
                    esi_1 = &esi_1[1]
                    eax_1 += 1
                
                i_1 = i_5
                i_5 -= 1
            while (i_1 != 1)
            i_6 = i_7
    else
        char* ebp_1 = edi
        
        if (i_6 == 0)
            ebp = arg4
        else
            int32_t i_3 = i_6
            int32_t i_2
            
            do
                eax_1.b = *(edi + 1)
                ecx_2.b = *edi
                i_6.b = *(edi + 2)
                edi += 3
                
                if (ecx_2.b != eax_1.b || ecx_2.b != i_6.b)
                    int32_t eax_2 = *(esi + 0x18c)
                    result |= 1
                    int32_t edx_6
                    edx_6.b = *(((zx.d(*(zx.d(i_6.b) + eax_2)) * edx_1
                        + zx.d(*(zx.d(eax_1.b) + eax_2)) * ebx_1
                        + zx.d(*(zx.d(ecx_2.b) + eax_2)) * var_18_1 + 0x4000) u>> 0xf)
                        + *(esi + 0x188))
                    *ebp_1 = edx_6.b
                    edx_1 = var_20_1
                else
                    eax_1 = *(esi + 0x180)
                    
                    if (eax_1 != 0)
                        ecx_2.b = *(zx.d(ecx_2.b) + eax_1)
                    
                    *ebp_1 = ecx_2.b
                
                ebp_1 = &ebp_1[1]
                
                if (var_14_1 != 0)
                    eax_1.b = *edi
                    *ebp_1 = eax_1.b
                    ebp_1 = &ebp_1[1]
                    edi += 1
                
                i_2 = i_3
                i_3 -= 1
            while (i_2 != 1)
            i_6 = i_7
            ebp = arg4

*(ebp + 0xa) -= 2
eax_1.b = *(ebp + 0xa)
eax_1.w = muls.dp.b(eax_1.b, *(ebp + 9))
ebp[2].b &= 0xfd
*(ebp + 0xb) = eax_1.b
uint32_t eax_15 = zx.d(eax_1.b)

if (eax_1.b u< 8)
    ebp[1] = (eax_15 * i_6 + 7) u>> 3
    return result

ebp[1] = (eax_15 u>> 3) * i_6
return result
