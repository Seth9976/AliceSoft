// 函数: sub_59d9c0
// 地址: 0x59d9c0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t i = *(arg1 + 0x14)
int32_t temp0 = *(arg1 + 0x10)
bool cond:0 = temp0 u< i
int32_t result

if (temp0 u< i)
    int32_t ebx
    int32_t var_8_1 = ebx
    result.b = 0x2f
    
    do
        char* edx_1 = *(arg1 + 0x10)
        
        if (i - edx_1 s< 2 || *edx_1 != 0x2f || edx_1[1] != 0x2f)
            ebx.b = *edx_1
            
            if (ebx.b u> 0x20 && ebx.b != 0x7f && ebx.b u> 0x1f)
                break
            
            if (ebx.b == 0xa)
                *(arg1 + 0x1c) += 1
            
            *(arg1 + 0x10) = &edx_1[1]
        else
            *(arg1 + 0x10) = &edx_1[2]
            
            if (&edx_1[2] u< i)
                void* esi_4
                
                do
                    char* esi_3 = *(arg1 + 0x10)
                    void* edx_2
                    edx_2.b = *esi_3
                    
                    if (edx_2.b u< 0x81)
                        if (edx_2.b u< 0xe0)
                            goto label_59da0c
                        
                        esi_4 = &esi_3[2]
                    else if (edx_2.b u<= 0x9f || edx_2.b u>= 0xe0)
                        esi_4 = &esi_3[2]
                    else
                    label_59da0c:
                        
                        if (edx_2.b == 0xa)
                            *(arg1 + 0x1c) += 1
                            *(arg1 + 0x10) += 1
                            break
                        
                        esi_4 = &esi_3[1]
                    
                    *(arg1 + 0x10) = esi_4
                while (esi_4 u< i)
    while (*(arg1 + 0x10) u< i)
    
    cond:0 = *(arg1 + 0x10) u< i

if (cond:0)
    result.b = 1
    return result

*(arg1 + 0x18) = 0
result.b = 0
return result
