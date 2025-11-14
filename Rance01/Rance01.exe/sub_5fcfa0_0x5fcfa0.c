// 函数: sub_5fcfa0
// 地址: 0x5fcfa0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t* i = *(arg1 + 0x6c)
int32_t result = 0
int32_t result_1 = 0
int32_t var_8 = 0
int32_t var_4

if (i != *(arg1 + 0x70))
    do
        int32_t* esi_1 = *i
        int32_t eax_2 = sub_5fb100(esi_1)
        int32_t edi_1 = esi_1[4]
        var_4 = eax_2
        int32_t eax_3 = edi_1
        
        if (edi_1 u>= 1)
            eax_3 = 1
        
        int32_t* edx_1
        
        if (esi_1[5] u< 0x10)
            edx_1 = esi_1
        else
            edx_1 = *esi_1
        
        if (sub_402320(eax_3, edx_1, &(*U"\\n\n\n\n\n\n\n\n")[5], eax_3) != 0 || edi_1 u< 1)
        label_5fd043:
            int32_t* eax_8 = &var_4
            
            if (var_8 s>= var_4)
                eax_8 = &var_8
            
            var_8 = *eax_8
        else
            int32_t eax_4
            eax_4.b = edi_1 != 1
            
            if (eax_4 != 0)
                goto label_5fd043
            
            result_1 += var_8
            int32_t eax_6 = *(arg1 + 0x6c)
            
            if ((i - eax_6) s>> 2 s< ((*(arg1 + 0x70) - eax_6) s>> 2) - 1)
                result_1 += *(arg1 + 0x3c)
            
            var_8 = 0
        
        i = &i[1]
    while (i != *(arg1 + 0x70))
    
    int32_t eax_9 = var_8
    
    if (eax_9 s> 0)
        result_1 += eax_9
    
    result = result_1

if (*(arg1 + 0x8c) s> 0)
    int32_t eax_10 = *(arg1 + 0x90)
    
    if (eax_10 s> 0)
        var_4 = eax_10
        int32_t* eax_11 = &var_4
        
        if (eax_10 s>= result)
            eax_11 = &result_1
        
        return *eax_11

return result
