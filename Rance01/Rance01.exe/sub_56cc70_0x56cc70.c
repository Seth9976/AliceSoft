// 函数: sub_56cc70
// 地址: 0x56cc70
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t eax
int32_t edx_1
edx_1:eax = muls.dp.d(0x66666667, *(arg1 + 8) - *(arg1 + 4))
int32_t edx_2 = edx_1 s>> 4
int32_t eax_3 = (edx_2 u>> 0x1f) + edx_2
int32_t esi = 0

if (eax_3 s> 0)
    int32_t* edi_1 = nullptr
    
    do
        int32_t edx_3 = arg3
        
        if (esi s>= 0 && esi s< eax_3)
            if (edx_3 s< 0)
                edx_3 = 0
            else if (edx_3 s> 0x64)
                edx_3 = 0x64
            
            *(edi_1 + *(arg1 + 4)) = edx_3
        
        int32_t eax_5
        int32_t edx_6
        edx_6:eax_5 = muls.dp.d(0x66666667, *(arg1 + 8) - *(arg1 + 4))
        int32_t edx_7 = edx_6 s>> 4
        esi += 1
        eax_3 = (edx_7 u>> 0x1f) + edx_7
        edi_1 = &edi_1[0xa]
    while (esi s< eax_3)

int32_t* esi_1 = arg2
int32_t eax_8
int32_t edx_10
edx_10:eax_8 = muls.dp.d(0x66666667, *(arg1 + 8) - *(arg1 + 4))
int32_t edx_11 = edx_10 s>> 4
int32_t result_2 = (esi_1[1] - *esi_1) s>> 5
int32_t result = (edx_11 u>> 0x1f) + edx_11

if (result_2 s> result)
    result_2 = result

int32_t edi_2 = 0

if (result_2 s> 0)
    int32_t ebp_1 = 0
    int32_t result_1 = 0
    
    while (true)
        result = result_1
        int32_t result_3 = *(result + *esi_1 + 0x1c)
        
        if (result_3 == 0xffffffff)
            result = *(arg1 + 4)
            *(result + ebp_1 + 4) = arg3
        else
            *(*(arg1 + 4) + ebp_1 + 4) = result_3
            
            if (edi_2 s>= 0)
                int32_t eax_11
                int32_t edx_16
                edx_16:eax_11 = muls.dp.d(0x66666667, *(arg1 + 8) - *(arg1 + 4))
                int32_t edx_17 = edx_16 s>> 4
                result = (edx_17 u>> 0x1f) + edx_17
                
                if (edi_2 s< result)
                    if (result_3 s>= 0)
                        result = 0x64
                        
                        if (result_3 s<= 0x64)
                            result = result_3
                        
                        *(*(arg1 + 4) + ebp_1) = result
                    else
                        result = 0
                        *(*(arg1 + 4) + ebp_1) = 0
        
        result_1 += 0x20
        edi_2 += 1
        ebp_1 += 0x28
        
        if (edi_2 s>= result_2)
            break
        
        esi_1 = arg2

return result
