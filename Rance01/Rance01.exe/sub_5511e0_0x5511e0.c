// 函数: sub_5511e0
// 地址: 0x5511e0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t* edi = arg2
uint32_t result = edi[0xc]

if (result == arg1[0xc])
    uint32_t ecx_1 = edi[1] u>> 2
    
    if (ecx_1 == arg1[1] u>> 2)
        if (result != 0)
            int32_t ebx = 0
            
            if (ecx_1 s> 0)
                do
                    result = arg1[1]
                    
                    if (ebx u>= result u>> 2)
                        result.b = 0
                        return result
                    
                    if (result != 0)
                        result = *arg1
                    
                    int32_t ecx_5 = *(result + (ebx << 2))
                    result = edi[1]
                    
                    if (ebx u>= result u>> 2)
                        result.b = 0
                        return result
                    
                    if (result != 0)
                        result = *edi
                    
                    int32_t edx_5 = *(result + (ebx << 2))
                    result = arg1[5]
                    int32_t ecx_6
                    
                    if (ecx_5 u< (*(result + 0xc) - *(result + 8)) s>> 2)
                        ecx_6 = *(*(result + 8) + (ecx_5 << 2))
                    else
                        ecx_6 = 0
                    
                    int32_t edx_6
                    
                    if (edx_5 u< (*(result + 0xc) - *(result + 8)) s>> 2)
                        edx_6 = *(*(result + 8) + (edx_5 << 2))
                    else
                        edx_6 = 0
                    
                    if (ecx_6 == 0 || edx_6 == 0)
                        result.b = 0
                        return result
                    
                    if (sub_5511e0(edx_6).b == 0)
                        result.b = 0
                        return result
                    
                    ebx += 1
                while (ebx s< ecx_1)
            
            result.b = 1
            return result
        
        switch (edi[0xd] - 0x10)
            case 0, 8
                if (sub_551310(arg1, edi).b != 0)
                    result.b = 1
                    return result
            case 1, 9
                result = sub_5513e0(arg1, edi)
                
                if (result.b == 0)
                    return result
                
                result.b = 1
                return result
            default
                result = sub_551450(edi, arg1)
                
                if (result.b == 0)
                    return result
                
                result.b = 1
                return result

result.b = 0
return result
