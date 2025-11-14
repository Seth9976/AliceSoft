// 函数: sub_68d090
// 地址: 0x68d090
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t* var_4 = arg1
sub_68bec0(arg2)
int32_t* edx = arg3
char* eax_1 = *edx

if (&eax_1[4] u> edx[1])
    eax_1.b = 0
    return eax_1

uint32_t ebx_6 = ((zx.d(eax_1[3]) << 8 | zx.d(eax_1[2])) << 8 | zx.d(eax_1[1])) << 8 | zx.d(*eax_1)
int32_t ebp = 0
*edx = &eax_1[4]

if (ebx_6 s<= 0)
    uint32_t eax_2
    eax_2.b = 1
    return eax_2

int32_t** eax_7

while (true)
    int32_t* eax_3 = sub_68b940(edx)
    
    if (eax_3 == 0)
        eax_3.b = 0
        return eax_3
    
    int32_t eax_4 = *(arg2 + 8)
    var_4 = eax_3
    int32_t ecx_3
    
    if (&var_4 u< eax_4)
        ecx_3 = *(arg2 + 4)
    
    if (&var_4 u>= eax_4 || ecx_3 u> &var_4)
        if (eax_4 == *(arg2 + 0xc))
            sub_4307a0(arg2 + 4)
        
        eax_7 = *(arg2 + 8)
        
        if (eax_7 != 0)
            *eax_7 = eax_3
    else
        if (eax_4 == *(arg2 + 0xc))
            sub_4307a0(arg2 + 4)
        
        eax_7 = *(arg2 + 8)
        
        if (eax_7 != 0)
            *eax_7 = *(*(arg2 + 4) + ((&var_4 - ecx_3) s>> 2 << 2))
    
    *(arg2 + 8) += 4
    ebp += 1
    
    if (ebp s>= ebx_6)
        break
    
    edx = arg3

eax_7.b = 1
return eax_7
