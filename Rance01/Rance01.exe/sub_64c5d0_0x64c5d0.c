// 函数: sub_64c5d0
// 地址: 0x64c5d0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t ecx
int32_t var_4_1 = ecx
int32_t edx = arg3
int32_t edi = arg1
int32_t eax = edi * 2 + 2
int32_t var_4 = edi
bool cond:0 = eax != edx

if (eax s< edx)
    do
        int32_t ecx_1 = eax * 5
        int32_t esi_1 = *(arg2 + (ecx_1 << 3))
        int32_t ebx_1 = *(arg2 + (ecx_1 << 3) - 0x28)
        void* edx_1 = arg2 + (ecx_1 << 3)
        ecx_1.b = *(edx_1 + 0x25)
        edx_1.b = *(edx_1 - 3)
        
        if (ecx_1.b != 0)
            if (edx_1.b != 0 && esi_1 s< ebx_1)
                eax -= 1
        else if (edx_1.b != 0 || esi_1 s< ebx_1)
            eax -= 1
        
        __builtin_memcpy(arg2 + edi * 0x28, arg2 + eax * 0x28, 0x28)
        edi = eax
        eax = eax * 2 + 2
    while (eax s< arg3)
    
    edx = arg3
    cond:0 = eax != edx

if (not(cond:0))
    __builtin_memcpy(arg2 + edi * 0x28, arg2 + edx * 0x28 - 0x28, 0x28)
    edi = edx - 1

int32_t __saved_ebx = arg5
return sub_64ca60(arg4, arg5, edi, arg2, var_4, arg4)
