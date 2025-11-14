// 函数: sub_4f6510
// 地址: 0x4f6510
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t ebx
int32_t var_c = ebx
int32_t ebx_1 = arg1
int32_t ebp
int32_t var_10 = ebp
int32_t esi
int32_t var_14 = esi
int32_t edi
int32_t var_18 = edi
int32_t* esp_1 = &var_18
int32_t edi_1 = arg2
int32_t i = (edi_1 - ebx_1) s/ 0x6c

if (i s> 0x20)
    int32_t esi_1 = arg3
    
    do
        if (esi_1 s<= 0)
            if (i s<= 0x20)
                break
            
            int32_t eax_19
            int32_t edx_11
            edx_11:eax_19 = muls.dp.d(0x4bda12f7, edi_1 - ebx_1)
            int32_t edx_12 = edx_11 s>> 5
            
            if ((edi_1 - ebx_1) s/ 0x6c s> 1)
                *(esp_1 - 4) = ebx_1
                edx_12 = sub_4f78c0(edi_1, edx_12)
            
            *(esp_1 - 4) = ebx_1
            sub_4f79b0(edi_1, edx_12)
            *esp_1
            esp_1[1]
            esp_1[2]
            esp_1[3]
            return 
        
        *(esp_1 - 4) = edi_1
        *(esp_1 - 8) = ebx_1
        *(esp_1 - 0xc) = &esp_1[4]
        sub_4f6de0()
        int32_t ebp_1 = esp_1[5]
        int32_t eax_5
        int32_t edx_2
        edx_2:eax_5 = sx.q(esi_1)
        int32_t eax_7 = (eax_5 - edx_2) s>> 1
        int32_t eax_8
        int32_t edx_3
        edx_3:eax_8 = sx.q(eax_7)
        esi_1 = eax_7 + ((eax_8 - edx_3) s>> 1)
        int32_t ecx_5 = esp_1[4] - ebx_1
        esp_1[8] = (edi_1 - ebp_1) s/ 0x6c
        *(esp_1 - 4) = esi_1
        void* esp_9
        
        if (ecx_5 s/ 0x6c s>= esp_1[8])
            *(esp_1 - 8) = edi_1
            *(esp_1 - 0xc) = ebp_1
            sub_4f6510()
            esp_9 = esp_1 - 4
            edi_1 = *(esp_9 + 0x1c)
        else
            *(esp_1 - 8) = esp_1[4]
            *(esp_1 - 0xc) = ebx_1
            sub_4f6510()
            esp_9 = esp_1 - 4
            ebx_1 = ebp_1
        
        i = (edi_1 - ebx_1) s/ 0x6c
        esp_1 = esp_9 + 0xc
    while (i s> 0x20)

if (i s> 1 && ebx_1 != edi_1)
    *(esp_1 - 4) = edi_1
    *(esp_1 - 8) = ebx_1
    sub_4f7a50()

*esp_1
esp_1[1]
esp_1[2]
esp_1[3]
