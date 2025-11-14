// 函数: sub_5d8a50
// 地址: 0x5d8a50
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

void* ebp = arg2

if (*(arg1 + 4) != 0)
    void* var_c
    sub_42e070(arg1 + 0x18, &var_c, &arg2)
    void* eax_2 = var_c
    
    if (eax_2 != *(arg1 + 0x1c))
        return *(eax_2 + 0x10)
    
    if (arg3 != 0)
        int32_t eax_5 = (*(**(arg1 + 4) + 0xc))(ebp)
        
        if (eax_5 != 0)
            int32_t* result_2 = operator new(0x10)
            int32_t* result
            
            if (result_2 == 0)
                result = nullptr
            else
                int32_t edi_1 = *(arg1 + 0x40)
                *result_2 = eax_5
                result_2[1] = edi_1
                result_2[2] = 0x64
                result_2[3] = 0x64
                result = result_2
            
            var_c = ebp
            int32_t* result_1 = result
            sub_5d7ff0(&var_c, arg1 + 0x18, sub_40d430(arg1 + 0x18, &var_c))
            return result

return 0
