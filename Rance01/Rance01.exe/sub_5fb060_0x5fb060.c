// 函数: sub_5fb060
// 地址: 0x5fb060
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t ecx = *(arg1 + 0x54)
int32_t* ebp = *(arg1 + 0x50)
int32_t* edi = ebp
int32_t result = 0
int32_t var_8 = ecx

if (edi != ecx)
    int32_t edx_4 = ((ecx - ebp) s>> 2) - 1
    
    do
        int32_t* eax = *edi
        int32_t eax_1
        
        if (eax[1] != 0)
            int32_t eax_2 = *eax
            
            if (eax_2 != 0xffffffff)
                int32_t var_10 = eax_2
                void* esi_1 = *(data_797d2c + 0x30)
                int32_t* var_c
                sub_42e070(esi_1 + 0x294, &var_c, &var_10)
                int32_t* eax_5 = var_c
                void* eax_6
                
                if (eax_5 != *(esi_1 + 0x298))
                    eax_6 = eax_5[4]
                
                if (eax_5 != *(esi_1 + 0x298) && eax_6 != 0)
                    eax_1 = *(eax_6 + 0x14)
                else
                    eax_1 = 0
                
                ecx = var_8
            else
                eax_1 = 0
        else
            eax_1 = 0
        
        result += eax_1
        
        if ((edi - ebp) s>> 2 s< edx_4)
            result += arg2
        
        edi = &edi[1]
    while (edi != ecx)

return result
