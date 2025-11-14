// 函数: sub_4b7410
// 地址: 0x4b7410
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t* result = arg1[7]

if (result != arg1[8])
    int32_t* i = result
    int32_t esi_1 = 0
    int32_t edi_1 = 0
    
    for (; i != arg1[8]; i = &i[1])
        void* eax = *i
        int32_t ecx_2 = *(eax + 0xc) + *(eax + 4)
        
        if (esi_1 s< ecx_2)
            esi_1 = ecx_2
        
        int32_t eax_2 = *(eax + 8) + *(eax + 0x10)
        
        if (edi_1 s< eax_2)
            edi_1 = eax_2
    
    int32_t ecx_4 = 1
    
    if (esi_1 s> 1)
        ecx_4 = 1
        
        do
            ecx_4 *= 2
        while (ecx_4 s< esi_1)
    
    result = 1
    
    if (edi_1 s> 1)
        do
            result *= 2
        while (result s< edi_1)
    
    if (*arg1 s> ecx_4)
        *arg1 = ecx_4
    
    if (arg1[1] s> result)
        arg1[1] = result
    
    int32_t* ecx_5 = arg1[3]
    int32_t* result_1 = arg1[4]
    
    if (ecx_5 != result_1)
        result = result_1
        
        if (result_1 != result_1)
            do
                *ecx_5 = *result
                ecx_5[1] = result[1]
                ecx_5[2] = result[2]
                ecx_5[3] = result[3]
                result = &result[4]
                ecx_5 = &ecx_5[4]
            while (result != result_1)
        
        arg1[4] = ecx_5

return result
