// 函数: sub_416c30
// 地址: 0x416c30
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t __saved_ebp_1
int32_t __saved_ebp = __saved_ebp_1
int32_t ebx
int32_t var_18 = ebx
int32_t esi
int32_t var_1c = esi
int32_t esi_1 = arg2
int32_t edi
int32_t var_20 = edi
int32_t* esp_1 = &var_20
int32_t edi_1 = arg1
int32_t i = (esi_1 - edi_1) s>> 2

if (i s> 0x20)
    int32_t ebx_1 = arg3
    
    do
        if (ebx_1 s<= 0)
            if (i s<= 0x20)
                break
            
            int32_t edx_10 = (esi_1 - edi_1) & 0xfffffffc
            
            if (edx_10 s> 4)
                *(esp_1 - 4) = arg4
                edx_10 = sub_4171e0(arg4, edx_10, esi_1, edi_1)
            
            *(esp_1 - 4) = arg4
            int32_t eax_16 = sub_417280(esi_1, edx_10, arg4, edi_1)
            *esp_1
            esp_1[1]
            esp_1[2]
            return eax_16
        
        *(esp_1 - 4) = arg4
        *(esp_1 - 8) = esi_1
        *(esp_1 - 0xc) = edi_1
        *(esp_1 - 0x10) = &esp_1[4]
        sub_416d60()
        int32_t eax_4
        int32_t edx_1
        edx_1:eax_4 = sx.q(ebx_1)
        int32_t eax_6 = (eax_4 - edx_1) s>> 1
        int32_t eax_7
        int32_t edx_2
        edx_2:eax_7 = sx.q(eax_6)
        ebx_1 = eax_6 + ((eax_7 - edx_2) s>> 1)
        int32_t eax_10 = esp_1[5]
        void* esp_11
        
        if (((esp_1[4] - edi_1) & 0xfffffffc) s>= ((esi_1 - eax_10) & 0xfffffffc))
            *(esp_1 - 4) = arg4
            *(esp_1 - 8) = ebx_1
            *(esp_1 - 0xc) = esi_1
            *(esp_1 - 0x10) = eax_10
            sub_416c30()
            esp_11 = esp_1
            esi_1 = *(esp_11 + 0x20)
        else
            int32_t eax_11 = esp_1[4]
            *(esp_1 - 4) = arg4
            *(esp_1 - 8) = ebx_1
            *(esp_1 - 0xc) = eax_11
            *(esp_1 - 0x10) = edi_1
            sub_416c30()
            esp_11 = esp_1
            edi_1 = *(esp_11 + 0x24)
        
        i = (esi_1 - edi_1) s>> 2
        esp_1 = esp_11 + 0x10
    while (i s> 0x20)

if (i s> 1)
    *(esp_1 - 4) = arg4
    *(esp_1 - 8) = esi_1
    *(esp_1 - 0xc) = edi_1
    i = sub_4172d0()

*esp_1
esp_1[1]
esp_1[2]
return i
