// 函数: sub_585520
// 地址: 0x585520
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t ecx
int32_t var_4_1 = ecx
int32_t edx = arg4
int32_t ebx = arg3
int32_t ecx_1 = ebx

if (ebx != edx)
    int32_t ebp_1 = *(arg1 + 4)
    
    if (edx != ebp_1)
        int32_t edi
        int32_t var_14_1 = edi
        
        do
            int32_t esi_1 = edx
            int32_t edi_2 = ebx
            edx += 0x7c
            ebx += 0x7c
            __builtin_memcpy(edi_2, esi_1, 0x7c)
        while (edx != ebp_1)
    
    *(arg1 + 4) = ebx

*arg2 = ecx_1
return arg2
