// 函数: sub_4eb920
// 地址: 0x4eb920
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

void* result

for (int32_t* i = *(arg1 + 0x30); i != *(arg1 + 0x34); i = &i[1])
    result = *i
    
    if (result != 0)
        int32_t ecx_1 = *(result + 8)
        
        if (ecx_1 == 0)
            if (sub_4db6e0(result + 0x244, arg2).b == 0)
                result.b = 0
                return result
        else if (ecx_1 == 1)
            void* esi_1 = *(result + 0x29c)
            
            if (esi_1 != 0)
                if (sub_502b50(esi_1, arg2).b == 0)
                    result.b = 0
                    return result
                
                if (sub_502d60(arg2, esi_1).b == 0)
                    result.b = 0
                    return result
                
                int32_t ecx_4
                result, ecx_4 = sub_502de0(esi_1)
                
                if (result.b == 0)
                    result.b = 0
                    return result
                
                if (sub_502e50(ecx_4, esi_1).b == 0)
                    result.b = 0
                    return result
                
                *(esi_1 + 0xc) = 1

*(arg1 + 0xc) = 1
result.b = 1
return result
