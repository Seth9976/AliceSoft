// 函数: sub_411610
// 地址: 0x411610
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

void* esi = (*(*arg2 + 8))(arg3, arg4)
char* edi = (*(*arg5 + 8))(arg6, arg7)
int32_t ebp_3 = arg8 * 4
int32_t* eax_8 = (*(*arg2 + 0x1c))() - ebp_3
int32_t result = (*(*arg5 + 0x1c))() - ebp_3

if (arg9 s> 0)
    arg5 = arg9
    int32_t* i
    
    do
        int32_t j_1 = arg8
        
        if (j_1 s> 0)
            int32_t j
            
            do
                uint32_t ebp_6 = zx.d(*(esi + 1))
                *esi = *(zx.d(*edi) + zx.d(*esi) + *(arg1 + 0x10))
                uint32_t ebp_8 = zx.d(*(esi + 2))
                *(esi + 1) = *(zx.d(edi[1]) + ebp_6 + *(arg1 + 0x10))
                *(esi + 2) = *(zx.d(edi[2]) + ebp_8 + *(arg1 + 0x10))
                esi += 4
                edi = &edi[4]
                j = j_1
                j_1 -= 1
            while (j != 1)
        
        esi += eax_8
        edi = &edi[result]
        i = arg5
        arg5 -= 1
    while (i != 1)

return result
