// 函数: sub_5b6f20
// 地址: 0x5b6f20
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

void* ecx = *(arg1 + 0x1c)
int32_t* result = sub_6b5c43(0x60)
*result = sub_5b4d20(8, arg2)
result[1] = sub_5b4d20(0x10, arg2)
result[2] = sub_5b4d20(0x10, arg2)
result[3] = sub_5b4d20(6, arg2)
result[4] = sub_5b4d20(8, arg2)
int32_t eax_6 = sub_5b4d20(4, arg2) + 1
result[5] = eax_6

if (*result s>= 1 && result[1] s>= 1 && result[2] s>= 1 && eax_6 s>= 1)
    int32_t ebp_1 = 0
    
    if (eax_6 s<= 0)
        return result
    
    void* ebx_1 = &result[6]
    
    while (true)
        int32_t eax_7 = sub_5b4d20(8, arg2)
        *ebx_1 = eax_7
        
        if (eax_7 s< 0)
            break
        
        if (eax_7 s>= *(ecx + 0x18))
            break
        
        int32_t* eax_8 = *(ecx + (eax_7 << 2) + 0x720)
        
        if (eax_8[3] == 0)
            break
        
        if (*eax_8 s< 1)
            break
        
        ebp_1 += 1
        ebx_1 += 4
        
        if (ebp_1 s>= result[5])
            return result

sub_6bc670(result, 0, 0x60)
__free_base(result)
return 0
