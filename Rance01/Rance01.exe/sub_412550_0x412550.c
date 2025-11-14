// 函数: sub_412550
// 地址: 0x412550
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

void* esi = (*(*arg1 + 8))(arg2, arg3)
char* edi = (*(*arg4 + 8))(arg5 + arg7 - 1, arg6)
int32_t ebx_3 = arg7 * 4
int32_t* eax_8 = (*(*arg1 + 0x1c))() - ebx_3
int32_t result = (*(*arg4 + 0x1c))() + ebx_3

if (arg8 s> 0)
    int32_t i_1 = arg8
    int32_t i
    
    do
        int32_t j_1 = arg7
        
        if (j_1 s> 0)
            int32_t j
            
            do
                *esi = *edi
                *(esi + 1) = edi[1]
                *(esi + 2) = edi[2]
                esi += 4
                edi -= 4
                j = j_1
                j_1 -= 1
            while (j != 1)
        
        esi += eax_8
        edi = &edi[result]
        i = i_1
        i_1 -= 1
    while (i != 1)

return result
