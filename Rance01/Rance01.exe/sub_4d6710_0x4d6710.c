// 函数: sub_4d6710
// 地址: 0x4d6710
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t ebx
int32_t var_c = ebx
void* ebx_1 = arg1
int32_t ebp
int32_t var_10 = ebp
int32_t esi
int32_t var_14 = esi
int32_t edi
int32_t var_18 = edi
int32_t* esp_1 = &var_18
void* edi_1 = arg2
int32_t i = (edi_1 - ebx_1) s>> 5
int32_t* edx

if (i s> 0x20)
    int32_t esi_1 = arg3
    
    do
        if (esi_1 s<= 0)
            if (i s<= 0x20)
                break
            
            if (((edi_1 - ebx_1) & 0xffffffe0) s> 0x20)
                *(esp_1 - 4) = ebx_1
                edx = sub_4d8420(edi_1, edx)
            
            *(esp_1 - 4) = ebx_1
            int32_t* eax_19 = sub_4d84b0(edi_1, edx)
            *esp_1
            esp_1[1]
            esp_1[2]
            esp_1[3]
            return eax_19
        
        *(esp_1 - 4) = edi_1
        *(esp_1 - 8) = ebx_1
        *(esp_1 - 0xc) = &esp_1[4]
        sub_4d7000()
        void* ebp_1 = esp_1[5]
        int32_t eax_4
        int32_t edx_1
        edx_1:eax_4 = sx.q(esi_1)
        int32_t eax_6 = (eax_4 - edx_1) s>> 1
        int32_t eax_7
        int32_t edx_2
        edx_2:eax_7 = sx.q(eax_6)
        esi_1 = eax_6 + ((eax_7 - edx_2) s>> 1)
        int32_t eax_10 = esp_1[4]
        *(esp_1 - 4) = esi_1
        void* esp_9
        
        if (((eax_10 - ebx_1) & 0xffffffe0) s>= ((edi_1 - ebp_1) & 0xffffffe0))
            *(esp_1 - 8) = edi_1
            *(esp_1 - 0xc) = ebp_1
            edx = sub_4d6710()
            esp_9 = esp_1 - 4
            edi_1 = *(esp_9 + 0x1c)
        else
            *(esp_1 - 8) = eax_10
            *(esp_1 - 0xc) = ebx_1
            edx = sub_4d6710()
            esp_9 = esp_1 - 4
            ebx_1 = ebp_1
        
        i = (edi_1 - ebx_1) s>> 5
        esp_1 = esp_9 + 0xc
    while (i s> 0x20)

if (i s> 1 && ebx_1 != edi_1)
    *(esp_1 - 4) = edi_1
    i = sub_4d8290(ebx_1, edx)

*esp_1
esp_1[1]
esp_1[2]
esp_1[3]
return i
