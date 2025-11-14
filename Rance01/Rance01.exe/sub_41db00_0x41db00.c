// 函数: sub_41db00
// 地址: 0x41db00
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

if (*(arg1 + 0x31) != 0)
    int32_t var_4 = 0
    int32_t var_8 = 0
    char* eax_1 = data_797d44
    
    if (sub_424db0(eax_1) != 0)
        (***(eax_1 + 8))(&var_4, &var_8)
    
    int32_t* i = *(arg1 + 0x58)
    int32_t ebp_1 = var_8
    int32_t ebx_1 = var_4
    
    for (; i != *(arg1 + 0x5c); i = &i[1])
        (*(**i + 8))(*(arg1 + 0x68), ebx_1, ebp_1)

void* result = sub_41e890(arg1)
*(arg1 + 0x31) = 0
return result
