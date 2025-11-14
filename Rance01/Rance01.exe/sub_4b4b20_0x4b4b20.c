// 函数: sub_4b4b20
// 地址: 0x4b4b20
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t ebx
int32_t var_c = ebx
int32_t ebx_1 = arg2
int32_t ebp
int32_t var_10 = ebp
int32_t esi
int32_t var_14 = esi
int32_t* esi_1 = arg1
int32_t i = (ebx_1 - esi_1) s>> 2
int32_t edi
int32_t var_18 = edi
int32_t* esp_1 = &var_18

if (i s> 0x20)
    int32_t edi_1 = arg3
    
    do
        int32_t* ecx
        int32_t edx
        
        if (edi_1 s<= 0)
            if (i s<= 0x20)
                break
            
            void* eax_15 = (ebx_1 - esi_1) & 0xfffffffc
            
            if (eax_15 s> 4)
                *(esp_1 - 4) = ebx_1
                ecx = esi_1
                edx = sub_4b4e50(eax_15, edx, ecx)
            
            void* eax_17 = sub_4b4ef0(ebx_1, edx, ecx, esi_1)
            *esp_1
            esp_1[1]
            esp_1[2]
            esp_1[3]
            return eax_17
        
        *(esp_1 - 4) = ebx_1
        *(esp_1 - 8) = esi_1
        *(esp_1 - 0xc) = &esp_1[4]
        sub_4b4bf0()
        int32_t* ebp_1 = esp_1[5]
        int32_t eax_4
        int32_t edx_1
        edx_1:eax_4 = sx.q(edi_1)
        int32_t eax_6 = (eax_4 - edx_1) s>> 1
        int32_t eax_7
        int32_t edx_2
        edx_2:eax_7 = sx.q(eax_6)
        edi_1 = eax_6 + ((eax_7 - edx_2) s>> 1)
        int32_t eax_10 = esp_1[4]
        *(esp_1 - 4) = edi_1
        void* esp_9
        
        if (((eax_10 - esi_1) & 0xfffffffc) s>= ((ebx_1 - ebp_1) & 0xfffffffc))
            *(esp_1 - 8) = ebx_1
            *(esp_1 - 0xc) = ebp_1
            ecx, edx = sub_4b4b20()
            esp_9 = esp_1 - 4
            ebx_1 = *(esp_9 + 0x1c)
        else
            *(esp_1 - 8) = eax_10
            *(esp_1 - 0xc) = esi_1
            ecx, edx = sub_4b4b20()
            esp_9 = esp_1 - 4
            esi_1 = ebp_1
        
        i = (ebx_1 - esi_1) s>> 2
        esp_1 = esp_9 + 0xc
    while (i s> 0x20)

if (i s> 1 && esi_1 != ebx_1)
    *(esp_1 - 4) = ebx_1
    *(esp_1 - 8) = esi_1
    i = sub_4b4f40()

*esp_1
esp_1[1]
esp_1[2]
esp_1[3]
return i
