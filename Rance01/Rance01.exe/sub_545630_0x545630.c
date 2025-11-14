// 函数: sub_545630
// 地址: 0x545630
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

if (arg1 u< (*(arg3 + 0x1e8) - *(arg3 + 0x1e4)) s>> 2)
    int32_t esi_1 = *(arg3 + 0x1e4)
    arg1 = *(esi_1 + (arg1 << 2))
    
    if (arg1 != 0)
        int32_t ecx_4 = arg1[1]
        
        if (arg2 u>= ecx_4 u>> 2)
            int32_t var_14_3 = arg5
            return sub_53d1c0(arg5, arg3 + 0x1dc, arg3, 0x74f360)
        
        int32_t eax_1
        
        if (ecx_4 != 0)
            eax_1 = *arg1
        else
            eax_1 = 0
        
        uint32_t result = *(eax_1 + (arg2 << 2))
        
        if (result u< (*(arg3 + 0x1e8) - esi_1) s>> 2)
            int32_t ecx_8 = *(esi_1 + (result << 2))
            
            if (ecx_8 != 0)
                if (*(ecx_8 + 0x40) != 0)
                    if (*arg4 s> 0)
                        result = sub_553e60(arg4, arg3 + 0x1dc, result, arg4)
                        
                        if (result.b == 0)
                            int32_t var_14_7 = arg5
                            return sub_53d1c0(result, arg5, arg3, 0x74f3f0)
                    else
                        result = sub_545830(arg5, arg3, result, arg2, arg5)
                        
                        if (result.b == 0)
                            return result
                else if (*arg4 s> 0)
                    int32_t edx_3
                    result, edx_3 = sub_553df0(result, arg3 + 0x1dc, arg4, 1, 1)
                    
                    if (result.b == 0)
                        int32_t var_14_4 = arg5
                        return sub_53d1c0(arg5, edx_3, arg3, 0x74f3c4)
                
                result.b = 1
                return result
        
        int32_t var_14_2 = arg5
        return sub_53d1c0(result, arg5, arg3, 0x74f390)

int32_t var_14_1 = arg5
return sub_53d1c0(arg1, arg5, arg3, 0x74f330)
