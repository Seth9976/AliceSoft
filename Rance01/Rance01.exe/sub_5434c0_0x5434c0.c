// 函数: sub_5434c0
// 地址: 0x5434c0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

*(arg1 + 0x2b0) -= 4
int32_t esi = **(arg1 + 0x2b0)

if (esi u< (*(arg1 + 0x1e8) - *(arg1 + 0x1e4)) s>> 2)
    int32_t* eax_4 = *(*(arg1 + 0x1e4) + (esi << 2))
    
    if (eax_4 != 0)
        char* eax_6
        
        if (eax_4[1] != 0)
            eax_6 = *eax_4
        
        void* eax_7
        
        if (eax_4[1] != 0 && eax_6 != 0)
            int32_t edx_1
            
            do
                edx_1.b = *eax_6
                eax_6 = &eax_6[1]
            while (edx_1.b != 0)
            eax_7 = eax_6 - &eax_6[1]
        else
            eax_7 = nullptr
        
        **(arg1 + 0x2b0) = eax_7
        *(arg1 + 0x2b0) += 4
        int32_t result
        int32_t edx_3
        result, edx_3 = sub_552880(arg1 + 0x1dc, esi)
        
        if (result.b == 0)
            return sub_53d1c0(result, edx_3, arg1, 0x74e860)
        
        result.b = 1
        return result

int32_t entry_ebx
return sub_53d0e0(arg1, 0x74e828, esi, arg3, arg2, entry_ebx, __return_addr)
