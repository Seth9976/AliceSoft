// 函数: sub_643980
// 地址: 0x643980
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t ebp = arg2
int32_t result_1 = arg1
int32_t eax_1
int32_t edx
edx:eax_1 = sx.q(result_1 - 1)
int32_t result = (eax_1 - edx) s>> 1

while (arg3 s< result_1)
    int32_t edx_1 = arg4[9]
    void* esi_2 = result * 0x8c
    int32_t ecx_1 = *(esi_2 + ebp + 0x24)
    int32_t* esi_3 = esi_2 + ebp
    int32_t ebp_1 = arg4[0xb]
    
    if (ecx_1 s>= edx_1)
        if (ecx_1 s> edx_1)
            ebp = arg2
            break
        
        int32_t ecx_2 = esi_3[0xa]
        int32_t edx_2 = arg4[0xa]
        
        if (ecx_2 s>= edx_2)
            if (ecx_2 s> edx_2)
                ebp = arg2
                break
            
            int32_t ecx_3 = esi_3[0xb]
            
            if (ecx_3 s>= ebp_1 && (ecx_3 s> ebp_1 || *esi_3 s>= *arg4))
                ebp = arg2
                break
    
    ebp = arg2
    __builtin_memcpy(result_1 * 0x8c + ebp, esi_3, 0x8c)
    result_1 = result
    int32_t eax_4
    int32_t edx_4
    edx_4:eax_4 = sx.q(result - 1)
    result = (eax_4 - edx_4) s>> 1

__builtin_memcpy(result_1 * 0x8c + ebp, arg4, 0x8c)
return result
