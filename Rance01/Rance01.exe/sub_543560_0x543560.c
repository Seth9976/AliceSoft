// 函数: sub_543560
// 地址: 0x543560
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

*(arg1 + 0x2b0) -= 4
int32_t edx = **(arg1 + 0x2b0)

if (edx u< (*(arg1 + 0x1e8) - *(arg1 + 0x1e4)) s>> 2)
    int32_t* eax_5 = *(*(arg1 + 0x1e4) + (edx << 2))
    
    if (eax_5 != 0)
        int32_t eax_7
        
        if (eax_5[1] != 0)
            char* esi = *eax_5
            eax_7 = 0
            
            if (esi != 0)
                eax_7.b = *esi == 0
        else
            eax_7 = 0
        
        **(arg1 + 0x2b0) = eax_7
        *(arg1 + 0x2b0) += 4
        
        if (sub_552880(arg1 + 0x1dc, edx) != 0)
            return 1
        
        return sub_53d0e0(arg1, 0x74e8dc, arg5, arg4, arg3)

return sub_53d0e0(arg1, 0x74e8b0, edx, arg5, arg4, arg3, __return_addr)
