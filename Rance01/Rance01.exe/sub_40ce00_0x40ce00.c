// 函数: sub_40ce00
// 地址: 0x40ce00
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int128_t* edx = data_797e7c
int128_t* esi = data_797e78

if (esi != edx)
    sub_6b49d0(esi, edx, nullptr)
    edx = esi
    esi = data_797e78
    data_797e7c = edx

int32_t* result = *(arg1 + 0xc)
int32_t* i = *result

if (i != result)
    do
        if (&i[3] u>= edx || esi u> &i[3])
            int32_t ecx_4 = data_797e80
            
            if (edx == ecx_4)
                int32_t eax_5 = (edx - esi) s>> 2
                
                if (eax_5 u> 0x3ffffffe)
                    sub_6b47bf("vector<T> too long")
                    noreturn
                
                result = eax_5 + 1
                int32_t ecx_6 = (ecx_4 - esi) s>> 2
                
                if (result u> ecx_6)
                    uint32_t edx_4 = ecx_6 u>> 1
                    int32_t* result_2
                    
                    if (0x3fffffff - edx_4 u>= ecx_6)
                        result_2 = ecx_6 + edx_4
                    else
                        result_2 = nullptr
                    
                    if (result_2 u< result)
                        result_2 = result
                    
                    result = sub_6b0560(&data_797e78, result_2)
                    edx = data_797e7c
                    esi = data_797e78
            
            if (edx != 0)
                *edx = i[3]
                edx = data_797e7c
                esi = data_797e78
        else
            int32_t ecx_1 = data_797e80
            int32_t edi_3 = (&i[3] - esi) s>> 2
            
            if (edx == ecx_1)
                int32_t eax_2 = (edx - esi) s>> 2
                
                if (eax_2 u> 0x3ffffffe)
                    sub_6b47bf("vector<T> too long")
                    noreturn
                
                result = eax_2 + 1
                int32_t ecx_3 = (ecx_1 - esi) s>> 2
                
                if (result u> ecx_3)
                    uint32_t edx_2 = ecx_3 u>> 1
                    int32_t* result_1
                    
                    if (0x3fffffff - edx_2 u>= ecx_3)
                        result_1 = ecx_3 + edx_2
                    else
                        result_1 = nullptr
                    
                    if (result_1 u< result)
                        result_1 = result
                    
                    result = sub_6b0560(&data_797e78, result_1)
                    edx = data_797e7c
                    esi = data_797e78
            
            if (edx != 0)
                result = *(esi + (edi_3 << 2))
                *edx = result
                edx = data_797e7c
                esi = data_797e78
        
        edx += 4
        data_797e7c = edx
        
        if (*(i + 0x15) == 0)
            int32_t* ecx_8 = i[2]
            
            if (*(ecx_8 + 0x15) != 0)
                result = i[1]
                
                if (*(result + 0x15) == 0)
                    while (i == result[2])
                        i = result
                        result = result[1]
                        
                        if (*(result + 0x15) != 0)
                            break
                
                i = result
            else
                result = *ecx_8
                
                while (*(result + 0x15) == 0)
                    ecx_8 = result
                    result = *ecx_8
                
                i = ecx_8
    while (i != *(arg1 + 0xc))

return result
