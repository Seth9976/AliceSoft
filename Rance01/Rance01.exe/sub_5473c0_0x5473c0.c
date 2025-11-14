// 函数: sub_5473c0
// 地址: 0x5473c0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

*(arg1 + 0x2b0) -= 4
float edi = **(arg1 + 0x2b0)
*(arg1 + 0x2b0) -= 4
int32_t eax_2 = **(arg1 + 0x2b0)
*(arg1 + 0x2b0) -= 4
int32_t* result
int32_t edx_1
int32_t ebp
result, edx_1 = sub_5466f0("A_SORT_MEM", **(arg1 + 0x2b0), ebp, arg1, edi, arg1, eax_2)

if (result != 0)
    int32_t ecx_1 = result[0xd]
    
    if (ecx_1 != 0x11)
        int32_t var_10_1 = ecx_1
        return sub_53d1c0(result, edx_1, arg1, 0x750050)
    
    int32_t* ecx_3 = result[1]
    
    if (ecx_3 u< 2)
        result.b = 1
        return result
    
    if (ecx_3 != 0)
        ecx_3 = *result
    
    int32_t ecx_4 = *ecx_3
    
    if (ecx_4 u< (*(arg1 + 0x1e8) - *(arg1 + 0x1e4)) s>> 2)
        void* ecx_5 = *(*(arg1 + 0x1e4) + (ecx_4 << 2))
        
        if (ecx_5 != 0)
            int32_t edx_6 = *(*(ecx_5 + 0x20) + (edi << 2))
            
            if (edx_6 == 0xa)
                return sub_5475b0(arg1, result, edi)
            
            if (edx_6 == 0xb)
                return sub_5476b0(arg1, result, edi)
            
            if (edx_6 == 0xc)
                return sub_5479e0(edx_6 - 0xc, result, arg1, edi)
            
            int32_t var_10_2 = edx_6
            sub_53d1c0(result, edx_6, arg1, 0x750078)

result.b = 0
return result
