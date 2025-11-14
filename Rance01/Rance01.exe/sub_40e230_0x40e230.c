// 函数: sub_40e230
// 地址: 0x40e230
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

void* esi = data_797d34
void* result = sub_40dc10(esi)

if (result.b != 0)
    int32_t* result_1
    
    if (*(esi + 0x10) != 0)
        result = (***(esi + 0x10))(arg1)
        result_1 = result
    else if (*(esi + 0xc) == 0)
        result_1 = nullptr
    else
        result = (***(esi + 0xc))(arg1)
        result_1 = result
    
    void* result_2
    
    if (*(esi + 0x10) != 0)
        result = (*(**(esi + 0x10) + 4))(arg2)
        result_2 = result
    else if (*(esi + 0xc) == 0)
        result_2 = nullptr
    else
        result = (***(esi + 0xc))(arg2)
        result_2 = result
    
    if (result_1 != 0)
        int32_t arg_4
        int32_t arg_8
        int32_t arg_10
        int32_t arg_14
        int32_t arg_18
        int32_t arg_1c
        result = sub_40dc60(result_1, result_2, &arg_4, &arg_8, &arg_10, &arg_14, &arg_18, &arg_1c)
        
        if (result.b != 0)
            result = (*(*result_1 + 0x24))()
            
            if (result.b != 0)
                result = (*(*result_2 + 0x24))()
                
                if (result.b != 0)
                    result = (*(*result_2 + 0x28))()
                    
                    if (result.b != 0)
                        return (*(**(esi + 0x14) + 0x20))(result_1, arg_4, arg_8, result_2, arg_10, 
                            arg_14, arg_18, arg_1c)

return result
