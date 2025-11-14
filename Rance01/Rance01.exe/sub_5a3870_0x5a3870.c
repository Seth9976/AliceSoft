// 函数: sub_5a3870
// 地址: 0x5a3870
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

void* i = nullptr

if (*(arg1 + 0x16a0) != 0)
    do
        uint32_t ebp_1 = zx.d(*(*(arg1 + 0x16a4) + (i << 1)))
        uint32_t esi_1 = zx.d(*(i + *(arg1 + 0x1698)))
        i += 1
        
        if (ebp_1 != 0)
            uint32_t edi_2 = zx.d(*(esi_1 + 0x746cd0))
            uint32_t edx_6 = zx.d(*(arg2 + (edi_2 << 2) + 0x406))
            int32_t ecx_8 = *(arg1 + 0x16bc)
            
            if (ecx_8 s<= 0x10 - edx_6)
                void* ebx_5
                ebx_5.w = *(arg2 + (edi_2 << 2) + 0x404)
                ebx_5.w <<= ecx_8.b
                *(arg1 + 0x16b8) |= ebx_5.w
                *(arg1 + 0x16bc) = ecx_8 + edx_6
            else
                uint16_t ebp_3 = *(arg2 + (edi_2 << 2) + 0x404)
                void* edx_7
                edx_7.w = ebp_3
                edx_7.w <<= ecx_8.b
                char* ecx_9 = *(arg1 + 8)
                *(arg1 + 0x16b8) |= edx_7.w
                ecx_9[*(arg1 + 0x14)] = *(arg1 + 0x16b8)
                *(arg1 + 0x14) += 1
                (*(arg1 + 0x14))[*(arg1 + 8)] = *(arg1 + 0x16b9)
                int32_t edx_10 = *(arg1 + 0x16bc)
                *(arg1 + 0x14) += 1
                char* ecx_10
                ecx_10.b = 0x10
                ecx_10.b = 0x10 - edx_10.b
                *(arg1 + 0x16bc) = edx_10 + edx_6 - 0x10
                *(arg1 + 0x16b8) = ebp_3 u>> ecx_10.b
            
            int32_t ebx_6 = *((edi_2 << 2) + &data_746470)
            
            if (ebx_6 != 0)
                int32_t ecx_13 = *(arg1 + 0x16bc)
                uint16_t esi_3 = esi_1.w - (*((edi_2 << 2) + &data_746dd0)).w
                int32_t ecx_16
                
                if (ecx_13 s<= 0x10 - ebx_6)
                    *(arg1 + 0x16b8) |= esi_3 << ecx_13.b
                    ecx_16 = ecx_13 + ebx_6
                else
                    int32_t edx_12
                    edx_12.w = esi_3
                    edx_12.w <<= ecx_13.b
                    char* ecx_14 = *(arg1 + 8)
                    int32_t var_4_2 = ebx_6
                    *(arg1 + 0x16b8) |= edx_12.w
                    ebx_6.b = *(arg1 + 0x16b8)
                    ecx_14[*(arg1 + 0x14)] = ebx_6.b
                    *(arg1 + 0x14) += 1
                    int32_t edx_13
                    edx_13.b = *(arg1 + 0x16b9)
                    (*(arg1 + 0x14))[*(arg1 + 8)] = edx_13.b
                    int32_t edx_14 = *(arg1 + 0x16bc)
                    *(arg1 + 0x14) += 1
                    int32_t ecx_15
                    ecx_15.b = 0x10
                    ecx_15.b = 0x10 - edx_14.b
                    ecx_16 = edx_14 + var_4_2 - 0x10
                    *(arg1 + 0x16b8) = esi_3 u>> ecx_15.b
                
                *(arg1 + 0x16bc) = ecx_16
            
            uint32_t esi_4
            
            if (ebp_1 - 1 u>= 0x100)
                esi_4 = zx.d(*(((ebp_1 - 1) u>> 7) + 0x746bd0))
            else
                esi_4 = zx.d(*(ebp_1 + 0x746acf))
            
            uint32_t edi_4 = zx.d(*(arg3 + (esi_4 << 2) + 2))
            int32_t ecx_17 = *(arg1 + 0x16bc)
            int32_t edx_17
            
            if (ecx_17 s<= 0x10 - edi_4)
                edx_17.w = *(arg3 + (esi_4 << 2))
                edx_17.w <<= ecx_17.b
                *(arg1 + 0x16b8) |= edx_17.w
                *(arg1 + 0x16bc) = ecx_17 + edi_4
            else
                uint16_t edi_5 = *(arg3 + (esi_4 << 2))
                edx_17.w = edi_5
                edx_17.w <<= ecx_17.b
                char* ecx_18 = *(arg1 + 8)
                *(arg1 + 0x16b8) |= edx_17.w
                ecx_18[*(arg1 + 0x14)] = *(arg1 + 0x16b8)
                *(arg1 + 0x14) += 1
                (*(arg1 + 0x14))[*(arg1 + 8)] = *(arg1 + 0x16b9)
                int32_t edx_20 = *(arg1 + 0x16bc)
                *(arg1 + 0x14) += 1
                char* ecx_19
                ecx_19.b = 0x10
                ecx_19.b = 0x10 - edx_20.b
                *(arg1 + 0x16bc) = edx_20 + edi_4 - 0x10
                *(arg1 + 0x16b8) = edi_5 u>> ecx_19.b
            int32_t edi_6 = *((esi_4 << 2) + &data_746510)
            
            if (edi_6 != 0)
                int32_t ecx_22 = *(arg1 + 0x16bc)
                uint16_t ebp_5 = (ebp_1 - 1).w - (*((esi_4 << 2) + &data_746e70)).w
                int32_t ecx_25
                
                if (ecx_22 s<= 0x10 - edi_6)
                    *(arg1 + 0x16b8) |= ebp_5 << ecx_22.b
                    ecx_25 = ecx_22 + edi_6
                else
                    int32_t edx_22
                    edx_22.w = ebp_5
                    edx_22.w <<= ecx_22.b
                    char* ecx_23 = *(arg1 + 8)
                    *(arg1 + 0x16b8) |= edx_22.w
                    ecx_23[*(arg1 + 0x14)] = *(arg1 + 0x16b8)
                    *(arg1 + 0x14) += 1
                    (*(arg1 + 0x14))[*(arg1 + 8)] = *(arg1 + 0x16b9)
                    int32_t edx_25 = *(arg1 + 0x16bc)
                    *(arg1 + 0x14) += 1
                    char* ecx_24
                    ecx_24.b = 0x10
                    ecx_24.b = 0x10 - edx_25.b
                    ecx_25 = edx_25 + edi_6 - 0x10
                    *(arg1 + 0x16b8) = ebp_5 u>> ecx_24.b
                
                *(arg1 + 0x16bc) = ecx_25
        else
            uint32_t edi_1 = zx.d(*(arg2 + (esi_1 << 2) + 2))
            int32_t ecx_2 = *(arg1 + 0x16bc)
            void* edx_2
            
            if (ecx_2 s<= 0x10 - edi_1)
                edx_2.w = *(arg2 + (esi_1 << 2))
                edx_2.w <<= ecx_2.b
                *(arg1 + 0x16b8) |= edx_2.w
                *(arg1 + 0x16bc) = ecx_2 + edi_1
            else
                uint16_t esi_2 = *(arg2 + (esi_1 << 2))
                edx_2.w = esi_2
                edx_2.w <<= ecx_2.b
                char* ecx_3 = *(arg1 + 8)
                *(arg1 + 0x16b8) |= edx_2.w
                ecx_3[*(arg1 + 0x14)] = *(arg1 + 0x16b8)
                *(arg1 + 0x14) += 1
                (*(arg1 + 0x14))[*(arg1 + 8)] = *(arg1 + 0x16b9)
                int32_t edx_5 = *(arg1 + 0x16bc)
                *(arg1 + 0x14) += 1
                char* ecx_4
                ecx_4.b = 0x10
                ecx_4.b = 0x10 - edx_5.b
                *(arg1 + 0x16bc) = edx_5 + edi_1 - 0x10
                *(arg1 + 0x16b8) = esi_2 u>> ecx_4.b
    while (i u< *(arg1 + 0x16a0))

uint32_t edi_7 = zx.d(*(arg2 + 0x402))
int32_t ecx_26 = *(arg1 + 0x16bc)
void* edx_26

if (ecx_26 s<= 0x10 - edi_7)
    edx_26.w = *(arg2 + 0x400)
    edx_26.w <<= ecx_26.b
    *(arg1 + 0x16b8) |= edx_26.w
    *(arg1 + 0x16bc) = ecx_26 + edi_7
    return 

uint16_t esi_6 = *(arg2 + 0x400)
edx_26.w = esi_6
edx_26.w <<= ecx_26.b
char* ecx_27 = *(arg1 + 8)
*(arg1 + 0x16b8) |= edx_26.w
ecx_27[*(arg1 + 0x14)] = *(arg1 + 0x16b8)
*(arg1 + 0x14) += 1
(*(arg1 + 0x14))[*(arg1 + 8)] = *(arg1 + 0x16b9)
int32_t edx_29 = *(arg1 + 0x16bc)
*(arg1 + 0x14) += 1
char* ecx_28
ecx_28.b = 0x10
ecx_28.b = 0x10 - edx_29.b
*(arg1 + 0x16bc) = edx_29 + edi_7 - 0x10
*(arg1 + 0x16b8) = esi_6 u>> ecx_28.b
