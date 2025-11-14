// 函数: sub_70c5ad
// 地址: 0x70c5ad
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t esp_19 = arg1[-6]
arg1[-1] = 0xfffffffe
*(esp_19 - 4) = 0x1c
*(esp_19 - 8) = &arg1[-0x10]
*(esp_19 - 0xc) = arg1[-7]
int32_t* esp_4 = esp_19
TEB* fsbase

if (VirtualQuery() != 0)
    void* eax_3
    int32_t edi_2
    
    if (arg1[-0xa] == 0x1000000)
        edi_2 = arg1[-0xf]
        *(esp_4 - 4) = edi_2
        eax_3 = sub_6c0980()
    
    if (arg1[-0xa] != 0x1000000 || eax_3 == 0)
        fsbase->NtTib.ExceptionList = arg1[-4]
        *esp_4
        esp_4[1]
        esp_4[2]
        esp_4[3]
        *arg1
        return 0xffffffff
    
    if ((arg1[-0xb].b & 0xcc) != 0)
        *(esp_4 - 4) = arg1[-7] - edi_2
        *(esp_4 - 8) = edi_2
        eax_3 = sub_6c09c0()
    
    if ((arg1[-0xb].b & 0xcc) != 0 && (eax_3 == 0 || (*(eax_3 + 0x24) & 0x80000000) != 0))
    label_70c408:
        fsbase->NtTib.ExceptionList = arg1[-4]
        *esp_4
        esp_4[1]
        esp_4[2]
        esp_4[3]
        *arg1
        return 0
    
    int32_t edx_1 = arg1[-7]
    *(esp_4 - 4) = edx_1
    
    if (sub_70c300(eax_3, edx_1, arg1[-9], edi_2) == 0)
        goto label_70c408
    
    *(esp_4 - 4) = *(arg1[2] + 4) - edi_2
    *(esp_4 - 8) = edi_2
    
    if (sub_6c09c0() == 0)
        goto label_70c408
    
    int32_t temp0_1 = data_797ca4
    data_797ca4 = 1
    
    if (temp0_1 == 0)
        int32_t edi_3 = data_797ca0
        int32_t eax_7 = edi_3
        
        if (edi_3 s> 0)
            void* ecx_8 = &(&data_797ca0)[edi_3 * 2]
            
            while (*ecx_8 != arg1[-8])
                eax_7 -= 1
                ecx_8 -= 8
                
                if (eax_7 s<= 0)
                    break
        
        if (eax_7 != 0)
            (&data_797ca4)[eax_7 * 2] = arg1[-0xf]
        else
            int32_t esi_2 = eax_7 + 0xf
            
            if (edi_3 s<= 0xf)
                esi_2 = edi_3
            
            int32_t ecx_9 = arg1[-8]
            int32_t edx_4 = arg1[-0xf]
            
            if (esi_2 s>= 0)
                void* eax_8 = &data_797ca8
                int32_t i_1 = esi_2 + 1
                int32_t i
                
                do
                    int32_t esi_3 = *eax_8
                    int32_t edi_4 = *(eax_8 + 4)
                    *eax_8 = ecx_9
                    *(eax_8 + 4) = edx_4
                    ecx_9 = esi_3
                    edx_4 = edi_4
                    eax_8 += 8
                    i = i_1
                    i_1 -= 1
                while (i != 1)
                edi_3 = data_797ca0
            
            if (edi_3 s< 0x10)
                data_797ca0 = edi_3 + 1
        
        data_797ca4
        data_797ca4 = 0

fsbase->NtTib.ExceptionList = arg1[-4]
*esp_4
esp_4[1]
esp_4[2]
esp_4[3]
*arg1
return 1
