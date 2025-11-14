// 函数: sub_574f50
// 地址: 0x574f50
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t* result = *(arg1 + 4)
int32_t* result_3 = result[1]
int32_t* result_2 = result_3
int32_t* result_1 = result

if (*(result_3 + 0x45) == 0)
    int32_t edi
    int32_t var_1c_1 = edi
    
    do
        if (sub_575ee0(arg2, &result_2[3]) != 0)
            result_2 = result_2[2]
        else if (sub_575f80(arg2, &result_2[3]) != 0)
            result_1 = result_2
            result_2 = *result_2
        else
            int32_t ebp_1 = arg2[0xa]
            void* ebx_1 = &result_2[9]
            int32_t* ecx
            
            if (arg2[0xb] u< 0x10)
                ecx = &arg2[6]
            else
                ecx = arg2[6]
            
            int32_t esi_3 = *(ebx_1 + 0x10)
            int32_t eax_3 = esi_3
            
            if (esi_3 u>= ebp_1)
                eax_3 = ebp_1
            
            void* edx_1
            
            if (*(ebx_1 + 0x14) u< 0x10)
                edx_1 = ebx_1
            else
                edx_1 = *ebx_1
            
            int32_t eax_4 = sub_402320(eax_3, edx_1, ecx, eax_3)
            bool cond:2_1 = eax_4 s< 0
            
            if (eax_4 != 0)
                goto label_574fe4
            
            if (esi_3 u< ebp_1)
                result_2 = result_2[2]
            else
                eax_4.b = esi_3 != ebp_1
                cond:2_1 = eax_4 s< 0
            label_574fe4:
                
                if (cond:2_1)
                    result_2 = result_2[2]
                else
                    if (*(ebx_1 + 0x14) u>= 0x10)
                        ebx_1 = *ebx_1
                    
                    int32_t eax_5 = ebp_1
                    
                    if (ebp_1 u>= esi_3)
                        eax_5 = esi_3
                    
                    int32_t* edx_2
                    
                    if (arg2[0xb] u< 0x10)
                        edx_2 = &arg2[6]
                    else
                        edx_2 = arg2[6]
                    
                    sub_402320(eax_5, edx_2, ebx_1, eax_5)
                    result_1 = result_2
                    result_2 = *result_2
    while (*(result_2 + 0x45) == 0)
    
    result = result_1

return result
