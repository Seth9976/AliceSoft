// 函数: sub_547260
// 地址: 0x547260
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t ecx_3 = arg2[1]
int32_t esi = arg3
int32_t ebp

if (ecx_3 != 0)
    ebp = *arg2
else
    ebp = 0

if (esi s< 0)
    esi = 0

void* eax
eax.b = arg6 != 0

if (arg7 == 0)
    uint32_t ecx
    
    if (arg2[0x10].b != 0)
        ecx = ecx_3 u>> 2
    else
        ecx = 0
    
    int32_t eax_1 = esi
    
    if (esi s< arg5)
        while (eax_1 s< ecx)
            if (*(ebp + (eax_1 << 2)) == eax)
                **(arg4 + 0x2b0) = eax_1
                *(arg4 + 0x2b0) += 4
                eax_1.b = 1
                return eax_1
            
            eax_1 += 1
            
            if (eax_1 s>= arg5)
                break
    
    **(arg4 + 0x2b0) = 0xffffffff
    *(arg4 + 0x2b0) += 4

eax.b = 1
return eax
