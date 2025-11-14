// 函数: sub_5452b0
// 地址: 0x5452b0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t* eax_10 = *(arg1 + 0x28c)
int32_t ecx = *eax_10
*(arg1 + 0x28c) = &eax_10[1]
*(arg1 + 0x2b0) -= 4
int32_t edx = **(arg1 + 0x2b0)
*(arg1 + 0x2b0) -= 4
int32_t* eax_3 = **(arg1 + 0x2b0)

if (eax_3 u< (*(arg1 + 0x1e8) - *(arg1 + 0x1e4)) s>> 2)
    eax_3 = *(*(arg1 + 0x1e4) + (eax_3 << 2))
    
    if (eax_3 != 0)
        int32_t ebx_4 = eax_3[1]
        
        if (edx u>= ebx_4 u>> 2)
            return sub_53d1c0(eax_3, edx, arg1, 0x74f184)
        
        int32_t eax_5
        
        if (ebx_4 != 0)
            eax_5 = *eax_3
        else
            eax_5 = 0
        
        int32_t var_4
        int32_t* eax_7
        int32_t edx_1
        eax_7, edx_1 = sub_553850(ecx, arg1 + 0x1dc, *(eax_5 + (edx << 2)), &var_4)
        
        if (eax_7.b == 0)
            return sub_53d1c0(eax_7, edx_1, arg1, 0x74f1bc)
        
        **(arg1 + 0x2b0) = var_4
        *(arg1 + 0x2b0) += 4
        int32_t* result
        result.b = 1
        return result

return sub_53d1c0(eax_3, edx, arg1, 0x74f150)
