// 函数: sub_603270
// 地址: 0x603270
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
void* edi_1 = arg2
void* ecx_1 = edi_1 - ebx_1
int32_t eax
void* edx
edx:eax = muls.dp.d(0x92492493, ecx_1)
int32_t edx_2 = (edx + ecx_1) s>> 4
int32_t i = ecx_1 s/ 0x1c

if (i s> 0x20)
    int32_t esi_1 = arg3
    
    do
        if (esi_1 s<= 0)
            if (i s<= 0x20)
                break
            
            void* ecx_14 = edi_1 - ebx_1
            int32_t eax_17
            void* edx_14
            edx_14:eax_17 = muls.dp.d(0x92492493, ecx_14)
            int32_t edx_16 = (edx_14 + ecx_14) s>> 4
            
            if (ecx_14 s/ 0x1c s> 1)
                *(esp_1 - 4) = edi_1
                *(esp_1 - 8) = ebx_1
                edx_16 = sub_603c50()
            
            *(esp_1 - 4) = ebx_1
            int32_t eax_19 = sub_603da0(edi_1, edx_16)
            *esp_1
            esp_1[1]
            esp_1[2]
            esp_1[3]
            return eax_19
        
        *(esp_1 - 4) = edi_1
        *(esp_1 - 8) = &esp_1[4]
        sub_6033a0(&esp_1[4], edx_2, ebx_1)
        int32_t eax_5
        int32_t edx_3
        edx_3:eax_5 = sx.q(esi_1)
        int32_t eax_7 = (eax_5 - edx_3) s>> 1
        int32_t eax_8
        int32_t edx_4
        edx_4:eax_8 = sx.q(eax_7)
        esi_1 = eax_7 + ((eax_8 - edx_4) s>> 1)
        void* ecx_4 = edi_1 - esp_1[5]
        int32_t ecx_6 = esp_1[4] - ebx_1
        *(esp_1 - 4) = esi_1
        void* esp_8
        
        if (ecx_6 s/ 0x1c s>= ecx_4 s/ 0x1c)
            int32_t eax_13 = esp_1[5]
            *(esp_1 - 8) = edi_1
            *(esp_1 - 0xc) = eax_13
            sub_603270()
            esp_8 = esp_1 - 4
            edi_1 = *(esp_8 + 0x1c)
        else
            *(esp_1 - 8) = esp_1[4]
            *(esp_1 - 0xc) = ebx_1
            sub_603270()
            esp_8 = esp_1 - 4
            ebx_1 = *(esp_8 + 0x20)
        
        void* ecx_11 = edi_1 - ebx_1
        int32_t eax_14
        void* edx_12
        edx_12:eax_14 = muls.dp.d(0x92492493, ecx_11)
        edx_2 = (edx_12 + ecx_11) s>> 4
        i = ecx_11 s/ 0x1c
        esp_1 = esp_8 + 0xc
    while (i s> 0x20)

if (i s> 1 && ebx_1 != edi_1)
    *(esp_1 - 4) = edi_1
    i = sub_603e00(i, edx_2, ebx_1)

*esp_1
esp_1[1]
esp_1[2]
esp_1[3]
return i
