// 函数: sub_40e5d0
// 地址: 0x40e5d0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

void* esi = data_797d34
int32_t* result = sub_40dc10(esi)

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
    
    int32_t* result_2
    
    if (*(esi + 0x10) != 0)
        result = (*(**(esi + 0x10) + 4))(arg2)
        result_2 = result
    else if (*(esi + 0xc) == 0)
        result_2 = nullptr
    else
        result = (***(esi + 0xc))(arg2)
        result_2 = result
    
    int32_t arg_c
    
    if (arg_c s> 0)
        int32_t arg_4
        int32_t arg_8
        int32_t arg_10
        int32_t arg_18
        int32_t arg_1c
        int32_t arg_20
        int32_t* arg_24
        result = sub_40ddf0(&arg_c, &arg_20, result_1, &arg_4, &arg_8, &arg_10, result_2, &arg_18, 
            &arg_1c, &arg_24)
        
        if (result.b != 0)
            result = (*(*result_1 + 0x24))()
            
            if (result.b != 0)
                result = (*(*result_2 + 0x24))()
                
                if (result.b != 0)
                    return (*(**(esi + 0x14) + 0x40))(result_1, arg_4, arg_8, arg_c, arg_10, 
                        result_2, arg_18, arg_1c, arg_20, arg_24)

return result
