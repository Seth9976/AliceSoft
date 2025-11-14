// 函数: sub_58e5f0
// 地址: 0x58e5f0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t result

if (*(arg1 + 0x1c) == 0)
    if (*(arg1 + 0x18) == 0)
        int32_t* eax_6 = **(*(arg1 + 8) + 0x1c)
        
        if ((*(*eax_6 + 0x98))(eax_6, 0, arg1 + 0x18) s>= 0 && sub_58e250(*(arg1 + 0xc)).b != 0)
            int32_t* eax_8 = **(*(arg1 + 8) + 0x1c)
            result = (*(*eax_8 + 0x94))(eax_8, 0, *(arg1 + 0x14))
            
            if (result s>= 0)
                goto label_58e6a0
            
            result.b = 0
            return result
else if (*(arg1 + 0x20) == 0)
    int32_t* eax_1 = **(*(arg1 + 8) + 0x1c)
    
    if ((*(*eax_1 + 0x98))(eax_1, 0, arg1 + 0x20) s>= 0 && sub_58e250(*(arg1 + 0xc)).b != 0)
        int32_t* eax_3 = **(*(arg1 + 8) + 0x1c)
        result = (*(*eax_3 + 0x94))(eax_3, 0, *(arg1 + 0x1c))
        
        if (result s>= 0)
        label_58e6a0:
            
            if (*(arg1 + 0x24) != 0)
                result = (*(**(arg1 + 0x24) + 0x10))()
            
            if (*(arg1 + 0x24) == 0 || result.b != 0)
                result.b = 1
                return result

result.b = 0
return result
