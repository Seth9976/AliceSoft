// 函数: sub_50ebb0
// 地址: 0x50ebb0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t* ecx_5 = *(arg1 + 0x78)
void* result

if (ecx_5 != 0)
    result = (*(*ecx_5 + 0x30))(0)

if (ecx_5 == 0 || result.b != 0)
    int32_t* ecx = *(arg1 + 0x90)
    
    if (ecx != 0)
        result = (*(*ecx + 0x30))(1)
    
    if (ecx == 0 || result.b != 0)
        int32_t* ecx_1 = *(arg1 + 0x80)
        
        if (ecx_1 != 0)
            result = (*(*ecx_1 + 0x30))(2)
        
        if (ecx_1 == 0 || result.b != 0)
            int32_t* ecx_2 = *(arg1 + 0x7c)
            
            if (ecx_2 != 0)
                result = (*(*ecx_2 + 0x30))(3)
            
            if (ecx_2 == 0 || result.b != 0)
                int32_t* ecx_3 = *(arg1 + 0x84)
                
                if (ecx_3 != 0)
                    result = (*(*ecx_3 + 0x30))(4)
                
                if (ecx_3 == 0 || result.b != 0)
                    int32_t* ecx_4 = *(arg2 + 0x44)
                    
                    if (ecx_4 != 0)
                        result = (*(*ecx_4 + 0x30))(7)
                    
                    if (ecx_4 == 0 || result.b != 0)
                        result.b = 1
                        return result

result.b = 0
return result
