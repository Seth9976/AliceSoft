// 函数: sub_6eb1d0
// 地址: 0x6eb1d0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int16_t* ecx = arg2
int16_t* edx = arg3
int32_t ebp = arg5[1]
int32_t ebx_2 = ebp * arg6 + arg4
void var_84
void var_64
void var_44
int32_t i

for (i = 0; i s< 4; i += 1)
    int32_t ebp_1 = sx.d(*edx)
    int32_t edi_1 = sx.d(*ecx)
    *(&var_84 + (i << 3)) = ((ebp_1 * 0x167 - 0xb2f5) s>> 8).w
    *(&var_64 + (i << 3)) = ((edi_1 * 0x58 + ebp_1 * 0xb7 - 0x87f6) s>> 8).w
    *(&var_44 + (i << 3)) = ((edi_1 * 0x1c6 - 0xe251) s>> 8).w
    int32_t ebp_8 = sx.d(edx[1])
    int32_t edi_2 = sx.d(ecx[1])
    int16_t var_82[0xf]
    var_82[i * 4] = ((ebp_8 * 0x167 - 0xb2f5) s>> 8).w
    int16_t var_62[0xf]
    var_62[i * 4] = ((edi_2 * 0x58 + ebp_8 * 0xb7 - 0x87f6) s>> 8).w
    int32_t edi_3 = sx.d(ecx[2])
    int16_t var_42[0xf]
    var_42[i * 4] = ((edi_2 * 0x1c6 - 0xe251) s>> 8).w
    int32_t ebp_15 = sx.d(edx[2])
    var_80
    *(&var_80 + (i << 3)) = ((ebp_15 * 0x167 - 0xb2f5) s>> 8).w
    var_60
    *(&var_60 + (i << 3)) = ((edi_3 * 0x58 + ebp_15 * 0xb7 - 0x87f6) s>> 8).w
    var_40
    *(&var_40 + (i << 3)) = ((edi_3 * 0x1c6 - 0xe251) s>> 8).w
    int32_t ebp_22 = sx.d(edx[3])
    int32_t edi_4 = sx.d(ecx[3])
    var_7e
    *(&var_7e + (i << 3)) = ((ebp_22 * 0x167 - 0xb2f5) s>> 8).w
    ecx = &ecx[8]
    var_5e
    *(&var_5e + (i << 3)) = ((edi_4 * 0x58 + ebp_22 * 0xb7 - 0x87f6) s>> 8).w
    edx = &edx[8]
    var_3e
    *(&var_3e + (i << 3)) = ((edi_4 * 0x1c6 - 0xe251) s>> 8).w

int32_t ebp_29 = ebp
int32_t* esi_18 = arg5
int32_t ecx_1 = esi_18[3]

if (ebp_29 s< ecx_1)
    int32_t edx_1 = esi_18[2]
    i = ebp_29 << 4
    
    do
        int32_t edi_6 = *esi_18
        
        if (edi_6 s< edx_1)
            int32_t var_14_1 = ebx_2
            
            do
                int32_t eax_2 = sx.d(*(arg1 + i + (edi_6 << 1)))
                int32_t ecx_4 = (adc.d(edi_6 - 0x80000000, 0x80000000, edi_6 u>= 0x80000000) s>> 1)
                    + (adc.d(ebp_29 - 0x80000000, 0x80000000, ebp_29 u>= 0x80000000) s>> 1 << 2)
                int32_t edx_12 = sx.d(*(&var_84 + (ecx_4 << 1))) + eax_2
                
                if (edx_12 s> 0xff)
                    edx_12 = 0xff
                else if (edx_12 s< 0)
                    edx_12 = 0
                
                ebx_2 = var_14_1
                *(ebx_2 + (edi_6 << 2)) = edx_12.b
                int32_t edx_15 = neg.d(sx.d(*(&var_64 + (ecx_4 << 1)))) + eax_2
                
                if (edx_15 s> 0xff)
                    edx_15 = 0xff
                else if (edx_15 s< 0)
                    edx_15 = 0
                
                int32_t ecx_5 = sx.d(*(&var_44 + (ecx_4 << 1)))
                *(ebx_2 + (edi_6 << 2) + 1) = edx_15.b
                int32_t eax_3 = eax_2 + ecx_5
                
                if (eax_3 s> 0xff)
                    eax_3 = 0xff
                else if (eax_3 s< 0)
                    eax_3 = 0
                
                *(ebx_2 + (edi_6 << 2) + 2) = eax_3.b
                *(ebx_2 + (edi_6 << 2) + 3) = 0xff
                edi_6 += 1
                edx_1 = arg5[2]
            while (edi_6 s< edx_1)
            
            esi_18 = arg5
            ecx_1 = esi_18[3]
        
        ebx_2 += arg6
        i += 0x10
        ebp_29 += 1
    while (ebp_29 s< ecx_1)

return i
