// 函数: sub_5ec4a0
// 地址: 0x5ec4a0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t __saved_ebp_1
int32_t __saved_ebp = __saved_ebp_1
int32_t ebx
int32_t var_18 = ebx
int32_t ebx_1 = arg1
int32_t esi
int32_t var_1c = esi
int32_t edi
int32_t var_20 = edi
int32_t* esp_1 = &var_20
int32_t edi_1 = arg2
int32_t eax
int32_t edx
edx:eax = muls.dp.d(0x4bda12f7, edi_1 - ebx_1)
int32_t edx_1 = edx s>> 5
int32_t i = (edi_1 - ebx_1) s/ 0x6c

if (i s> 0x20)
    int32_t esi_1 = arg3
    
    do
        if (esi_1 s<= 0)
            if (i s<= 0x20)
                break
            
            int32_t eax_20
            int32_t edx_10
            edx_10:eax_20 = muls.dp.d(0x4bda12f7, edi_1 - ebx_1)
            int32_t edx_11 = edx_10 s>> 5
            
            if ((edi_1 - ebx_1) s/ 0x6c s> 1)
                *(esp_1 - 4) = edi_1
                eax_20, edx_11 = sub_5ed370(eax_20, edx_11, ebx_1)
            
            *(esp_1 - 4) = ebx_1
            int32_t eax_21 = sub_5ed450(eax_20, edx_11, edi_1)
            *esp_1
            esp_1[1]
            esp_1[2]
            return eax_21
        
        *(esp_1 - 4) = ebx_1
        *(esp_1 - 8) = &esp_1[3]
        sub_5ec9b0(&esp_1[3], edx_1, edi_1)
        int32_t eax_5
        int32_t edx_2
        edx_2:eax_5 = sx.q(esi_1)
        int32_t eax_7 = (eax_5 - edx_2) s>> 1
        int32_t eax_8
        int32_t edx_3
        edx_3:eax_8 = sx.q(eax_7)
        esi_1 = eax_7 + ((eax_8 - edx_3) s>> 1)
        int32_t eax_11
        int32_t edx_4
        edx_4:eax_11 = muls.dp.d(0x4bda12f7, edi_1 - esp_1[4])
        int32_t edx_5 = edx_4 s>> 5
        int32_t ecx_6 = esp_1[3] - ebx_1
        esp_1[5] = (edx_5 u>> 0x1f) + edx_5
        *(esp_1 - 4) = esi_1
        void* esp_8
        
        if (ecx_6 s/ 0x6c s>= esp_1[5])
            int32_t eax_16 = esp_1[4]
            *(esp_1 - 8) = edi_1
            *(esp_1 - 0xc) = eax_16
            sub_5ec4a0()
            esp_8 = esp_1 - 4
            edi_1 = *(esp_8 + 0x18)
        else
            *(esp_1 - 8) = esp_1[3]
            *(esp_1 - 0xc) = ebx_1
            sub_5ec4a0()
            esp_8 = esp_1 - 4
            ebx_1 = *(esp_8 + 0x1c)
        
        int32_t eax_17
        int32_t edx_9
        edx_9:eax_17 = muls.dp.d(0x4bda12f7, edi_1 - ebx_1)
        edx_1 = edx_9 s>> 5
        i = (edi_1 - ebx_1) s/ 0x6c
        esp_1 = esp_8 + 0xc
    while (i s> 0x20)

if (i s> 1 && ebx_1 != edi_1)
    *(esp_1 - 4) = edi_1
    *(esp_1 - 8) = ebx_1
    i = sub_5ed5b0()

*esp_1
esp_1[1]
esp_1[2]
return i
