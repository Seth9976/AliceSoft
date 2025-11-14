// 函数: sub_5418b0
// 地址: 0x5418b0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

*(arg1 + 0x2b0) -= 4
int32_t esi = **(arg1 + 0x2b0)
*(arg1 + 0x2b0) -= 4
int32_t eax_2 = **(arg1 + 0x2b0)
int32_t* edx

if (esi u< (*(arg1 + 0x1e8) - *(arg1 + 0x1e4)) s>> 2)
    edx = *(*(arg1 + 0x1e4) + (esi << 2))
else
    edx = nullptr

if (eax_2 u< (*(arg1 + 0x1e8) - *(arg1 + 0x1e4)) s>> 2)
    int32_t* ecx_7 = *(*(arg1 + 0x1e4) + (eax_2 << 2))
    
    if (ecx_7 != 0)
        if (edx == 0)
            return sub_53d1c0(eax_2, edx, arg1, 0x74e190)
        
        if (sub_5506c0(ecx_7, edx) != 0)
            **(arg1 + 0x2b0) = esi
            *(arg1 + 0x2b0) += 4
            return 1
        
        sub_53d0e0(arg1, "copyString")
        int32_t result
        result.b = 0
        return result

int32_t var_10 = eax_2
return sub_53d1c0(eax_2, edx, arg1, 0x74e154)
