// 函数: sub_56e710
// 地址: 0x56e710
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

BOOL result

if (*(arg1 + 0xac) == 0)
    void* esi_1 = *(arg1 + 0x94)
    
    if (esi_1 != 0)
        result = sub_58a5e0(esi_1)
        
        if (result.b != 0)
            void* esi_2 = *(arg1 + 0x94)
            
            if (esi_2 != 0)
                result = sub_58a120(esi_2)
            
            if (esi_2 != 0 && result.b == 0)
                result.b = 0
                return result
            
            result = *(arg1 + 0x94)
            
            if (result != 0)
                if (sub_58a1b0(result).b == 0 || *(arg1 + 0x38) == 0)
                    result.b = 0
                    return result
            else if (*(arg1 + 0x38) == 0)
                result.b = 0
                return result
            
            if (*(arg1 + 0x78) != 0 && (*(**(arg1 + 0x78) + 0x1c))() s> 0
                    && sub_56d5a0(arg1 + 0x38).b == 0)
                result.b = 0
                return result

result.b = 1
return result
