// 函数: sub_43c390
// 地址: 0x43c390
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

void* esi = (*(*arg3 + 8))(arg4, arg2)
int32_t* edi = (*(*arg5 + 8))(arg6, arg7)
int32_t* eax_7 = (*(*arg3 + 0x1c))() - arg8 * 4
int32_t result = (*(*arg5 + 0x1c))() - arg8 * 4

if (arg9 s> 0)
    int32_t i_1 = arg9
    int32_t i
    
    do
        if (arg8 s> 0)
            int32_t j_1 = arg8
            int32_t j
            
            do
                *esi = *edi
                esi += 4
                edi = &edi[1]
                j = j_1
                j_1 -= 1
            while (j != 1)
        
        esi += eax_7
        edi += result
        i = i_1
        i_1 -= 1
    while (i != 1)

return result
