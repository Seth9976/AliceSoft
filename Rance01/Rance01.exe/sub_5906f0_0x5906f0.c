// 函数: sub_5906f0
// 地址: 0x5906f0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t* ecx = *(arg1 + 0xc)
int32_t* result

if (ecx != 0)
    result = *(arg1 + 0x10)
    
    if (result != 0)
        int32_t edx_1 = *(arg1 + 0x20)
        
        if (*(arg1 + 0x28) == 0)
            if (sub_590950(ecx, *(arg1 + 0x14), *(arg1 + 0x18), result, *(arg1 + 0x1c), edx_1).b
                    == 0)
                result.b = 0
                return result
            
            *(arg1 + 0x28) = 1
            result.b = 1
            return result
        
        if (sub_590750(ecx, result, *(arg1 + 0x1c), edx_1).b == 0)
            result.b = 0
            return result

result.b = 1
return result
