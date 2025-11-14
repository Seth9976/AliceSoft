// 函数: sub_435cc0
// 地址: 0x435cc0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t* ebx = arg3
int32_t* ebp = arg4

for (int32_t* i = *ebx; i != ebx[1]; i = &i[1])
    void** ecx_1 = *(arg1 + 0xc)
    void** eax_1 = ecx_1[1]
    int32_t* edx_1 = *i
    
    while (*(eax_1 + 0x15) == 0)
        if (eax_1[3] s>= edx_1)
            ecx_1 = eax_1
            eax_1 = *eax_1
        else
            eax_1 = eax_1[2]
    
    int32_t* eax_2 = *(arg1 + 0xc)
    arg4 = ecx_1
    int32_t** eax_3
    
    if (ecx_1 == eax_2 || edx_1 s< ecx_1[3])
        arg3 = eax_2
        eax_3 = &arg3
    else
        eax_3 = &arg4
    
    int32_t* eax_4 = *eax_3
    int32_t* eax_5
    
    if (eax_4 != *(arg1 + 0xc))
        eax_5 = eax_4[4]
    else
        eax_5 = nullptr
    
    int32_t* var_14_1 = ebp
    
    if (sub_435d50(arg2, edx_1, eax_5) == 0)
        return 0

return 1
