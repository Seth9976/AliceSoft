// 函数: sub_6eed30
// 地址: 0x6eed30
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t* edi = arg5
int32_t esi = edi[1]
int32_t edx = edi[3]
int32_t ebp_2 = esi * arg6 + arg4

if (esi s>= edx)
    return 

int32_t eax = edi[2]
int32_t ebx_3 = esi * 8

do
    int32_t ecx_1 = *edi
    
    if (ecx_1 s< eax)
        int32_t edx_1 = ecx_1 + ebx_3
        int32_t var_18_1 = ebp_2
        
        do
            eax.b = *(arg1 + (edx_1 << 1))
            ebp_2 = var_18_1
            *(ebp_2 + (ecx_1 << 2)) = eax.b
            eax.b = *(arg2 + (edx_1 << 1))
            *(ebp_2 + (ecx_1 << 2) + 1) = eax.b
            eax.b = *(arg3 + (edx_1 << 1))
            edx_1 += 1
            *(ebp_2 + (ecx_1 << 2) + 2) = eax.b
            *(ebp_2 + (ecx_1 << 2) + 3) = 0xff
            ecx_1 += 1
            eax = arg5[2]
        while (ecx_1 s< eax)
        
        edi = arg5
        edx = edi[3]
    
    ebp_2 += arg6
    ebx_3 += 8
    esi += 1
while (esi s< edx)
