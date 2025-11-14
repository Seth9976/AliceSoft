// 函数: sub_643680
// 地址: 0x643680
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t result_1 = arg1
int32_t eax_1
int32_t edx
edx:eax_1 = sx.q(result_1 - 1)
int32_t result = (eax_1 - edx) s>> 1

while (arg3 s< result_1)
    int32_t edx_1 = arg4[3]
    void* esi_2 = result * 0x8c
    int32_t ecx_1 = *(esi_2 + arg2 + 0xc)
    int32_t* esi_3 = esi_2 + arg2
    
    if (ecx_1 s>= edx_1)
        if (ecx_1 s> edx_1)
            break
        
        if (*esi_3 s>= *arg4)
            break
    
    __builtin_memcpy(result_1 * 0x8c + arg2, esi_3, 0x8c)
    result_1 = result
    int32_t eax_4
    int32_t edx_3
    edx_3:eax_4 = sx.q(result - 1)
    result = (eax_4 - edx_3) s>> 1

__builtin_memcpy(result_1 * 0x8c + arg2, arg4, 0x8c)
return result
