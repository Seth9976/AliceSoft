// 函数: sub_5a2700
// 地址: 0x5a2700
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t ecx
int32_t var_4_1 = ecx
int32_t edx = *(arg1 + 0x1450)
int32_t ebp = *(arg1 + (arg3 << 2) + 0xb5c)
int32_t ecx_1 = arg3 * 2
int32_t var_4 = ebp
bool cond:2 = ecx_1 s>= edx

if (ecx_1 s> edx)
    *(arg1 + (arg3 << 2) + 0xb5c) = ebp
    return 

int32_t edx_4

do
    if (not(cond:2))
        int32_t esi_1 = *(arg1 + (ecx_1 << 2) + 0xb60)
        int32_t ebp_1 = *(arg1 + (ecx_1 << 2) + 0xb5c)
        int16_t edx_1 = *(arg2 + (esi_1 << 2))
        int16_t ebx_1 = *(arg2 + (ebp_1 << 2))
        
        if (edx_1 u< ebx_1)
            ecx_1 += 1
        else if (edx_1 == ebx_1)
            edx_1.b = *(esi_1 + arg1 + 0x1458)
            
            if (edx_1.b u<= *(arg1 + ebp_1 + 0x1458))
                ecx_1 += 1
        
        ebp = var_4
    
    int32_t esi_2 = *(arg1 + (ecx_1 << 2) + 0xb5c)
    int16_t edx_2 = *(arg2 + (ebp << 2))
    int16_t ebx_2 = *(arg2 + (esi_2 << 2))
    
    if (edx_2 u< ebx_2)
        break
    
    if (edx_2 == ebx_2)
        edx_2.b = *(arg1 + ebp + 0x1458)
        
        if (edx_2.b u<= *(esi_2 + arg1 + 0x1458))
            *(arg1 + (arg3 << 2) + 0xb5c) = ebp
            return 
    
    *(arg1 + (arg3 << 2) + 0xb5c) = esi_2
    edx_4 = *(arg1 + 0x1450)
    arg3 = ecx_1
    ecx_1 *= 2
    cond:2 = ecx_1 s>= edx_4
while (ecx_1 s<= edx_4)
*(arg1 + (arg3 << 2) + 0xb5c) = ebp
