// 函数: sub_41d9f0
// 地址: 0x41d9f0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t* result_1 = nullptr
int32_t var_8 = 0
char* eax = data_797d44
int32_t* result = sub_424db0(eax)

if (result.b != 0)
    result = (***(eax + 8))(&result_1, &var_8)
    
    if (result.b == 1)
        if (*(arg1 + 0x31) == 0)
            int32_t* i = *(arg1 + 0x58)
            int32_t ebp_1 = var_8
            int32_t* result_2 = result_1
            
            for (; i != *(arg1 + 0x5c); i = &i[1])
                (***i)(*(arg1 + 0x68), result_2, ebp_1)
            
            *(arg1 + 0x34) = 0
        
        if (*(arg1 + 0x30) == 0)
            sub_41e8f0(arg1)
        else
            sub_41e960(arg1)
        
        int32_t* i_1 = *(arg1 + 0x58)
        result = result_1
        int32_t ebp_2 = *(arg1 + 0x34)
        int32_t ebx_1 = var_8
        
        if (i_1 != *(arg1 + 0x5c))
            do
                (*(**i_1 + 0x14))(*(arg1 + 0x68), result, ebx_1, ebp_2)
                i_1 = &i_1[1]
            while (i_1 != *(arg1 + 0x5c))
            
            result = result_1
            ebx_1 = var_8
        
        if (*(arg1 + 0x3c) != result || *(arg1 + 0x40) != ebx_1)
            int32_t* i_2 = *(arg1 + 0x58)
            
            if (i_2 != *(arg1 + 0x5c))
                do
                    (*(**i_2 + 4))(*(arg1 + 0x68), result, ebx_1)
                    i_2 = &i_2[1]
                while (i_2 != *(arg1 + 0x5c))
                
                result = result_1
                ebx_1 = var_8
        
        *(arg1 + 0x3c) = result
        *(arg1 + 0x40) = ebx_1

*(arg1 + 0x31) = 1
return result
