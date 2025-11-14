// 函数: sub_41b810
// 地址: 0x41b810
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

void* result = sub_5f7370(*data_797da0, *(*(arg1 + 8) + 4))

if (result != 0)
    result = *(result + 0xc)
    int32_t var_c = arg2
    int32_t var_8 = 0xff
    int32_t var_4 = 0
    int32_t* ecx_1 = &var_c
    
    if (arg2 s>= 0xff)
        ecx_1 = &var_8
    
    if (*ecx_1 s<= 0)
        ecx_1 = &var_4
    
    int32_t ecx_2 = *ecx_1
    
    if (*(result + 0x28) != ecx_2)
        *(result + 0x28) = ecx_2
        *(result + 0xc) = 1

return result
