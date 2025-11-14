// 函数: sub_55b710
// 地址: 0x55b710
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t* result = arg3

if (arg1 != arg2)
    void* ebp_1 = arg1 + 0x2c
    
    do
        if (result != ebp_1 - 0x2c)
            int32_t* eax_2 = result[1]
            sub_429bc0(result, &arg3, *eax_2, eax_2)
            sub_55b790(result, ebp_1 - 0x2c)
        
        sub_401180(&result[4], 0xffffffff, ebp_1 - 0x1c, 0)
        result[0xb] = *ebp_1
        result[0xc] = *(ebp_1 + 4)
        sub_52f820(&result[0xd], ebp_1 + 8)
        ebp_1 += 0x44
        result = &result[0x11]
    while (ebp_1 - 0x2c != arg2)

return result
