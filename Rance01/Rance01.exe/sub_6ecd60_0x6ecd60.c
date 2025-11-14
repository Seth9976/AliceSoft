// 函数: sub_6ecd60
// 地址: 0x6ecd60
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int16_t* ecx = arg2
int16_t* edx = arg3
int32_t ebp = arg6[1]
int32_t ebx_2 = ebp * arg7 + arg5
void var_ec
void var_ac
void var_6c
int32_t i

for (i = 0; i s< 8; i += 1)
    int32_t ebp_1 = sx.d(*edx)
    int32_t edi_1 = sx.d(*ecx)
    *(&var_ec + (i << 3)) = ((ebp_1 * 0x167 - 0xb2f5) s>> 8).w
    *(&var_ac + (i << 3)) = ((edi_1 * 0x58 + ebp_1 * 0xb7 - 0x87f6) s>> 8).w
    *(&var_6c + (i << 3)) = ((edi_1 * 0x1c6 - 0xe251) s>> 8).w
    int32_t ebp_8 = sx.d(edx[1])
    int32_t edi_2 = sx.d(ecx[1])
    int16_t var_ea[0x1f]
    var_ea[i * 4] = ((ebp_8 * 0x167 - 0xb2f5) s>> 8).w
    int16_t var_aa[0x1f]
    var_aa[i * 4] = ((edi_2 * 0x58 + ebp_8 * 0xb7 - 0x87f6) s>> 8).w
    int32_t edi_3 = sx.d(ecx[2])
    int16_t var_6a[0x1f]
    var_6a[i * 4] = ((edi_2 * 0x1c6 - 0xe251) s>> 8).w
    int32_t ebp_15 = sx.d(edx[2])
    var_e8
    *(&var_e8 + (i << 3)) = ((ebp_15 * 0x167 - 0xb2f5) s>> 8).w
    var_a8
    *(&var_a8 + (i << 3)) = ((edi_3 * 0x58 + ebp_15 * 0xb7 - 0x87f6) s>> 8).w
    var_68
    *(&var_68 + (i << 3)) = ((edi_3 * 0x1c6 - 0xe251) s>> 8).w
    int32_t ebp_22 = sx.d(edx[3])
    int32_t edi_4 = sx.d(ecx[3])
    var_e6
    *(&var_e6 + (i << 3)) = ((ebp_22 * 0x167 - 0xb2f5) s>> 8).w
    ecx = &ecx[8]
    var_a6
    *(&var_a6 + (i << 3)) = ((edi_4 * 0x58 + ebp_22 * 0xb7 - 0x87f6) s>> 8).w
    edx = &edx[8]
    var_66
    *(&var_66 + (i << 3)) = ((edi_4 * 0x1c6 - 0xe251) s>> 8).w

int32_t ebp_29 = ebp
int32_t ecx_1 = arg6[3]

if (ebp_29 s< ecx_1)
    int32_t edx_1 = arg6[2]
    i = ebp_29 << 4
    
    do
        int32_t esi_20 = *arg6
        
        if (esi_20 s< edx_1)
            int32_t esi_21 = esi_20
            
            do
                int32_t eax_2 = sx.d(*(i + arg1 + (esi_21 << 1)))
                int32_t ecx_5 = (adc.d(esi_21 - 0x80000000, 0x80000000, esi_21 u>= 0x80000000)
                    s>> 1) + ebp_29 * 4
                int32_t edx_9 = sx.d(*(&var_ec + (ecx_5 << 1))) + eax_2
                
                if (edx_9 s> 0xff)
                    edx_9 = 0xff
                else if (edx_9 s< 0)
                    edx_9 = 0
                
                *(ebx_2 + (esi_21 << 2)) = neg.b(edx_9.b) - 1
                int32_t edx_13 = neg.d(sx.d(*(&var_ac + (ecx_5 << 1)))) + eax_2
                
                if (edx_13 s> 0xff)
                    edx_13 = 0xff
                else if (edx_13 s< 0)
                    edx_13 = 0
                
                int32_t ecx_6 = sx.d(*(&var_6c + (ecx_5 << 1)))
                *(ebx_2 + (esi_21 << 2) + 1) = neg.b(edx_13.b) - 1
                int32_t eax_3 = eax_2 + ecx_6
                
                if (eax_3 s> 0xff)
                    eax_3 = 0xff
                else if (eax_3 s< 0)
                    eax_3 = 0
                
                *(ebx_2 + (esi_21 << 2) + 2) = neg.b(eax_3.b) - 1
                *(ebx_2 + (esi_21 << 2) + 3) = *(arg4 + i + (esi_21 << 1))
                esi_21 += 1
                edx_1 = arg6[2]
            while (esi_21 s< edx_1)
            
            ecx_1 = arg6[3]
        
        ebx_2 += arg7
        i += 0x10
        ebp_29 += 1
    while (ebp_29 s< ecx_1)

return i
