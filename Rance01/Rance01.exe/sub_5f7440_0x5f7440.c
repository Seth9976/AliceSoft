// 函数: sub_5f7440
// 地址: 0x5f7440
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t ecx = 0
int32_t eax_2 = (*(arg1 + 8) - *(arg1 + 4)) s>> 2
int32_t* edx

if (eax_2 s> 0)
    int32_t* edi_1 = *(arg1 + 4)
    edx = edi_1
    
    do
        if (*edx == 0)
            edi_1[ecx] = 1
            
            if (ecx != 0xffffffff)
                return ecx + 1
            
            break
        
        ecx += 1
        edx = &edx[1]
    while (ecx s< eax_2)

int32_t eax_3 = *(arg1 + 8)
int32_t ebx_2 = (*(arg1 + 8) - *(arg1 + 4)) s>> 2
int32_t __saved_ecx
int32_t ecx_1

if (&__saved_ecx u< eax_3)
    ecx_1 = *(arg1 + 4)
    edx = &__saved_ecx

if (&__saved_ecx u>= eax_3 || ecx_1 u> &__saved_ecx)
    if (eax_3 == *(arg1 + 0xc))
        sub_40d3d0(arg1 + 4, edx, 1)
    
    int32_t* eax_8 = *(arg1 + 8)
    
    if (eax_8 != 0)
        *eax_8 = 1
        *(arg1 + 8) += 4
        return ebx_2 + 1
else
    if (eax_3 == *(arg1 + 0xc))
        sub_40d3d0(arg1 + 4, edx, 1)
    
    int32_t* eax_5 = *(arg1 + 8)
    
    if (eax_5 != 0)
        *eax_5 = *(*(arg1 + 4) + ((&__saved_ecx - ecx_1) s>> 2 << 2))

*(arg1 + 8) += 4
return ebx_2 + 1
