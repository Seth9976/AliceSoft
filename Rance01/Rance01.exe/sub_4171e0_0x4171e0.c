// 函数: sub_4171e0
// 地址: 0x4171e0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t ecx_1 = (arg3 - arg4) s>> 2
int32_t eax_1
int32_t edx
edx:eax_1 = sx.q(ecx_1)
int32_t result = eax_1 - edx
int32_t ebx_1 = result s>> 1
int32_t var_10 = ecx_1

if (ebx_1 s> 0)
    int32_t esi_1 = ebx_1 * 2 + 2
    
    while (true)
        int32_t eax_2 = *(arg4 + (ebx_1 << 2) - 4)
        edx.b = arg5
        ebx_1 -= 1
        int32_t esi_2 = esi_1 - 2
        int32_t var_c_1 = esi_2
        int32_t var_4 = eax_2
        int32_t ebp_1 = ebx_1
        bool cond:0_1 = esi_2 != ecx_1
        
        if (esi_2 s< ecx_1)
            do
                if (sub_416ef0(*(arg4 + (esi_2 << 2)), *(arg4 + (esi_2 << 2) - 4)) != 0)
                    esi_2 -= 1
                
                *(arg4 + (ebp_1 << 2)) = *(arg4 + (esi_2 << 2))
                ebp_1 = esi_2
                esi_2 = esi_2 * 2 + 2
            while (esi_2 s< var_10)
            
            ecx_1 = var_10
            cond:0_1 = esi_2 != ecx_1
        
        if (not(cond:0_1))
            *(arg4 + (ebp_1 << 2)) = *(arg4 + (ecx_1 << 2) - 4)
            ebp_1 = ecx_1 - 1
        
        int32_t var_20_2 = edx.b.d
        result, edx = sub_4173d0(arg4, ebp_1, ebx_1, &var_4)
        
        if (ebx_1 s<= 0)
            break
        
        ecx_1 = var_10
        esi_1 = var_c_1

return result
