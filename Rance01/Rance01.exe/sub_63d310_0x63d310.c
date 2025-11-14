// 函数: sub_63d310
// 地址: 0x63d310
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
int32_t i = (edi_1 - ebx_1) s/ 0x8c

if (i s> 0x20)
    int32_t esi_1 = arg3
    
    do
        if (esi_1 s<= 0)
            if (i s<= 0x20)
                break
            
            int32_t ecx_12 = edi_1 - ebx_1
            int32_t eax_21
            int32_t edx_15
            edx_15:eax_21 = muls.dp.d(0xea0ea0eb, ecx_12)
            int32_t eax_24 = ecx_12 s/ 0x8c
            
            if (eax_24 s> 1)
                int32_t ecx_13 = esp_1[0xb]
                *(esp_1 - 4) = ecx_13
                *(esp_1 - 8) = ebx_1
                eax_24 = sub_641610(edi_1, (edx_15 + ecx_12) s>> 7, ecx_13)
            
            int32_t edx_18 = esp_1[0xb]
            *(esp_1 - 4) = edx_18
            *(esp_1 - 8) = ebx_1
            int32_t eax_26 = sub_641740(eax_24, edx_18, edi_1)
            *esp_1
            esp_1[1]
            esp_1[2]
            esp_1[3]
            return eax_26
        
        *(esp_1 - 4) = esp_1[0xb]
        *(esp_1 - 8) = edi_1
        *(esp_1 - 0xc) = ebx_1
        *(esp_1 - 0x10) = &esp_1[4]
        sub_63edf0()
        int32_t eax_5
        int32_t edx_3
        edx_3:eax_5 = sx.q(esi_1)
        int32_t eax_7 = (eax_5 - edx_3) s>> 1
        int32_t eax_8
        int32_t edx_4
        edx_4:eax_8 = sx.q(eax_7)
        esi_1 = eax_7 + ((eax_8 - edx_4) s>> 1)
        void* esp_11
        
        if ((esp_1[4] - ebx_1) s/ 0x8c s>= (edi_1 - esp_1[5]) s/ 0x8c)
            int32_t ecx_8 = esp_1[5]
            *(esp_1 - 4) = esp_1[0xb]
            *(esp_1 - 8) = esi_1
            *(esp_1 - 0xc) = edi_1
            *(esp_1 - 0x10) = ecx_8
            sub_63d310()
            esp_11 = esp_1
            edi_1 = *(esp_11 + 0x20)
        else
            int32_t edx_11 = esp_1[4]
            *(esp_1 - 4) = esp_1[0xb]
            *(esp_1 - 8) = esi_1
            *(esp_1 - 0xc) = edx_11
            *(esp_1 - 0x10) = ebx_1
            sub_63d310()
            esp_11 = esp_1
            ebx_1 = *(esp_11 + 0x24)
        
        i = (edi_1 - ebx_1) s/ 0x8c
        esp_1 = esp_11 + 0x10
    while (i s> 0x20)

if (i s> 1)
    *(esp_1 - 4) = esp_1[0xb]
    *(esp_1 - 8) = edi_1
    *(esp_1 - 0xc) = ebx_1
    i = sub_641810()

*esp_1
esp_1[1]
esp_1[2]
esp_1[3]
return i
