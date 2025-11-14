// 函数: sub_411260
// 地址: 0x411260
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

char* esi = (*(*arg2 + 8))(arg3, arg4)
void* edi = (*(*arg5 + 8))(arg6, arg7)
int32_t ebp_3 = arg8 * 4
int32_t eax_8 = (*(*arg2 + 0x1c))() - ebp_3
int32_t* result = (*(*arg5 + 0x1c))() - ebp_3
arg2 = result

if (arg9 s> 0)
    arg5 = arg9
    int32_t* i
    
    do
        int32_t j_1 = arg8
        
        if (j_1 s> 0)
            int32_t j
            
            do
                uint32_t eax_13 = zx.d(esi[1])
                *esi = *(*(*(arg1 + 4) + (zx.d(*esi) << 2)) + zx.d(*edi))
                uint32_t eax_15 = zx.d(esi[2])
                esi[1] = *(*(*(arg1 + 4) + (eax_13 << 2)) + zx.d(*(edi + 1)))
                esi[2] = *(*(*(arg1 + 4) + (eax_15 << 2)) + zx.d(*(edi + 2)))
                esi = &esi[4]
                edi += 4
                j = j_1
                j_1 -= 1
            while (j != 1)
            result = arg2
        
        esi = &esi[eax_8]
        edi += result
        i = arg5
        arg5 -= 1
    while (i != 1)

return result
