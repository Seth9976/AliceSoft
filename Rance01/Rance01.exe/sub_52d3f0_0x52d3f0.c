// 函数: sub_52d3f0
// 地址: 0x52d3f0
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
void* edi_1 = arg2
void* ecx_1 = edi_1 - ebx_1
int32_t eax
void* edx
edx:eax = muls.dp.d(0x92492493, ecx_1)
int32_t edx_2 = (edx + ecx_1) s>> 5
int32_t i = ecx_1 s/ 0x38

if (i s> 0x20)
    int32_t esi_1 = arg3
    
    do
        if (esi_1 s<= 0)
            if (i s<= 0x20)
                break
            
            void* ecx_13 = edi_1 - ebx_1
            int32_t eax_21
            void* edx_14
            edx_14:eax_21 = muls.dp.d(0x92492493, ecx_13)
            int32_t eax_24 = ecx_13 s/ 0x38
            
            if (eax_24 s> 1)
                *(esp_1 - 4) = esp_1[0xb]
                *(esp_1 - 8) = edi_1
                ecx_13 = sub_52e150(eax_24, (edx_14 + ecx_13) s>> 5, ebx_1)
            
            int32_t* edx_17 = esp_1[0xb]
            *(esp_1 - 4) = edx_17
            *(esp_1 - 8) = ebx_1
            int32_t eax_26 = sub_52e2d0(edi_1, edx_17, ecx_13)
            *esp_1
            esp_1[1]
            esp_1[2]
            esp_1[3]
            return eax_26
        
        *(esp_1 - 4) = esp_1[0xb]
        *(esp_1 - 8) = edi_1
        *(esp_1 - 0xc) = ebx_1
        *(esp_1 - 0x10) = &esp_1[4]
        sub_52da20()
        int32_t eax_5
        int32_t edx_3
        edx_3:eax_5 = sx.q(esi_1)
        int32_t eax_7 = (eax_5 - edx_3) s>> 1
        int32_t eax_8
        int32_t edx_4
        edx_4:eax_8 = sx.q(eax_7)
        esi_1 = eax_7 + ((eax_8 - edx_4) s>> 1)
        void* esp_11
        
        if ((esp_1[4] - ebx_1) s/ 0x38 s>= (edi_1 - esp_1[5]) s/ 0x38)
            int32_t ecx_8 = esp_1[5]
            *(esp_1 - 4) = esp_1[0xb]
            *(esp_1 - 8) = esi_1
            *(esp_1 - 0xc) = edi_1
            *(esp_1 - 0x10) = ecx_8
            sub_52d3f0()
            esp_11 = esp_1
            edi_1 = *(esp_11 + 0x20)
        else
            int32_t edx_11 = esp_1[4]
            *(esp_1 - 4) = esp_1[0xb]
            *(esp_1 - 8) = esi_1
            *(esp_1 - 0xc) = edx_11
            *(esp_1 - 0x10) = ebx_1
            sub_52d3f0()
            esp_11 = esp_1
            ebx_1 = *(esp_11 + 0x24)
        
        void* ecx_10 = edi_1 - ebx_1
        int32_t eax_17
        void* edx_12
        edx_12:eax_17 = muls.dp.d(0x92492493, ecx_10)
        edx_2 = (edx_12 + ecx_10) s>> 5
        i = ecx_10 s/ 0x38
        esp_1 = esp_11 + 0x10
    while (i s> 0x20)

if (i s> 1)
    int32_t eax_20 = esp_1[0xb]
    *(esp_1 - 4) = eax_20
    *(esp_1 - 8) = edi_1
    i = sub_52e330(eax_20, edx_2, ebx_1)

*esp_1
esp_1[1]
esp_1[2]
esp_1[3]
return i
