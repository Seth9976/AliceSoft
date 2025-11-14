// 函数: sub_5fb100
// 地址: 0x5fb100
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t ecx = *(arg1 + 0x54)
int32_t result = *(arg1 + 0x24)
int32_t* edi = *(arg1 + 0x50)
int32_t var_4 = ecx

if (edi != ecx)
    void* ebp_1 = data_797d2c
    int32_t* edi_1 = edi
    
    do
        int32_t* eax = *edi_1
        int32_t result_1
        
        if (eax[1] != 0)
            int32_t eax_1 = *eax
            
            if (eax_1 != 0xffffffff)
                void* esi_1 = *(ebp_1 + 0x30)
                int32_t var_c = eax_1
                int32_t* var_8
                sub_42e070(esi_1 + 0x294, &var_8, &var_c)
                int32_t* eax_3 = var_8
                void* eax_4
                
                if (eax_3 != *(esi_1 + 0x298))
                    eax_4 = eax_3[4]
                
                if (eax_3 != *(esi_1 + 0x298) && eax_4 != 0)
                    result_1 = *(eax_4 + 0x18)
                else
                    result_1 = 0
                
                ecx = var_4
            else
                result_1 = 0
        else
            result_1 = 0
        
        if (result s< result_1)
            result = result_1
        
        edi_1 = &edi_1[1]
    while (edi_1 != ecx)

return result
