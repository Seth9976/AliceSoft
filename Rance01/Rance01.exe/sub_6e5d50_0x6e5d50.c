// 函数: sub_6e5d50
// 地址: 0x6e5d50
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int16_t* ecx = arg2
int16_t* edx = arg3
int32_t ebp = arg5[1]
int32_t ebx_2 = ebp * arg6 + arg4
void var_8c
void var_6c
void var_4c
int32_t i

for (i = 0; i s< 4; i += 1)
    int32_t ebp_1 = sx.d(*edx)
    int32_t edi_1 = sx.d(*ecx)
    *(&var_8c + (i << 3)) = ((ebp_1 * 0x167 - 0xb2f5) s>> 8).w
    *(&var_6c + (i << 3)) = ((edi_1 * 0x58 + ebp_1 * 0xb7 - 0x87f6) s>> 8).w
    *(&var_4c + (i << 3)) = ((edi_1 * 0x1c6 - 0xe251) s>> 8).w
    int32_t ebp_8 = sx.d(edx[1])
    int32_t edi_2 = sx.d(ecx[1])
    int16_t var_8a[0xf]
    var_8a[i * 4] = ((ebp_8 * 0x167 - 0xb2f5) s>> 8).w
    int16_t var_6a[0xf]
    var_6a[i * 4] = ((edi_2 * 0x58 + ebp_8 * 0xb7 - 0x87f6) s>> 8).w
    int32_t edi_3 = sx.d(ecx[2])
    int16_t var_4a[0xf]
    var_4a[i * 4] = ((edi_2 * 0x1c6 - 0xe251) s>> 8).w
    int32_t ebp_15 = sx.d(edx[2])
    var_88
    *(&var_88 + (i << 3)) = ((ebp_15 * 0x167 - 0xb2f5) s>> 8).w
    var_68
    *(&var_68 + (i << 3)) = ((edi_3 * 0x58 + ebp_15 * 0xb7 - 0x87f6) s>> 8).w
    var_48
    *(&var_48 + (i << 3)) = ((edi_3 * 0x1c6 - 0xe251) s>> 8).w
    int32_t ebp_22 = sx.d(edx[3])
    int32_t edi_4 = sx.d(ecx[3])
    var_86
    *(&var_86 + (i << 3)) = ((ebp_22 * 0x167 - 0xb2f5) s>> 8).w
    ecx = &ecx[8]
    var_66
    *(&var_66 + (i << 3)) = ((edi_4 * 0x58 + ebp_22 * 0xb7 - 0x87f6) s>> 8).w
    edx = &edx[8]
    var_46
    *(&var_46 + (i << 3)) = ((edi_4 * 0x1c6 - 0xe251) s>> 8).w

int32_t ebp_29 = ebp
int32_t* esi_18 = arg5
int32_t ecx_1 = esi_18[3]

if (ebp_29 s< ecx_1)
    int32_t edx_1 = esi_18[2]
    i = ebp_29 << 4
    
    do
        int32_t edi_6 = *esi_18
        
        if (edi_6 s< edx_1)
            int32_t var_1c_1 = ebx_2
            
            do
                int32_t eax_2 = sx.d(*(arg1 + i + (edi_6 << 1)))
                int32_t edx_7 = (adc.d(edi_6 - 0x80000000, 0x80000000, edi_6 u>= 0x80000000) s>> 1)
                    + (adc.d(ebp_29 - 0x80000000, 0x80000000, ebp_29 u>= 0x80000000) s>> 1 << 2)
                int32_t ecx_4 = sx.d(*(&var_8c + (edx_7 << 1))) + eax_2
                int32_t var_18_1 = ecx_4
                int32_t edx_8
                
                if (ecx_4 s<= 0xff)
                    edx_8 = ecx_4
                    
                    if (edx_8 s< 0)
                        edx_8 = 0
                        int32_t var_18_3 = 0
                else
                    edx_8 = 0xff
                    int32_t var_18_2 = 0xff
                
                char* ecx_5 = edi_6 * 3
                int32_t ebx_3 = sx.d(*(&var_6c + (edx_7 << 1)))
                ecx_5[var_1c_1] = edx_8.b
                int32_t ebx_5 = neg.d(ebx_3) + eax_2
                int32_t var_18_4 = ebx_5
                int32_t edx_9
                
                if (ebx_5 s<= 0xff)
                    edx_9 = ebx_5
                    
                    if (edx_9 s< 0)
                        edx_9 = 0
                        int32_t var_18_6 = 0
                else
                    edx_9 = 0xff
                    int32_t var_18_5 = 0xff
                
                ebx_2 = var_1c_1
                ecx_5[ebx_2 + 1] = edx_9.b
                int32_t eax_3 = eax_2 + sx.d(*(&var_4c + (edx_7 << 1)))
                
                if (eax_3 s> 0xff)
                    eax_3 = 0xff
                else if (eax_3 s< 0)
                    eax_3 = 0
                
                edi_6 += 1
                ecx_5[ebx_2 + 2] = eax_3.b
                edx_1 = arg5[2]
            while (edi_6 s< edx_1)
            
            esi_18 = arg5
            ecx_1 = esi_18[3]
        
        ebx_2 += arg6
        i += 0x10
        ebp_29 += 1
    while (ebp_29 s< ecx_1)

return i
