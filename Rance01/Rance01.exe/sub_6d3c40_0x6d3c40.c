// 函数: sub_6d3c40
// 地址: 0x6d3c40
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t result = (*(*(arg1 + 8) + 0x5c))(0, 0, arg1)

if (result == 0)
    HANDLE edx_1 = *(arg1 + 0x3c)
    
    if (edx_1 != 0)
        uint32_t esi_2 = *(arg1 + 0x10) - *(arg1 + 0x14)
        uint32_t var_14
        
        if (sub_6ca7f0(edx_1, arg1 + 0x40, esi_2, &var_14) == 0 || esi_2 != var_14)
            return 0xffffffe9
        
        *(arg1 + 0x10) = *(arg1 + 0x14)

return result
