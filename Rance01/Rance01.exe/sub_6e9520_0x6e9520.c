// 函数: sub_6e9520
// 地址: 0x6e9520
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int16_t* edx = arg1
char* result = arg4
int32_t var_50 = 0
void* var_38 = arg3
int16_t* var_3c = arg2
bool cond:5_1

do
    int16_t* esi_2 = var_38
    int32_t ebx_1 = sx.d(*esi_2)
    int32_t ecx_3 = (ebx_1 * 0x167 - 0xb2f5) s>> 8
    int32_t edi_1 = sx.d(*var_3c)
    int32_t ecx_7 = (edi_1 * 0x58 + ebx_1 * 0xb7 - 0x87f6) s>> 8
    int32_t ecx_10 = (edi_1 * 0x1c6 - 0xe251) s>> 8
    int32_t edi_2 = sx.d(esi_2[1])
    int32_t ecx_13 = (edi_2 * 0x167 - 0xb2f5) s>> 8
    int32_t ebx_3 = sx.d(var_3c[1])
    int32_t ecx_17 = (ebx_3 * 0x58 + edi_2 * 0xb7 - 0x87f6) s>> 8
    int32_t ecx_20 = (ebx_3 * 0x1c6 - 0xe251) s>> 8
    int32_t edi_4 = sx.d(esi_2[2])
    int32_t ecx_23 = (edi_4 * 0x167 - 0xb2f5) s>> 8
    int32_t ecx_25 = sx.d(var_3c[2])
    int32_t ebx_6 = (ecx_25 * 0x58 + edi_4 * 0xb7 - 0x87f6) s>> 8
    int32_t ecx_28 = (ecx_25 * 0x1c6 - 0xe251) s>> 8
    int32_t edi_6 = sx.d(esi_2[3])
    int32_t ecx_31 = (edi_6 * 0x167 - 0xb2f5) s>> 8
    int32_t ebx_7 = sx.d(var_3c[3])
    int32_t ecx_35 = (ebx_7 * 0x58 + edi_6 * 0xb7 - 0x87f6) s>> 8
    int32_t ecx_38 = (ebx_7 * 0x1c6 - 0xe251) s>> 8
    int32_t ecx_39 = sx.d(*edx)
    int32_t ebx_9 = ecx_10 + ecx_39
    var_3c = &var_3c[8]
    var_38 = &esi_2[8]
    int32_t var_1c_1 = ebx_9
    
    if (ebx_9 s> 0xff)
        ebx_9 = 0xff
        int32_t var_1c_2 = 0xff
    else if (ebx_9 s< 0)
        ebx_9 = 0
        int32_t var_1c_3 = 0
    
    *result = ebx_9.b
    int32_t ebx_11 = ecx_39 - ecx_7
    int32_t var_1c_4 = ebx_11
    
    if (ebx_11 s> 0xff)
        ebx_11 = 0xff
        int32_t var_1c_5 = 0xff
    else if (ebx_11 s< 0)
        ebx_11 = 0
        int32_t var_1c_6 = 0
    
    result[1] = ebx_11.b
    int32_t ecx_40 = ecx_39 + ecx_3
    
    if (ecx_40 s> 0xff)
        ecx_40 = 0xff
    else if (ecx_40 s< 0)
        ecx_40 = 0
    
    result[2] = ecx_40.b
    int32_t ecx_41 = sx.d(edx[1])
    int32_t ebx_13 = ecx_10 + ecx_41
    int32_t var_14_2 = ebx_13
    
    if (ebx_13 s> 0xff)
        ebx_13 = 0xff
        int32_t var_14_3 = 0xff
    else if (ebx_13 s< 0)
        ebx_13 = 0
        int32_t var_14_4 = 0
    
    result[3] = ebx_13.b
    int32_t ebx_16 = neg.d(ecx_7) + ecx_41
    int32_t var_18_2 = ebx_16
    
    if (ebx_16 s> 0xff)
        ebx_16 = 0xff
        int32_t var_18_3 = 0xff
    else if (ebx_16 s< 0)
        ebx_16 = 0
        int32_t var_18_4 = 0
    
    result[4] = ebx_16.b
    int32_t ecx_42 = ecx_41 + ecx_3
    
    if (ecx_42 s> 0xff)
        ecx_42 = 0xff
    else if (ecx_42 s< 0)
        ecx_42 = 0
    
    result[5] = ecx_42.b
    int32_t ecx_43 = sx.d(edx[2])
    int32_t ebx_18 = ecx_43 + ecx_20
    
    if (ebx_18 s> 0xff)
        ebx_18 = 0xff
    else if (ebx_18 s< 0)
        ebx_18 = 0
    
    result[6] = ebx_18.b
    int32_t ebx_20 = ecx_43 - ecx_17
    
    if (ebx_20 s> 0xff)
        ebx_20 = 0xff
    else if (ebx_20 s< 0)
        ebx_20 = 0
    
    result[7] = ebx_20.b
    int32_t ecx_44 = ecx_43 + ecx_13
    
    if (ecx_44 s> 0xff)
        ecx_44 = 0xff
    else if (ecx_44 s< 0)
        ecx_44 = 0
    
    result[8] = ecx_44.b
    int32_t ecx_45 = sx.d(edx[3])
    int32_t ebx_22 = ecx_20 + ecx_45
    int32_t var_20_2 = ebx_22
    
    if (ebx_22 s> 0xff)
        ebx_22 = 0xff
        int32_t var_20_3 = 0xff
    else if (ebx_22 s< 0)
        ebx_22 = 0
        int32_t var_20_4 = 0
    
    result[9] = ebx_22.b
    int32_t ebx_25 = neg.d(ecx_17) + ecx_45
    int32_t var_28_2 = ebx_25
    
    if (ebx_25 s> 0xff)
        ebx_25 = 0xff
        int32_t var_28_3 = 0xff
    else if (ebx_25 s< 0)
        ebx_25 = 0
        int32_t var_28_4 = 0
    
    result[0xa] = ebx_25.b
    int32_t ecx_46 = ecx_45 + ecx_13
    
    if (ecx_46 s> 0xff)
        ecx_46 = 0xff
    else if (ecx_46 s< 0)
        ecx_46 = 0
    
    result[0xb] = ecx_46.b
    int32_t ecx_47 = sx.d(edx[4])
    int32_t ebx_27 = ecx_47 + ecx_28
    
    if (ebx_27 s> 0xff)
        ebx_27 = 0xff
    else if (ebx_27 s< 0)
        ebx_27 = 0
    
    result[0xc] = ebx_27.b
    int32_t ebx_29 = ecx_47 - ebx_6
    
    if (ebx_29 s> 0xff)
        ebx_29 = 0xff
    else if (ebx_29 s< 0)
        ebx_29 = 0
    
    result[0xd] = ebx_29.b
    int32_t ecx_48 = ecx_47 + ecx_23
    
    if (ecx_48 s> 0xff)
        ecx_48 = 0xff
    else if (ecx_48 s< 0)
        ecx_48 = 0
    
    result[0xe] = ecx_48.b
    int32_t ecx_49 = sx.d(edx[5])
    int32_t ebx_31 = ecx_28 + ecx_49
    int32_t var_24_2 = ebx_31
    
    if (ebx_31 s> 0xff)
        ebx_31 = 0xff
        int32_t var_24_3 = 0xff
    else if (ebx_31 s< 0)
        ebx_31 = 0
        int32_t var_24_4 = 0
    
    result[0xf] = ebx_31.b
    int32_t ebx_34 = neg.d(ebx_6) + ecx_49
    int32_t var_30_2 = ebx_34
    
    if (ebx_34 s> 0xff)
        ebx_34 = 0xff
        int32_t var_30_3 = 0xff
    else if (ebx_34 s< 0)
        ebx_34 = 0
        int32_t var_30_4 = 0
    
    result[0x10] = ebx_34.b
    int32_t ecx_50 = ecx_49 + ecx_23
    
    if (ecx_50 s> 0xff)
        ecx_50 = 0xff
    else if (ecx_50 s< 0)
        ecx_50 = 0
    
    result[0x11] = ecx_50.b
    int32_t ecx_51 = sx.d(edx[6])
    int32_t ebx_36 = ecx_51 + ecx_38
    
    if (ebx_36 s> 0xff)
        ebx_36 = 0xff
    else if (ebx_36 s< 0)
        ebx_36 = 0
    
    result[0x12] = ebx_36.b
    int32_t ebx_38 = ecx_51 - ecx_35
    
    if (ebx_38 s> 0xff)
        ebx_38 = 0xff
    else if (ebx_38 s< 0)
        ebx_38 = 0
    
    result[0x13] = ebx_38.b
    int32_t ecx_52 = ecx_51 + ecx_31
    
    if (ecx_52 s> 0xff)
        ecx_52 = 0xff
    else if (ecx_52 s< 0)
        ecx_52 = 0
    
    result[0x14] = ecx_52.b
    int32_t ecx_53 = sx.d(edx[7])
    int32_t ebx_40 = ecx_38 + ecx_53
    int32_t var_2c_2 = ebx_40
    
    if (ebx_40 s> 0xff)
        ebx_40 = 0xff
        int32_t var_2c_3 = 0xff
    else if (ebx_40 s< 0)
        ebx_40 = 0
        int32_t var_2c_4 = 0
    
    result[0x15] = ebx_40.b
    int32_t ebx_43 = neg.d(ecx_35) + ecx_53
    int32_t var_34_2 = ebx_43
    
    if (ebx_43 s> 0xff)
        ebx_43 = 0xff
        int32_t var_34_3 = 0xff
    else if (ebx_43 s< 0)
        ebx_43 = 0
        int32_t var_34_4 = 0
    
    result[0x16] = ebx_43.b
    int32_t ecx_54 = ecx_53 + ecx_31
    
    if (ecx_54 s> 0xff)
        ecx_54 = 0xff
    else if (ecx_54 s< 0)
        ecx_54 = 0
    
    edx = &edx[8]
    result[0x17] = ecx_54.b
    result = &result[arg5]
    cond:5_1 = var_50 + 1 s< 8
    var_50 += 1
while (cond:5_1)
return result
