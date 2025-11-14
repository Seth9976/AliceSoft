// 函数: sub_6ea9b0
// 地址: 0x6ea9b0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int16_t* edx = arg1
char* result = arg4
int32_t i_1 = 0
int16_t* var_3c = arg3
int16_t* var_38 = arg2
int32_t i

do
    int32_t edi_1 = sx.d(*var_3c)
    int32_t ecx_3 = (edi_1 * 0x167 - 0xb2f5) s>> 8
    int32_t ebx_1 = sx.d(*var_38)
    int32_t ecx_7 = (ebx_1 * 0x58 + edi_1 * 0xb7 - 0x87f6) s>> 8
    int32_t ecx_10 = (ebx_1 * 0x1c6 - 0xe251) s>> 8
    int32_t ebx_2 = sx.d(var_3c[1])
    int32_t ecx_13 = (ebx_2 * 0x167 - 0xb2f5) s>> 8
    int32_t edi_3 = sx.d(var_38[1])
    int32_t ecx_17 = (edi_3 * 0x58 + ebx_2 * 0xb7 - 0x87f6) s>> 8
    int32_t ecx_20 = (edi_3 * 0x1c6 - 0xe251) s>> 8
    int32_t ecx_21 = sx.d(var_3c[2])
    int32_t ebx_6 = (ecx_21 * 0x167 - 0xb2f5) s>> 8
    int32_t ebx_8 = sx.d(var_38[2])
    int32_t ecx_24 = (ebx_8 * 0x58 + ecx_21 * 0xb7 - 0x87f6) s>> 8
    int32_t ecx_27 = (ebx_8 * 0x1c6 - 0xe251) s>> 8
    int32_t ebx_9 = sx.d(var_3c[3])
    int32_t ecx_30 = (ebx_9 * 0x167 - 0xb2f5) s>> 8
    int32_t ecx_32 = sx.d(var_38[3])
    int32_t ebx_12 = (ecx_32 * 0x58 + ebx_9 * 0xb7 - 0x87f6) s>> 8
    int32_t ecx_35 = (ecx_32 * 0x1c6 - 0xe251) s>> 8
    int32_t ecx_36 = sx.d(*edx)
    int32_t ebx_14 = ecx_3 + ecx_36
    int32_t var_1c_1 = ebx_14
    
    if (ebx_14 s> 0xff)
        ebx_14 = 0xff
        int32_t var_1c_2 = 0xff
    else if (ebx_14 s< 0)
        ebx_14 = 0
        int32_t var_1c_3 = 0
    
    *result = ebx_14.b
    int32_t ebx_16 = ecx_36 - ecx_7
    int32_t var_1c_4 = ebx_16
    
    if (ebx_16 s> 0xff)
        ebx_16 = 0xff
        int32_t var_1c_5 = 0xff
    else if (ebx_16 s< 0)
        ebx_16 = 0
        int32_t var_1c_6 = 0
    
    result[1] = ebx_16.b
    int32_t ecx_37 = ecx_36 + ecx_10
    
    if (ecx_37 s> 0xff)
        ecx_37 = 0xff
    else if (ecx_37 s< 0)
        ecx_37 = 0
    
    result[2] = ecx_37.b
    result[3] = 0xff
    int32_t ecx_38 = sx.d(edx[1])
    int32_t ebx_18 = ecx_3 + ecx_38
    int32_t var_14_2 = ebx_18
    
    if (ebx_18 s> 0xff)
        ebx_18 = 0xff
        int32_t var_14_3 = 0xff
    else if (ebx_18 s< 0)
        ebx_18 = 0
        int32_t var_14_4 = 0
    
    result[4] = ebx_18.b
    int32_t ebx_21 = neg.d(ecx_7) + ecx_38
    int32_t var_18_2 = ebx_21
    
    if (ebx_21 s> 0xff)
        ebx_21 = 0xff
        int32_t var_18_3 = 0xff
    else if (ebx_21 s< 0)
        ebx_21 = 0
        int32_t var_18_4 = 0
    
    result[5] = ebx_21.b
    int32_t ecx_39 = ecx_38 + ecx_10
    
    if (ecx_39 s> 0xff)
        ecx_39 = 0xff
    else if (ecx_39 s< 0)
        ecx_39 = 0
    
    result[6] = ecx_39.b
    result[7] = 0xff
    int32_t ecx_40 = sx.d(edx[2])
    int32_t ebx_23 = ecx_40 + ecx_13
    
    if (ebx_23 s> 0xff)
        ebx_23 = 0xff
    else if (ebx_23 s< 0)
        ebx_23 = 0
    
    result[8] = ebx_23.b
    int32_t ebx_25 = ecx_40 - ecx_17
    
    if (ebx_25 s> 0xff)
        ebx_25 = 0xff
    else if (ebx_25 s< 0)
        ebx_25 = 0
    
    result[9] = ebx_25.b
    int32_t ecx_41 = ecx_40 + ecx_20
    
    if (ecx_41 s> 0xff)
        ecx_41 = 0xff
    else if (ecx_41 s< 0)
        ecx_41 = 0
    
    result[0xa] = ecx_41.b
    result[0xb] = 0xff
    int32_t ecx_42 = sx.d(edx[3])
    int32_t ebx_27 = ecx_13 + ecx_42
    int32_t var_20_2 = ebx_27
    
    if (ebx_27 s> 0xff)
        ebx_27 = 0xff
        int32_t var_20_3 = 0xff
    else if (ebx_27 s< 0)
        ebx_27 = 0
        int32_t var_20_4 = 0
    
    result[0xc] = ebx_27.b
    int32_t ebx_30 = neg.d(ecx_17) + ecx_42
    int32_t var_24_2 = ebx_30
    
    if (ebx_30 s> 0xff)
        ebx_30 = 0xff
        int32_t var_24_3 = 0xff
    else if (ebx_30 s< 0)
        ebx_30 = 0
        int32_t var_24_4 = 0
    
    result[0xd] = ebx_30.b
    int32_t ecx_43 = ecx_42 + ecx_20
    
    if (ecx_43 s> 0xff)
        ecx_43 = 0xff
    else if (ecx_43 s< 0)
        ecx_43 = 0
    
    result[0xe] = ecx_43.b
    result[0xf] = 0xff
    int32_t ecx_44 = sx.d(edx[4])
    int32_t ebx_32 = ecx_44 + ebx_6
    
    if (ebx_32 s> 0xff)
        ebx_32 = 0xff
    else if (ebx_32 s< 0)
        ebx_32 = 0
    
    result[0x10] = ebx_32.b
    int32_t ebx_34 = ecx_44 - ecx_24
    
    if (ebx_34 s> 0xff)
        ebx_34 = 0xff
    else if (ebx_34 s< 0)
        ebx_34 = 0
    
    result[0x11] = ebx_34.b
    int32_t ecx_45 = ecx_44 + ecx_27
    
    if (ecx_45 s> 0xff)
        ecx_45 = 0xff
    else if (ecx_45 s< 0)
        ecx_45 = 0
    
    result[0x12] = ecx_45.b
    result[0x13] = 0xff
    int32_t ecx_46 = sx.d(edx[5])
    int32_t ebx_36 = ebx_6 + ecx_46
    int32_t var_28_2 = ebx_36
    
    if (ebx_36 s> 0xff)
        ebx_36 = 0xff
        int32_t var_28_3 = 0xff
    else if (ebx_36 s< 0)
        ebx_36 = 0
        int32_t var_28_4 = 0
    
    result[0x14] = ebx_36.b
    int32_t ebx_39 = neg.d(ecx_24) + ecx_46
    int32_t var_2c_2 = ebx_39
    
    if (ebx_39 s> 0xff)
        ebx_39 = 0xff
        int32_t var_2c_3 = 0xff
    else if (ebx_39 s< 0)
        ebx_39 = 0
        int32_t var_2c_4 = 0
    
    result[0x15] = ebx_39.b
    int32_t ecx_47 = ecx_46 + ecx_27
    
    if (ecx_47 s> 0xff)
        ecx_47 = 0xff
    else if (ecx_47 s< 0)
        ecx_47 = 0
    
    result[0x16] = ecx_47.b
    result[0x17] = 0xff
    int32_t ecx_48 = sx.d(edx[6])
    int32_t ebx_41 = ecx_48 + ecx_30
    
    if (ebx_41 s> 0xff)
        ebx_41 = 0xff
    else if (ebx_41 s< 0)
        ebx_41 = 0
    
    result[0x18] = ebx_41.b
    int32_t ebx_43 = ecx_48 - ebx_12
    
    if (ebx_43 s> 0xff)
        ebx_43 = 0xff
    else if (ebx_43 s< 0)
        ebx_43 = 0
    
    result[0x19] = ebx_43.b
    int32_t ecx_49 = ecx_48 + ecx_35
    
    if (ecx_49 s> 0xff)
        ecx_49 = 0xff
    else if (ecx_49 s< 0)
        ecx_49 = 0
    
    result[0x1a] = ecx_49.b
    result[0x1b] = 0xff
    int32_t ecx_50 = sx.d(edx[7])
    int32_t ebx_45 = ecx_30 + ecx_50
    int32_t var_30_2 = ebx_45
    
    if (ebx_45 s> 0xff)
        ebx_45 = 0xff
        int32_t var_30_3 = 0xff
    else if (ebx_45 s< 0)
        ebx_45 = 0
        int32_t var_30_4 = 0
    
    result[0x1c] = ebx_45.b
    int32_t ebx_48 = neg.d(ebx_12) + ecx_50
    int32_t var_34_2 = ebx_48
    
    if (ebx_48 s> 0xff)
        ebx_48 = 0xff
        int32_t var_34_3 = 0xff
    else if (ebx_48 s< 0)
        ebx_48 = 0
        int32_t var_34_4 = 0
    
    result[0x1d] = ebx_48.b
    int32_t ecx_51 = ecx_50 + ecx_35
    
    if (ecx_51 s> 0xff)
        ecx_51 = 0xff
    else if (ecx_51 s< 0)
        ecx_51 = 0
    
    edx = &edx[8]
    result[0x1e] = ecx_51.b
    i = i_1 + 1
    result[0x1f] = 0xff
    var_38 = &var_38[8]
    var_3c = &var_3c[8]
    result = &result[arg5]
    i_1 = i
while (i s< 8)
return result
