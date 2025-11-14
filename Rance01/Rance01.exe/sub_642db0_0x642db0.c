// 函数: sub_642db0
// 地址: 0x642db0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = arg3
int32_t edi = arg3
int32_t edx = edi * 2 + 2
int32_t var_4 = edi
bool cond:0 = edx != arg1

while (edx s< arg1)
    void* ecx_1 = edx * 0x8c
    int32_t esi_2 = *(ecx_1 + arg4 + 0x14) * *(ecx_1 + arg4 + 0x10)
    int32_t ebx_2 = *(ecx_1 + arg4 - 0x78) * *(ecx_1 + arg4 - 0x7c)
    int32_t* ecx_2 = ecx_1 + arg4
    
    if (esi_2 s< ebx_2)
        edx -= 1
    else if (esi_2 s<= ebx_2 && *ecx_2 s< ecx_2[-0x23])
        edx -= 1
    
    __builtin_memcpy(edi * 0x8c + arg4, edx * 0x8c + arg4, 0x8c)
    edi = edx
    edx = edx * 2 + 2
    cond:0 = edx != arg1

if (not(cond:0))
    __builtin_memcpy(edi * 0x8c + arg4, &arg4[arg1 * 0x23 - 0x23], 0x8c)
    edi = arg1 - 1

int32_t __saved_ebx = arg6
int32_t var_18 = arg5
int32_t var_1c = var_4
return sub_643800(edi, var_4, arg5, arg4)
