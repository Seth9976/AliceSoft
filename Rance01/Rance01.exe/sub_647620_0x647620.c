// 函数: sub_647620
// 地址: 0x647620
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t ebx
int32_t var_10 = ebx
int32_t ebx_1 = arg1
int32_t ebp
int32_t var_14 = ebp
int32_t esi
int32_t var_18 = esi
int32_t edi
int32_t var_1c = edi
int32_t* esp_1 = &var_1c
int32_t edi_1 = arg2
int32_t i = (edi_1 - ebx_1) s/ 0x28

if (i s> 0x20)
    int32_t esi_1 = arg3
    
    do
        if (esi_1 s<= 0)
            if (i s<= 0x20)
                break
            
            int32_t eax_23
            int32_t edx_11
            edx_11:eax_23 = muls.dp.d(0x66666667, edi_1 - ebx_1)
            int32_t edx_12 = edx_11 s>> 4
            int32_t ecx_15 = (edi_1 - ebx_1) s/ 0x28
            
            if (ecx_15 s> 1)
                int32_t edx_13 = esp_1[0xb]
                *(esp_1 - 4) = edx_13
                *(esp_1 - 8) = ebx_1
                edx_12 = sub_64acb0(edi_1, edx_13, ecx_15)
            
            int32_t eax_25 = esp_1[0xb]
            *(esp_1 - 4) = eax_25
            *(esp_1 - 8) = ebx_1
            int32_t eax_26 = sub_64ada0(eax_25, edx_12, edi_1)
            *esp_1
            esp_1[1]
            esp_1[2]
            esp_1[3]
            return eax_26
        
        *(esp_1 - 4) = esp_1[0xb]
        *(esp_1 - 8) = edi_1
        *(esp_1 - 0xc) = ebx_1
        *(esp_1 - 0x10) = &esp_1[4]
        sub_648c80()
        int32_t ebp_1 = esp_1[5]
        int32_t eax_5
        int32_t edx_2
        edx_2:eax_5 = sx.q(esi_1)
        int32_t eax_7 = (eax_5 - edx_2) s>> 1
        int32_t eax_8
        int32_t edx_3
        edx_3:eax_8 = sx.q(eax_7)
        esi_1 = eax_7 + ((eax_8 - edx_3) s>> 1)
        int32_t ecx_5 = esp_1[4]
        esp_1[9] = (edi_1 - ebp_1) s/ 0x28
        void* esp_11
        
        if ((ecx_5 - ebx_1) s/ 0x28 s>= esp_1[9])
            *(esp_1 - 4) = esp_1[0xb]
            *(esp_1 - 8) = esi_1
            *(esp_1 - 0xc) = edi_1
            *(esp_1 - 0x10) = ebp_1
            sub_647620()
            esp_11 = esp_1
            edi_1 = *(esp_11 + 0x20)
        else
            int32_t edx_8 = esp_1[4]
            *(esp_1 - 4) = esp_1[0xb]
            *(esp_1 - 8) = esi_1
            *(esp_1 - 0xc) = edx_8
            *(esp_1 - 0x10) = ebx_1
            sub_647620()
            esp_11 = esp_1
            ebx_1 = ebp_1
        
        i = (edi_1 - ebx_1) s/ 0x28
        esp_1 = esp_11 + 0x10
    while (i s> 0x20)

if (i s> 1)
    *(esp_1 - 4) = esp_1[0xb]
    *(esp_1 - 8) = edi_1
    *(esp_1 - 0xc) = ebx_1
    i = sub_64ae50()

*esp_1
esp_1[1]
esp_1[2]
esp_1[3]
return i
