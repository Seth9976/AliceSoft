// 函数: sub_5463e0
// 地址: 0x5463e0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4 = arg1
*(arg1 + 0x2b0) -= 4
int32_t edi = **(arg1 + 0x2b0)
*(arg1 + 0x2b0) -= 4
int32_t* result = **(arg1 + 0x2b0)
int32_t edx_3 = (*(arg1 + 0x1e8) - *(arg1 + 0x1e4)) s>> 2

if (result u< edx_3)
    int32_t ebx_1 = *(arg1 + 0x1e4)
    edx_3 = *(ebx_1 + (result << 2))
    
    if (edx_3 != 0)
        int32_t esi = *(edx_3 + 4)
        
        if (edi u>= esi u>> 2)
            char const* const var_18_2 = "A_POPBACK"
            return sub_53d1c0(result, edx_3, arg1, 0x74fc4c)
        
        int32_t edx_4
        
        if (esi != 0)
            edx_4 = *edx_3
        else
            edx_4 = 0
        
        void* edx_5 = *(edx_4 + (edi << 2))
        
        if (edx_5 u< (*(arg1 + 0x1e8) - ebx_1) s>> 2)
            edx_5 = *(ebx_1 + (edx_5 << 2))
            
            if (edx_5 != 0)
                if (*(edx_5 + 0x40) != 0)
                    var_4 = (*(edx_5 + 4) u>> 2) - 1
                    return sub_545630(result, edi, arg1, &var_4, "A_POPBACK") != 0
                
                result.b = 1
                return result
        
        char const* const var_18_1 = "A_POPBACK"
        return sub_53d1c0(result, edx_5, arg1, 0x74fc88)

char const* const var_18 = "A_POPBACK"
return sub_53d1c0(result, edx_3, arg1, 0x74fc10)
