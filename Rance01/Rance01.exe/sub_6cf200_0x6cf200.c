// 函数: sub_6cf200
// 地址: 0x6cf200
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

void* esi = arg1
int32_t i_1 = 0

while (true)
    int32_t ebp_2 = sx.d(*(esi + 0x50)) - sx.d(*(esi + 0x30))
    int32_t ebx_2 = sx.d(*(esi + 0x10)) - sx.d(*(esi + 0x70))
    int16_t ecx_1 = *esi
    int32_t eax_5 = ((sx.d(*(esi + 0x20)) - sx.d(*(esi + 0x60))) * 0xb505 + 0x4000) s>> 0xf
    int16_t eax_8 = (adc.d(eax_5 - 0x80000000, 0x80000000, eax_5 u>= 0x80000000) s>> 1).w
    int16_t edx_3 = ecx_1 + eax_8
    int16_t ecx_2 = ecx_1 - eax_8
    int16_t eax_11 = ((ebp_2 * 0xffff9e08 + ebx_2 * 0xec84 + 0x8000) s>> 0x10).w
    int16_t ebp_5 = ((ebp_2 * 0xec83 + ebx_2 * 0x61f8 + 0x8000) s>> 0x10).w
    int32_t i = i_1
    *esi = edx_3 + eax_11
    *(esi + 0x10) = ecx_2 + ebp_5
    *(esi + 0x20) = ecx_2 - ebp_5
    *(esi + 0x30) = edx_3 - eax_11
    
    do
        esi += 2
        i += 1
        
        if (i s>= 8)
            int32_t edx_6 = sx.d(arg1[5]) - sx.d(arg1[3])
            int32_t ecx_6 = sx.d(arg1[1]) - sx.d(arg1[7])
            int32_t ebx_7 = sx.d(*arg1)
            int32_t esi_4 = ((sx.d(arg1[2]) - sx.d(arg1[6])) * 0xb505 + 0x4000) s>> 0xf
            int32_t esi_7 = adc.d(esi_4 - 0x80000000, 0x80000000, esi_4 u>= 0x80000000) s>> 1
            int32_t ebp_8 = ebx_7 + esi_7
            int32_t ebx_8 = ebx_7 - esi_7
            int32_t esi_10 = (edx_6 * 0xffff9e08 + ecx_6 * 0xec84 + 0x8000) s>> 0x10
            int32_t ecx_8 = (edx_6 * 0xec83 + ecx_6 * 0x61f8 + 0x8000) s>> 0x10
            int32_t edx_10 = ((ebp_8 + esi_10 + 8) s>> 4) + 0x80
            
            if (edx_10 s< 0)
                edx_10 = 0
            else if (edx_10 s> 0xff)
                edx_10 = 0xff
            
            *arg1 = edx_10.w
            int32_t edx_13 = ((ebx_8 + ecx_8 + 8) s>> 4) + 0x80
            
            if (edx_13 s< 0)
                edx_13 = 0
            else if (edx_13 s> 0xff)
                edx_13 = 0xff
            
            arg1[1] = edx_13.w
            int32_t ebx_12 = ((ebx_8 - ecx_8 + 8) s>> 4) + 0x80
            
            if (ebx_12 s< 0)
                ebx_12 = 0
            else if (ebx_12 s> 0xff)
                ebx_12 = 0xff
            
            arg1[2] = ebx_12.w
            int32_t ebp_12 = ((ebp_8 - esi_10 + 8) s>> 4) + 0x80
            
            if (ebp_12 s< 0)
                ebp_12 = 0
            else if (ebp_12 s> 0xff)
                ebp_12 = 0xff
            
            arg1[3] = ebp_12.w
            int32_t edx_15 = sx.d(arg1[0xd]) - sx.d(arg1[0xb])
            int32_t ecx_11 = sx.d(arg1[9]) - sx.d(arg1[0xf])
            int32_t ebx_14 = sx.d(arg1[8])
            int32_t esi_14 = ((sx.d(arg1[0xa]) - sx.d(arg1[0xe])) * 0xb505 + 0x4000) s>> 0xf
            int32_t esi_17 = adc.d(esi_14 - 0x80000000, 0x80000000, esi_14 u>= 0x80000000) s>> 1
            int32_t ebp_15 = ebx_14 + esi_17
            int32_t ebx_15 = ebx_14 - esi_17
            int32_t esi_20 = (edx_15 * 0xffff9e08 + ecx_11 * 0xec84 + 0x8000) s>> 0x10
            int32_t ecx_13 = (edx_15 * 0xec83 + ecx_11 * 0x61f8 + 0x8000) s>> 0x10
            int32_t edx_19 = ((ebp_15 + esi_20 + 8) s>> 4) + 0x80
            
            if (edx_19 s< 0)
                edx_19 = 0
            else if (edx_19 s> 0xff)
                edx_19 = 0xff
            
            arg1[8] = edx_19.w
            int32_t edx_22 = ((ebx_15 + ecx_13 + 8) s>> 4) + 0x80
            
            if (edx_22 s< 0)
                edx_22 = 0
            else if (edx_22 s> 0xff)
                edx_22 = 0xff
            
            arg1[9] = edx_22.w
            int32_t ebx_19 = ((ebx_15 - ecx_13 + 8) s>> 4) + 0x80
            
            if (ebx_19 s< 0)
                ebx_19 = 0
            else if (ebx_19 s> 0xff)
                ebx_19 = 0xff
            
            arg1[0xa] = ebx_19.w
            int32_t ebp_19 = ((ebp_15 - esi_20 + 8) s>> 4) + 0x80
            
            if (ebp_19 s< 0)
                ebp_19 = 0
            else if (ebp_19 s> 0xff)
                ebp_19 = 0xff
            
            arg1[0xb] = ebp_19.w
            int32_t edx_24 = sx.d(arg1[0x15]) - sx.d(arg1[0x13])
            int32_t ecx_16 = sx.d(arg1[0x11]) - sx.d(arg1[0x17])
            int32_t ebx_21 = sx.d(arg1[0x10])
            int32_t esi_24 = ((sx.d(arg1[0x12]) - sx.d(arg1[0x16])) * 0xb505 + 0x4000) s>> 0xf
            int32_t esi_27 = adc.d(esi_24 - 0x80000000, 0x80000000, esi_24 u>= 0x80000000) s>> 1
            int32_t ebp_22 = ebx_21 + esi_27
            int32_t ebx_22 = ebx_21 - esi_27
            int32_t esi_30 = (edx_24 * 0xffff9e08 + ecx_16 * 0xec84 + 0x8000) s>> 0x10
            int32_t ecx_18 = (edx_24 * 0xec83 + ecx_16 * 0x61f8 + 0x8000) s>> 0x10
            int32_t edx_28 = ((ebp_22 + esi_30 + 8) s>> 4) + 0x80
            
            if (edx_28 s< 0)
                edx_28 = 0
            else if (edx_28 s> 0xff)
                edx_28 = 0xff
            
            arg1[0x10] = edx_28.w
            int32_t edx_31 = ((ebx_22 + ecx_18 + 8) s>> 4) + 0x80
            
            if (edx_31 s< 0)
                edx_31 = 0
            else if (edx_31 s> 0xff)
                edx_31 = 0xff
            
            arg1[0x11] = edx_31.w
            int32_t ebx_26 = ((ebx_22 - ecx_18 + 8) s>> 4) + 0x80
            
            if (ebx_26 s< 0)
                ebx_26 = 0
            else if (ebx_26 s> 0xff)
                ebx_26 = 0xff
            
            arg1[0x12] = ebx_26.w
            int32_t ebp_26 = ((ebp_22 - esi_30 + 8) s>> 4) + 0x80
            
            if (ebp_26 s< 0)
                ebp_26 = 0
            else if (ebp_26 s> 0xff)
                ebp_26 = 0xff
            
            arg1[0x13] = ebp_26.w
            int32_t edx_33 = sx.d(arg1[0x1d]) - sx.d(arg1[0x1b])
            int32_t ecx_21 = sx.d(arg1[0x19]) - sx.d(arg1[0x1f])
            int32_t ebx_28 = sx.d(arg1[0x18])
            int32_t esi_34 = ((sx.d(arg1[0x1a]) - sx.d(arg1[0x1e])) * 0xb505 + 0x4000) s>> 0xf
            int32_t esi_37 = adc.d(esi_34 - 0x80000000, 0x80000000, esi_34 u>= 0x80000000) s>> 1
            int32_t ebp_29 = ebx_28 + esi_37
            int32_t ebx_29 = ebx_28 - esi_37
            int32_t esi_40 = (edx_33 * 0xffff9e08 + ecx_21 * 0xec84 + 0x8000) s>> 0x10
            int32_t ecx_23 = (edx_33 * 0xec83 + ecx_21 * 0x61f8 + 0x8000) s>> 0x10
            int32_t edx_37 = ((ebp_29 + esi_40 + 8) s>> 4) + 0x80
            
            if (edx_37 s< 0)
                edx_37 = 0
            else if (edx_37 s> 0xff)
                edx_37 = 0xff
            
            arg1[0x18] = edx_37.w
            int32_t edx_40 = ((ebx_29 + ecx_23 + 8) s>> 4) + 0x80
            
            if (edx_40 s< 0)
                edx_40 = 0
            else if (edx_40 s> 0xff)
                edx_40 = 0xff
            
            arg1[0x19] = edx_40.w
            int32_t ebx_33 = ((ebx_29 - ecx_23 + 8) s>> 4) + 0x80
            
            if (ebx_33 s< 0)
                ebx_33 = 0
            else if (ebx_33 s> 0xff)
                ebx_33 = 0xff
            
            arg1[0x1a] = ebx_33.w
            int32_t ebp_33 = ((ebp_29 - esi_40 + 8) s>> 4) + 0x80
            
            if (ebp_33 s< 0)
                ebp_33 = 0
            else if (ebp_33 s> 0xff)
                ebp_33 = 0xff
            
            arg1[0x1b] = ebp_33.w
            return arg1
    while (i == 4)
    
    i_1 = i
