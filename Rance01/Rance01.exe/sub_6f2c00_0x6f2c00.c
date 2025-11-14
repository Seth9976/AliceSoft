// 函数: sub_6f2c00
// 地址: 0x6f2c00
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

uint32_t i_1
int32_t result = sub_6f2b00(arg1, &i_1)

if (result == 0)
    uint32_t i_2 = i_1
    
    if (i_2 s< 2)
        return 0xffffffeb
    
    uint32_t i = i_2 - 2
    int32_t ebx_1 = *(arg1 + 0x24)
    void var_10
    
    if (i s>= ebx_1)
        i_1 = i
        result = sub_6fa870(arg1, ebx_1, &var_10)
        
        if (result != 0)
            return 0xffffffeb
        
        i = i_1 - ebx_1
    
    if (i s> 0)
        while (i s<= 0xffff)
            i_1 = i
            
            if (i s>= 0x1000)
                i = 0x1000
            
            result = sub_6fa870(arg1, i, &var_10)
            
            if (result != 0)
                return 0xffffffeb
            
            i = i_1 - 0x1000
            
            if (i s<= 0)
                break

return result
