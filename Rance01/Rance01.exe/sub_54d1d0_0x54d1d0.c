// 函数: sub_54d1d0
// 地址: 0x54d1d0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4 = arg1

if (arg1 u< (*(arg2 + 0x1e8) - *(arg2 + 0x1e4)) s>> 2)
    int32_t* edx_2 = *(*(arg2 + 0x1e4) + (arg1 << 2))
    
    if (edx_2 != 0)
        int32_t result = edx_2[1]
        
        if (arg4 u>= result u>> 2)
            return sub_53d0e0(arg2, 0x7511e0, arg1, arg4, arg6, result u>> 2, arg5)
        
        if (result != 0)
            *(*edx_2 + (arg4 << 2)) = arg6
            result.b = 1
            return result
        
        *(arg4 << 2) = arg6
        result.b = 1
        return result

int32_t entry_ebx
return sub_53d0e0(arg2, 0x75118c, arg1, arg4, arg5, arg3, entry_ebx)
