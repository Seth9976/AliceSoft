// 函数: sub_4aff30
// 地址: 0x4aff30
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t* ecx_2 = *(arg1 + 0x10)
int32_t result

if (ecx_2 != 0 && (*(*ecx_2 + 8))().b != 0)
    (*(**(arg1 + 0x10) + 0x14))(arg1)
    
    if (*(arg1 + 0x50) != 0)
        result.b = 1
        return result
    
    int32_t* ecx_1 = *(arg1 + 0xc)
    
    if (ecx_1 != 0)
        result = (*(*ecx_1 + 0xc))(0x756830)
        *(arg1 + 0x50) = result
        
        if (result != 0)
            result.b = 1
            return result

result.b = 0
return result
