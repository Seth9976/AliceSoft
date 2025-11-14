// 函数: sub_41dbe0
// 地址: 0x41dbe0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t* result = sub_5f7370(*data_797da0, *(arg1 + 4))

if (result != 0 && *(result[3] + 0x4e) != 0)
    char* eax = data_797d44
    int32_t var_4 = 0
    int32_t var_8 = 0
    result = sub_424db0(eax)
    
    if (result.b != 0)
        result = (***(eax + 8))(&var_4, &var_8)
    
    if (*(arg1 + 0x44) == 0)
        for (int32_t* i = *(arg1 + 0x58); i != *(arg1 + 0x5c); i = &i[1])
            result = (*(**i + 0x18))(*(arg1 + 0x68))
    
    int32_t* i_1 = *(arg1 + 0x58)
    int32_t ebx_1 = var_8
    int32_t ebp_1 = var_4
    
    for (; i_1 != *(arg1 + 0x5c); i_1 = &i_1[1])
        result = (*(**i_1 + 0x1c))(*(arg1 + 0x68), ebp_1, ebx_1)

*(arg1 + 0x44) = 1
return result
