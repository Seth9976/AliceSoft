// 函数: sub_643260
// 地址: 0x643260
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = arg3
int32_t eax = arg5
int32_t edi = arg3
int32_t edx = edi * 2 + 2
int32_t var_4 = edi
bool cond:0 = edx != eax

while (edx s< eax)
    void* ecx_1 = edx * 0x8c
    int32_t esi_1 = *(ecx_1 + arg4 + 0x24)
    int32_t ebx_1 = *(ecx_1 + arg4 - 0x68)
    int32_t eax_1 = *(ecx_1 + arg4 - 0x60)
    int32_t* ecx_2 = ecx_1 + arg4
    
    if (esi_1 s< ebx_1)
        edx -= 1
    else if (esi_1 s<= ebx_1)
        int32_t esi_2 = ecx_2[0xa]
        int32_t ebx_2 = ecx_2[-0x19]
        
        if (esi_2 s< ebx_2)
            edx -= 1
        else if (esi_2 s<= ebx_2)
            int32_t esi_3 = ecx_2[0xb]
            
            if (esi_3 s< eax_1)
                edx -= 1
            else if (esi_3 s<= eax_1 && *ecx_2 s< ecx_2[-0x23])
                edx -= 1
    
    eax = arg5
    __builtin_memcpy(edi * 0x8c + arg4, edx * 0x8c + arg4, 0x8c)
    edi = edx
    edx = edx * 2 + 2
    cond:0 = edx != eax

if (not(cond:0))
    __builtin_memcpy(edi * 0x8c + arg4, &arg4[eax * 0x23 - 0x23], 0x8c)
    edi = eax - 1

int32_t __saved_ebx = arg7
int32_t var_18 = arg6
int32_t var_1c = var_4
return sub_643980(edi, var_4, arg6, arg4)
