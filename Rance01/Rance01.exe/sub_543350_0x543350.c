// 函数: sub_543350
// 地址: 0x543350
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

*(arg1 + 0x2b0) -= 4
int32_t ebx = **(arg1 + 0x2b0)

if (ebx u< (*(arg1 + 0x1e8) - *(arg1 + 0x1e4)) s>> 2)
    int32_t* eax_4 = *(*(arg1 + 0x1e4) + (ebx << 2))
    
    if (eax_4 != 0)
        **(arg1 + 0x2b0) = sub_550950(eax_4)
        *(arg1 + 0x2b0) += 4
        int32_t result
        int32_t edx_1
        result, edx_1 = sub_552880(arg1 + 0x1dc, ebx)
        
        if (result.b == 0)
            return sub_53d1c0(result, edx_1, arg1, 0x74e758)
        
        result.b = 1
        return result

int32_t entry_ebx
return sub_53d0e0(arg1, 0x74e724, ebx, arg3, arg2, entry_ebx, __return_addr)
