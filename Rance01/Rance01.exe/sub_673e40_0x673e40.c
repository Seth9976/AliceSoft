// 函数: sub_673e40
// 地址: 0x673e40
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t result

if (arg2 != 0)
    int32_t edx_1 = arg3
    
    if (edx_1 != 0)
        if (arg4 == 0)
            result.b = 0
            return result
        
        int32_t eax = *(arg1 + 4)
        
        if (eax s<= arg2 && *(arg1 + 0x10) != 0)
            if ((*(**(arg1 + 0x10) + 0x64))(arg2 - eax, edx_1, arg4) != 0)
                return 1
            
            edx_1 = arg3
        
        return (*(**(arg1 + 0xc) + 0x64))(arg2, edx_1, arg4)

result.b = 0
return result
