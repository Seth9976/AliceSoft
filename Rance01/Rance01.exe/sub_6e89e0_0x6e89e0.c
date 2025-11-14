// 函数: sub_6e89e0
// 地址: 0x6e89e0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int16_t* edx = arg1
char* result = arg4
int32_t var_50 = 0
void* var_3c = arg3
int16_t* var_38 = arg2
bool cond:5_1

do
    int16_t* esi_2 = var_3c
    int32_t edi_1 = sx.d(*esi_2)
    int32_t ecx_3 = (edi_1 * 0x167 - 0xb2f5) s>> 8
    int32_t ebx_1 = sx.d(*var_38)
    int32_t ecx_7 = (ebx_1 * 0x58 + edi_1 * 0xb7 - 0x87f6) s>> 8
    int32_t ecx_10 = (ebx_1 * 0x1c6 - 0xe251) s>> 8
    int32_t ebx_2 = sx.d(esi_2[1])
    int32_t ecx_13 = (ebx_2 * 0x167 - 0xb2f5) s>> 8
    int32_t edi_3 = sx.d(var_38[1])
    int32_t ecx_17 = (edi_3 * 0x58 + ebx_2 * 0xb7 - 0x87f6) s>> 8
    int32_t ecx_20 = (edi_3 * 0x1c6 - 0xe251) s>> 8
    int32_t ebx_4 = sx.d(esi_2[2])
    int32_t ecx_23 = (ebx_4 * 0x167 - 0xb2f5) s>> 8
    int32_t edi_4 = sx.d(var_38[2])
    int32_t ecx_27 = (edi_4 * 0x58 + ebx_4 * 0xb7 - 0x87f6) s>> 8
    int32_t ecx_30 = (edi_4 * 0x1c6 - 0xe251) s>> 8
    int32_t ecx_31 = sx.d(esi_2[3])
    int32_t ebx_8 = (ecx_31 * 0x167 - 0xb2f5) s>> 8
    int32_t ebx_10 = sx.d(var_38[3])
    int32_t ecx_34 = (ebx_10 * 0x58 + ecx_31 * 0xb7 - 0x87f6) s>> 8
    int32_t ecx_37 = (ebx_10 * 0x1c6 - 0xe251) s>> 8
    int32_t ecx_38 = sx.d(*edx)
    int32_t ebx_12 = ecx_3 + ecx_38
    var_38 = &var_38[8]
    var_3c = &esi_2[8]
    int32_t var_1c_1 = ebx_12
    
    if (ebx_12 s> 0xff)
        ebx_12 = 0xff
        int32_t var_1c_2 = 0xff
    else if (ebx_12 s< 0)
        ebx_12 = 0
        int32_t var_1c_3 = 0
    
    *result = ebx_12.b
    int32_t ebx_14 = ecx_38 - ecx_7
    int32_t var_1c_4 = ebx_14
    
    if (ebx_14 s> 0xff)
        ebx_14 = 0xff
        int32_t var_1c_5 = 0xff
    else if (ebx_14 s< 0)
        ebx_14 = 0
        int32_t var_1c_6 = 0
    
    result[1] = ebx_14.b
    int32_t ecx_39 = ecx_38 + ecx_10
    
    if (ecx_39 s> 0xff)
        ecx_39 = 0xff
    else if (ecx_39 s< 0)
        ecx_39 = 0
    
    result[2] = ecx_39.b
    int32_t ecx_40 = sx.d(edx[1])
    int32_t ebx_16 = ecx_3 + ecx_40
    int32_t var_14_2 = ebx_16
    
    if (ebx_16 s> 0xff)
        ebx_16 = 0xff
        int32_t var_14_3 = 0xff
    else if (ebx_16 s< 0)
        ebx_16 = 0
        int32_t var_14_4 = 0
    
    result[3] = ebx_16.b
    int32_t ebx_19 = neg.d(ecx_7) + ecx_40
    int32_t var_18_2 = ebx_19
    
    if (ebx_19 s> 0xff)
        ebx_19 = 0xff
        int32_t var_18_3 = 0xff
    else if (ebx_19 s< 0)
        ebx_19 = 0
        int32_t var_18_4 = 0
    
    result[4] = ebx_19.b
    int32_t ecx_41 = ecx_40 + ecx_10
    
    if (ecx_41 s> 0xff)
        ecx_41 = 0xff
    else if (ecx_41 s< 0)
        ecx_41 = 0
    
    result[5] = ecx_41.b
    int32_t ecx_42 = sx.d(edx[2])
    int32_t ebx_21 = ecx_42 + ecx_13
    
    if (ebx_21 s> 0xff)
        ebx_21 = 0xff
    else if (ebx_21 s< 0)
        ebx_21 = 0
    
    result[6] = ebx_21.b
    int32_t ebx_23 = ecx_42 - ecx_17
    
    if (ebx_23 s> 0xff)
        ebx_23 = 0xff
    else if (ebx_23 s< 0)
        ebx_23 = 0
    
    result[7] = ebx_23.b
    int32_t ecx_43 = ecx_42 + ecx_20
    
    if (ecx_43 s> 0xff)
        ecx_43 = 0xff
    else if (ecx_43 s< 0)
        ecx_43 = 0
    
    result[8] = ecx_43.b
    int32_t ecx_44 = sx.d(edx[3])
    int32_t ebx_25 = ecx_13 + ecx_44
    int32_t var_20_2 = ebx_25
    
    if (ebx_25 s> 0xff)
        ebx_25 = 0xff
        int32_t var_20_3 = 0xff
    else if (ebx_25 s< 0)
        ebx_25 = 0
        int32_t var_20_4 = 0
    
    result[9] = ebx_25.b
    int32_t ebx_28 = neg.d(ecx_17) + ecx_44
    int32_t var_24_2 = ebx_28
    
    if (ebx_28 s> 0xff)
        ebx_28 = 0xff
        int32_t var_24_3 = 0xff
    else if (ebx_28 s< 0)
        ebx_28 = 0
        int32_t var_24_4 = 0
    
    result[0xa] = ebx_28.b
    int32_t ecx_45 = ecx_44 + ecx_20
    
    if (ecx_45 s> 0xff)
        ecx_45 = 0xff
    else if (ecx_45 s< 0)
        ecx_45 = 0
    
    result[0xb] = ecx_45.b
    int32_t ecx_46 = sx.d(edx[4])
    int32_t ebx_30 = ecx_46 + ecx_23
    
    if (ebx_30 s> 0xff)
        ebx_30 = 0xff
    else if (ebx_30 s< 0)
        ebx_30 = 0
    
    result[0xc] = ebx_30.b
    int32_t ebx_32 = ecx_46 - ecx_27
    
    if (ebx_32 s> 0xff)
        ebx_32 = 0xff
    else if (ebx_32 s< 0)
        ebx_32 = 0
    
    result[0xd] = ebx_32.b
    int32_t ecx_47 = ecx_46 + ecx_30
    
    if (ecx_47 s> 0xff)
        ecx_47 = 0xff
    else if (ecx_47 s< 0)
        ecx_47 = 0
    
    result[0xe] = ecx_47.b
    int32_t ecx_48 = sx.d(edx[5])
    int32_t ebx_34 = ecx_23 + ecx_48
    int32_t var_28_2 = ebx_34
    
    if (ebx_34 s> 0xff)
        ebx_34 = 0xff
        int32_t var_28_3 = 0xff
    else if (ebx_34 s< 0)
        ebx_34 = 0
        int32_t var_28_4 = 0
    
    result[0xf] = ebx_34.b
    int32_t ebx_37 = neg.d(ecx_27) + ecx_48
    int32_t var_2c_2 = ebx_37
    
    if (ebx_37 s> 0xff)
        ebx_37 = 0xff
        int32_t var_2c_3 = 0xff
    else if (ebx_37 s< 0)
        ebx_37 = 0
        int32_t var_2c_4 = 0
    
    result[0x10] = ebx_37.b
    int32_t ecx_49 = ecx_48 + ecx_30
    
    if (ecx_49 s> 0xff)
        ecx_49 = 0xff
    else if (ecx_49 s< 0)
        ecx_49 = 0
    
    result[0x11] = ecx_49.b
    int32_t ecx_50 = sx.d(edx[6])
    int32_t ebx_39 = ecx_50 + ebx_8
    
    if (ebx_39 s> 0xff)
        ebx_39 = 0xff
    else if (ebx_39 s< 0)
        ebx_39 = 0
    
    result[0x12] = ebx_39.b
    int32_t ebx_41 = ecx_50 - ecx_34
    
    if (ebx_41 s> 0xff)
        ebx_41 = 0xff
    else if (ebx_41 s< 0)
        ebx_41 = 0
    
    result[0x13] = ebx_41.b
    int32_t ecx_51 = ecx_50 + ecx_37
    
    if (ecx_51 s> 0xff)
        ecx_51 = 0xff
    else if (ecx_51 s< 0)
        ecx_51 = 0
    
    result[0x14] = ecx_51.b
    int32_t ecx_52 = sx.d(edx[7])
    int32_t ebx_43 = ebx_8 + ecx_52
    int32_t var_30_2 = ebx_43
    
    if (ebx_43 s> 0xff)
        ebx_43 = 0xff
        int32_t var_30_3 = 0xff
    else if (ebx_43 s< 0)
        ebx_43 = 0
        int32_t var_30_4 = 0
    
    result[0x15] = ebx_43.b
    int32_t ebx_46 = neg.d(ecx_34) + ecx_52
    int32_t var_34_2 = ebx_46
    
    if (ebx_46 s> 0xff)
        ebx_46 = 0xff
        int32_t var_34_3 = 0xff
    else if (ebx_46 s< 0)
        ebx_46 = 0
        int32_t var_34_4 = 0
    
    result[0x16] = ebx_46.b
    int32_t ecx_53 = ecx_52 + ecx_37
    
    if (ecx_53 s> 0xff)
        ecx_53 = 0xff
    else if (ecx_53 s< 0)
        ecx_53 = 0
    
    edx = &edx[8]
    result[0x17] = ecx_53.b
    result = &result[arg5]
    cond:5_1 = var_50 + 1 s< 8
    var_50 += 1
while (cond:5_1)
return result
