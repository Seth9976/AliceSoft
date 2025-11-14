// 函数: sub_5cdae0
// 地址: 0x5cdae0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

void** eax_2 = *(arg1 + 4)
int32_t* ebp = arg2
void** edi = eax_2[1]
arg2 = eax_2

if (*(edi + 0x29) != 0)
    return eax_2

int32_t ebx_1 = ebp[4]

do
    int32_t* eax = &edi[3]
    int32_t* ecx_1
    
    if (ebp[5] u< 0x10)
        ecx_1 = ebp
    else
        ecx_1 = *ebp
    
    int32_t esi_1 = eax[4]
    int32_t edx_1 = esi_1
    
    if (esi_1 u>= ebx_1)
        edx_1 = ebx_1
    
    if (eax[5] u>= 0x10)
        eax = *eax
    
    int32_t eax_1 = sub_402320(eax, eax, ecx_1, edx_1)
    bool cond:2_1 = eax_1 s>= 0
    
    if (eax_1 != 0)
        goto label_5cdb43
    
    if (esi_1 u< ebx_1)
        edi = edi[2]
    else
        eax_1.b = esi_1 != ebx_1
        cond:2_1 = eax_1 s>= 0
    label_5cdb43:
        
        if (cond:2_1)
            arg2 = edi
            edi = *edi
        else
            edi = edi[2]
while (*(edi + 0x29) == 0)

return arg2
