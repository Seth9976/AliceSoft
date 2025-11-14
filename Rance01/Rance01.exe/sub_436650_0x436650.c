// 函数: sub_436650
// 地址: 0x436650
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t ebx
int32_t var_10 = ebx
int32_t ebx_1 = arg2
int32_t ebp
int32_t var_14 = ebp
int32_t esi
int32_t var_18 = esi
int32_t esi_1 = arg1
int32_t i = (ebx_1 - esi_1) s>> 2
int32_t edi
int32_t var_1c = edi
int32_t* esp_1 = &var_1c

if (i s> 0x20)
    int32_t edi_1 = arg3
    
    do
        int32_t edx
        
        if (edi_1 s<= 0)
            if (i s<= 0x20)
                break
            
            int32_t ecx_8 = (ebx_1 - esi_1) & 0xfffffffc
            
            if (ecx_8 s> 4)
                int32_t edx_7 = esp_1[0xb]
                *(esp_1 - 4) = edx_7
                ecx_8, edx = sub_436a60(ebx_1, esi_1, edx_7)
            
            *(esp_1 - 4) = esp_1[0xb]
            int32_t eax_17 = sub_436b30(ebx_1, edx, ecx_8, esi_1)
            *esp_1
            esp_1[1]
            esp_1[2]
            esp_1[3]
            return eax_17
        
        *(esp_1 - 4) = esp_1[0xb]
        *(esp_1 - 8) = ebx_1
        *(esp_1 - 0xc) = esi_1
        *(esp_1 - 0x10) = &esp_1[4]
        sub_436740()
        int32_t ebp_1 = esp_1[5]
        int32_t eax_4
        int32_t edx_1
        edx_1:eax_4 = sx.q(edi_1)
        int32_t eax_6 = (eax_4 - edx_1) s>> 1
        int32_t eax_7
        int32_t edx_2
        edx_2:eax_7 = sx.q(eax_6)
        edi_1 = eax_6 + ((eax_7 - edx_2) s>> 1)
        int32_t eax_10 = esp_1[4]
        void* esp_11
        
        if (((eax_10 - esi_1) & 0xfffffffc) s>= ((ebx_1 - ebp_1) & 0xfffffffc))
            *(esp_1 - 4) = esp_1[0xb]
            *(esp_1 - 8) = edi_1
            *(esp_1 - 0xc) = ebx_1
            *(esp_1 - 0x10) = ebp_1
            edx = sub_436650()
            esp_11 = esp_1
            ebx_1 = *(esp_11 + 0x20)
        else
            *(esp_1 - 4) = esp_1[0xb]
            *(esp_1 - 8) = edi_1
            *(esp_1 - 0xc) = eax_10
            *(esp_1 - 0x10) = esi_1
            edx = sub_436650()
            esp_11 = esp_1
            esi_1 = ebp_1
        
        i = (ebx_1 - esi_1) s>> 2
        esp_1 = esp_11 + 0x10
    while (i s> 0x20)

if (i s> 1)
    *(esp_1 - 4) = esp_1[0xb]
    *(esp_1 - 8) = ebx_1
    *(esp_1 - 0xc) = esi_1
    i = sub_436b80()

*esp_1
esp_1[1]
esp_1[2]
esp_1[3]
return i
