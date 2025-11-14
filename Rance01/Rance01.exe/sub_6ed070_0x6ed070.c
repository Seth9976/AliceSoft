// 函数: sub_6ed070
// 地址: 0x6ed070
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int16_t* edx = arg1
char* result = arg5
int32_t var_50 = 0
void* var_24 = arg4
int16_t* var_3c = arg3
int16_t* var_38 = arg2
bool cond:6_1

do
    int32_t esi_1 = sx.d(*var_3c)
    int32_t ecx_4 = (esi_1 * 0x167 - 0xb2f5) s>> 8
    int32_t ebp_1 = sx.d(*var_38)
    int32_t ebx_4 = (ebp_1 * 0x58 + esi_1 * 0xb7 - 0x87f6) s>> 8
    int32_t ebx_7 = (ebp_1 * 0x1c6 - 0xe251) s>> 8
    int32_t esi_3 = sx.d(var_3c[1])
    int32_t ebx_11 = (esi_3 * 0x167 - 0xb2f5) s>> 8
    int32_t ebp_2 = sx.d(var_38[1])
    int32_t ebx_15 = (ebp_2 * 0x58 + esi_3 * 0xb7 - 0x87f6) s>> 8
    int32_t ebx_18 = (ebp_2 * 0x1c6 - 0xe251) s>> 8
    int32_t ebp_3 = sx.d(var_3c[2])
    int32_t ebx_22 = (ebp_3 * 0x167 - 0xb2f5) s>> 8
    int32_t edi_1 = sx.d(var_38[2])
    int32_t ebx_26 = (edi_1 * 0x58 + ebp_3 * 0xb7 - 0x87f6) s>> 8
    int32_t ebx_29 = (edi_1 * 0x1c6 - 0xe251) s>> 8
    int32_t esi_5 = sx.d(var_3c[3])
    int32_t ebx_33 = (esi_5 * 0x167 - 0xb2f5) s>> 8
    int32_t ebp_5 = sx.d(var_38[3])
    int32_t ebx_37 = (ebp_5 * 0x58 + esi_5 * 0xb7 - 0x87f6) s>> 8
    int32_t ebx_40 = (ebp_5 * 0x1c6 - 0xe251) s>> 8
    var_38 = &var_38[8]
    int32_t ebx_41 = sx.d(*edx)
    var_3c = &var_3c[8]
    int32_t ebx_42 = ecx_4 + ebx_41
    
    if (ebx_42 s> 0xff)
        ebx_42 = 0xff
    else if (ebx_42 s< 0)
        ebx_42 = 0
    
    *result = neg.b(ebx_42.b) - 1
    int32_t ebx_45 = ebx_41 - ebx_4
    
    if (ebx_45 s> 0xff)
        ebx_45 = 0xff
    else if (ebx_45 s< 0)
        ebx_45 = 0
    
    result[1] = neg.b(ebx_45.b) - 1
    int32_t ebx_48 = ebx_41 + ebx_7
    int32_t var_14_2 = ebx_48
    
    if (ebx_48 s> 0xff)
        ebx_48 = 0xff
        int32_t var_14_3 = 0xff
    else if (ebx_48 s< 0)
        ebx_48 = 0
        int32_t var_14_4 = 0
    
    char* ebp_6 = var_24
    result[2] = neg.b(ebx_48.b) - 1
    result[3] = *ebp_6
    int32_t ebx_50 = sx.d(edx[1])
    int32_t ecx_5 = ecx_4 + ebx_50
    
    if (ecx_5 s> 0xff)
        ecx_5 = 0xff
    else if (ecx_5 s< 0)
        ecx_5 = 0
    
    result[4] = neg.b(ecx_5.b) - 1
    int32_t ecx_9 = neg.d(ebx_4) + ebx_50
    int32_t var_18_2 = ecx_9
    
    if (ecx_9 s> 0xff)
        ecx_9 = 0xff
        int32_t var_18_3 = 0xff
    else if (ecx_9 s< 0)
        ecx_9 = 0
        int32_t var_18_4 = 0
    
    result[5] = neg.b(ecx_9.b) - 1
    int32_t ebx_51 = ebx_50 + ebx_7
    
    if (ebx_51 s> 0xff)
        ebx_51 = 0xff
    else if (ebx_51 s< 0)
        ebx_51 = 0
    
    result[6] = neg.b(ebx_51.b) - 1
    ebx_51.b = ebp_6[2]
    result[7] = ebx_51.b
    int32_t ecx_12 = sx.d(edx[2])
    int32_t ebx_53 = ecx_12 + ebx_11
    
    if (ebx_53 s> 0xff)
        ebx_53 = 0xff
    else if (ebx_53 s< 0)
        ebx_53 = 0
    
    result[8] = neg.b(ebx_53.b) - 1
    int32_t ebx_56 = ecx_12 - ebx_15
    
    if (ebx_56 s> 0xff)
        ebx_56 = 0xff
    else if (ebx_56 s< 0)
        ebx_56 = 0
    
    result[9] = neg.b(ebx_56.b) - 1
    int32_t ecx_13 = ecx_12 + ebx_18
    
    if (ecx_13 s> 0xff)
        ecx_13 = 0xff
    else if (ecx_13 s< 0)
        ecx_13 = 0
    
    result[0xa] = neg.b(ecx_13.b) - 1
    result[0xb] = ebp_6[4]
    int32_t ecx_15 = sx.d(edx[3])
    int32_t ebx_59 = ebx_11 + ecx_15
    int32_t var_1c_2 = ebx_59
    
    if (ebx_59 s> 0xff)
        ebx_59 = 0xff
        int32_t var_1c_3 = 0xff
    else if (ebx_59 s< 0)
        ebx_59 = 0
        int32_t var_1c_4 = 0
    
    result[0xc] = neg.b(ebx_59.b) - 1
    int32_t ebx_63 = neg.d(ebx_15) + ecx_15
    int32_t var_20_2 = ebx_63
    
    if (ebx_63 s> 0xff)
        ebx_63 = 0xff
        int32_t var_20_3 = 0xff
    else if (ebx_63 s< 0)
        ebx_63 = 0
        int32_t var_20_4 = 0
    
    result[0xd] = neg.b(ebx_63.b) - 1
    int32_t ecx_16 = ecx_15 + ebx_18
    
    if (ecx_16 s> 0xff)
        ecx_16 = 0xff
    else if (ecx_16 s< 0)
        ecx_16 = 0
    
    result[0xe] = neg.b(ecx_16.b) - 1
    result[0xf] = ebp_6[6]
    int32_t ecx_18 = sx.d(edx[4])
    int32_t ebx_66 = ecx_18 + ebx_22
    
    if (ebx_66 s> 0xff)
        ebx_66 = 0xff
    else if (ebx_66 s< 0)
        ebx_66 = 0
    
    result[0x10] = neg.b(ebx_66.b) - 1
    int32_t ebx_69 = ecx_18 - ebx_26
    
    if (ebx_69 s> 0xff)
        ebx_69 = 0xff
    else if (ebx_69 s< 0)
        ebx_69 = 0
    
    result[0x11] = neg.b(ebx_69.b) - 1
    int32_t ecx_19 = ecx_18 + ebx_29
    
    if (ecx_19 s> 0xff)
        ecx_19 = 0xff
    else if (ecx_19 s< 0)
        ecx_19 = 0
    
    result[0x12] = neg.b(ecx_19.b) - 1
    result[0x13] = ebp_6[8]
    int32_t ecx_21 = sx.d(edx[5])
    int32_t ebx_72 = ebx_22 + ecx_21
    int32_t var_28_2 = ebx_72
    
    if (ebx_72 s> 0xff)
        ebx_72 = 0xff
        int32_t var_28_3 = 0xff
    else if (ebx_72 s< 0)
        ebx_72 = 0
        int32_t var_28_4 = 0
    
    result[0x14] = neg.b(ebx_72.b) - 1
    int32_t ebx_76 = neg.d(ebx_26) + ecx_21
    int32_t var_2c_2 = ebx_76
    
    if (ebx_76 s> 0xff)
        ebx_76 = 0xff
        int32_t var_2c_3 = 0xff
    else if (ebx_76 s< 0)
        ebx_76 = 0
        int32_t var_2c_4 = 0
    
    result[0x15] = neg.b(ebx_76.b) - 1
    int32_t ecx_22 = ecx_21 + ebx_29
    
    if (ecx_22 s> 0xff)
        ecx_22 = 0xff
    else if (ecx_22 s< 0)
        ecx_22 = 0
    
    result[0x16] = neg.b(ecx_22.b) - 1
    result[0x17] = ebp_6[0xa]
    int32_t ecx_24 = sx.d(edx[6])
    int32_t ebx_79 = ecx_24 + ebx_33
    
    if (ebx_79 s> 0xff)
        ebx_79 = 0xff
    else if (ebx_79 s< 0)
        ebx_79 = 0
    
    result[0x18] = neg.b(ebx_79.b) - 1
    int32_t ebx_82 = ecx_24 - ebx_37
    
    if (ebx_82 s> 0xff)
        ebx_82 = 0xff
    else if (ebx_82 s< 0)
        ebx_82 = 0
    
    result[0x19] = neg.b(ebx_82.b) - 1
    int32_t ecx_25 = ecx_24 + ebx_40
    
    if (ecx_25 s> 0xff)
        ecx_25 = 0xff
    else if (ecx_25 s< 0)
        ecx_25 = 0
    
    result[0x1a] = neg.b(ecx_25.b) - 1
    result[0x1b] = ebp_6[0xc]
    int32_t ecx_27 = sx.d(edx[7])
    int32_t ebx_85 = ebx_33 + ecx_27
    int32_t var_30_2 = ebx_85
    
    if (ebx_85 s> 0xff)
        ebx_85 = 0xff
        int32_t var_30_3 = 0xff
    else if (ebx_85 s< 0)
        ebx_85 = 0
        int32_t var_30_4 = 0
    
    result[0x1c] = neg.b(ebx_85.b) - 1
    int32_t ebx_89 = neg.d(ebx_37) + ecx_27
    int32_t var_34_2 = ebx_89
    
    if (ebx_89 s> 0xff)
        ebx_89 = 0xff
        int32_t var_34_3 = 0xff
    else if (ebx_89 s< 0)
        ebx_89 = 0
        int32_t var_34_4 = 0
    
    result[0x1d] = neg.b(ebx_89.b) - 1
    int32_t ecx_28 = ecx_27 + ebx_40
    
    if (ecx_28 s> 0xff)
        ecx_28 = 0xff
    else if (ecx_28 s< 0)
        ecx_28 = 0
    
    edx = &edx[8]
    result[0x1e] = neg.b(ecx_28.b) - 1
    result[0x1f] = ebp_6[0xe]
    result = &result[arg6]
    cond:6_1 = var_50 + 1 s< 8
    var_24 = &ebp_6[0x10]
    var_50 += 1
while (cond:6_1)
return result
