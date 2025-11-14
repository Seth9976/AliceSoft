// 函数: sub_642940
// 地址: 0x642940
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t ebp = arg3
int32_t edi = arg1
int32_t edx = edi * 2 + 2
arg3 = edi
bool cond:0 = edx != ebp

while (edx s< ebp)
    void* eax_1 = edx * 0x8c
    int32_t ecx_1 = *(eax_1 + arg2 + 0xc)
    int32_t esi_1 = *(eax_1 + arg2 - 0x80)
    int32_t* eax_2 = eax_1 + arg2
    
    if (ecx_1 s< esi_1)
        edx -= 1
    else if (ecx_1 s<= esi_1 && *eax_2 s< eax_2[-0x23])
        edx -= 1
    
    __builtin_memcpy(edi * 0x8c + arg2, edx * 0x8c + arg2, 0x8c)
    edi = edx
    edx = edx * 2 + 2
    cond:0 = edx != ebp

if (not(cond:0))
    __builtin_memcpy(edi * 0x8c + arg2, &arg2[ebp * 0x23 - 0x23], 0x8c)
    edi = ebp - 1

int32_t var_14 = arg5
int32_t var_18 = arg4
int32_t var_1c = arg3
return sub_643680(edi, arg5, arg3, arg2)
