// 函数: sub_55c440
// 地址: 0x55c440
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t* result = arg3
void* ebp = arg1

if (ebp != arg2)
    void* ebp_1 = ebp + 0x10
    
    do
        if (result != ebp_1 - 0x10)
            int32_t* eax_2 = result[1]
            sub_4365a0(result, &arg3, *eax_2, eax_2)
            sub_55c4c0(result, ebp_1 - 0x10)
        
        if (&result[4] != ebp_1)
            int32_t* eax_5 = result[5]
            sub_429bc0(&result[4], &arg1, *eax_5, eax_5)
            sub_55b790(&result[4], ebp_1)
        
        result[8] = *(ebp_1 + 0x10)
        int32_t eax_7 = *(ebp_1 + 0x14)
        ebp_1 += 0x28
        result[9] = eax_7
        result = &result[0xa]
    while (ebp_1 - 0x10 != arg2)

return result
