// 函数: sub_545a50
// 地址: 0x545a50
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

*(arg1 + 0x2b0) -= 4
int32_t ecx_1 = **(arg1 + 0x2b0)
*(arg1 + 0x2b0) -= 4
int32_t ebp = **(arg1 + 0x2b0)
*(arg1 + 0x2b0) -= 4
int32_t edx = **(arg1 + 0x2b0)
*(arg1 + 0x2b0) -= 4
uint32_t ecx_5 = **(arg1 + 0x2b0)
*(arg1 + 0x2b0) -= 4
int32_t* ecx_6 = *(arg1 + 0x2b0)
int32_t var_c = edx
int32_t edx_1 = *ecx_6
*(arg1 + 0x2b0) -= 4
int32_t ecx_7 = **(arg1 + 0x2b0)

if (ecx_7 u< (*(arg1 + 0x1e8) - *(arg1 + 0x1e4)) s>> 2)
    int32_t* ecx_8 = *(*(arg1 + 0x1e4) + (ecx_7 << 2))
    
    if (ecx_8 != 0)
        int32_t ebx = ecx_8[1]
        
        if (edx_1 u>= ebx u>> 2)
            return sub_53d1c0(arg1 + 0x1dc, edx_1, arg1, 0x74f6dc)
        
        int32_t ecx_10
        
        if (ebx != 0)
            ecx_10 = *ecx_8
        else
            ecx_10 = 0
        
        int32_t edx_2 = *(ecx_10 + (edx_1 << 2))
        void* ebx_1
        
        if (edx_2 u< (*(arg1 + 0x1e8) - *(arg1 + 0x1e4)) s>> 2)
            ebx_1 = *(*(arg1 + 0x1e4) + (edx_2 << 2))
        else
            ebx_1 = nullptr
        
        int32_t edx_3 = var_c
        int32_t ecx_18 = (*(arg1 + 0x1e8) - *(arg1 + 0x1e4)) s>> 2
        void* edi_6
        
        if (edx_3 u< ecx_18)
            ecx_18 = *(arg1 + 0x1e4)
            edi_6 = *(ecx_18 + (edx_3 << 2))
        else
            edi_6 = nullptr
        
        if (ebx_1 == 0)
            return sub_53d1c0(arg1 + 0x1dc, edx_3, arg1, 0x74f714)
        
        if (edi_6 == 0)
            return sub_53d1c0(arg1 + 0x1dc, edx_3, arg1, 0x74f750)
        
        int32_t var_20 = ebp
        void* var_24 = edi_6
        var_c = ecx_1
        char eax_7
        int32_t edx_6
        eax_7, edx_6 = sub_5530d0(ecx_18, &var_c, ecx_5, arg1 + 0x1dc, ebx_1)
        
        if (eax_7 != 0)
            **(arg1 + 0x2b0) = var_c
            *(arg1 + 0x2b0) += 4
            int32_t result
            result.b = 1
            return result
        
        uint32_t var_20_1 = *(edi_6 + 4) u>> 2
        int32_t eax_10 = var_c
        uint32_t var_24_1 = *(ebx_1 + 4) u>> 2
        int32_t var_28_1 = eax_10
        uint32_t var_2c_1 = ecx_5
        int32_t var_30 = ebp
        return sub_53d1c0(eax_10, edx_6, arg1, 0x74f7c0)

return sub_53d1c0(arg1 + 0x1dc, edx_1, arg1, 0x74f6a4)
