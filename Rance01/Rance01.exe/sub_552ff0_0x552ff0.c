// 函数: sub_552ff0
// 地址: 0x552ff0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t* result

if (arg2 u< (*(arg1 + 0xc) - *(arg1 + 8)) s>> 2)
    void* edx_1 = *(*(arg1 + 8) + (arg2 << 2))
    
    if (edx_1 != 0)
        void* ecx_3 = *(*(edx_1 + 0x14) + 4)
        result = *(edx_1 + 0x1c)
        
        if (result u< (*(ecx_3 + 0x12c) - *(ecx_3 + 0x128)) s>> 4)
            int32_t eax_1 = result << 4
            
            if (eax_1 != neg.d(*(ecx_3 + 0x128)))
                result = (eax_1 + *(ecx_3 + 0x128))[1]
                
                if (result != 0)
                    result = result[0xc]
                    
                    if (*(edx_1 + 0x2c) == 0)
                        *(edx_1 + 0x2c) = 1
                        
                        if (result == 0xffffffff)
                            result.b = 1
                            return result
                        
                        if (sub_53fda0(*(arg1 + 4), arg1, arg2, arg2, result, nullptr).b != 0)
                            result.b = 1
                            return result
                    else
                        sub_604c90(0x74c9c8)

result.b = 0
return result
