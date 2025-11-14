// 函数: sub_5813d0
// 地址: 0x5813d0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t* ebp = arg1
int32_t edi = arg3
int32_t ebx_2 = (arg2 - ebp) s>> 3
int32_t result_1 = (edi - ebp) s>> 3
int32_t result = result_1
int32_t esi = ebx_2

if (ebx_2 != 0)
    int32_t i
    
    do
        i = mods.dp.d(sx.q(result), esi)
        result = esi
        esi = i
    while (i != 0)

if (result s< result_1 && result s> 0)
    void* edx_3 = &ebp[result * 2]
    arg2 = edx_3
    
    while (true)
        int32_t* ecx_2 = edx_3 + (ebx_2 << 3)
        int32_t* esi_1 = edx_3
        
        if (ecx_2 == edi)
            ecx_2 = ebp
        
        do
            int32_t edx_4 = *esi_1
            int32_t edi_1 = esi_1[1]
            *esi_1 = *ecx_2
            esi_1[1] = ecx_2[1]
            *ecx_2 = edx_4
            ecx_2[1] = edi_1
            edi = arg3
            int32_t edx_7 = (edi - ecx_2) s>> 3
            esi_1 = ecx_2
            
            if (ebx_2 s>= edx_7)
                ecx_2 = &arg1[(ebx_2 - edx_7) * 2]
            else
                ecx_2 = &ecx_2[ebx_2 * 2]
        while (ecx_2 != arg2)
        
        result -= 1
        edx_3 = arg2 - 8
        arg2 = edx_3
        
        if (result s<= 0)
            break
        
        ebp = arg1

return result
