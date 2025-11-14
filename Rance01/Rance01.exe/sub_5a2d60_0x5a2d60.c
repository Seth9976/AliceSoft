// 函数: sub_5a2d60
// 地址: 0x5a2d60
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

uint32_t ebp = zx.d(*(arg3 + 2))
uint32_t j_1 = 0
uint32_t var_c = 0xffffffff
uint32_t var_14 = ebp
int32_t ecx = 7
int32_t edi = 4

if (ebp == 0)
    ecx = 0x8a
    edi = ebp + 3

if (arg4 s< 0)
    return 

void* var_10_1 = arg3 + 6
int32_t i_1 = arg4 + 1
int32_t i

do
    uint32_t ebx_4 = zx.d(*var_10_1)
    uint32_t esi_2 = var_14
    j_1 += 1
    uint32_t var_4_1 = esi_2
    var_14 = ebx_4
    arg4 = j_1
    
    if (j_1 s>= ecx || esi_2 != ebx_4)
        if (j_1 s< edi)
            uint32_t j
            
            do
                uint32_t edi_1 = zx.d(*(arg1 + (esi_2 << 2) + 0xa7e))
                int32_t ecx_2 = *(arg1 + 0x16bc)
                int32_t ecx_5
                
                if (ecx_2 s<= 0x10 - edi_1)
                    int32_t ebx_5
                    ebx_5.w = *(arg1 + (esi_2 << 2) + 0xa7c)
                    ebx_5.w <<= ecx_2.b
                    *(arg1 + 0x16b8) |= ebx_5.w
                    ecx_5 = ecx_2 + edi_1
                else
                    uint16_t esi_3 = *(arg1 + (esi_2 << 2) + 0xa7c)
                    j_1.w = esi_3
                    j_1.w <<= ecx_2.b
                    char* ecx_3 = *(arg1 + 8)
                    *(arg1 + 0x16b8) |= j_1.w
                    ecx_3[*(arg1 + 0x14)] = *(arg1 + 0x16b8)
                    *(arg1 + 0x14) += 1
                    (*(arg1 + 0x14))[*(arg1 + 8)] = *(arg1 + 0x16b9)
                    int32_t edx_2 = *(arg1 + 0x16bc)
                    *(arg1 + 0x14) += 1
                    char* ecx_4
                    ecx_4.b = 0x10
                    ecx_4.b = 0x10 - edx_2.b
                    ecx_5 = edx_2 + edi_1 - 0x10
                    j_1 = arg4
                    *(arg1 + 0x16b8) = esi_3 u>> ecx_4.b
                    esi_2 = var_4_1
                
                j = j_1
                j_1 -= 1
                *(arg1 + 0x16bc) = ecx_5
                arg4 = j_1
            while (j != 1)
        else if (esi_2 == 0)
            int32_t ecx_19 = *(arg1 + 0x16bc)
            
            if (j_1 s> 0xa)
                uint32_t edi_16 = zx.d(*(arg1 + 0xac6))
                uint32_t var_c_1 = edi_16
                
                if (ecx_19 s<= 0x10 - edi_16)
                    edi_16.w = *(arg1 + 0xac4)
                    edi_16.w <<= ecx_19.b
                    *(arg1 + 0x16b8) |= edi_16.w
                    *(arg1 + 0x16bc) = ecx_19 + var_c_1
                else
                    uint16_t edi_17 = *(arg1 + 0xac4)
                    j_1.w = edi_17
                    j_1.w <<= ecx_19.b
                    char* ecx_26 = *(arg1 + 8)
                    *(arg1 + 0x16b8) |= j_1.w
                    ecx_26[*(arg1 + 0x14)] = *(arg1 + 0x16b8)
                    *(arg1 + 0x14) += 1
                    (*(arg1 + 0x14))[*(arg1 + 8)] = *(arg1 + 0x16b9)
                    int32_t edx_19 = *(arg1 + 0x16bc)
                    *(arg1 + 0x14) += 1
                    char* ecx_27
                    ecx_27.b = 0x10
                    ecx_27.b = 0x10 - edx_19.b
                    *(arg1 + 0x16bc) = edx_19 + var_c_1 - 0x10
                    j_1 = arg4
                    *(arg1 + 0x16b8) = edi_17 u>> ecx_27.b
                
                int32_t ecx_30 = *(arg1 + 0x16bc)
                
                if (ecx_30 s<= 9)
                    *(arg1 + 0x16b8) |= (j_1.w - 0xb) << ecx_30.b
                    *(arg1 + 0x16bc) = ecx_30 + 7
                else
                    uint16_t edi_18 = j_1.w - 0xb
                    j_1.w = edi_18
                    j_1.w <<= ecx_30.b
                    char* ecx_31 = *(arg1 + 8)
                    *(arg1 + 0x16b8) |= j_1.w
                    ecx_31[*(arg1 + 0x14)] = *(arg1 + 0x16b8)
                    *(arg1 + 0x14) += 1
                    (*(arg1 + 0x14))[*(arg1 + 8)] = *(arg1 + 0x16b9)
                    int32_t edx_23 = *(arg1 + 0x16bc)
                    *(arg1 + 0x14) += 1
                    char* ecx_32
                    ecx_32.b = 0x10
                    ecx_32.b = 0x10 - edx_23.b
                    *(arg1 + 0x16bc) = edx_23 - 9
                    *(arg1 + 0x16b8) = edi_18 u>> ecx_32.b
            else
                uint32_t edi_10 = zx.d(*(arg1 + 0xac2))
                arg4 = edi_10
                int32_t ecx_23
                
                if (ecx_19 s<= 0x10 - edi_10)
                    edi_10.w = *(arg1 + 0xac0)
                    edi_10.w <<= ecx_19.b
                    *(arg1 + 0x16b8) |= edi_10.w
                    ecx_23 = ecx_19 + arg4
                else
                    int16_t edi_11 = *(arg1 + 0xac0)
                    char* ecx_20 = *(arg1 + 8)
                    *(arg1 + 0x16b8) |= edi_11 << ecx_19.b
                    ecx_20[*(arg1 + 0x14)] = *(arg1 + 0x16b8)
                    *(arg1 + 0x14) += 1
                    (*(arg1 + 0x14))[*(arg1 + 8)] = *(arg1 + 0x16b9)
                    int32_t ebx_20 = *(arg1 + 0x16bc)
                    *(arg1 + 0x14) += 1
                    int32_t ecx_21
                    ecx_21.b = 0x10
                    ecx_21.b = 0x10 - ebx_20.b
                    ecx_23 = ebx_20 + arg4 - 0x10
                    *(arg1 + 0x16b8) = edi_11 u>> ecx_21.b
                
                *(arg1 + 0x16bc) = ecx_23
                
                if (ecx_23 s<= 0xd)
                    *(arg1 + 0x16b8) |= (j_1.w - 3) << ecx_23.b
                    *(arg1 + 0x16bc) = ecx_23 + 3
                else
                    uint16_t edi_15 = j_1.w - 3
                    j_1.w = edi_15
                    j_1.w <<= ecx_23.b
                    char* ecx_24 = *(arg1 + 8)
                    *(arg1 + 0x16b8) |= j_1.w
                    ecx_24[*(arg1 + 0x14)] = *(arg1 + 0x16b8)
                    *(arg1 + 0x14) += 1
                    (*(arg1 + 0x14))[*(arg1 + 8)] = *(arg1 + 0x16b9)
                    int32_t edx_14 = *(arg1 + 0x16bc)
                    *(arg1 + 0x14) += 1
                    char* ecx_25
                    ecx_25.b = 0x10
                    ecx_25.b = 0x10 - edx_14.b
                    *(arg1 + 0x16bc) = edx_14 - 0xd
                    *(arg1 + 0x16b8) = edi_15 u>> ecx_25.b
        else
            if (esi_2 != var_c)
                uint32_t edi_2 = zx.d(*(arg1 + (esi_2 << 2) + 0xa7e))
                int32_t ecx_6 = *(arg1 + 0x16bc)
                
                if (ecx_6 s<= 0x10 - edi_2)
                    int32_t ebx_8
                    ebx_8.w = *(arg1 + (esi_2 << 2) + 0xa7c)
                    ebx_8.w <<= ecx_6.b
                    *(arg1 + 0x16b8) |= ebx_8.w
                    *(arg1 + 0x16bc) = ecx_6 + edi_2
                else
                    uint16_t edi_3 = *(arg1 + (esi_2 << 2) + 0xa7c)
                    j_1.w = edi_3
                    j_1.w <<= ecx_6.b
                    char* ecx_7 = *(arg1 + 8)
                    *(arg1 + 0x16b8) |= j_1.w
                    ecx_7[*(arg1 + 0x14)] = *(arg1 + 0x16b8)
                    *(arg1 + 0x14) += 1
                    (*(arg1 + 0x14))[*(arg1 + 8)] = *(arg1 + 0x16b9)
                    int32_t edx_5 = *(arg1 + 0x16bc)
                    *(arg1 + 0x14) += 1
                    char* ecx_8
                    ecx_8.b = 0x10
                    ecx_8.b = 0x10 - edx_5.b
                    *(arg1 + 0x16bc) = edx_5 + edi_2 - 0x10
                    j_1 = arg4
                    *(arg1 + 0x16b8) = edi_3 u>> ecx_8.b
                
                j_1 -= 1
            
            uint32_t edi_8 = zx.d(*(arg1 + 0xabe))
            int32_t ecx_11 = *(arg1 + 0x16bc)
            arg4 = edi_8
            int32_t ecx_15
            
            if (ecx_11 s<= 0x10 - edi_8)
                edi_8.w = *(arg1 + 0xabc)
                edi_8.w <<= ecx_11.b
                *(arg1 + 0x16b8) |= edi_8.w
                ecx_15 = ecx_11 + arg4
            else
                int16_t edi_4 = *(arg1 + 0xabc)
                char* ecx_12 = *(arg1 + 8)
                *(arg1 + 0x16b8) |= edi_4 << ecx_11.b
                ecx_12[*(arg1 + 0x14)] = *(arg1 + 0x16b8)
                *(arg1 + 0x14) += 1
                (*(arg1 + 0x14))[*(arg1 + 8)] = *(arg1 + 0x16b9)
                int32_t ebx_14 = *(arg1 + 0x16bc)
                *(arg1 + 0x14) += 1
                int32_t ecx_13
                ecx_13.b = 0x10
                ecx_13.b = 0x10 - ebx_14.b
                ecx_15 = ebx_14 + arg4 - 0x10
                *(arg1 + 0x16b8) = edi_4 u>> ecx_13.b
            
            *(arg1 + 0x16bc) = ecx_15
            
            if (ecx_15 s<= 0xe)
                *(arg1 + 0x16b8) |= (j_1.w - 3) << ecx_15.b
                *(arg1 + 0x16bc) = ecx_15 + 2
            else
                uint16_t edi_9 = j_1.w - 3
                j_1.w = edi_9
                j_1.w <<= ecx_15.b
                char* ecx_16 = *(arg1 + 8)
                *(arg1 + 0x16b8) |= j_1.w
                ecx_16[*(arg1 + 0x14)] = *(arg1 + 0x16b8)
                *(arg1 + 0x14) += 1
                (*(arg1 + 0x14))[*(arg1 + 8)] = *(arg1 + 0x16b9)
                int32_t edx_9 = *(arg1 + 0x16bc)
                *(arg1 + 0x14) += 1
                char* ecx_17
                ecx_17.b = 0x10
                ecx_17.b = 0x10 - edx_9.b
                *(arg1 + 0x16bc) = edx_9 - 0xe
                *(arg1 + 0x16b8) = edi_9 u>> ecx_17.b
        
        j_1 = 0
        var_c = esi_2
        
        if (var_14 == 0)
            ecx = 0x8a
            edi = 3
        else if (esi_2 != var_14)
            ecx = 7
            edi = 4
        else
            ecx = 6
            edi = 3
    
    var_10_1 += 4
    i = i_1
    i_1 -= 1
while (i != 1)
